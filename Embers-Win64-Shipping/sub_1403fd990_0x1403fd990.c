// 函数: sub_1403fd990
// 地址: 0x1403fd990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_38 = zmm6
int128_t zmm7
int128_t var_48 = zmm7
int128_t zmm9
int128_t var_68 = zmm9
int128_t zmm10
int128_t var_78 = zmm10
int128_t zmm11
int128_t var_88 = zmm11
int128_t zmm12
int128_t var_98 = zmm12
uint128_t zmm13
uint128_t var_a8 = zmm13
uint128_t zmm14
uint128_t var_b8 = zmm14
uint128_t zmm15
uint128_t var_c8 = zmm15
int32_t var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t* rsi = arg4
int64_t r9 = sx.q(arg2)
int64_t r8 = r9 << 2
int128_t* r12 = arg1
int32_t rcx = 0
int64_t rax_2 = r8 + 0xf
int32_t var_134 = 0
int64_t var_f0 = r9

if (rax_2 u<= r8)
    rax_2 = 0xffffffffffffff0

int64_t rax_3 = rax_2 & 0xfffffffffffffff0
__chkstk(rax_3)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg2)
void var_158
void* rbx = &var_158 - rax_3 + 0x20
int32_t r14 = 0
uint128_t zmm8 = zx.o(0)
void* var_e8 = rbx
var_138 = 0
int32_t rax_7 = (temp3 - temp2) s>> 1
int64_t r13 = sx.q(rax_7)
int64_t var_110 = r13
uint128_t zmm1
uint128_t zmm2

