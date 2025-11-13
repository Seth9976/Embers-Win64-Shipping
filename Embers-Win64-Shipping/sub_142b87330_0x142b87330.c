// 函数: sub_142b87330
// 地址: 0x142b87330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::CompactHandler::VTable** 
    arg_8 = arg1
int64_t var_28 = -2
*arg1 = &
    icu_64::number::impl::CompactHandler::`vftable'{for `icu_64::number::impl::MicroPropsGenerator'}
arg1[1] = arg6
arg1[2] = arg8
arg1[3] = &arg1[5]
arg1[4].d = 0xc
*(arg1 + 0x24) = 0
arg1[0x1d].d = 0
arg1[0x1e] =
    &icu_64::number::impl::CompactData::`vftable'{for `icu_64::number::impl::MultiplierProducer'}
memset(&arg1[0x1f], 0, 0x310)
arg1[0x81].w = 0x100
sub_142b3d740(&arg1[0x82])
sub_142b87840(&arg1[0x1e], arg3, arg4, arg2, arg5, arg9)

if (arg7 == 0)
    arg1[0xb9].b = 0
else
    sub_142b87a70(arg1, arg7, arg9)
    arg1[0xb9].b = 1

return arg1
