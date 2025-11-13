// 函数: sub_14182acc0
// 地址: 0x14182acc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r12 = arg2
*(arg1 + 0x110)
int64_t result

if ((*(**(arg1 + 0x528) + 0x80))().b != 0)
label_14182afb5:
    result.b = 1
else
    int64_t* rcx_1 = *(arg1 + 0x5e8)
    
    if ((*(*rcx_1 + 0x98))(rcx_1).b == 0)
        int32_t r11_1 = *(r12 + 0x28)
        void* r15_1 = &r12[8]
        int32_t rcx_2 = 0
        int32_t var_6c_1 = 1
        int32_t r8_1 = 0
        int32_t var_70_1 = 0
        void* var_68_1 = r15_1
        int32_t var_60_1 = 0xffffffff
        int64_t var_5c_1 = 0
        
        if (r11_1 != 0)
            void* rax_2 = *(r15_1 + 0x10)
            void* r9_1 = r15_1
            
            if (rax_2 != 0)
                r9_1 = rax_2
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_2 = *r9_1
            
            if (rdx_2 != 0)
            label_14182adc8:
                int32_t rax_9 = neg.d(rdx_2) & rdx_2
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                int32_t var_6c_2 = rax_9
                int32_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = 0x1f - temp0_2
                
                var_5c_1.d = r8_1 - rax_10 + 0x1f
                
                if (r8_1 - rax_10 + 0x1f s> r11_1)
                    var_5c_1.d = r11_1
            else
                while (true)
                    int64_t rdx_3 = sx.q(rcx_2)
                    r8_1 += 0x20
                    rcx_2 += 1
                    var_5c_1:4.d = r8_1
                    var_70_1 = rcx_2
                    
                    if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                    var_60_1 = 0xffffffff
                    
                    if (rdx_2 != 0)
                        goto label_14182adc8
                
                var_5c_1.d = r11_1
        
        int32_t rdx_4 = *(r12 + 0x28)
        int16_t* var_98 = r12
        double zmm2[0x2] = var_60_1.o
        int128_t var_90_1 = var_70_1.o
        int32_t r14_1 = 0xffffffff << (rdx_4.b & 0x1f)
        int128_t zmm0 = var_98.o
        int32_t r8_4 = rdx_4 s>> 5
        int32_t r9_3 = rdx_4 & 0xffffffe0
        double var_80_1[0x2] = zmm2
        int64_t var_30_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        int128_t zmm1 = var_90_1
        var_90_1:8.d = r14_1
        var_90_1:0xc.d = rdx_4
        int128_t var_50 = zmm0
        int128_t var_40_1 = zmm1
        
        if (rdx_4 != r11_1)
            void* rax_12 = *(r15_1 + 0x10)
            void* r10_1 = r15_1
            
            if (rax_12 != 0)
                r10_1 = rax_12
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_1 - 1)
            int32_t rdx_8 = *(r10_1 + (sx.q(r8_4) << 2)) & r14_1
            
            if (rdx_8 != 0)
            label_14182ae92:
                int32_t rax_19 = neg.d(rdx_8) & rdx_8
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
                int32_t rbx_1
                
                if (rax_19 == 0)
                    rbx_1 = 0x20
                else
                    rbx_1 = 0x1f - temp0_4
                
                var_90_1:0xc.d = r9_3 - rbx_1 + 0x1f
                
                if (r9_3 - rbx_1 + 0x1f s> r11_1)
                    var_90_1:0xc.d = r11_1
            else
                while (true)
                    int64_t rcx_7 = sx.q(r8_4)
                    r9_3 += 0x20
                    r8_4 += 1
                    
                    if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_8 = *(r10_1 + (rcx_7 << 2) + 4)
                    var_90_1:8.d = 0xffffffff
                    
                    if (rdx_8 != 0)
                        goto label_14182ae92
                
                var_90_1:0xc.d = r11_1
        
        uint32_t r13_2 = (var_90_1:8.q u>> 0x20).d
        
        while (true)
            result = sx.q(var_40_1:0xc.d)
            int64_t* rdx_9 = var_50.q
            
            if (result.d == r13_2 && var_40_1.q == r15_1 && rdx_9 == r12)
                break
            
            int32_t rbx_2 = *(arg1 + 0x70)
            int64_t rcx_9 = result * 3
            int64_t rax_21 = *rdx_9
            int64_t* r12_1 = *(arg1 + 0x528)
            int32_t rax_22 = *(rax_21 + (rcx_9 << 3) + 8)
            int32_t rdi_1 = rax_22 - 1
            
            if (rax_22 == 0)
                rdi_1 = 0
            
            int32_t rax_24
            
            if (rbx_2 == 0)
                rax_24 = 2
            
            if (rbx_2 != 0 || rdi_1 == 0xffffffff)
                rax_24 = 1
            
            int64_t r14_2 = *(arg1 + 0x68)
            int32_t rcx_10 = rdi_1 + rax_24
            var_98 = nullptr
            var_90_1.d = rbx_2
            
            if (rbx_2 != 0 || rcx_10 != 0)
                sub_1405a4c70(&var_98, rbx_2 + rcx_10, 0)
                memcpy(var_98, r14_2, rbx_2 * 2)
            else
                var_90_1:4.d = 0
            
            sub_140a2cf70(&var_98, *(rax_21 + (rcx_9 << 3)), rdi_1)
            int16_t* const rdx_13 = &data_142d40450
            
            if (var_90_1.d != 0)
                rdx_13 = var_98
            
            result = (*(*r12_1 + 0x80))(r12_1, rdx_13)
            int16_t* rcx_15 = var_98
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            if (result.b != 0)
                goto label_14182afb5
            
            var_40_1:8.d &= not.d(var_50:0xc.d)
            sub_14059bdd0(&var_50:8)
            r15_1 = var_68_1
            r12 = arg2
    
    result.b = 0

return result
