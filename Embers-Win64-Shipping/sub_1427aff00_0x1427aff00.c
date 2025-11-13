// 函数: sub_1427aff00
// 地址: 0x1427aff00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
int32_t rax = *(arg1 + 0x98)
*(arg1 + 0x54) = *(arg1 + 0x90)
*(arg1 + 0x5c) = rax
int64_t* rcx

if (*(arg1 + 0x10) == 0)
    rcx = nullptr
else
    rcx = *(arg1 + 0x18)

int64_t var_38[0x2]
int64_t* rax_2 = (*(*rcx + 0x18))(rcx, &var_38)
*(arg1 + 0x60) = *rax_2
*(arg1 + 0x68) = rax_2[1].d
float arg_8
sub_1427af560(arg1 + 0x54, arg1 + 0x60, arg2, &arg2[3], arg1 + 0x6c, arg1 + 0x84, &var_38, &arg_8)
int64_t* rcx_2

if (*(arg1 + 0x10) == 0)
    rcx_2 = nullptr
else
    rcx_2 = *(arg1 + 0x18)

int32_t* rax_5 = (*(*rcx_2 + 0x10))(rcx_2, &var_38)
int64_t zmm0_1
zmm0_1.d = (*(arg1 + 0x6c)).d f- *rax_5

if (*(arg1 + 0x50) != 0)
    zmm0_1.d = zmm0_1.d f* *(arg1 + 0x60)

float zmm1

if (*(arg1 + 0x50) == 0 || (*(arg1 + 0x70) f- rax_5[1]) f* *(arg1 + 0x64) f+ zmm0_1.d
        + (*(arg1 + 0x74) f- rax_5[2]) f* *(arg1 + 0x68) >= 0f)
    zmm1 = 1f
else
    zmm1 = -1f

zmm0_1 = *(arg1 + 0x6c)
int32_t rax_6 = *(arg1 + 0x74)
*(arg1 + 0x8c) = zmm1
zmm1 = zmm1 f* *(arg1 + 0x84)
*(arg1 + 0x78) = zmm0_1
*(arg1 + 0x80) = rax_6
*(arg1 + 0x84) = zmm1
*(arg1 + 0x88) = zmm1
int64_t* rcx_3

if (*(arg1 + 0x20) == 0)
    rcx_3 = nullptr
else
    rcx_3 = *(arg1 + 0x28)

(*(*rcx_3 + 0x10))(rcx_3)
*(arg1 + 0x9c) = zmm0_1.d

if (*(arg1 + 0x20) != 0)
    rdi = *(arg1 + 0x28)

int64_t result = (*(*rdi + 0x18))(rdi)
*(arg1 + 0x51) = 1

if (*(arg1 + 0x40) == 0 || *(arg1 + 0x48) == 0)
    return result

int64_t* rcx_5 = *(arg1 + 0x48)
return (*(*rcx_5 + 0x10))(rcx_5)
