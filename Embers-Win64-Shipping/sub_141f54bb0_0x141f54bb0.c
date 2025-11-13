// 函数: sub_141f54bb0
// 地址: 0x141f54bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = arg2
void* rcx = *(**(arg1 + 0x90) + 0xa0)
int64_t* rax
int64_t* rbx_1

if (rcx == 0)
    rbx_1 = nullptr
else
    rax = sub_141dc9790(rcx)
    rbx_1 = rax
    
    if (rax == 0)
        rbx_1 = nullptr
    else
        void* rax_1 = sub_14256a090()
        void* rdx_1 = rbx_1[2]
        rax = sx.q(*(rax_1 + 0x38))
        
        if (rax.d s> *(rdx_1 + 0x38))
            rbx_1 = nullptr
        else if ((*(rdx_1 + 0x30))[rax] != rax_1 + 0x30)
            rbx_1 = nullptr

char arg_30

if (arg_30 == 0 || arg5 != 0)
    rax.b = 0
else
    rax.b = 1

int32_t var_98_1
char var_90_1
int32_t rbx_2
char r8_1

if (arg3 != 0)
    if (rbx_1 != 0 || rax.b != 0)
        r8_1 = arg1[0x8c]
        
        if (r8_1 == 0)
            uint64_t rax_23 = zx.q(arg1[1])
            r8_1 = *(rax_23 + &data_143f3b73c) + 1
            *(rax_23 + &data_143f3b73c) = r8_1
            arg1[0x8c] = r8_1
        
        var_90_1 = 0
        rbx_2 = 1
    else
        rbx_2 = 1
        arg_30.d = 1
        
        if ((arg1[2] & 2) != 0)
            int32_t r9_1 = *(arg1 + 0x38)
            int32_t arg_28
            int64_t rsi_1 = sx.q(arg_28)
            
            if (r9_1 == *(arg1 + 0x64))
            label_141f54d3d:
                
                if (r9_1 - *(arg1 + 0x64) s> 0)
                    void* r9_3 = &arg1[0x40]
                    int32_t r15_1 = *(r9_3 + 0x18)
                    int32_t rcx_6 = 0
                    int32_t r10_1 = 0
                    int32_t var_88_1 = 0
                    int32_t r8_4 = 0
                    int32_t var_84_1 = 1
                    void* var_80 = r9_3
                    int32_t var_78_1 = 0xffffffff
                    int64_t var_74_1 = 0
                    
                    if (r15_1 != 0)
                        void* rax_5 = *(r9_3 + 0x10)
                        r10_1 = r15_1
                        
                        if (rax_5 != 0)
                            r9_3 = rax_5
                        
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(r15_1 - 1)
                        int32_t rdx_10 = *r9_3
                        
                        if (rdx_10 != 0)
                        label_141f54dc8:
                            int32_t rax_12 = neg.d(rdx_10) & rdx_10
                            uint64_t rflags_1
                            int32_t temp0_2
                            temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
                            int32_t var_84_2 = rax_12
                            int32_t rax_13
                            
                            if (rax_12 == 0)
                                rax_13 = 0x20
                            else
                                rax_13 = 0x1f - temp0_2
                            
                            int32_t rax_14 = r8_4 - rax_13 + 0x1f
                            
                            if (rax_14 s> r15_1)
                                rax_14 = r15_1
                            
                            r10_1 = rax_14
                            var_74_1.d = rax_14
                        else
                            while (true)
                                int64_t rdx_11 = sx.q(rcx_6)
                                r8_4 += 0x20
                                rcx_6 += 1
                                var_74_1:4.d = r8_4
                                var_88_1 = rcx_6
                                
                                if (rdx_11.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                    var_74_1.d = r15_1
                                    break
                                
                                rdx_10 = *(r9_3 + (rdx_11 << 2) + 4)
                                var_78_1 = 0xffffffff
                                
                                if (rdx_10 != 0)
                                    goto label_141f54dc8
                    
                    int128_t var_58_1 = var_88_1.o
                    int128_t var_48_1 = 0xffffffff
                    var_88_1.o = (&arg1[0x30]).o
                    var_78_1.o = var_58_1
                    int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
                    
                    if (r10_1 s< r15_1)
                        int32_t i_1
                        int32_t i = i_1
                        
                        do
                            int64_t rcx_9 = sx.q(i) * 2
                            int64_t rdx_15 = *var_88_1.q
                            
                            if (*(rdx_15 + (rcx_9 << 3)) s< rsi_1.d)
                                if (*(rdx_15 + (rcx_9 << 3) + 4) s>= rbx_2)
                                    rbx_2 = *(rdx_15 + (rcx_9 << 3) + 4)
                                
                                arg_30.d = rbx_2
                            
                            var_74_1:4.d &= not.d(var_80:4.d)
                            sub_14059bdd0(&var_80)
                            i = i_1
                        while (i s< *(var_78_1.q + 0x18))
                    
                    sub_140908920(&arg1[0x30], &arg_28, &arg_30)
                    rbx_2 = arg_30.d + 1
            else
                void* rcx_3 = *(arg1 + 0x70)
                void* r8_2 = &arg1[0x68]
                
                if (rcx_3 != 0)
                    r8_2 = rcx_3
                
                int32_t rax_4 = *(r8_2 + (((sx.q(*(arg1 + 0x78)) - 1) & rsi_1) << 2))
                
                if (rax_4 == 0xffffffff)
                    goto label_141f54d3d
                
                int64_t r8_3 = *(arg1 + 0x30)
                int64_t rdx_7
                
                while (true)
                    rdx_7 = sx.q(rax_4)
                    int64_t rcx_5 = rdx_7 * 2
                    
                    if (*(r8_3 + (rcx_5 << 3)) == rsi_1.d)
                        break
                    
                    rax_4 = *(r8_3 + (rcx_5 << 3) + 8)
                    
                    if (rax_4 == 0xffffffff)
                        goto label_141f54d3d
                
                if (rax_4 == 0xffffffff)
                    goto label_141f54d3d
                
                int64_t rdx_12 = rdx_7 << 4
                void* rdx_13 = rdx_12 + r8_3
                
                if (rdx_12 == neg.q(r8_3) || rdx_13 == -4)
                    goto label_141f54d3d
                
                rbx_2 = *(rdx_13 + 4) + 1
        else
            int32_t rdx_3 = *(arg1 + 0x28)
            int32_t rax_3 = 0
            rbx_2 = rdx_3 + 1
            
            if (rdx_3 s> 0)
                int32_t* rcx_2 = *(arg1 + 0x20)
                
                do
                    rax_3 += 1
                    
                    if (arg4.d f> *rcx_2)
                        rbx_2 = rax_3
                        break
                    
                    rcx_2 = &rcx_2[1]
                while (rax_3 s< rdx_3)
        
        int32_t rcx_12 = *data_143f3b800
        
        if (rcx_12 != 0)
            rbx_2 = rcx_12
        
        if (arg5 != 0 && rbx_2 s> 1)
            if (arg1[0x8c] == 0)
                uint64_t rax_20 = zx.q(arg1[1])
                *(rax_20 + &data_143f3b73c) += 1
                arg1[0x8c] = *(rax_20 + &data_143f3b73c)
            
            bool cond:4_1 = *arg1 != 0
            int64_t zmm2 = (zx.o(0)).q
            int128_t zmm4 = *(arg1 + 0xc)
            arg2 = zmm4
            arg4.d = _mm_cvtepi32_ps(zx.o(rbx_2)).d f* data_143a2d824
            
            if (not(cond:4_1))
                arg2 = zx.o(0)
            
            arg2.d = arg2.d f- zmm7.d
            char result = arg1[2] | 1
            *(arg1 + 0x14) = zmm7.d
            *arg1 = 1
            arg1[2] = result
            *(arg1 + 0xc) = arg2.d
            
            if (arg2.d f>= zmm2.d)
                *(arg1 + 0x10) = 0
                result = result | 0x10 | 8
                arg1[2] = result
            else
                int128_t zmm0 = _mm_max_ss((arg2 ^ data_142d3f780).d, arg4.d)
                arg2.d = arg2.d f+ zmm0.d
                *(arg1 + 0x10) = zmm0.d
                *(arg1 + 0xc) = arg2.d
                
                if (not(arg2.d f>= zmm2.d))
                    _mm_cvtps_pd(zmm4.q)
                    arg4.q = fconvert.d(zmm7.d)
                    zmm0.q = fconvert.d(zmm0.d)
                    int32_t var_98
                    var_98.q = zmm0.q
                    sub_140a4bcc0(
                        TPO Time: %.3f | Orig TPO Time: %.3f | DT: %.3f | LookAheadAmount: %.3f\n", 
                        _mm_cvtps_pd(arg2.q).q)
                    result = arg1[2]
                
                result &= 0xe7
                arg1[2] = result
            
            return result
        
        r8_1 = arg1[0x8c]
        
        if (r8_1 == 0)
            uint64_t rax_22 = zx.q(arg1[1])
            r8_1 = *(rax_22 + &data_143f3b73c) + 1
            *(rax_22 + &data_143f3b73c) = r8_1
            arg1[0x8c] = r8_1
        
        var_90_1 = 1
    
    var_98_1 = rbx_2
else
    int32_t rdx_2
    
    if (rbx_1 != 0 || rax.b != 0)
        rdx_2 = *(arg1 + 0x18)
        rbx_2 = 1
    else
        rbx_2 = *(arg1 + 0x18)
        rdx_2 = rbx_2
    
    r8_1 = arg1[0x8c]
    
    if (r8_1 == 0)
        uint64_t rax_2 = zx.q(arg1[1])
        r8_1 = *(rax_2 + &data_143f3b73c) + 1
        *(rax_2 + &data_143f3b73c) = r8_1
        arg1[0x8c] = r8_1
    
    var_90_1 = 0
    var_98_1 = rdx_2

return sub_141f735e0(arg1, zmm7, r8_1, rbx_2, var_98_1, var_90_1)
