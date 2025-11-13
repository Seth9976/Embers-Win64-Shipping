// 函数: sub_1420f35b0
// 地址: 0x1420f35b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f030e0(arg1, arg2)
*arg1 = &data_1432c5b20
arg1[0x2f].d = *(arg2 + 0x224)
*(arg1 + 0x17c) = arg2[0x45].d
float zmm1 = arg2[0x65].d
arg1[0x2e].d = zmm1
*(arg1 + 0x174) = 1f / __maxss_xmmss_memss(zmm1, 0x3727c5ac)
return arg1
