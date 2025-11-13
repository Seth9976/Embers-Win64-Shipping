// 函数: sub_141909bb0
// 地址: 0x141909bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xe4) == 0)
    *(arg1 + 0xe4) = 1
    sub_14193e0b0(&arg1[6])
    void* rdi_1 = &arg1[0xe]
    int64_t i_1 = 4
    int64_t i
    
    do
        *(rdi_1 + 0x10) = arg1[0x1b]
        rdi_1 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t rcx_4 = arg1[0x1c].d
int32_t result = rcx_4 + 1
arg1[0x1c].d = result

if (rcx_4 s<= 0)
    arg1[4] = 0
    *(arg1 + 0xa) = data_143f0f1f4
    char rax_3 = data_143f0f1f5
    *(arg1 + 0xb) = rax_3
    
    if (rax_3 == 0)
        if (*(arg1 + 0xa) == 0)
            goto label_141909c4e
        
    label_141909c5d:
        *(arg1 + 0xd) = sub_140af3aa0()
        rax_3 = *(arg1 + 0xb)
        
        if (*(arg1 + 0xa) == 0)
            goto label_141909c6a
        
        if (rax_3 == 0)
        label_141909ca6:
            rcx_4.b = 1
            sub_140b00890(rcx_4.b)
            arg1[1].b = 1
            void*** rax_7 = j_sub_140a82f30(0x70)
            void*** r14_1 = rax_7
            
            if (rax_7 == 0)
                r14_1 = nullptr
            else
                rax_7[1] = 0
                rax_7[2] = 0
                *r14_1 = &data_142ff4a18
                sub_141929f10(&r14_1[3], arg2, 1)
                sub_14192a0d0(&r14_1[0xb], arg2)
                sub_14193e0b0(&r14_1[3])
            
            arg1[3] = r14_1
            (*r14_1)[1](r14_1)
        else
        label_141909c98:
            int32_t rax_5 = arg1[2].d
            
            if (rax_5 == 0)
                goto label_141909ca6
            
            arg1[2].d = rax_5 - 1
    else
        *(arg1 + 0xa) = 0
    label_141909c4e:
        
        if (*(arg1 + 0xc) != 0)
        label_141909c6a:
            
            if (rax_3 != 0)
                goto label_141909c98
        else if (rax_3 != 0)
            goto label_141909c5d
        
        if (*(arg1 + 0xc) != 0)
            sub_140e0f7b0(&arg1[0x1e], 0)
            sub_140b00890(*(arg1 + 0xd))
    
    *(arg1 + 0xc) = *(arg1 + 0xb)
    
    if (data_1439c7a38 == 1 && data_143f0f161 != 0)
        sub_14194e210(&arg1[6])
    
    result = sub_140af3aa0()
    
    if (result.b != 0)
        int32_t arg_8 = 0xff00ff00
        return (*(*arg1 + 0x10))(arg1, u"FRAME", 0xff00ff00)

return result
