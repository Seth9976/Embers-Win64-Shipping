// 函数: sub_1407799d0
// 地址: 0x1407799d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = arg1 + 0x2c0
uint128_t zmm6
uint128_t var_58 = zmm6
EnterCriticalSection(lpCriticalSection)
int32_t rax = sub_14075d350(arg1)
int32_t i_2 = 0
int32_t* var_230 = nullptr
int32_t var_228 = 0
sub_1406f7bd0(arg1 + 0xc8, &var_230)
int32_t* r10 = var_230
void* r11 = &r10[sx.q(var_228)]

if (r10 == r11)
label_140779acd:
    
    if (r10 != 0)
        sub_140a74f90(r10)
    
    zmm6 = zx.o(0)
else
    while (true)
        void* const rcx_8
        
        if (*(arg1 + 0xd0) == *(arg1 + 0xfc))
        label_140779aa0:
            rcx_8 = nullptr
        else
            void* rdx_1 = *(arg1 + 0x108)
            void* r8_1 = arg1 + 0x100
            int64_t r9_1 = sx.q(*r10)
            
            if (rdx_1 != 0)
                r8_1 = rdx_1
            
            int32_t rax_2 = *(r8_1 + (((sx.q(*(arg1 + 0x110)) - 1) & r9_1) << 2))
            
            if (rax_2 == 0xffffffff)
            label_140779aa0_1:
                rcx_8 = nullptr
            else
                int64_t r8_2 = *(arg1 + 0xc8)
                
                while (true)
                    int64_t rdx_2 = sx.q(rax_2) * 3
                    rcx_8 = r8_2 + (rdx_2 << 3)
                    
                    if (*(r8_2 + (rdx_2 << 3)) == r9_1.d)
                        break
                    
                    rax_2 = *(rcx_8 + 0x10)
                    
                    if (rax_2 == 0xffffffff)
                        goto label_140779aa0_2
                
                if (rax_2 == 0xffffffff)
                label_140779aa0_2:
                    rcx_8 = nullptr
        
        void* rcx_9 = *(rcx_8 + 8)
        int32_t rax_3 = 0
        
        if (0 == *(rcx_9 + 0xc))
            *(rcx_9 + 0xc) = 0
        else
            rax_3 = *(rcx_9 + 0xc)
        
        zmm6 = _mm_cvtepi32_ps(zx.o(rax_3))
        
        if (zmm6.d f> 0f)
            int32_t* rcx_18 = var_230
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            break
        
        r10 = &r10[1]
        
        if (r10 == r11)
            r10 = var_230
            goto label_140779acd

uint64_t result = zx.q(*(arg1 + 0x1f0))

if (rax != result.d || not(zmm6.d f== *(arg1 + 0x1f4)))
    sub_140776e80(arg1, rax, zmm6)
    result = zx.q(*(arg1 + 0x1f0))

uint32_t temp0_2[0x4]

if (result.d != 0)
    temp0_2 = __andps_xmmxud_memxud(*(arg1 + 0x1f4), data_142d3f770)

