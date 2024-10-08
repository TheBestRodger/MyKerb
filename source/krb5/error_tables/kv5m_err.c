/*
 * et-c-kv5m_err.c:
 * This file is automatically generated; please do not edit it.
 */
#if defined(_WIN32)
# include "win-mac.h"
#endif

#if !defined(_WIN32)
extern void initialize_kv5m_error_table (void);
#endif

#define N_(x) (x)

/* Lclint doesn't handle null annotations on arrays
   properly, so we need this typedef in each
   generated .c file.  */
/*@-redef@*/
typedef /*@null@*/ const char *ncptr;
/*@=redef@*/

static ncptr const text[] = {
	N_("Kerberos V5 magic number table"),
	N_("Bad magic number for krb5_principal structure"),
	N_("Bad magic number for krb5_data structure"),
	N_("Bad magic number for krb5_keyblock structure"),
	N_("Bad magic number for krb5_checksum structure"),
	N_("Bad magic number for krb5_encrypt_block structure"),
	N_("Bad magic number for krb5_enc_data structure"),
	N_("Bad magic number for krb5_cryptosystem_entry structure"),
	N_("Bad magic number for krb5_cs_table_entry structure"),
	N_("Bad magic number for krb5_checksum_entry structure"),
	N_("Bad magic number for krb5_authdata structure"),
	N_("Bad magic number for krb5_transited structure"),
	N_("Bad magic number for krb5_enc_tkt_part structure"),
	N_("Bad magic number for krb5_ticket structure"),
	N_("Bad magic number for krb5_authenticator structure"),
	N_("Bad magic number for krb5_tkt_authent structure"),
	N_("Bad magic number for krb5_creds structure"),
	N_("Bad magic number for krb5_last_req_entry structure"),
	N_("Bad magic number for krb5_pa_data structure"),
	N_("Bad magic number for krb5_kdc_req structure"),
	N_("Bad magic number for krb5_enc_kdc_rep_part structure"),
	N_("Bad magic number for krb5_kdc_rep structure"),
	N_("Bad magic number for krb5_error structure"),
	N_("Bad magic number for krb5_ap_req structure"),
	N_("Bad magic number for krb5_ap_rep structure"),
	N_("Bad magic number for krb5_ap_rep_enc_part structure"),
	N_("Bad magic number for krb5_response structure"),
	N_("Bad magic number for krb5_safe structure"),
	N_("Bad magic number for krb5_priv structure"),
	N_("Bad magic number for krb5_priv_enc_part structure"),
	N_("Bad magic number for krb5_cred structure"),
	N_("Bad magic number for krb5_cred_info structure"),
	N_("Bad magic number for krb5_cred_enc_part structure"),
	N_("Bad magic number for krb5_pwd_data structure"),
	N_("Bad magic number for krb5_address structure"),
	N_("Bad magic number for krb5_keytab_entry structure"),
	N_("Bad magic number for krb5_context structure"),
	N_("Bad magic number for krb5_os_context structure"),
	N_("Bad magic number for krb5_alt_method structure"),
	N_("Bad magic number for krb5_etype_info_entry structure"),
	N_("Bad magic number for krb5_db_context structure"),
	N_("Bad magic number for krb5_auth_context structure"),
	N_("Bad magic number for krb5_keytab structure"),
	N_("Bad magic number for krb5_rcache structure"),
	N_("Bad magic number for krb5_ccache structure"),
	N_("Bad magic number for krb5_preauth_ops"),
	N_("Bad magic number for krb5_sam_challenge"),
	N_("Bad magic number for krb5_sam_challenge_2"),
	N_("Bad magic number for krb5_sam_key"),
	N_("Bad magic number for krb5_enc_sam_response_enc"),
	N_("Bad magic number for krb5_enc_sam_response_enc"),
	N_("Bad magic number for krb5_sam_response"),
	N_("Bad magic number for krb5_sam_response 2"),
	N_("Bad magic number for krb5_predicted_sam_response"),
	N_("Bad magic number for passwd_phrase_element"),
	N_("Bad magic number for GSSAPI OID"),
	N_("Bad magic number for GSSAPI QUEUE"),
	N_("Bad magic number for fast armored request"),
	N_("Bad magic number for FAST request"),
	N_("Bad magic number for FAST response"),
	N_("Bad magic number for krb5_authdata_context"),
    "mit-krb5", /* Text domain */
    0
};

#include <com_err.h>

const struct error_table et_kv5m_error_table = { text, -1760647424L, 61 };

#if !defined(_WIN32)
void initialize_kv5m_error_table (void)
    /*@modifies internalState@*/
{
    (void) add_error_table (&et_kv5m_error_table);
}
#endif
