// 函数: sub_140bdc6b0
// 地址: 0x140bdc6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int16_t* var_28
int32_t var_20

if (*(arg1 + 0x48) s> 0)
    sub_140b63e00(*(arg1 + 0x40), arg2)
    int32_t i = 1
    
    if (*(arg1 + 0x48) s> 1)
        do
            sub_140b63b70((sx.q(i) << 4) + *(arg1 + 0x40), &var_28)
            int32_t r11_1 = arg2[1].d
            int32_t rax_1 = 0
            int16_t* rsi_1 = var_28
            int16_t* r8_1 = nullptr
            int32_t rdi_1 = r11_1 - 1
            int32_t r9_1 = rdi_1
            
            if (r11_1 == 0)
                r9_1 = 0
            
            while (rax_1 s< r9_1)
                int32_t rcx_4 = var_20 - 1
                
                if (var_20 == 0)
                    rcx_4 = 0
                
                if (rax_1 s>= rcx_4)
                    break
                
                if (*(r8_1 + *arg2) != *(rsi_1 + r8_1))
                    break
                
                rax_1 += 1
                r8_1 = &r8_1[1]
            
            int32_t r10_2
            
            if (rax_1 s>= 0)
                r10_2 = r9_1
                
                if (rax_1 s< r9_1)
                    r10_2 = rax_1
            else
                r10_2 = 0
            
            if (r11_1 == 0)
                rdi_1 = 0
            
            int32_t rdi_2 = rdi_1 - r10_2
            int32_t r9_2 = r9_1 - r10_2
            
            if (r9_1 - r10_2 s>= 0)
                if (r9_2 s< rdi_2)
                    rdi_2 = r9_2
                
                if (rdi_2 != 0)
                    int32_t rax_3 = r11_1 - rdi_2
                    
                    if (rax_3 != r10_2)
                        int64_t r9_3 = *arg2
                        memmove(r9_3 + (sx.q(r10_2) << 1), r9_3 + (sx.q(rdi_2 + r10_2) << 1), 
                            (rax_3 - r10_2) * 2)
                        r11_1 = arg2[1].d
                        rsi_1 = var_28
                    
                    arg2[1].d = r11_1 - rdi_2
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)
            
            i += 1
        while (i s< *(arg1 + 0x48))
    
    int32_t rax_7 = sub_140a23cf0(arg2, &data_142d99650, 0, 1, 0xffffffff)
    
    if (rax_7 s<= 0)
        arg2[1].d = 0
        
        if (*(arg2 + 0xc) != 0)
            sub_1405947f0(arg2, 0)
    else
        int32_t rcx_10 = arg2[1].d
        int32_t rdx_3 = rcx_10 - 1
        
        if (rcx_10 == 0)
            rdx_3 = -1
        
        int32_t rdi_3 = rcx_10 - 1
        
        if (rcx_10 == 0)
            rdx_3 = 0
        
        int32_t r10_3 = rdx_3
        
        if (rax_7 s< rdx_3)
            r10_3 = rax_7
        
        if (rcx_10 == 0)
            rdi_3 = -1
        
        if (rcx_10 == 0)
            rdi_3 = 0
        
        int32_t rdi_4 = rdi_3 - r10_3
        int32_t rdx_4 = rdx_3 - r10_3
        
        if (rdx_3 - r10_3 s>= 0)
            if (rdx_4 s< rdi_4)
                rdi_4 = rdx_4
            
            if (rdi_4 != 0)
                int32_t rax_9 = rcx_10 - rdi_4
                
                if (rax_9 != r10_3)
                    int64_t r9_4 = *arg2
                    memmove(r9_4 + (sx.q(r10_3) << 1), r9_4 + (sx.q(rdi_4 + r10_3) << 1), 
                        (rax_9 - r10_3) * 2)
                    rcx_10 = arg2[1].d
                
                arg2[1].d = rcx_10 - rdi_4

int32_t rax_13 = arg2[1].d
int32_t rcx_15 = rax_13 - 1

if (rax_13 == 0)
    rcx_15 = 0

if (rcx_15 == 0)
    int64_t arg_8 = *(arg1 + 0x18)
    sub_140b63b70(&arg_8, &var_28)
    
    if (arg2 != &var_28)
        int64_t rcx_17 = *arg2
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        *arg2 = var_28
        arg2[1].d = var_20
        int32_t var_1c
        *(arg2 + 0xc) = var_1c
        return arg2
    
    int16_t* rcx_18 = var_28
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)

return arg2
