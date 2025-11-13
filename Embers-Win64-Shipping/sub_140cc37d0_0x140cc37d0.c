// 函数: sub_140cc37d0
// 地址: 0x140cc37d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg2[1].d)
int64_t* rsi = *arg2
int64_t rbp = 0
int32_t rdi = (rax - 1).d

if (rax.d == 0)
    rdi = 0

uint64_t r14_1 = rax << 3 u>> 3

if (rsi u> &rsi[rax])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t arg_8 = *rsi
        rdi += sub_140b5ea20(&arg_8)
        rsi = &rsi[1]
        rbp += 1
    while (rbp != r14_1)

*arg1 = 0
arg1[1] = 0

if (rdi != 0)
    if (rdi + 1 s> 0)
        sub_1405947f0(arg1, rdi + 1)
    
    int64_t var_38
    int64_t* rax_6 = sub_140b63b70(*arg2 - 8 + (sx.q(arg2[1].d) << 3), &var_38)
    int32_t rcx_4 = rax_6[1].d
    int32_t r8_1 = rcx_4 - 1
    
    if (rcx_4 == 0)
        r8_1 = 0
    
    sub_140a20ba0(arg1, *rax_6, r8_1)
    int64_t rcx_6 = var_38
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    if (arg2[1].d s> 1)
        int32_t rdx_3 = arg1[1].d
        int32_t rax_7 = rdx_3 - 1
        
        if (rdx_3 == 0)
            rax_7 = -1
        
        int32_t rdi_1 = rdx_3 - 1
        
        if (rdx_3 == 0)
            rax_7 = 0
        
        if (rdx_3 == 0)
            rdi_1 = -1
        
        int64_t rcx_8
        
        if (rax_7 == 0 || **arg1 != 0x2f)
            int32_t rax_13
            rax_13.b = rdx_3 s<= 0
            
            if (rdx_3 s<= 0)
                rdi_1 = 0
            
            int32_t rax_15 = rax_13 + 1 + rdx_3
            arg1[1].d = rax_15
            
            if (rax_15 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            rcx_8 = sx.q(rdi_1)
            *(*arg1 + (rcx_8 << 1)) = 0x3a
        else
            int32_t rax_9
            rax_9.b = rdx_3 s<= 0
            
            if (rdx_3 s<= 0)
                rdi_1 = 0
            
            int32_t rax_11 = rax_9 + 1 + rdx_3
            arg1[1].d = rax_11
            
            if (rax_11 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            rcx_8 = sx.q(rdi_1)
            *(*arg1 + (rcx_8 << 1)) = 0x2e
        
        *(*arg1 + (rcx_8 << 1) + 2) = 0
        int32_t rdi_2 = arg2[1].d
        int32_t rdi_3 = rdi_2 - 2
        
        if (rdi_2 - 2 s>= 0)
            int64_t rsi_2 = sx.q(rdi_3) << 3
            int32_t temp4_1
            
            do
                int64_t* rax_18 = sub_140b63b70(*arg2 + rsi_2, &var_38)
                int32_t rcx_12 = rax_18[1].d
                int32_t r8_2 = rcx_12 - 1
                
                if (rcx_12 == 0)
                    r8_2 = 0
                
                sub_140a20ba0(arg1, *rax_18, r8_2)
                int64_t rcx_14 = var_38
                
                if (rcx_14 != 0)
                    sub_140a74f90(rcx_14)
                
                if (rdi_3 s> 0)
                    int32_t rdx_6 = arg1[1].d
                    int32_t rax_19
                    rax_19.b = rdx_6 s<= 0
                    int32_t rbp_1 = rdx_6 - 1
                    
                    if (rdx_6 s<= 0)
                        rbp_1 = 0
                    
                    int32_t rax_21 = rax_19 + 1 + rdx_6
                    arg1[1].d = rax_21
                    
                    if (rax_21 s> *(arg1 + 0xc))
                        sub_140594770(arg1)
                    
                    int64_t rcx_16 = sx.q(rbp_1)
                    *(*arg1 + (rcx_16 << 1)) = 0x3a
                    *(*arg1 + (rcx_16 << 1) + 2) = 0
                
                rsi_2 -= 8
                temp4_1 = rdi_3
                rdi_3 -= 1
            while (temp4_1 - 1 s>= 0)

return arg1
