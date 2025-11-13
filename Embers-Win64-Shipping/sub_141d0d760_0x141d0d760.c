// 函数: sub_141d0d760
// 地址: 0x141d0d760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
void** rbx = arg1
void* result = sub_140a30eb0(&arg1[5], 0, 0, 4, 0)
int32_t i_2 = rbx[6].d
void* r15 = &rbx[6]

if (i_2 != 0)
    sub_140a30eb0(&arg1[5], 0, i_2, 4, 0)
    
    if (i_2 s> 0)
        int64_t rdx_1 = 0
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            void* rcx_3 = arg1[5]
            
            if ((rcx_3.b & 1) != 0)
                rcx_3 = (rcx_3 s>> 1) + &arg1[5]
            
            int64_t rax_2 = (sx.q(*r15) - 1) & rdx_1
            rdx_1 += 1
            *(rcx_3 + (rax_2 << 2)) = 0xffffffff
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t r9_1 = rbx[3].d
    int32_t var_68_1 = 0
    int32_t rcx_4 = 0
    int32_t var_64_1 = 1
    void* var_60_1 = &rbx[2]
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    int32_t var_50_1 = 0
    
    if (r9_1 != 0)
        void* r8_2 = rbx[2]
        
        if ((r8_2.b & 1) != 0)
            r8_2 = (r8_2 s>> 1) + &rbx[2]
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r9_1 - 1)
        int32_t rdx_4 = *r8_2
        int32_t var_54_3
        
        if (rdx_4 != 0)
        label_141d0d876:
            int32_t rax_10 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
            int32_t var_64_2 = rax_10
            int32_t rax_11
            
            if (rax_10 == 0)
                rax_11 = 0x20
            else
                rax_11 = 0x1f - temp0_2
            
            int32_t var_54_2 = rcx_4 - rax_11 + 0x1f
            
            if (rcx_4 - rax_11 + 0x1f s> r9_1)
                var_54_3 = r9_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rsi)
                rcx_4 += 0x20
                rsi += 1
                int32_t var_50_2 = rcx_4
                var_68_1 = rsi
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r8_2 + (rdx_5 << 2) + 4)
                int32_t var_58_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_141d0d876
            
            var_54_3 = r9_1
    
    void** var_48_1 = rbx
    result = nullptr
    int128_t var_40 = var_68_1.o
    int64_t var_30_1 = 0xffffffff
    
    if (0 s< r9_1)
        int32_t rsi_1 = 0
        
        while (true)
            void* rcx_7 = *rbx
            
            if ((rcx_7.b & 1) != 0)
                rcx_7 = (rcx_7 s>> 1) + rbx
            
            void* rbx_3 = sx.q(rsi_1) * 0x50 + rcx_7
            void* rcx_8
            
            if (*(rbx_3 + 8) == 0)
                rcx_8 = &data_142d40450
            else
                rcx_8 = *rbx_3
                
                if ((rcx_8.b & 1) != 0)
                    rcx_8 = (rcx_8 s>> 1) + rbx_3
            
            int32_t rax_15 = sub_1405de2b0(rcx_8) & (*r15 - 1)
            *(rbx_3 + 0x4c) = rax_15
            void* rcx_12 = arg1[5]
            
            if ((rcx_12.b & 1) != 0)
                rcx_12 = (rcx_12 s>> 1) + &arg1[5]
            
            int64_t rdx_7 = sx.q(rax_15)
            *(rbx_3 + 0x48) = *(rcx_12 + (((sx.q(*r15) - 1) & rdx_7) << 2))
            void* rcx_14 = arg1[5]
            
            if ((rcx_14.b & 1) != 0)
                rcx_14 = (rcx_14 s>> 1) + &arg1[5]
            
            *(rcx_14 + (((sx.q(*r15) - 1) & rdx_7) << 2)) = rsi_1
            var_30_1.d &= not.d(var_40:4.d)
            sub_141d02a20(&var_40)
            result = var_40:8.q
            rsi_1 = var_30_1:4.d
            
            if (rsi_1 s>= *(result + 8))
                break
            
            rbx = var_48_1

return result