if (arg3 s> 0)
    int32_t rsi_1 = rax_7 - 1
    int64_t r11_1 = r13 - 1
    void* rdi_2 = rbx - r12
    int64_t r10_3 = neg.q(r9) << 2
    void* rdx_1 = rdi_2 + 0xc
    zmm13 = _mm_cvtepi32_ps(zx.o(rax_7))
    zmm14 = _mm_cvtepi32_pd(zx.q(rax_7))
    int32_t var_124_1 = rsi_1
    int64_t rax_12 = neg.q(rbx)
    void* var_120_1 = rdi_2
    void* var_118_1 = rdx_1
    
    do
        uint128_t zmm4 = zx.o(0)
        zmm6 = zx.o(0)
        int64_t r8_1 = 0
        uint128_t zmm0
        uint128_t zmm3
        
        if (r9 s>= 4)
            int128_t* rax_13 = r12
            int64_t i_5 = ((r9 - 4) u>> 2) + 1
            r8_1 = i_5 << 2
            int64_t i
            
            do
                uint128_t zmm5 = *rax_13
                rax_13 = &rax_13[1]
                zmm2.d = zmm5.d f+ zmm4.d
                zmm0.d = zmm5.d f* 2f
                *(rax_13 + rdi_2 - 0x10) = zmm2.d
                zmm3.d = zmm2.d f+ zmm6.d
                zmm6 = *(rax_13 - 0xc)
                zmm1.d = zmm2.d f* 0.5f
                zmm3.d = zmm3.d f- zmm0.d
                zmm5.d = zmm5.d f- zmm1.d
                zmm0.d = zmm6.d f* 2f
                zmm4.d = zmm6.d f+ zmm3.d
                *(rax_13 + rdi_2 - 0xc) = zmm4.d
                zmm2.d = zmm4.d f+ zmm5.d
                zmm1.d = zmm4.d f* 0.5f
                zmm5 = *(rax_13 - 8)
                zmm2.d = zmm2.d f- zmm0.d
                zmm6.d = zmm6.d f- zmm1.d
                zmm0.d = zmm5.d f* 2f
                zmm3.d = zmm5.d f+ zmm2.d
                *(rax_13 + rdx_1 - 0x14) = zmm3.d
                zmm4.d = zmm3.d f+ zmm6.d
                zmm6 = *(rax_13 - 4)
                zmm1.d = zmm3.d f* 0.5f
                zmm4.d = zmm4.d f- zmm0.d
                zmm5.d = zmm5.d f- zmm1.d
                zmm0.d = zmm6.d f* 2f
                zmm2.d = zmm6.d f+ zmm4.d
                *(rax_13 + rdx_1 - 0x10) = zmm2.d
                zmm4.d = zmm2.d f+ zmm5.d
                zmm1.d = zmm2.d f* 0.5f
                zmm4.d = zmm4.d f- zmm0.d
                zmm6.d = zmm6.d f- zmm1.d
                i = i_5
                i_5 -= 1
            while (i != 1)
        
        if (r8_1 s< r9)
            void* rcx_4 = rbx + (r8_1 << 2)
            int64_t i_6 = r9 - r8_1
            int64_t i_1
            
            do
                void* rax_14 = rcx_4 + rax_12
                rcx_4 += 4
                zmm2 = *(rax_14 + r12)
                zmm3.d = zmm2.d f+ zmm4.d
                zmm0.d = zmm2.d f* 2f
                *(rcx_4 - 4) = zmm3.d
                zmm4.d = zmm3.d f+ zmm6.d
                zmm1.d = zmm3.d f* 0.5f
                zmm4.d = zmm4.d f- zmm0.d
                zmm6.d = zmm2.d f- zmm1.d
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
            r14 = var_138
        
        __builtin_memset(rbx, 0, 0x30)
        zmm3 = zx.o(0)
        zmm2 = zx.o(0)
        int64_t i_2 = 0
        
        if (r13 s>= 4)
            void* r8_2 = rbx + 8
            void* rdx_3 = rbx + 0xc
            
            do
                zmm0 = *(rdx_3 - 8)
                zmm1 = *(rdx_3 - 0xc)
                i_2 += 4
                r8_2 += 0x10
                rdx_3 += 0x20
                zmm1.d = zmm1.d f* zmm1.d
                zmm0.d = zmm0.d f* zmm0.d
                zmm1.d = zmm1.d f+ zmm0.d
                zmm3.d = zmm3.d f+ zmm1.d
                zmm1.d = zmm1.d f- zmm2.d
                zmm1.d = zmm1.d f* 0.0625f
                zmm1.d = zmm1.d f+ zmm2.d
                *(r8_2 - 0x18) = zmm1.d
                zmm2 = *(rdx_3 - 0x20)
                zmm0 = *(rdx_3 - 0x24)
                zmm2.d = zmm2.d f* zmm2.d
                zmm0.d = zmm0.d f* zmm0.d
                zmm2.d = zmm2.d f+ zmm0.d
                zmm3.d = zmm3.d f+ zmm2.d
                zmm2.d = zmm2.d f- zmm1.d
                zmm2.d = zmm2.d f* 0.0625f
                zmm2.d = zmm2.d f+ zmm1.d
                *(r8_2 - 0x14) = zmm2.d
                zmm0 = *(rdx_3 - 0x18)
                zmm1 = *(rdx_3 - 0x1c)
                zmm1.d = zmm1.d f* zmm1.d
                zmm0.d = zmm0.d f* zmm0.d
                zmm1.d = zmm1.d f+ zmm0.d
                zmm3.d = zmm3.d f+ zmm1.d
                zmm1.d = zmm1.d f- zmm2.d
                zmm1.d = zmm1.d f* 0.0625f
                zmm1.d = zmm1.d f+ zmm2.d
                *(r8_2 - 0x10) = zmm1.d
                zmm0 = *(rdx_3 - 0x10)
                zmm2 = *(rdx_3 - 0x14)
                zmm2.d = zmm2.d f* zmm2.d
                zmm0.d = zmm0.d f* zmm0.d
                zmm2.d = zmm2.d f+ zmm0.d
                zmm3.d = zmm3.d f+ zmm2.d
                zmm2.d = zmm2.d f- zmm1.d
                zmm2.d = zmm2.d f* 0.0625f
                zmm2.d = zmm2.d f+ zmm1.d
                *(r8_2 - 0xc) = zmm2.d
            while (i_2 s< r13 - 3)
        
        while (i_2 s< r13)
            zmm1 = *(rbx + (i_2 << 3) + 4)
            zmm0 = *(rbx + (i_2 << 3))
            i_2 += 1
            zmm1.d = zmm1.d f* zmm1.d
            zmm0.d = zmm0.d f* zmm0.d
            zmm1.d = zmm1.d f+ zmm0.d
            zmm3.d = zmm3.d f+ zmm1.d
            zmm1.d = zmm1.d f- zmm2.d
            zmm1.d = zmm1.d f* 0.0625f
            zmm1.d = zmm1.d f+ zmm2.d
            zmm2 = zmm1
            *(rbx + (i_2 << 2) - 4) = zmm2.d
        
        zmm1 = zx.o(0)
        zmm2 = zx.o(0)
        int32_t rdx_4 = rsi_1
        int64_t r9_1 = r11_1
        
        if (rsi_1 s>= 0)
            if (rsi_1 + 1 s>= 4)
                uint64_t i_7 = zx.q(rsi_1 + 1) u>> 2
                void* rcx_6 = rbx + ((r11_1 - 2) << 2)
                rdx_4 = rsi_1 + (neg.d(i_7.d) << 2)
                r9_1 -= i_7 << 2
                uint64_t i_3
                
                do
                    zmm0.d = (*(rcx_6 + 8)).d f- zmm1.d
                    zmm0.d = zmm0.d f* 0.125f
                    zmm0.d = zmm0.d f+ zmm1.d
                    *(rcx_6 + 8) = zmm0.d
                    
                    if (not(zmm2.d f> zmm0.d))
                        zmm2 = zmm0
                    
                    zmm1.d = (*(rcx_6 + 4)).d f- zmm0.d
                    zmm1.d = zmm1.d f* 0.125f
                    zmm1.d = zmm1.d f+ zmm0.d
                    *(rcx_6 + 4) = zmm1.d
                    
                    if (not(zmm2.d f> zmm1.d))
                        zmm2 = zmm1
                    
                    zmm0.d = (*rcx_6).d f- zmm1.d
                    zmm0.d = zmm0.d f* 0.125f
                    zmm0.d = zmm0.d f+ zmm1.d
                    *rcx_6 = zmm0.d
                    
                    if (not(zmm2.d f> zmm0.d))
                        zmm2 = zmm0
                    
                    zmm1.d = (*(rcx_6 - 4)).d f- zmm0.d
                    zmm1.d = zmm1.d f* 0.125f
                    zmm1.d = zmm1.d f+ zmm0.d
                    *(rcx_6 - 4) = zmm1.d
                    
                    if (not(zmm2.d f> zmm1.d))
                        zmm2 = zmm1
                    
                    rcx_6 -= 0x10
                    i_3 = i_7
                    i_7 -= 1
                while (i_3 != 1)
            
            if (rdx_4 s>= 0)
                void* rax_20 = rbx + (r9_1 << 2)
                int32_t temp12_1
                
                do
                    zmm0.d = (*rax_20).d f- zmm1.d
                    zmm0.d = zmm0.d f* 0.125f
                    zmm0.d = zmm0.d f+ zmm1.d
                    zmm1 = zmm0
                    *rax_20 = zmm1.d
                    
                    if (not(zmm2.d f> zmm1.d))
                        zmm2 = zmm0
                    
                    rax_20 -= 4
                    temp12_1 = rdx_4
                    rdx_4 -= 1
                while (temp12_1 - 1 s>= 0)
        
        zmm2.d = zmm2.d f* zmm3.d
        zmm0.q = fconvert.d(zmm2.d)
        zmm0.q = zmm0.q f* 0x3fe0000000000000
        zmm0.q = zmm0.q f* zmm14.q
        int32_t rsi_2 = 0
        zmm1.d = fconvert.s(sqrt(zmm0.q).q)
        zmm1.d = zmm1.d f+ 1e-15f
        zmm6.d = zmm13.d f/ zmm1.d
        
        if (rax_7 - 5 s> 0xc)
            void* rdi_3 = rbx + 0x30
            zmm6.d = zmm6.d f* 64f
            uint64_t i_8 = zx.q(((rax_7 - 0x12) u>> 2) + 1)
            uint64_t i_4
            
            do
                zmm0.d = zmm6.d f* *rdi_3
                zmm0.q = fconvert.d(zmm0.d)
                int32_t rax_24 = int.d(floor(zmm0.q).q)
                bool cond:0_1 = rax_24 s> 0x7f
                
                if (rax_24 s> 0x7f)
                    goto label_1403fdf35
                
                if (rax_24 s>= 0)
                    cond:0_1 = rax_24 s> 0x7f
                label_1403fdf35:
                    
                    if (cond:0_1)
                        rax_24 = 0x7f
                else
                    rax_24 = 0
                
                rdi_3 += 0x10
                rsi_2 += zx.d(*(sx.q(rax_24) + &data_1436fde80))
                i_4 = i_8
                i_8 -= 1
            while (i_4 != 1)
            rbx = var_e8
            r13 = var_110
            rdi_2 = var_120_1
            r14 = var_138
        
        rcx = var_134
        int32_t temp0_3 = divs.dp.d(sx.q(rsi_2 << 8), (rax_7 - 0x11) * 6)
        
        if (temp0_3 s> rcx)
            var_134 = temp0_3
            *arg5 = r14
            rcx = temp0_3
        
        rdi_2 += r10_3
        r12 += r8
        rdx_1 = var_118_1 + r10_3
        r9 = var_f0
        rsi_1 = var_124_1
        r14 += 1
        var_118_1 = rdx_1
        var_120_1 = rdi_2
        var_138 = r14
        r11_1 = r13 - 1
    while (r14 s< arg3)
    
    rsi = arg4