if (result.d != 0 && not(temp0_2[0] f<= 9.99999994e-09f))
    int32_t rax_4 = sub_141c3c800(arg1 + 0x118)
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rax_4)
    int32_t temp1_1 = mods.dp.d(temp2_1:temp3_1, *(arg1 + 0x1f0))
    result = zx.q(divs.dp.d(temp2_1:temp3_1, *(arg1 + 0x1f0)))
    *(arg1 + 0x208) = 0
    int32_t r14_2 = rax_4 - temp1_1
    
    if (*(arg1 + 0x20c) s<= 0xffffffff)
        result = sub_140775b10(arg1 + 0x200, 0)
    
    if (r14_2 s> 0)
        int32_t rax_6 = *(arg1 + 0x208) + r14_2
        *(arg1 + 0x208) = rax_6
        
        if (rax_6 s> *(arg1 + 0x20c))
            sub_140775270(arg1 + 0x200)
        
        result = sub_141c3efd0(arg1 + 0x118, *(arg1 + 0x200), r14_2, 0)
    
    if (*(arg1 + 0x230) != 0 && *(arg1 + 0x228) != 0)
        int32_t* r8_4 = *(arg1 + 0x210)
        int32_t rdx_8 = *(arg1 + 0x208)
        int64_t rcx_16 = *(arg1 + 0x200)
        int32_t r12_1 = r8_4[1]
        int32_t r14_3 = r8_4[4]
        int32_t var_1a8_1 = r14_3
        uint128_t zmm0_2 = (*(r8_4 + 8)).o
        int64_t var_128_1 = rcx_16
        int32_t rcx_17 = *r8_4
        int32_t r14_4 = r14_3 - rcx_17
        int32_t r14_5 = r14_4 + rdx_8
        int32_t var_120_1 = rdx_8
        int32_t r13_1 = r8_4[6]
        
        if (r14_4 + rdx_8 s< 0)
            r14_5 = -1
        
        int32_t var_190_1 = rcx_17
        int32_t arg_10 = r12_1
        int32_t var_18c_1 = r12_1
        int32_t var_184_1 = r13_1
        int32_t var_238_1 = r14_5
        int32_t arg_18 = 0
        int32_t var_1f0_1 = rcx_17
        int32_t var_1e4_1 = r13_1
        void* var_1e0_1 = arg1 + 0x238
        void** const var_218 = &data_142da0220
        uint128_t var_210_1 = zmm0_2
        float var_200_1[0x4] = rcx_16.o
        int32_t var_1e8_1
        int32_t var_1d8_1
        int32_t arg_20
        
        if (r14_5 != 0xffffffff)
            arg_10 = r12_1
            var_1e8_1 = r14_5
            
            if (r13_1 s> r14_5)
                r13_1 = -1
            
            arg_20 = r13_1
            var_1d8_1 = r13_1
        else
            r14_5 = -1
            var_238_1 = 0xffffffff
            var_1e8_1 = 0xffffffff
            r13_1 = -1
            arg_20 = 0xffffffff
            var_1d8_1 = 0xffffffff
        
        int32_t var_234_1 = 0xffffffff
        int32_t var_78_1 = 0xffffffff
        
        if (r13_1 != 0xffffffff)
            int32_t rbx = arg_10
            int64_t* rdi_2 = arg1 + 0x248
            int32_t r8_8
            
            do
                int64_t* rax_8 = sub_140747790(&var_218)
                int32_t r8_5 = arg_18
                
                if (r8_5 == 0)
                    int32_t i = 0
                    
                    if (*(arg1 + 0x1f0) s> 0)
                        int64_t* r14_6 = nullptr
                        
                        do
                            int32_t rax_9 = 0
                            
                            if (0 == *(arg1 + 0x1e8))
                                *(arg1 + 0x1e8) = 0
                            else
                                rax_9 = *(arg1 + 0x1e8)
                            
                            memset(*(r14_6 + *(arg1 + 0x218)), 0, sx.q(rax_9) << 2)
                            i += 1
                            r14_6 = &r14_6[2]
                        while (i s< *(arg1 + 0x1f0))
                        
                        r13_1 = var_1d8_1
                        r14_5 = var_1e8_1
                        rbx = r12_1
                        r8_5 = arg_18
                        var_234_1 = var_78_1
                        arg_20 = r13_1
                        var_238_1 = r14_5
                        arg_10 = rbx
                
                int64_t rcx_22 = *rax_8
                r8_8 = r8_5 + 1
                int32_t rax_11 = rax_8[1].d
                int32_t var_140_1 = rax_11
                int32_t var_110_1 = rax_11
                int64_t var_118_1 = rcx_22
                int32_t rcx_23 = *(arg1 + 0x1f0)
                int32_t var_134_1 = divs.dp.d(sx.q(rax_11), rcx_23)
                int64_t var_d8_1 = rcx_23.q
                arg_18 = r8_8
                int64_t* arg_8
                arg_8.d = 0
                int64_t var_e8_1 = rcx_22.o.q
                
                if (rcx_23 s> 0)
                    uint64_t j_2 = zx.q(var_d8_1:4.d)
                    int32_t r12_2 = var_d8_1.d
                    int32_t i_1
                    
                    do
                        rdi_2[1].d = 0
                        
                        if (j_2.d s> *(rdi_2 + 0xc))
                            sub_140775b10(rdi_2, j_2.d)
                        
                        if (j_2.d s> 0)
                            int32_t rax_15 = j_2.d + rdi_2[1].d
                            rdi_2[1].d = rax_15
                            
                            if (rax_15 s> *(rdi_2 + 0xc))
                                sub_140775270(rdi_2)
                        
                        void* rdx_14 = *rdi_2
                        int32_t r8_9 = arg_8.d
                        
                        if (j_2.d s> 0)
                            uint64_t j_1 = j_2
                            uint64_t j
                            
                            do
                                int64_t rax_16 = sx.q(r8_9)
                                rdx_14 += 4
                                r8_9 += r12_2
                                *(rdx_14 - 4) = *(var_e8_1 + (rax_16 << 2))
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                            rdi_2 = arg1 + 0x248
                        
                        sub_141c34750(arg1 + 0x298, rdi_2)
                        memcpy(*(arg1 + 0x258), *rdi_2, rdi_2[1].d << 2)
                        int64_t* rcx_29 = *(arg1 + 0x230)
                        (*(*rcx_29 + 0x20))(rcx_29, *(arg1 + 0x258), *(arg1 + 0x268))
                        sub_141c34510(arg1 + 0x268, arg1 + 0x278)
                        void* rcx_31 = *(arg1 + 0x228)
                        int32_t var_160_1 = *(arg1 + 0x280)
                        int128_t var_108 = (*(arg1 + 0x278)).o
                        sub_141c47280(rcx_31, &var_108, arg1 + 0x288)
                        sub_141c342e0(arg1 + 0x288, (sx.q(arg_8.d) << 4) + *(arg1 + 0x218))
                        i_1 = arg_8.d + 1
                        arg_8.d = i_1
                        
                        if (i_1 s>= r12_2)
                            break
                    while (i_1 != 0xffffffff)
                    r13_1 = arg_20
                    r14_5 = var_238_1
                    rbx = arg_10
                    r8_8 = arg_18
                
                if (r13_1 != 0xffffffff)
                    r13_1 += rbx
                    
                    if (r13_1 s> r14_5)
                        r13_1 = -1
                    
                    arg_20 = r13_1
                    var_1d8_1 = r13_1
            while (r13_1 != var_234_1)
            
            lpCriticalSection = arg1 + 0x2c0
            
            if (r8_8 s> 0)
                float zmm7[0x4] = *(arg1 + 0x1f8)
                zmm0_2 = _mm_cvtepi32_ps(zx.o(r8_8))
                zmm7[0] = zmm7[0] f/ zmm0_2.d
                zmm6.d = 1f f/ _mm_max_ss((*(arg1 + 0x1ec) ^ data_142d3f780).d, 0x3f800000).d
                
                if (*(arg1 + 0x1f0) s> 0)
                    do
                        int64_t* rdi_6 = (sx.q(i_2) << 4) + *(arg1 + 0x218)
                        sub_141c345d0(rdi_6, zmm7)
                        zmm6, zmm7 = sub_141c34980(rdi_6, *(arg1 + 0x1ec))
                        sub_141c34ad0(rdi_6, *(arg1 + 0x1ec))
                        sub_141c345d0(rdi_6, zmm6)
                        i_2 += 1
                    while (i_2 s< *(arg1 + 0x1f0))
        
        int32_t var_150_1 = rdx_8
        uint128_t var_f8 = rcx_16.o
        result = sub_1407784c0(r8_4, &var_f8)
else if (*(arg1 + 0x220) s> 0)
    int64_t* rdi_7 = nullptr
    
    do
        int64_t rcx_38 = *(arg1 + 0x218)
        result = sx.q(*(rdi_7 + rcx_38 + 8))
        
        if (result.d s> 0)
            result = memset(*(rdi_7 + rcx_38), 0, result << 2)
        
        i_2 += 1
        rdi_7 = &rdi_7[2]
    while (i_2 s< *(arg1 + 0x220))

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
