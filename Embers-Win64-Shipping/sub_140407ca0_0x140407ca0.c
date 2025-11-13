// 函数: sub_140407ca0
// 地址: 0x140407ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r8 = *(arg1 + 0x20)
int32_t rax_1 = *(arg1 + 0x30) * arg10
int64_t r14 = sx.q(arg8)
int32_t r10 = 0
int32_t rbx = 0
int32_t r15 = 0
int32_t rax_3 = 0
int64_t rdi = arg2
int32_t arg_8 = 0
int32_t var_58 = 0

if ((sx.d(r8[r14]) - sx.d(r8[r14 - 1])) * arg10 s<= 8)
    return rax_3

int32_t r9 = arg9
int32_t rdx = rax_1
int32_t rcx_3 = 0
int32_t var_54_1 = 0
arg8 = 0

do
    int32_t i = 0
    
    if (r14.d s> 0)
        int64_t r11_1 = sx.q(rcx_3)
        int16_t* rbp_1 = r8
        int64_t var_50_1 = r11_1
        
        do
            int32_t rdx_1 = sx.d(*rbp_1)
            rbp_1 = &rbp_1[1]
            int32_t r9_1 = 0
            int32_t r10_1 = 0
            int32_t r8_1 = 0
            void* rbx_1 = rdi + ((sx.q(rdx_1 * arg10) + r11_1) << 2)
            int32_t rdi_3 = (sx.d(*rbp_1) - rdx_1) * arg10
            
            if (rdi_3 s<= 8)
                r10 = arg_8
                rbx = var_58
            else
                uint32_t r11_2 = 0
                uint64_t rax_6 = 0
                float zmm0
                uint128_t zmm1
                
                if (rdi_3 s>= 4)
                    void* rcx_6 = rbx_1 + 8
                    uint64_t rax_9 = zx.q(((rdi_3 - 4) u>> 2) + 1)
                    uint64_t j_2 = zx.q(rax_9.d)
                    r11_2 = (rax_9 << 2).d
                    rax_6 = rax_9 << 2
                    zmm1 = _mm_cvtepi32_ps(zx.o(rdi_3))
                    uint64_t j
                    
                    do
                        zmm0 = *(rcx_6 - 8)
                        zmm0 = zmm0 * zmm0 f* zmm1.d
                        
                        if (not(0.25f <= zmm0))
                            r9_1 += 1
                        
                        if (not(0.0625f <= zmm0))
                            r10_1 += 1
                        
                        if (not(0.015625f <= zmm0))
                            r8_1 += 1
                        
                        zmm0 = *(rcx_6 - 4)
                        zmm0 = zmm0 * zmm0 f* zmm1.d
                        
                        if (not(0.25f <= zmm0))
                            r9_1 += 1
                        
                        if (not(0.0625f <= zmm0))
                            r10_1 += 1
                        
                        if (not(0.015625f <= zmm0))
                            r8_1 += 1
                        
                        zmm0 = *rcx_6
                        zmm0 = zmm0 * zmm0 f* zmm1.d
                        
                        if (not(0.25f <= zmm0))
                            r9_1 += 1
                        
                        if (not(0.0625f <= zmm0))
                            r10_1 += 1
                        
                        if (not(0.015625f <= zmm0))
                            r8_1 += 1
                        
                        zmm0 = *(rcx_6 + 4)
                        zmm0 = zmm0 * zmm0 f* zmm1.d
                        
                        if (not(0.25f <= zmm0))
                            r9_1 += 1
                        
                        if (not(0.0625f <= zmm0))
                            r10_1 += 1
                        
                        if (not(0.015625f <= zmm0))
                            r8_1 += 1
                        
                        rcx_6 += 0x10
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                
                if (r11_2 s< rdi_3)
                    void* rcx_7 = rbx_1 + (rax_6 << 2)
                    uint64_t j_3 = zx.q(rdi_3 - r11_2)
                    zmm1 = _mm_cvtepi32_ps(zx.o(rdi_3))
                    uint64_t j_1
                    
                    do
                        zmm0 = *rcx_7
                        zmm0 = zmm0 * zmm0 f* zmm1.d
                        
                        if (not(0.25f <= zmm0))
                            r9_1 += 1
                        
                        if (not(0.0625f <= zmm0))
                            r10_1 += 1
                        
                        if (not(0.015625f <= zmm0))
                            r8_1 += 1
                        
                        rcx_7 += 4
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                
                if (i s> *(arg1 + 8) - 4)
                    r15 += divs.dp.d(sx.q((r10_1 + r9_1) << 5), rdi_3)
                
                r11_1 = var_50_1
                int32_t rdx_5
                rdx_5.b = r8_1 * 2 s>= rdi_3
                int32_t rcx_8
                rcx_8.b = r10_1 * 2 s>= rdi_3
                int32_t rcx_9
                rcx_9.b = r9_1 * 2 s>= rdi_3
                r10 = arg_8 + ((rdx_5 + rcx_8 + rcx_9) << 8)
                rbx = var_58 + 1
                var_58 = rbx
                arg_8 = r10
            
            rdi = arg2
            i += 1
        while (i s< r14.d)
        
        rax_3 = arg8
        rcx_3 = var_54_1
        rdx = rax_1
        r8 = *(arg1 + 0x20)
        r9 = arg9
    
    rax_3 += 1
    rcx_3 += rdx
    arg8 = rax_3
    var_54_1 = rcx_3
while (rax_3 s< r9)

int32_t r8_2 = 2

if (arg7 != 0)
    if (r15 != 0)
        r15 = divs.dp.d(sx.q(r15), (r14.d - *(arg1 + 8) + 4) * r9)
    
    int32_t rdx_13 = (*arg5 + r15) s>> 1
    *arg5 = rdx_13
    int32_t rcx_10 = *arg6
    
    if (rcx_10 == 2)
        rdx_13 += 4
    else if (rcx_10 == 0)
        rdx_13 -= 4
    
    if (rdx_13 s<= 0x16)
        int32_t rcx_11
        rcx_11.b = rdx_13 s> 0x12
        *arg6 = rcx_11
    else
        *arg6 = 2

int32_t rax_28 = (divs.dp.d(sx.q(r10), rbx) + *arg3) s>> 1
*arg3 = rax_28
int32_t rcx_15 = ((rax_28 + 0x96) * 3 - (arg4 << 7)) s>> 2

if (rcx_15 s< 0x50)
    return 3

if (rcx_15 s>= 0x100)
    r8_2.b = rcx_15 s< 0x180

return r8_2
