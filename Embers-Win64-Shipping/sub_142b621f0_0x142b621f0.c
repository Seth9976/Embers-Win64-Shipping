// 函数: sub_142b621f0
// 地址: 0x142b621f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* r14_1 = arg2

if (arg3 s< 0)
    return 

int64_t* rcx = *(arg1 + 0x2e0)

if (rcx != 0)
    sub_142a86f90(rcx)

int64_t* rcx_1 = *(arg1 + 0x2e8)

if (rcx_1 != 0)
    sub_142a86f90(rcx_1)

int32_t r8 = 0
int32_t rbp_1 = 0
int32_t rsi_1 = 0
int32_t arg_10 = 0

if (arg3 s<= 0)
    return 

while (true)
    if (r8 s<= 0)
        int32_t rbx_1 = rsi_1
        
        if (rsi_1 != 0)
            int64_t rax_1 = *(arg1 + 0x280)
            int64_t rcx_3 = sx.q(rsi_1) * 2
            
            if (*(rax_1 + (rcx_3 << 3) + 0xc) s>= rsi_1)
                rbx_1 = *(rax_1 + (rcx_3 << 3) + 0xc)
        
        int32_t rbx_2 = rbx_1 + 1
        int64_t rdx_1 = sx.q(rbx_2) << 4
        int32_t i = *(rdx_1 + *(arg1 + 0x280))
        
        if (i == 5)
        label_142b622be:
            rsi_1 = rbx_2
            
            if (rbx_2 s>= 0)
                int64_t* rcx_4 = *r14_1
                int64_t* rax_2 = nullptr
                
                if (rcx_4 != 0)
                    rax_2 = (*(*rcx_4 + 0x18))(rcx_4)
                    int32_t rcx_5 = arg_10
                    
                    if (rax_2 == 0)
                        rcx_5 = 7
                    
                    arg_10 = rcx_5
                
                sub_142b61e30(arg1, rbx_2, rax_2, &arg_10)
                
                if (*(arg1 + 0x2e8) == 0)
                    *(arg1 + 0x2e8) = sub_142a86f30(sub_142007a80, sub_142a86b90, 0, &arg_10)
                
                sub_142a86e40(*(arg1 + 0x2e8), rbx_2, 1, &arg_10)
                r8 = arg_10
                rbp_1 += 1
                r14_1 = &r14_1[1]
                
                if (rbp_1 s< arg3)
                    continue
        else
            while (i != 1)
                rdx_1 += 0x10
                rbx_2 += 1
                i = *(rdx_1 + *(arg1 + 0x280))
                
                if (i == 5)
                    goto label_142b622be
        
        if (r8 s<= 0)
            break
    
    sub_142b74f70(arg1 + 0x228)
    sub_142a869e0(*(arg1 + 0x2e0))
    int64_t* rcx_10 = *(arg1 + 0x2e8)
    *(arg1 + 0x2e0) = 0
    sub_142a869e0(rcx_10)
    *(arg1 + 0x2e8) = 0
    *(arg1 + 0x2c0) = 0
    *(arg1 + 0x2c8) = 0
    break
