/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/cj/r1r8l2_50yx4rv6q9xsfs2gw0000gn/T/brownemt/localytics-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/cj/r1r8l2_50yx4rv6q9xsfs2gw0000gn/T/brownemt/localytics-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "pw.localytics.LocalyticsModule.h"
#include "pw.localytics.ExampleProxy.h"


#line 14 "/private/var/folders/cj/r1r8l2_50yx4rv6q9xsfs2gw0000gn/T/brownemt/localytics-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 5, duplicates = 0 */

class LocalyticsBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
LocalyticsBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
LocalyticsBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 26,
      MAX_WORD_LENGTH = 30,
      MIN_HASH_VALUE = 26,
      MAX_HASH_VALUE = 30
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 17 "/private/var/folders/cj/r1r8l2_50yx4rv6q9xsfs2gw0000gn/T/brownemt/localytics-generated/KrollGeneratedBindings.gperf"
      {"pw.localytics.ExampleProxy", ::pw::localytics::localytics::ExampleProxy::bindProxy, ::pw::localytics::localytics::ExampleProxy::dispose},
      {""}, {""}, {""},
#line 16 "/private/var/folders/cj/r1r8l2_50yx4rv6q9xsfs2gw0000gn/T/brownemt/localytics-generated/KrollGeneratedBindings.gperf"
      {"pw.localytics.LocalyticsModule", ::pw::localytics::LocalyticsModule::bindProxy, ::pw::localytics::LocalyticsModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/cj/r1r8l2_50yx4rv6q9xsfs2gw0000gn/T/brownemt/localytics-generated/KrollGeneratedBindings.gperf"

