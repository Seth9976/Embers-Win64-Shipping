// 函数: sub_141cfc310
// 地址: 0x141cfc310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xd].b == 0 && *(arg1 + 0x4c) s< *(arg1[8] + 8))
    do
        if ((*(sub_141d05f90(arg1) + 0x48) & 2) == 0)
            break
        
        arg1[9].d &= not.d(*(arg1 + 0x3c))
        sub_141d02a20(&arg1[7])
    while (*(arg1 + 0x4c) s< *(arg1[8] + 8))

void* result = arg1[8]

while (*(arg1 + 0x4c) s>= *(result + 8))
    result = arg1[3]
    
    if (*(arg1 + 0x24) s>= *(result + 8))
        break
    
    arg1[4].d &= not.d(*(arg1 + 0x14))
    sub_141d02a20(&arg1[2])
    
    if (*(arg1 + 0x24) s< *(arg1[3] + 8))
        int64_t* rax_9 = arg1[1]
        void* rdx_1 = *rax_9
        
        if ((rdx_1.b & 1) != 0)
            rdx_1 = (rdx_1 s>> 1) + rax_9
        
        int32_t rcx_8 = 0
        int32_t var_58_1 = 0
        int32_t r8_1 = 0
        int32_t var_54_1 = 1
        int32_t var_48_1 = 0xffffffff
        int64_t var_44_1 = 0
        void* rdi_4 = sx.q(*(arg1 + 0x24)) * 0x50 + 0x10 + rdx_1
        int32_t r11_1 = *(rdi_4 + 0x18)
        void* var_50_1 = rdi_4 + 0x10
        
        if (r11_1 != 0)
            void* r9_1 = *(rdi_4 + 0x10)
            
            if ((r9_1.b & 1) != 0)
                r9_1 = (r9_1 s>> 1) + rdi_4 + 0x10
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_5 = *r9_1
            
            if (rdx_5 != 0)
            label_141cfc45b:
                int32_t rax_18 = neg.d(rdx_5) & rdx_5
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_18)
                int32_t var_54_2 = rax_18
                int32_t rax_19
                
                if (rax_18 == 0)
                    rax_19 = 0x20
                else
                    rax_19 = 0x1f - temp0_2
                
                var_44_1.d = r8_1 - rax_19 + 0x1f
                
                if (r8_1 - rax_19 + 0x1f s> r11_1)
                    var_44_1.d = r11_1
            else
                while (true)
                    int64_t rdx_6 = sx.q(rcx_8)
                    r8_1 += 0x20
                    rcx_8 += 1
                    var_44_1:4.d = r8_1
                    var_58_1 = rcx_8
                    
                    if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                    int32_t var_48_2 = 0xffffffff
                    
                    if (rdx_5 != 0)
                        goto label_141cfc45b
                
                var_44_1.d = r11_1
        
        int128_t var_20_1 = 0xffffffff
        *(arg1 + 0x30) = rdi_4.o
        *(arg1 + 0x40) = var_58_1.o
        arg1[0xa] = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        
        if (arg1[0xd].b == 0 && *(arg1 + 0x4c) s< *(arg1[8] + 8))
            do
                if ((*(sub_141d05f90(arg1) + 0x48) & 2) == 0)
                    break
                
                arg1[9].d &= not.d(*(arg1 + 0x3c))
                sub_141d02a20(&arg1[7])
            while (*(arg1 + 0x4c) s< *(arg1[8] + 8))
    
    result = arg1[8]

return result
