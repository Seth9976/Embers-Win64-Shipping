// 函数: sub_141e2b920
// 地址: 0x141e2b920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || *(arg2 + 0x160) s<= 0)
    return 

*(arg1 + 8) = arg2
*(arg1 + 0x10) = arg4
void* rdi_1 = *(arg2 + 0x158) + sx.q(arg4) * 0x18
int32_t rax_3
float zmm6_1
int128_t zmm7_1
rax_3, zmm6_1, zmm7_1 = sub_141deca00(rdi_1 + 8, arg3.d)
*(arg1 + 0x14) = rax_3

if (rax_3 == 0xffffffff)
    *(arg1 + 0x24) = zmm6_1
    *(arg1 + 0x28) = 0
    *(arg1 + 0x1c) = 0xbf800000
    *(arg1 + 0x20) = 0xbf800000
    *(arg1 + 0x18) = 0
    return 

int64_t* rcx_3 = (sx.q(rax_3) << 5) + *(rdi_1 + 8)
int128_t var_28_1 = zmm7_1
*(arg1 + 0x28) = *rcx_3
zmm7_1 = rcx_3[1].d
*(arg1 + 0x1c) = zmm7_1.d
int32_t zmm0_1 = sub_141debb60(rcx_3)
char rax = *(arg1 + 0x19)
float zmm1_1 = zmm0_1
*(arg1 + 0x20) = zmm1_1

if (rax == 0)
    *(arg1 + 0x24) = zmm6_1
    return 

uint32_t rcx_4 = zx.d(rax)

if (rcx_4 == 1)
    *(arg1 + 0x24) = zmm6_1 f- zmm7_1.d
else if (rcx_4 == 2)
    if (zmm1_1 == 0f)
        zmm6_1 = (zx.o(0)).d
    else
        zmm6_1 = (zmm6_1 f- zmm7_1.d) / zmm1_1
    
    *(arg1 + 0x24) = zmm6_1
