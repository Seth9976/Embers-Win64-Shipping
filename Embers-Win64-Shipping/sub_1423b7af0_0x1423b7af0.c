// 函数: sub_1423b7af0
// 地址: 0x1423b7af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 == 0)
    *(arg1 + 0xb4) &= 0xffffffc3
    __builtin_memset(arg1 + 0x5c, 0, 0x14)
    *(arg1 + 0xb1) = 0
    arg1[0xe].d = 0x7f7fffff
    return 

sub_1423b8300(arg1)
int64_t* rcx = *arg1
(*(*rcx + 0x2e8))(rcx)
uint128_t zmm1 = zx.o(data_143dbb3b8)
int64_t zmm2 = fconvert.d(arg5)

if (zmm1.q f<= zmm2)
    arg5 = (zx.o(0)).d
else
    zmm1.q = zmm1.q f- zmm2
    arg5 = _mm_cvtpd_ps(zmm1)

int64_t* rcx_1 = *arg1
arg1[0xe].d = arg5
char rax_2 = (*(*rcx_1 + 0x2f0))(rcx_1, zmm1)
void* r8 = *arg1
int32_t rcx_2 = 0
*(arg1 + 0xb4) ^= (zx.d(rax_2) << 3 ^ *(arg1 + 0xb4)) & 8
int32_t rax_7 = *(arg1 + 0xb4)
int32_t rdx_5 = ((zx.d(*(r8 + 0x3d)) u>> 2 ^ rax_7) & 0x10) ^ rax_7
*(arg1 + 0xb4) = rdx_5
int32_t r9

if ((rdx_5.b & 8) == 0 || *(r8 + 0x3d) s>= 0)
    r9 = 0
else
    r9 = *(r8 + 0x30)

if (*(arg4 + 0x27) == 0)
    int32_t rax_8 = *(r8 + 0x38)
    
    if (rax_8 - r9 s>= 0)
        rcx_2 = rax_8 - r9
    
    if ((arg1[0x16].b != 0 || *(arg1 + 0xc) != 0x1d) && (rdx_5.b & 2) == 0
            && (rdx_5.b & 0x90) != 0x90 && *(arg4 + 0x28) == 0)
        rcx_2 += *(arg4 + 0x1c)
    
    rcx_2 += arg1[0x14].d

int32_t r9_1 = data_1439c7a00
int32_t rdx_7 = *(arg1 + 0x14)
int32_t r8_1 = arg1[2].d
int32_t rax_11 = rdx_7 - rcx_2

if (rax_11 s<= r9_1)
    r9_1 = rax_11

int32_t rcx_3

if (r9_1 s>= r8_1)
    rcx_3 = rdx_7
    
    if (r9_1 s< rdx_7)
        rcx_3 = r9_1
else
    rcx_3 = r8_1

int32_t rax_12 = *(arg1 + 0x6c)

if (rax_12 s< rdx_7 && (*(arg1 + 0xb1) != 2 || *(arg1 + 0x5c) s< rax_12))
    if (rcx_3 s<= rax_12)
        rax_12 = rcx_3
    
    rcx_3 = rax_12

arg1[0xd].d = rcx_3
int32_t r9_2 = *(arg2 + (sx.q(*(arg1 + 0xc)) << 2))

if (r9_2 s> 0)
    int32_t rdx_8 = rdx_7 - r9_2
    
    if (rdx_8 s>= r8_1)
        if (rdx_8 s< rcx_3)
            rcx_3 = rdx_8
        
        r8_1 = rcx_3

*(arg1 + 0x64) = r8_1