int32_t r15
r15.b = rcx s> 0xc8
zmm1 = 0x43230000
zmm2.d = fconvert.s(sqrt(_mm_cvtepi32_pd(zx.q(rcx * 0x1b)).q).q)
zmm2.d = zmm2.d f- 42f

if (not(0f f> zmm2.d))
    zmm8 = zmm2

uint128_t zmm0_1

if (0f f> zmm2.d || zmm8.d f<= 163f)
    zmm0_1 = zmm8
else
    zmm0_1 = 0x43230000

int64_t zmm4_1 = 0x3fc1cac083126e98
zmm2 = zx.o(0)
zmm0_1.d = zmm0_1.d f* 0.00689999992f
zmm0_1.q = fconvert.d(zmm0_1.d)
zmm0_1.q = zmm0_1.q f- zmm4_1

if (not(0.0 f> zmm0_1.q))
    if (not(zmm8.d f> 163f))
        zmm1 = zmm8
    
    zmm1.d = zmm1.d f* 0.00689999992f
    zmm0_1.q = fconvert.d(zmm1.d)
    zmm0_1.q = zmm0_1.q f- zmm4_1
    zmm2 = zmm0_1

zmm1.d = fconvert.s(sqrt(zmm2.q))
*rsi = zmm1.d
__security_check_cookie(rax_1 ^ &var_138)
return zx.q(r15)
