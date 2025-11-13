// 函数: sub_142465460
// 地址: 0x142465460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x28) = *(arg2 + 0x28)

if (arg1 + 0x30 != arg2 + 0x30)
    int64_t rsi_1 = sx.q(*(arg2 + 0x38))
    int64_t r14_1 = *(arg2 + 0x30)
    int32_t r8_1 = *(arg1 + 0x3c)
    *(arg1 + 0x38) = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_141acb760(arg1 + 0x30, rsi_1.d, r8_1)
        memcpy(*(arg1 + 0x30), r14_1, (rsi_1 * 0x30).d)
    else
        *(arg1 + 0x3c) = rsi_1.d

*(arg1 + 0x40) = *(arg2 + 0x40)

if (arg1 + 0x48 != arg2 + 0x48)
    int64_t rsi_2 = sx.q(*(arg2 + 0x50))
    int64_t r14_2 = *(arg2 + 0x48)
    int32_t r8_4 = *(arg1 + 0x54)
    *(arg1 + 0x50) = rsi_2.d
    
    if (rsi_2.d != 0 || r8_4 != 0)
        sub_14119a550(arg1 + 0x48, rsi_2.d, r8_4)
        memcpy(*(arg1 + 0x48), r14_2, (rsi_2 << 3).d)
    else
        *(arg1 + 0x54) = rsi_2.d

*(arg1 + 0x58) = *(arg2 + 0x58)
*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x62) = *(arg2 + 0x62)

if (arg1 + 0x68 != arg2 + 0x68)
    int32_t i_2 = *(arg1 + 0x70)
    
    if (i_2 != 0)
        int64_t* rdi_3 = *(arg1 + 0x68) + 0x28
        int32_t i
        
        do
            int64_t* rbx_2 = *rdi_3
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp2_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rdi_3 = &rdi_3[6]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = *(arg2 + 0x70)
    void* rbx_3 = *(arg2 + 0x68)
    int32_t r8_7 = *(arg1 + 0x74)
    *(arg1 + 0x70) = i_3
    
    if (i_3 != 0 || r8_7 != 0)
        sub_1405a4b40(arg1 + 0x68, i_3, r8_7)
        void* rdi_4 = *(arg1 + 0x68)
        
        if (i_3 != 0)
            int64_t* rbx_4 = rbx_3 + 8
            int32_t i_1
            
            do
                public: __cdecl std::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0>::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0><class <lambda_508dc996854572947a45292d62928d80> &>(class <lambda_508dc996854572947a45292d62928d80> &)(
                    rdi_4, &rbx_4[-1])
                *(rdi_4 + 8) = *rbx_4
                *(rdi_4 + 0x10) = rbx_4[1].d
                *(rdi_4 + 0x14) = *(rbx_4 + 0xc)
                *(rdi_4 + 0x18) = rbx_4[2].d
                *(rdi_4 + 0x20) = rbx_4[3]
                void* rax_14 = rbx_4[4]
                *(rdi_4 + 0x28) = rax_14
                
                if (rax_14 != 0)
                    *(rax_14 + 8) += 1
                
                rdi_4 += 0x30
                rbx_4 = &rbx_4[6]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x74) = i_3

*(arg1 + 0x78) = *(arg2 + 0x78)
*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x98) = *(arg2 + 0x98)
*(arg1 + 0xa8) = *(arg2 + 0xa8)
return arg1
