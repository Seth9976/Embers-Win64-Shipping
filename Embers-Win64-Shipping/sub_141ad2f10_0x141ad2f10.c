// 函数: sub_141ad2f10
// 地址: 0x141ad2f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x48)

if (r8 == 0)
    return 

void* rcx = *arg2
int64_t rax = *(rcx + 0xb0)

if (rax == 0 || *(r8 + 0x38) != rax)
    return 

int64_t* arg_8
int64_t* rax_1 = sub_141df60d0(rcx, *(arg1 + 0x10), &arg_8)
int64_t r8_2 = *(arg1 + 0x48)
int32_t zmm1 = *(arg1 + 0x34)
int32_t var_18 = *(arg1 + 0x30)
int32_t var_10_1 = *(arg1 + 0x38)
int32_t var_14_1 = zmm1

if (*(arg1 + 0xd8) != r8_2)
    sub_141aca7c0(arg1, *(arg1 + 0x41))
    r8_2 = *(arg1 + 0x48)

sub_141e066f0(*arg2, rax_1, r8_2, &var_18, arg1 + 0xc8, arg1 + 0x50, *(arg1 + 0x40), 
    *(arg1 + 0x3c), arg2[2].d, arg1 + 0x1c, arg1 + 0x20)
int64_t* rcx_4 = arg_8

if (rcx_4 != 0)
    sub_141e6c450(rcx_4, zx.d(*(arg1 + 0x14)))

*(arg1 + 0xd8) = *(arg1 + 0x48)
