
#ifndef SCM_GL_UTIL_HEADLESS_CONTEXT_H_INCLUDED
#define SCM_GL_UTIL_HEADLESS_CONTEXT_H_INCLUDED

#include <scm/gl_util/render_context/context_base.h>

#include <scm/core/platform/platform.h>
#include <scm/core/utilities/platform_warning_disable.h>

namespace scm {
namespace gl {

class window_context;

class __scm_export(gl_util) headless_context : public context_base
{
public:
    headless_context();
    virtual ~headless_context();

    virtual bool            setup(const context_format& desc,
                                  const window_context& partent_ctx) = 0;

};

} // namespace gl
} // namespace scm

#include <scm/core/utilities/platform_warning_enable.h>


#endif // SCM_GL_UTIL_HEADLESS_CONTEXT_H_INCLUDED