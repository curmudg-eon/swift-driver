#include "include/tooling_shim.h"

bool swift_getSingleFrontendInvocationFromDriverArgumentsV2(const char *, int, const char**, bool(int, const char**),
                                                      void(swiftdriver_tooling_diagnostic_kind, const char*), bool);
bool getSingleFrontendInvocationFromDriverArgumentsTest(const char *driverPath,
                                                        int argListCount,
                                                        const char** argList,
                                                        bool action(int argc, const char** argv),
                                                        void diagnosticCallback(swiftdriver_tooling_diagnostic_kind diagnosticKind,
                                                                                const char* message),
                                                        bool forceNoOutputs) {
  return swift_getSingleFrontendInvocationFromDriverArgumentsV2(driverPath, argListCount, argList,
                                                                action, diagnosticCallback, forceNoOutputs);
}