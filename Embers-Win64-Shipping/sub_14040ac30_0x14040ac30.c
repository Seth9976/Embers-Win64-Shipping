// 函数: sub_14040ac30
// 地址: 0x14040ac30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int128_t __saved_zmm6_1
int128_t __saved_zmm6 = __saved_zmm6_1
int128_t __saved_zmm7_1
int128_t __saved_zmm7 = __saved_zmm7_1
int128_t __saved_zmm8_1
int128_t __saved_zmm8 = __saved_zmm8_1
int128_t __saved_zmm9_1
int128_t __saved_zmm9 = __saved_zmm9_1
int128_t zmm10
int128_t var_78 = zmm10
int128_t __saved_zmm11_1
int128_t __saved_zmm11 = __saved_zmm11_1
int128_t __saved_zmm12_1
int128_t __saved_zmm12 = __saved_zmm12_1
int32_t var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t r14 = sx.q(arg2)
int128_t* rdi = arg1
int64_t rcx = r14 << 2
int32_t i_3 = arg3
var_c8 = arg3
int64_t rax_2 = rcx + 0xf
int64_t r13 = r14

if (rax_2 u<= rcx)
    rax_2 = 0xffffffffffffff0

int64_t rax_3 = rax_2 & 0xfffffffffffffff0
__chkstk(rax_3)
void var_f8
void* rsp_1 = &var_f8 - rax_3
int64_t rax_5 = rcx + 0xf

if (rax_5 u<= rcx)
    rax_5 = 0xffffffffffffff0

int64_t rax_6 = rax_5 & 0xfffffffffffffff0
__chkstk(rax_6)
void* rsp_2 = rsp_1 - rax_6
int64_t rax_7 = rcx + 0xf
void* rsi = rsp_2 + 0x30

if (rax_7 u<= rcx)
    rax_7 = 0xffffffffffffff0

int64_t rax_8 = rax_7 & 0xfffffffffffffff0
__chkstk(rax_8)
int32_t r15 = arg5
void* rsp_3 = rsp_2 - rax_8
*(rsp_3 + 0x28) = arg4
*(rsp_3 + 0x20) = arg3
void* rbx = rsp_3 + 0x30
sub_14040b200(rdi, zx.q(r14.d), 1, zx.q(r15))
void* r10 = rsp_1 + 0x30
uint128_t zmm1 = zx.o(0)
void* rdx_2 = rbx - rdi
int64_t rcx_2 = 0
int128_t* rax_9 = rdi

do
    if ((*rax_9).d f<= 0f)
        *(rdx_2 + rax_9) = 0xbf800000
        *rax_9 = (*rax_9 ^ 0x80000000).d
    else
        *(rdx_2 + rax_9) = 0x3f800000
    
    *(rsi - rdi + rax_9) = 0
    rcx_2 += 1
    *(r10 - rdi + rax_9) = 0
    rax_9 += 4
while (rcx_2 s< r14)

uint128_t zmm6 = zx.o(0)
uint128_t zmm7 = zx.o(0)
uint128_t zmm0_1
uint128_t zmm2_1
uint128_t zmm8

if (i_3 s> r14.d s>> 1)
    int64_t rax_12 = 0
    
    do
        zmm1.d = zmm1.d f+ *(rdi + (rax_12 << 2))
        rax_12 += 1
    while (rax_12 s< r14)
    
    if (zmm1.d f<= 1e-15f || not(64f f> zmm1.d))
        *rdi = 0x3f800000
        int64_t rax_13 = 1
        
        do
            *(rdi + (rax_13 << 2)) = 0
            rax_13 += 1
        while (rax_13 s< r14)
        
        zmm1 = 0x3f800000
    
    int32_t* r13_2 = rdi - r10
    void* r15_1 = r10
    zmm8.d = 1f f/ zmm1.d
    int32_t i = 0
    void* rbx_2 = rsi - r10
    zmm8.d = zmm8.d f* _mm_cvtepi32_ps(zx.o(i_3 - 1)).d
    
    do
        zmm0_1.d = zmm8.d f* *(r13_2 + r15_1)
        zmm0_1.q = fconvert.d(zmm0_1.d)
        i += 1
        r15_1 += 4
        int32_t rax_15 = int.d(floor(zmm0_1.q).q)
        *(rbx_2 + r15_1 - 4) = rax_15
        zmm2_1 = _mm_cvtepi32_ps(zx.o(rax_15))
        *(r15_1 - 4) = zmm2_1.d
        zmm1.d = zmm2_1.d f* *(r13_2 + r15_1 - 4)
        zmm0_1.d = zmm2_1.d f* zmm2_1.d
        zmm2_1.d = zmm2_1.d f* 2f
        *(r15_1 - 4) = zmm2_1.d
        i_3 -= *(rbx_2 + r15_1 - 4)
        zmm0_1.d = zmm0_1.d f+ zmm6.d
        zmm1.d = zmm1.d f+ zmm7.d
        zmm6 = zmm0_1
        zmm7 = zmm1
    while (i s< r14.d)
    
    rdi = arg1
    r10 = rsp_1 + 0x30
    r15 = arg5
    r13 = r14

