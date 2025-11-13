// 函数: sub_1424021d0
// 地址: 0x1424021d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x470))
int32_t var_2c = arg3.d
int32_t var_24 = arg5.d
int32_t var_1c = arg7.d
int32_t zmm2
int32_t var_34 = zmm2
int32_t zmm3
int32_t var_30 = zmm3
int32_t var_20 = arg6.d
int32_t var_14 = arg9
int32_t rax_2 = (rbx + 1).d
*(arg1 + 0x470) = rax_2

if (rax_2 s> *(arg1 + 0x474))
    sub_1405c4ec0(arg1 + 0x468)

int64_t rcx_1 = *(arg1 + 0x468)
int64_t rdx_2 = rbx * 5
*(rcx_1 + (rdx_2 << 3)) = arg2.d.o
*(rcx_1 + (rdx_2 << 3) + 0x10) = arg4.d.o
*(rcx_1 + (rdx_2 << 3) + 0x20) = arg8.q
return zx.q(rbx.d)
