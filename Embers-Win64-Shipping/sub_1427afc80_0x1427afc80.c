// 函数: sub_1427afc80
// 地址: 0x1427afc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
int64_t* rcx

if (*(arg1 + 0x10) == 0)
    rcx = nullptr
else
    rcx = *(arg1 + 0x18)

uint64_t var_58
int32_t* rax_1 = (*(*rcx + 0x10))(rcx, &var_58)
float zmm7[0x4] = *(arg1 + 0x60)
float zmm0[0x4] = *(arg1 + 0xa4)
int128_t zmm8 = *(arg1 + 0x64)
zmm0[0] = zmm0[0] f- *rax_1
float zmm5 = *(arg1 + 0x68)
float zmm3 = *(arg1 + 0xa8) f- rax_1[1]
float zmm1 = *(arg1 + 0xac) f- rax_1[2]
zmm0[0] = zmm0[0] * zmm7[0]
zmm3 = zmm3 f* zmm8.d + zmm0[0] + zmm1 * zmm5
zmm7[0] = zmm7[0] * zmm3
zmm8.d = zmm8.d f* zmm3
zmm7[0] = zmm7[0] f+ *rax_1
zmm8.d = zmm8.d f+ rax_1[1]
zmm5 = zmm5 * zmm3 f+ rax_1[2]
*(arg1 + 0x54) = (_mm_unpacklo_ps(zmm7, zmm8.q)).q
*(arg1 + 0x5c) = zmm5
int64_t* rcx_1

if (*(arg1 + 0x10) == 0)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x18)

int64_t* rax_4 = (*(*rcx_1 + 0x18))(rcx_1, &var_58)
*(arg1 + 0x60) = *rax_4
*(arg1 + 0x68) = rax_4[1].d
int64_t* rcx_2

if (*(arg1 + 0x10) == 0)
    rcx_2 = nullptr
else
    rcx_2 = *(arg1 + 0x18)

void* rbp
void* rsi

if ((*(*rcx_2 + 0x20))(rcx_2) == 0)
    rsi = arg1 + 0x78
    rbp = arg1 + 0x6c
    sub_1427af460(arg1 + 0x60, rbp, rsi)
else
    int64_t* rcx_3
    
    if (*(arg1 + 0x10) == 0)
        rcx_3 = nullptr
    else
        rcx_3 = *(arg1 + 0x18)
    
    rsi = arg1 + 0x78
    rbp = arg1 + 0x6c
    (*(*rcx_3 + 0x28))(rcx_3, rbp, rsi)

void arg_8
sub_1427b2310(arg1 + 0x54, arg1 + 0x60, arg2, &arg2[3], &arg_8, &var_58)
uint64_t zmm1_1 = var_58
*(arg1 + 0x84) = zmm1_1
*(arg1 + 0x90) = zmm1_1
*(arg1 + 0x8c) = zmm5
*(arg1 + 0x98) = zmm5
zmm1_1.d = (*(arg1 + 0x94)).d f- *(arg1 + 0x58)
float zmm5_1 = *(arg1 + 0x90) f- *(arg1 + 0x54)
float zmm4 = *(arg1 + 0x98) f- *(arg1 + 0x5c)
float zmm3_1 = zmm1_1.d
zmm1_1.d = zmm1_1.d f* *(rbp + 4)
zmm1_1.d = zmm1_1.d f+ zmm5_1 f* *rbp
zmm1_1.d = zmm1_1.d f+ zmm4 f* *(rbp + 8)
float zmm0_2 = atan2f(zmm3_1 f* *(rsi + 4) + zmm5_1 f* *rsi + zmm4 f* *(rsi + 8), zmm1_1.d)
*(arg1 + 0x9c) = zmm0_2
*(arg1 + 0xa0) = zmm0_2
int64_t* rcx_6

if (*(arg1 + 0x20) == 0)
    rcx_6 = nullptr
else
    rcx_6 = *(arg1 + 0x28)

(*(*rcx_6 + 0x10))(rcx_6)
*(arg1 + 0xb0) = zmm0_2

if (*(arg1 + 0x20) != 0)
    rdi = *(arg1 + 0x28)

int64_t result = (*(*rdi + 0x18))(rdi)
*(arg1 + 0x50) = 1

if (*(arg1 + 0x40) == 0 || *(arg1 + 0x48) == 0)
    return result

int64_t* rcx_8 = *(arg1 + 0x48)
return (*(*rcx_8 + 0x10))(rcx_8)