if (i_3 s> (r14 + 3).d)
    zmm1 = _mm_cvtepi32_ps(zx.o(i_3))
    zmm0_1.d = zmm1.d f* zmm1.d
    zmm1.d = zmm1.d f* *r10
    *rsi += i_3
    i_3 = 0
    zmm0_1.d = zmm0_1.d f+ zmm6.d
    zmm6.d = zmm0_1.d f+ zmm1.d

if (i_3 s> 0)
    uint64_t i_2 = zx.q(i_3)
    uint64_t i_1
    
    do
        zmm6.d = zmm6.d f+ 1f
        int64_t r8_3 = 0
        int32_t j = 0
        int32_t zmm4_1 = -0x279ca057
        int32_t zmm5_1 = (zx.o(0)).d
        int64_t rcx_4 = 0
        int32_t* rax_17 = r10
        zmm8 = zmm6
        
        do
            zmm2_1.d = zmm7.d f+ *(rdi - r10 + rax_17)
            uint128_t zmm3_1
            zmm3_1.d = zmm8.d f+ *rax_17
            zmm2_1.d = zmm2_1.d f* zmm2_1.d
            zmm0_1.d = zmm3_1.d f* zmm4_1
            zmm1.d = zmm2_1.d f* zmm5_1
            
            if (not(zmm1.d f<= zmm0_1.d))
                zmm5_1 = zmm3_1.d
                zmm4_1 = zmm2_1.d
                r8_3 = rcx_4
            
            j += 1
            rcx_4 += 1
            rax_17 = &rax_17[1]
        while (j s< r14.d)
        
        zmm0_1 = *(r10 + (r8_3 << 2))
        zmm7.d = zmm7.d f+ *(rdi + (r8_3 << 2))
        zmm6 = zmm0_1
        zmm0_1.d = zmm0_1.d f+ 2f
        zmm6.d = zmm6.d f+ zmm8.d
        *(r10 + (r8_3 << 2)) = zmm0_1.d
        *(rsi + (r8_3 << 2)) += 1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

int64_t rcx_5 = 0
int32_t* rdi_1 = rdi - rbx
int32_t* rdx_4 = rsi - rbx

do
    zmm0_1.d = (*rbx).d f* *(rdi_1 + rbx)
    *(rdi_1 + rbx) = zmm0_1.d
    
    if (not(0f f<= *rbx))
        *(rdx_4 + rbx) = neg.d(*(rdx_4 + rbx))
    
    rcx_5 += 1
    rbx += 4
while (rcx_5 s< r13)

sub_14040c040(rsi, r14.d, var_c8, arg6)
uint64_t result

if (r15 s> 1)
    int32_t result_1 = 0
    int32_t rcx_7 = 0
    int64_t r11_1 = sx.q(divs.dp.d(sx.q(r14.d), r15))
    
    do
        int64_t r8_5 = 0
        void* r9_6 = rsi
        
        do
            r9_6 += 4
            int32_t rdx_8
            rdx_8.b = *(r9_6 - 4) != 0
            r8_5 += 1
            result_1 |= rdx_8 << rcx_7.b
        while (r8_5 s< r11_1)
        
        rcx_7 += 1
        rsi += r11_1 << 2
    while (rcx_7 s< r15)
    
    result = zx.q(result_1)
else
    result = 1

__security_check_cookie(rax_1 ^ &var_c8)
return result
