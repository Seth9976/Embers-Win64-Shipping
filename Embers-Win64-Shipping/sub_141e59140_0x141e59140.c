// 函数: sub_141e59140
// 地址: 0x141e59140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0x10)
int16_t* const rdi = &data_142d40450
int32_t rbx = 0
int32_t arg_18 = 0
void* rcx = rax[0x18]
int64_t var_38
int16_t* const rbp

if (rcx == 0)
    rbp = u"None"
else
    int64_t* rax_1 = sub_141dcb120(rcx, &var_38)
    
    if (rax_1[1].d == 0)
        rax = *(arg1 + 0x10)
        rbp = &data_142d40450
        rbx = 1
    else
        rbp = *rax_1
        rbx = 1
        rax = *(arg1 + 0x10)

void* rax_2 = *rax
int16_t* var_58
int64_t var_48
int32_t rbx_1

if (arg3 == 0)
    int64_t arg_8 = *(rax_2 + 0x18)
    rbx_1 = rbx | 4
    sub_140b63b70(&arg_8, &var_58)
    int32_t var_50
    
    if (var_50 != 0)
        rdi = var_58
else
    rbx_1 = rbx | 2
    int64_t* rax_3 = sub_140d21e10(rax_2, &var_48, 0)
    
    if (rax_3[1].d != 0)
        rdi = *rax_3

void* rax_5 = *(arg1 + 0x10)
int16_t* const var_68 = rbp
float zmm0[0x2] = *(rax_5 + 0xd0)
zmm0[0] = zmm0[0] f* *(rax_5 + 0xc8)
zmm0[0] = zmm0[0] f* *(rax_5 + 0x10)
_mm_cvtps_pd(zmm0)
sub_140a2e390(arg2, u"Wave: %s, Volume: %6.2f, Owner: %s", rdi)

if ((rbx_1.b & 4) != 0)
    int16_t* rcx_4 = var_58
    rbx_1 &= 0xfffffffb
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

if ((rbx_1.b & 2) != 0)
    int64_t rcx_5 = var_48
    rbx_1 &= 0xfffffffd
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

if ((rbx_1.b & 1) != 0)
    int64_t rcx_6 = var_38
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

return arg2
