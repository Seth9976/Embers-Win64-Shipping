// 函数: sub_142a7c840
// 地址: 0x142a7c840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x20)

if (rcx == arg2)
label_142a7c8fb:
    int64_t rax_6 = *(arg1 + 0x30)
    *(arg1 + 0x48) = rax_6
    *(arg1 + 0x78) = rax_6
    *(arg1 + 0x58) = rax_6
    *(arg1 + 0x68) = rax_6
    *(arg1 + 0x40) = 0
    *(arg1 + 0x70) = 0
    *(arg1 + 0x50) = 0
    *(arg1 + 0x60) = 0
    *(arg1 + 0x88) = 0
    *(arg1 + 0x90) = 0
    *(arg1 + 0x98) = -1
    *(arg1 + 0xa0) = 0
    *(arg1 + 0x82) = 0
    *(arg1 + 0xa8) = 0
    *(arg1 + 0x10c) = 0
    *(arg1 + 0x110) = 0x2710
    *(arg1 + 0x138) = 0
else
    void* rax_1 = sub_142aea410(rcx, arg2, 0, 1, arg3, arg1 + 0x13c)
    void* rcx_1 = *(arg1 + 8)
    *(arg1 + 0x20) = rax_1
    
    if (*(rcx_1 + 0xc8) != 0)
        *(arg1 + 0x28) = sub_142aea410(*(arg1 + 0x28), rax_1, 0, 1, arg3, arg1 + 0x13c)
    
    if (*(arg1 + 0x13c) s<= 0)
        int64_t rax_3 = sub_142aea860(*(arg1 + 0x20))
        int64_t* rcx_4 = *(arg1 + 0x18)
        *(arg1 + 0x30) = rax_3
        
        if (rcx_4 != 0)
            (**rcx_4)(rcx_4, 1)
        
        int64_t* rcx_5 = *(arg1 + 0x140)
        *(arg1 + 0x18) = 0
        
        if (rcx_5 != 0)
            int32_t arg_8 = 0
            (*(*rcx_5 + 0x30))(rcx_5, arg2, &arg_8)
        
        goto label_142a7c8fb

return arg1
