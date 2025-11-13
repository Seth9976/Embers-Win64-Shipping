// 函数: __report_gsfailure
// 地址: 0x142c93b24
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t stack_cookie_1 = stack_cookie

if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
    trap(0xd)

capture_previous_context(&data_14401b250)
data_14401b348 = __return_addr
data_14401b2e8 = &stack_cookie_1
data_14401b1c0 = data_14401b348
data_14401b2d0 = stack_cookie_1
data_14401b1b0 = 0xc0000409
data_14401b1b4 = 1
data_14401b1c8 = 1
data_14401b1d0 = 2
uint64_t __security_cookie_1 = __security_cookie
int64_t var_10 = data_143ccb960
__raise_securityfailure(&data_1436bbb80)
noreturn
