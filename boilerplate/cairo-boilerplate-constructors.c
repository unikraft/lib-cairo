/* WARNING: Autogenerated file - see ../boilerplate/make-cairo-boilerplate-constructors.py! */

#include "cairo-boilerplate-private.h"

void _cairo_boilerplate_register_all (void);

extern void _register_builtin (void);
extern void _register_svg (void);
extern void _register_script (void);
extern void _register_ps (void);
extern void _register_pdf (void);

void
_cairo_boilerplate_register_all (void)
{
    _register_builtin ();
    _register_svg ();
    _register_script ();
    _register_ps ();
    _register_pdf ();
}