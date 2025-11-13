// 函数: sub_141d70c50
// 地址: 0x141d70c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*(arg1 + 8) - *(arg1 + 0x34) != arg2[1].d - *(arg2 + 0x34))
label_141d70e61:
    result.b = 0
else
    int32_t r10_1 = *(arg1 + 0x28)
    void* r9_1 = arg1 + 0x10
    int32_t var_64_1 = 1
    int32_t var_68_1 = 0
    int32_t rcx = 0
    int32_t var_50_1 = 0
    int32_t r8_2 = 0
    void* var_60 = r9_1
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    
    if (r10_1 != 0)
        void* rax_1 = *(r9_1 + 0x10)
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_2 = *r9_1
        int32_t var_54_3
        
        if (rdx_2 != 0)
        label_141d70d08:
            int32_t rax_8 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_64_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            int32_t var_54_2 = rcx - rax_9 + 0x1f
            
            if (rcx - rax_9 + 0x1f s> r10_1)
                var_54_3 = r10_1
        else
            while (true)
                int64_t rdx_3 = sx.q(r8_2)
                rcx += 0x20
                r8_2 += 1
                var_50_1 = rcx
                var_68_1 = r8_2
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                var_58_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_141d70d08
            
            var_54_3 = r10_1
    
    int128_t var_28_1 = 0xffffffff
    double var_38_1[0x2] = var_68_1.o
    var_68_1.o = arg1.o
    int64_t var_48_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    var_58_1.o = var_38_1
    
    if (0 s< r10_1)
        int32_t i_1
        int32_t i = i_1
        
        do
            void** rdi_1 = var_68_1.q
            int64_t rbx_1 = sx.q(i) * 0x38
            int32_t arg_8
            sub_141d02ac0(arg2, &arg_8, *rdi_1 + rbx_1)
            int64_t rax_12 = sx.q(arg_8)
            
            if (rax_12.d == 0xffffffff)
                result = 0
            else
                result = rax_12 * 0x38 + *arg2
            
            int32_t* rdx_6 = result + 0x10
            
            if (result == 0)
                rdx_6 = nullptr
            
            if (rdx_6 == 0)
                goto label_141d70e61
            
            int32_t r11_1 = rdx_6[1]
            void* r8_6 = *rdi_1 + rbx_1
            int32_t rbx_2 = *rdx_6
            int32_t r10_2 = rdx_6[2]
            int32_t r9_2 = rdx_6[3]
            
            if ((rbx_2 | r11_1 | r10_2 | r9_2) == 0 || ((*(r8_6 + 0x14) ^ r11_1)
                    | (*(r8_6 + 0x18) ^ r10_2) | (*(r8_6 + 0x1c) ^ r9_2)
                    | (*(r8_6 + 0x10) ^ rbx_2)) != 0)
                int16_t* rax_24
                
                if (*(r8_6 + 0x28) == 0)
                    rax_24 = &data_142d40450
                else
                    rax_24 = *(r8_6 + 0x20)
                
                int16_t* const rcx_8
                
                if (rdx_6[6] == 0)
                    rcx_8 = &data_142d40450
                else
                    rcx_8 = *(rdx_6 + 0x10)
                
                if (sub_140a54510(rcx_8, rax_24).d != 0)
                    goto label_141d70e61
            
            var_50_1 &= not.d(var_60:4.d)
            sub_14059bdd0(&var_60)
            i = i_1
        while (i s< *(var_58_1.q + 0x18))
    
    result.b = 1

return result
