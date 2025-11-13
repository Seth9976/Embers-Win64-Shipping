// 函数: sub_140747a70
// 地址: 0x140747a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (data_14396e8d0 != 0)
    if (*(arg3 + 0x554) == 4)
        int64_t r8 = *(arg3 + 0x408)
        
        if (r8 != 0)
            int32_t result_1
            sub_140758f00(arg2 + 0x28, &result_1, r8)
            result = sx.q(result_1)
            void* rcx_1
            
            if (result.d == 0xffffffff)
                rcx_1 = nullptr
            else
                void* rdx_1 = result * 9
                result = *(arg2 + 0x28)
                rcx_1 = &result[rdx_1]
            
            void* rdx_2 = rcx_1 + 8
            
            if (rcx_1 == 0)
                rdx_2 = nullptr
            
            if (rdx_2 != 0)
                result = sub_140747f00(&result_1, rdx_2, arg3)
    
    if (data_143cdf970 != 0)
        int32_t r11_1 = *(arg2 + 0x50)
        void* r9_1 = arg2 + 0x38
        void* var_80 = r9_1
        int32_t rcx_3 = 0
        int32_t var_88_1 = 0
        int32_t var_84_1 = 1
        int32_t r8_2 = 0
        int32_t var_78_1 = 0xffffffff
        int64_t var_74_1 = 0
        
        if (r11_1 != 0)
            void* rax = *(r9_1 + 0x10)
            
            if (rax != 0)
                r9_1 = rax
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_5 = *r9_1
            
            if (rdx_5 != 0)
            label_140747b88:
                int32_t rax_7 = neg.d(rdx_5) & rdx_5
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
                int32_t var_84_2 = rax_7
                int32_t rax_8
                
                if (rax_7 == 0)
                    rax_8 = 0x20
                else
                    rax_8 = 0x1f - temp0_2
                
                var_74_1.d = r8_2 - rax_8 + 0x1f
                
                if (r8_2 - rax_8 + 0x1f s> r11_1)
                    var_74_1.d = r11_1
            else
                while (true)
                    int64_t rdx_6 = sx.q(rcx_3)
                    r8_2 += 0x20
                    rcx_3 += 1
                    var_74_1:4.d = r8_2
                    var_88_1 = rcx_3
                    
                    if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                    var_78_1 = 0xffffffff
                    
                    if (rdx_5 != 0)
                        goto label_140747b88
                
                var_74_1.d = r11_1
        
        void* var_20_1 = arg2 + 0x28
        int128_t zmm0 = var_88_1.o
        int128_t var_30_1 = 0xffffffff
        int16_t var_50_1 = 0
        result = zmm0.q
        var_78_1.o = zmm0
        var_88_1.o = (arg2 + 0x28).o
        zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t var_68_1 = zmm0
        
        if (0 s< result[3].d)
            int32_t i_1
            int32_t i = i_1
            
            do
                int32_t r9_2 = 0
                void* rdi_1 = *var_88_1.q + sx.q(i) * 0x48
                int64_t rcx_6 = 0
                uint64_t rdx_8 = sx.q(*(rdi_1 + 0x10))
                
                if (rdx_8.d s> 0)
                    int64_t* r10_1 = *(rdi_1 + 8)
                    int64_t* rax_12 = r10_1
                    
                    do
                        if (*rax_12 == arg3)
                            int32_t rax_15 = rdx_8.d - r9_2 - 1
                            
                            if (rax_15 s>= 1)
                                rax_15 = 1
                            
                            if (rax_15 != 0)
                                memcpy(&r10_1[sx.q(r9_2) * 2], &r10_1[sx.q(rdx_8.d - rax_15) * 2], 
                                    rax_15 << 4)
                                rdx_8 = zx.q(*(rdi_1 + 0x10))
                            
                            *(rdi_1 + 0x10) = (rdx_8 - 1).d
                            break
                        
                        r9_2 += 1
                        rcx_6 += 1
                        rax_12 = &rax_12[2]
                    while (rcx_6 s< rdx_8)
                
                var_74_1:4.d &= not.d(var_80:4.d)
                sub_14059bdd0(&var_80)
                result = var_78_1.q
                i = i_1
            while (i s< result[3].d)
            
            if (var_50_1.b != 0 && var_50_1:1.b != 0)
                result = sub_14074d130(arg2 + 0x28, *(arg2 + 0x30) - *(arg2 + 0x5c), 1)
    
    *(arg3 + 0x554) = 0

return result
