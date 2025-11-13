// 函数: sub_142008740
// 地址: 0x142008740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x30) == 0)
    void var_38
    sub_1423ddaf0(data_143f5b298, &var_38)
    char rax_1 = sub_141e80b60(&var_38)
    int64_t rdx_2
    
    if (rax_1 != 0)
        rdx_2 = *(arg1 + 0x28)
    
    if (rax_1 == 0 || rdx_2 == 0)
        sub_141e71cd0(&var_38)
    else
        int64_t r8_1
        r8_1.b = 1
        int64_t* var_30
        (*(*var_30 + 0x40))(var_30, rdx_2, r8_1, 0, 1)
        int64_t* r8_2 = *(arg1 + 0x28)
        int64_t rbx_1 = *r8_2
        void arg_8
        int64_t* rax_4 = (*(*var_30 + 0x80))(var_30, &arg_8, r8_2)
        (*(rbx_1 + 0x308))(*(arg1 + 0x28), *rax_4)
        void* rcx_5 = *(arg1 + 0x28)
        int64_t r14_1 = *(rcx_5 + 0x278)
        int64_t rbx_2 = sx.q(*(rcx_5 + 0x274))
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q((rbx_2 * 5).d << 6)
        int32_t rbp_2 = int.d(sub_142366f80(rcx_5)) * 2
        *(arg1 + 0x4c) = divs.dp.d(temp2_1:temp3_1, rbp_2) + 1
        int32_t rax_10 = divs.dp.d(temp2_1:temp3_1, rbp_2) + 1 + *(arg1 + 0x40)
        *(arg1 + 0x40) = rax_10
        
        if (rax_10 s> *(arg1 + 0x44))
            sub_1405daba0(arg1 + 0x38)
        
        *(arg1 + 0x48) = 0
        int32_t r9_1 = 0x140
        *(arg1 + 0x58) = 0x140
        int32_t r11_1 = -1
        
        if (rbx_2 s> 1)
            void* r8_3 = 1
            
            do
                uint32_t rcx_7 = zx.d(*(r8_3 + r14_1))
                uint8_t rdx_9 = (not.d(rcx_7)).b
                int64_t r10_1 = sx.q(divs.dp.d(sx.q(r9_1), rbp_2))
                
                if ((rcx_7.b & 0x80) == 0)
                    rdx_9 = rcx_7.b
                
                if (r10_1.d != r11_1)
                    r11_1 = r10_1.d
                    *(r10_1 + *(arg1 + 0x38)) = rdx_9 * 2
                
                r9_1 += 0x280
                r8_3 += 2
            while (r8_3 s< rbx_2)
        
        *(arg1 + 0x30) = 1
        sub_141e71cd0(&var_38)

*(arg1 + 0x48) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x54) = 0
