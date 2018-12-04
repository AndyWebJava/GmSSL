/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2018 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/sm2.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_SM2,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_SM2,0,reason)

static ERR_STRING_DATA SM2_str_functs[] = {
    {ERR_FUNC(SM2_F_I2O_SM2CIPHERTEXTVALUE), "i2o_SM2CiphertextValue"},
    {ERR_FUNC(SM2_F_O2I_SM2CIPHERTEXTVALUE), "o2i_SM2CiphertextValue"},
    {ERR_FUNC(SM2_F_SM2CIPHERTEXTVALUE_SIZE), "SM2CiphertextValue_size"},
    {ERR_FUNC(SM2_F_SM2_DECRYPT), "SM2_decrypt"},
    {ERR_FUNC(SM2_F_SM2_DO_DECRYPT), "SM2_do_decrypt"},
    {ERR_FUNC(SM2_F_SM2_DO_ENCRYPT), "SM2_do_encrypt"},
    {ERR_FUNC(SM2_F_SM2_DO_SIGN), "SM2_do_sign"},
    {ERR_FUNC(SM2_F_SM2_DO_VERIFY), "SM2_do_verify"},
    {ERR_FUNC(SM2_F_SM2_ENCRYPT), "SM2_encrypt"},
    {ERR_FUNC(SM2_F_SM2_SIGN_SETUP), "SM2_sign_setup"},
    {0, NULL}
};

static ERR_STRING_DATA SM2_str_reasons[] = {
    {ERR_REASON(SM2_R_BAD_SIGNATURE), "bad signature"},
    {ERR_REASON(SM2_R_BUFFER_TOO_SMALL), "buffer too small"},
    {ERR_REASON(SM2_R_DECRYPT_FAILURE), "decrypt failure"},
    {ERR_REASON(SM2_R_ENCRYPT_FAILURE), "encrypt failure"},
    {ERR_REASON(SM2_R_INVALID_CIPHERTEXT), "invalid ciphertext"},
    {ERR_REASON(SM2_R_INVALID_DIGEST_ALGOR), "invalid digest algor"},
    {ERR_REASON(SM2_R_INVALID_EC_KEY), "invalid ec key"},
    {ERR_REASON(SM2_R_INVALID_INPUT_LENGTH), "invalid input length"},
    {ERR_REASON(SM2_R_INVALID_PLAINTEXT_LENGTH), "invalid plaintext length"},
    {ERR_REASON(SM2_R_INVALID_PUBLIC_KEY), "invalid public key"},
    {ERR_REASON(SM2_R_KDF_FAILURE), "kdf failure"},
    {ERR_REASON(SM2_R_MISSING_PARAMETERS), "missing parameters"},
    {ERR_REASON(SM2_R_NEED_NEW_SETUP_VALUES), "need new setup values"},
    {ERR_REASON(SM2_R_PLAINTEXT_TOO_LONG), "plaintext too long"},
    {ERR_REASON(SM2_R_RANDOM_NUMBER_GENERATION_FAILED),
     "random number generation failed"},
    {0, NULL}
};

#endif

int ERR_load_SM2_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(SM2_str_functs[0].error) == NULL) {
        ERR_load_strings(0, SM2_str_functs);
        ERR_load_strings(0, SM2_str_reasons);
    }
#endif
    return 1;
}
