Shared Libraries
================

## jotoconsensus

The purpose of this library is to make the verification functionality that is critical to JOTO's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `jotoconsensus.h` located in  `src/script/jotoconsensus.h`.

#### Version

`jotoconsensus_version` returns an `unsigned int` with the the API version *(currently at an experimental `0`)*.

#### Script Validation

`jotoconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `jotoconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `jotoconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `jotoconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/joto/bips/blob/master/bip-0016.mediawiki)) subscripts
- `jotoconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/joto/bips/blob/master/bip-0066.mediawiki)) compliance

##### Errors
- `jotoconsensus_ERR_OK` - No errors with input parameters *(see the return value of `jotoconsensus_verify_script` for the verification status)*
- `jotoconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `jotoconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `jotoconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`

### Example Implementations
- [NJOTO](https://github.com/NicolasDorier/NJOTO/blob/master/NJOTO/Script.cs#L814) (.NET Bindings)
- [node-libjotoconsensus](https://github.com/bitpay/node-libjotoconsensus) (Node.js Bindings)
- [java-libjotoconsensus](https://github.com/dexX7/java-libjotoconsensus) (Java Bindings)
- [jotoconsensus-php](https://github.com/Bit-Wasp/jotoconsensus-php) (PHP Bindings)
