// 函数: __report_securityfailure
// 地址: 0x142c93c0c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = arg1

if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
    trap(0xd)

capture_current_context(&data_14401b250)
data_14401b348 = __return_addr
data_14401b2e8 = &arg_8
data_14401b1c0 = data_14401b348
data_14401b1b0 = 0xc0000409
data_14401b1b4 = 1
data_14401b1c8 = 1
data_14401b1d0 = zx.q(arg_8)
__raise_securityfailure(&data_1436bbb80)
noreturn
