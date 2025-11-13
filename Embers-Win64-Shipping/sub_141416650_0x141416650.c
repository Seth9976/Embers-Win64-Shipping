// 函数: sub_141416650
// 地址: 0x141416650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = 1
int32_t r15 = 0
int32_t r9 = 0
int32_t rdi = -1
int32_t var_38 = 0
int32_t r10 = 0
int32_t var_34 = 1
int32_t rcx = 0
int32_t var_24 = 0

if (*(arg2 + 0x15d0) != 0)
    int32_t* rax_1 = *(arg2 + 0x15c8)
    int32_t* r8 = arg2 + 0x15b8
    r10 = *(arg2 + 0x15d0)
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r8
    
    if (rdx_2 != 0)
    label_14141670a:
        r11 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(r11)
        var_34 = r11
        int32_t rax_6
        
        if (r11 == 0)
            rax_6 = 0x20
        else
            rax_6 = 0x1f - temp0_2
        
        int32_t rax_7 = rcx - rax_6 + 0x1f
        
        if (rax_7 s> r10)
            rax_7 = r10
        
        r10 = rax_7
        var_24 = rax_7
    else
        while (true)
            int64_t rdx_3 = sx.q(r9)
            rcx += 0x20
            r9 += 1
            var_24 = rcx
            var_38 = r9
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_24 = r10
                break
            
            rdx_2 = r8[rdx_3 + 1]
            rdi = -1
            
            if (rdx_2 != 0)
                goto label_14141670a

if (r10 s< *(arg2 + 0x15d0))
    while (true)
        int32_t* rdx_10
        
        if (*(arg3 + 0x3008) == *(arg3 + 0x3034))
        label_1414167bd:
            rdx_10 = nullptr
        else
            void* r9_1 = arg3 + 0x3038
            void* r8_1 = *(r9_1 + 8)
            int64_t rcx_3 = sx.q(*(*(arg1 + 0xe38) + (sx.q(r10) << 2)))
            
            if (r8_1 != 0)
                r9_1 = r8_1
            
            int32_t rax_10 = *(r9_1 + (((sx.q(*(arg3 + 0x3048)) - 1) & rcx_3) << 2))
            
            if (rax_10 == 0xffffffff)
            label_1414167bd_1:
                rdx_10 = nullptr
            else
                while (true)
                    rdx_10 = (sx.q(rax_10) << 4) + *(arg3 + 0x3000)
                    
                    if (*rdx_10 == rcx_3.d)
                        break
                    
                    rax_10 = rdx_10[2]
                    
                    if (rax_10 == 0xffffffff)
                        goto label_1414167bd_2
                
                if (rax_10 == 0xffffffff)
                label_1414167bd_2:
                    rdx_10 = nullptr
        
        void* rbx_1 = &rdx_10[1]
        
        if (rdx_10 == 0)
            rbx_1 = nullptr
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10)
        int32_t r8_3 = 1 << (r10.b & 0x1f)
        int64_t r9_2 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        
        if (rbx_1 == 0)
            int32_t* rcx_8 = *(arg2 + 0x15c8)
            void* rdx_13 = arg2 + 0x15d8
            void* rax_17 = *(rdx_13 + 0x10)
            
            if (rax_17 != 0)
                rdx_13 = rax_17
            
            int32_t* rax_18 = arg2 + 0x15b8
            
            if (rcx_8 != 0)
                rax_18 = rcx_8
            
            int32_t r10_1 = *(rdx_13 + (r9_2 << 2))
            int32_t r8_5
            
            if ((rax_18[r9_2] & r8_3) == 0)
                r8_5 = not.d(r8_3) & r10_1
            else
                r8_5 = r8_3 | r10_1
            
            *(rdx_13 + (r9_2 << 2)) = r8_5
        else if (*rbx_1 != 0)
            void* rcx_7 = arg2 + 0x15d8
            void* rax_16 = *(rcx_7 + 0x10)
            
            if (rax_16 != 0)
                rcx_7 = rax_16
            
            *(rcx_7 + (r9_2 << 2)) |= r8_3
        else
            int32_t* rax_15 = *(arg2 + 0x15c8)
            int32_t* rcx_6 = arg2 + 0x15b8
            
            if (rax_15 != 0)
                rcx_6 = rax_15
            
            rcx_6[r9_2] &= not.d(r8_3)
            r15 += 1
        
        sub_14059bdd0(&var_38)
        r10 = var_24
        
        if (r10 s>= *(arg2 + 0x15d0))
            break
        
        rdi &= not.d(r11)
        r11 = var_34

return zx.q(r15)
