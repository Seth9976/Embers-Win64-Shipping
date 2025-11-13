// 函数: sub_142ac7260
// 地址: 0x142ac7260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t* rcx = *(arg1 + 0x230)
    
    if (rcx != 0)
        (**rcx)(rcx, 1)
    
    int64_t* rcx_1 = *(arg1 + 0x238)
    
    if (rcx_1 != 0)
        (**rcx_1)(rcx_1, 1)
    
    int64_t* rcx_2 = *(arg1 + 0x528)
    int32_t i_1 = 0
    *(arg1 + 0x238) = 0
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)
    
    *(arg1 + 0x528) = 0
    sub_142a45c20(arg1 + 0x148, arg2 + 0x148)
    *(arg1 + 0x228) = *(arg2 + 0x228)
    int64_t* rcx_4 = *(arg2 + 0x230)
    *(arg1 + 0x230) = (*(*rcx_4 + 0x18))(rcx_4)
    int64_t* rcx_5 = *(arg2 + 0x238)
    
    if (rcx_5 != 0)
        *(arg1 + 0x238) = (*(*rcx_5 + 0x18))(rcx_5)
    
    sub_142a48100(arg1 + 0x240, arg2 + 0x240)
    sub_142a48100(arg1 + 0x470, arg2 + 0x470)
    sub_142a48100(arg1 + 0x4b0, arg2 + 0x4b0)
    void* r14_1 = arg1 + 0x4f0
    int32_t arg_8 = 0
    void* r15_1 = arg1 + 0x280
    void* rsi_1 = r14_1
    void* rbp_1 = r15_1
    int64_t i_2 = 6
    int64_t i
    
    do
        sub_142a48100(rbp_1, rbp_1 + arg2 - arg1)
        int64_t* rcx_10 = *rsi_1
        
        if (rcx_10 != 0)
            (**rcx_10)(rcx_10, 1)
        
        *rsi_1 = 0
        rbp_1 += 0x40
        rsi_1 += 8
        i = i_2
        i_2 -= 1
    while (i != 1)
    
    do
        if (i_1 u<= 5)
            int32_t rdx_6
            
            switch (i_1)
                case 0, 2
                    rdx_6 = 1
                case 1, 3
                    rdx_6 = 2
                case 4, 5
                    rdx_6 = 0
            
            *r14_1 = sub_142acba70(r15_1, rdx_6, &arg_8)
        
        i_1 += 1
        r15_1 += 0x40
        r14_1 += 8
    while (i_1 s< 6)
    
    sub_142ac7950(arg1)
    sub_142a48100(arg1 + 0x428, arg2 + 0x428)
    *(arg1 + 0x400) = *(arg2 + 0x400)
    *(arg1 + 0x410) = *(arg2 + 0x410)
    *(arg1 + 0x420) = *(arg2 + 0x420)
    *(arg1 + 0x468) = *(arg2 + 0x468)

return arg1
