/*
 * et-h-ss_err.h:
 * This file is automatically generated; please do not edit it.
 */

#include <com_err.h>

#define SS_ET_SUBSYSTEM_ABORTED                  (748800L)
#define SS_ET_VERSION_MISMATCH                   (748801L)
#define SS_ET_NULL_INV                           (748802L)
#define SS_ET_NO_INFO_DIR                        (748803L)
#define SS_ET_COMMAND_NOT_FOUND                  (748804L)
#define SS_ET_LINE_ABORTED                       (748805L)
#define SS_ET_EOF                                (748806L)
#define SS_ET_PERMISSION_DENIED                  (748807L)
#define SS_ET_TABLE_NOT_FOUND                    (748808L)
#define SS_ET_NO_HELP_FILE                       (748809L)
#define SS_ET_ESCAPE_DISABLED                    (748810L)
#define SS_ET_UNIMPLEMENTED                      (748811L)
#define ERROR_TABLE_BASE_ss (748800L)

extern const struct error_table et_ss_error_table;

#if !defined(_WIN32)
/* for compatibility with older versions... */
extern void initialize_ss_error_table (void) /*@modifies internalState@*/;
#else
#define initialize_ss_error_table()
#endif

#if !defined(_WIN32)
#define init_ss_err_tbl initialize_ss_error_table
#define ss_err_base ERROR_TABLE_BASE_ss
#endif
