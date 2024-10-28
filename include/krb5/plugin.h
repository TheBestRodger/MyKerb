/* -*- mode: c; c-basic-offset: 4; indent-tabs-mode: nil -*- */

/* Generic declarations for dynamic modules implementing krb5 plugin
 * modules. */

#ifndef KRB5_PLUGIN_H
#define KRB5_PLUGIN_H

/* krb5_plugin_vtable is an abstract type.  Module initvt functions will cast
 * it to the appropriate interface-specific vtable type. */
typedef struct krb5_plugin_vtable_st *krb5_plugin_vtable;

/*
 * krb5_plugin_initvt_fn is the type of all module initvt functions.  Based on
 * the maj_ver argument, the initvt function should cast vtable to the
 * appropriate type and then fill it in.  If a vtable has been expanded,
 * min_ver indicates which version of the vtable is being filled in.
 */
typedef krb5_error_code
(*krb5_plugin_initvt_fn)(krb5_context context, int maj_ver, int min_ver,
                         krb5_plugin_vtable vtable);

#endif /* KRB5_PLUGIN_H */
