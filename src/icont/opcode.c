#include "link.h"
#include "tproto.h"
#include "opcode.h"

/*
 * Opcode table.
 */

struct opentry optable[] = {
   "asgn",	Op_Asgn,
   "bang",	Op_Bang,


   "bscan",	Op_Bscan,


   "cat",	Op_Cat,
   "ccase",	Op_Ccase,
   "chfail",	Op_Chfail,
   "coact",	Op_Coact,
   "cofail",	Op_Cofail,
   "colm",	Op_Colm,		/* always recognized, possibly ignored*/
   "compl",	Op_Compl,
   "con",	Op_Con,
   "coret",	Op_Coret,
   "create",	Op_Create,
   "cset",	Op_Cset,
   "declend",	Op_Declend,
   "diff",	Op_Diff,
   "div",	Op_Div,
   "dup",	Op_Dup,
   "efail",	Op_Efail,
   "end",	Op_End,
   "eqv",	Op_Eqv,
   "eret",	Op_Eret,
   "error",	Op_Error,
   "escan",	Op_Escan,
   "esusp",	Op_Esusp,
   "field",	Op_Field,
   "filen",	Op_Filen,


   "global",	Op_Global,
   "goto",	Op_Goto,
   "impl",	Op_Impl,
   "init",	Op_Init,
   "int",	Op_Int,
   "inter",	Op_Inter,
   "invocable",	Op_Invocable,
   "invoke",	Op_Invoke,
   "keywd",	Op_Keywd,
   "lab",	Op_Lab,
   "lconcat",	Op_Lconcat,
   "lexeq",	Op_Lexeq,
   "lexge",	Op_Lexge,
   "lexgt",	Op_Lexgt,
   "lexle",	Op_Lexle,
   "lexlt",	Op_Lexlt,
   "lexne",	Op_Lexne,
   "limit",	Op_Limit,
   "line",	Op_Line,
   "link",	Op_Link,
   "llist",	Op_Llist,
   "local",	Op_Local,
   "lsusp",	Op_Lsusp,
   "mark",	Op_Mark,
   "mark0",	Op_Mark0,
   "minus",	Op_Minus,
   "mod",	Op_Mod,
   "mult",	Op_Mult,
   "neg",	Op_Neg,
   "neqv",	Op_Neqv,
   "nonnull",	Op_Nonnull,

#ifdef LineCodes
   "noop",	Op_Noop,
#endif					/* LineCodes */

   "null",	Op_Null,
   "number",	Op_Number,
   "numeq",	Op_Numeq,
   "numge",	Op_Numge,
   "numgt",	Op_Numgt,
   "numle",	Op_Numle,
   "numlt",	Op_Numlt,
   "numne",	Op_Numne,
   "pfail",	Op_Pfail,
   "plus",	Op_Plus,
   "pnull",	Op_Pnull,
   "pop",	Op_Pop,
   "power",	Op_Power,
   "pret",	Op_Pret,
   "proc",	Op_Proc,
   "psusp",	Op_Psusp,
   "push1",	Op_Push1,
   "pushn1",	Op_Pushn1,
   "random",	Op_Random,
   "rasgn",	Op_Rasgn,
   "real",	Op_Real,
   "record",	Op_Record,
   "refresh",	Op_Refresh,
   "rswap",	Op_Rswap,
   "sdup",	Op_Sdup,
   "sect",	Op_Sect,
   "size",	Op_Size,
   "str",	Op_Str,
   "subsc",	Op_Subsc,
   "swap",	Op_Swap,
   "synt",      Op_Synt,
   "tabmat",	Op_Tabmat,
   "tally",	Op_Tally,
   "toby",	Op_Toby,
   "trace",	Op_Trace,
   "uid",	Op_Uid,
   "unions",	Op_Unions,
   "unmark",	Op_Unmark,
   "value",	Op_Value,
   "var",	Op_Var,
   "version",	Op_Version,
   };

int NOPCODES = sizeof(optable) / sizeof(struct opentry);
