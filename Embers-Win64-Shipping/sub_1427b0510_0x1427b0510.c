// 函数: sub_1427b0510
// 地址: 0x1427b0510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
int32_t rax = *(arg1 + 0xbc)
*(arg1 + 0x54) = *(arg1 + 0xb4)
*(arg1 + 0x5c) = rax
int64_t* rcx

if (*(arg1 + 0x10) == 0)
    rcx = nullptr
else
    rcx = *(arg1 + 0x18)

uint64_t var_78
int64_t* rax_2 = (*(*rcx + 0x18))(rcx, &var_78)
*(arg1 + 0x60) = *rax_2
*(arg1 + 0x68) = rax_2[1].d
int64_t* rcx_1

if (*(arg1 + 0x10) == 0)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x18)

void* rbp
void* rsi

if ((*(*rcx_1 + 0x20))(rcx_1) == 0)
    rsi = arg1 + 0x78
    rbp = arg1 + 0x6c
    sub_1427af460(arg1 + 0x60, rbp, rsi)
else
    int64_t* rcx_2
    
    if (*(arg1 + 0x10) == 0)
        rcx_2 = nullptr
    else
        rcx_2 = *(arg1 + 0x18)
    
    rsi = arg1 + 0x78
    rbp = arg1 + 0x6c
    (*(*rcx_2 + 0x28))(rcx_2, rbp, rsi)

void arg_8
sub_1427b2310(arg1 + 0x54, arg1 + 0x60, arg2, &arg2[3], &arg_8, &var_78)
uint128_t zmm1 = zx.o(var_78)
*(arg1 + 0x90) = zmm1.q
*(arg1 + 0x84) = zmm1.q
int32_t var_70
*(arg1 + 0x98) = var_70
*(arg1 + 0x8c) = var_70
int64_t* rcx_5

if (*(arg1 + 0x10) == 0)
    rcx_5 = nullptr
else
    rcx_5 = *(arg1 + 0x18)

void var_68
int32_t* rax_9 = (*(*rcx_5 + 0x10))(rcx_5, &var_68)
zmm1.d = (*(arg1 + 0x84)).d f- *rax_9
uint128_t zmm0_1
zmm0_1.d = (*(arg1 + 0x88)).d f- rax_9[1]
uint128_t zmm2
zmm2.d = (*(arg1 + 0x8c)).d f- rax_9[2]
float zmm6 = -1f

if (*(arg1 + 0x50) != 0)
    zmm0_1.d = zmm0_1.d f* *(rbp + 4)
    zmm1.d = zmm1.d f* *rbp
    zmm2.d = zmm2.d f* *(rbp + 8)
    zmm0_1.d = zmm0_1.d f+ zmm1.d
    zmm0_1.d = zmm0_1.d f+ zmm2.d

if (*(arg1 + 0x50) == 0 || zmm0_1.d f>= 0f)
    zmm1 = 0x3f800000
else
    zmm1 = 0xbf800000

if (*(arg1 + 0x51) == 0)
    zmm0_1 = 0x3f800000
else
    zmm0_1 = 0xbf800000

zmm0_1.d = zmm0_1.d f* zmm1.d
*(arg1 + 0xac) = zmm0_1.d
int64_t* rcx_6

if (*(arg1 + 0x10) == 0)
    rcx_6 = nullptr
else
    rcx_6 = *(arg1 + 0x18)

int32_t* rax_11 = (*(*rcx_6 + 0x10))(rcx_6, &var_68)
zmm1.d = (*(arg1 + 0x84)).d f- *rax_11
zmm0_1.d = (*(arg1 + 0x88)).d f- rax_11[1]
zmm2.d = (*(arg1 + 0x8c)).d f- rax_11[2]

if (*(arg1 + 0x50) != 0)
    zmm0_1.d = zmm0_1.d f* *(rsi + 4)
    zmm1.d = zmm1.d f* *rsi
    zmm2.d = zmm2.d f* *(rsi + 8)
    zmm0_1.d = zmm0_1.d f+ zmm1.d
    zmm0_1.d = zmm0_1.d f+ zmm2.d

if (*(arg1 + 0x50) == 0 || zmm0_1.d f>= 0f)
    zmm0_1 = 0x3f800000
else
    zmm0_1 = 0xbf800000

if (*(arg1 + 0x52) == 0)
    zmm6 = 1f

uint128_t zmm3 = var_78.d
float zmm5 = var_78:4.d
zmm6 = zmm6 f* zmm0_1.d
*(arg1 + 0xb0) = zmm6
zmm5 = zmm5 f- *(arg1 + 0x58)
zmm3.d = zmm3.d f- *(arg1 + 0x54)
zmm2.d = var_70.d f- *(arg1 + 0x5c)
float zmm4 = zmm5
zmm5 = zmm5 f* *(rsi + 4)
zmm0_1.d = zmm3.d f* *rbp
zmm1.d = zmm2.d f* *(rbp + 8)
zmm3.d = zmm3.d f* *rsi
zmm4 = zmm4 f* *(rbp + 4) f+ zmm0_1.d
zmm0_1 = zx.o(*(arg1 + 0x9c))
zmm2.d = zmm2.d f* *(rsi + 8)
_mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
zmm5 = zmm5 f+ zmm3.d f+ zmm2.d
zmm4 = (zmm4 f+ zmm1.d) f* *(arg1 + 0xac)
zmm0_1.d = zmm5
_mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
zmm0_1.d = zmm4
_mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
zmm1.d = zmm6 * zmm5
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
*(arg1 + 0x9c) = _mm_unpacklo_pd(zmm1, zmm1.q)
int64_t* rcx_7

if (*(arg1 + 0x20) == 0)
    rcx_7 = nullptr
else
    rcx_7 = *(arg1 + 0x28)

*(arg1 + 0xc0) = *(*(*rcx_7 + 0x10))(rcx_7, &arg_8)

if (*(arg1 + 0x20) != 0)
    rdi = *(arg1 + 0x28)

int64_t result = (*(*rdi + 0x18))(rdi)
*(arg1 + 0x53) = 1

if (*(arg1 + 0x40) == 0 || *(arg1 + 0x48) == 0)
    return result

int64_t* rcx_9 = *(arg1 + 0x48)
return (*(*rcx_9 + 0x10))(rcx_9)
