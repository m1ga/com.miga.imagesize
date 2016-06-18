/* C++ code produced by gperf version 3.0.4 */
/* Command-line: gperf -L C++ -E -t /tmp/miga/ti.imagesize-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/tmp/miga/ti.imagesize-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.miga.imagesize.TiImagesizeModule.h"
#include "com.miga.imagesize.ExampleProxy.h"


#line 14 "/tmp/miga/ti.imagesize-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 6, duplicates = 0 */

class TiImagesizeBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
TiImagesizeBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
TiImagesizeBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 31,
      MAX_WORD_LENGTH = 36,
      MIN_HASH_VALUE = 31,
      MAX_HASH_VALUE = 36
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 17 "/tmp/miga/ti.imagesize-generated/KrollGeneratedBindings.gperf"
      {"com.miga.imagesize.ExampleProxy", ::com::miga::imagesize::tiimagesize::ExampleProxy::bindProxy, ::com::miga::imagesize::tiimagesize::ExampleProxy::dispose},
      {""}, {""}, {""}, {""},
#line 16 "/tmp/miga/ti.imagesize-generated/KrollGeneratedBindings.gperf"
      {"com.miga.imagesize.TiImagesizeModule", ::com::miga::imagesize::TiImagesizeModule::bindProxy, ::com::miga::imagesize::TiImagesizeModule::dispose}
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
#line 18 "/tmp/miga/ti.imagesize-generated/KrollGeneratedBindings.gperf"

