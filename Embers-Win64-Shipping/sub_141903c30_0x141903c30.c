// 函数: sub_141903c30
// 地址: 0x141903c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x50)

if (result == 0)
    result = *(arg1 + 0x58)
    
    if (result != 0)
        uint64_t result_2 = result
        
        if (*(result + 0x40) == 0)
            result = zx.q(*(result + 0xa0))
            
            if (*(arg1 + 0x6c) != result.d)
                sub_1405d16e0(arg1 + 0x60, nullptr)
                result_2 = *(arg1 + 0x58)
                result = zx.q(*(result_2 + 0xa0))
                *(arg1 + 0x6c) = result.d
        
        if (*(arg1 + 0x60) == 0 || *(result_2 + 0x40) u> 1)
            void*** rax_3 = j_sub_140a82f30(0x38)
            
            if (rax_3 == 0)
                rax_3 = nullptr
            else
                int64_t rcx_5 = *(arg1 + 0x18)
                *rax_3 = &data_142d3ff08
                rax_3[1].d = 0
                *(rax_3 + 0xc) = 0
                rax_3[2].w = 0x100
                rax_3[3] = rcx_5
                *rax_3 = &data_142ff1be0
                __builtin_memset(&rax_3[4], 0, 0x18)
            
            sub_1405d16e0(arg1 + 0x60, rax_3)
            void* r8_3 = *(arg1 + 0x58)
            void* rdx_4 = r8_3 + 0x28
            
            if (r8_3 == 0)
                rdx_4 = nullptr
            
            return sub_1418dadb0(*(arg1 + 0x60), rdx_4, *(arg1 + 0x68), *(r8_3 + 0x78), 
                *(r8_3 + 0x1c))
    else if (*(arg1 + 0x20) == 0 && *(arg1 + 0x30) == 0)
        int32_t rsi_1 = *(arg1 + 0x68)
        int64_t* rcx_8 = *(arg1 + 0x28)
        
        if (rsi_1 == 0)
            rsi_1 = *(rcx_8 + 0x3c)
        
        void* rax_7 = (*(*rcx_8 + 8))(rcx_8)
        
        if (rax_7 != 0)
            char var_10_1 = 0
            int32_t var_20_1 = 0
            int32_t var_28_1 = 1
            return sub_1418f7420(arg1 + 0x30, *(arg1 + 0x18), *(rax_7 + 0x80), 1, *(rax_7 + 0xe4), 
                rsi_1, (&data_1439c85fc)[sx.q(rsi_1) * 0xa], *(arg1 + 0x48), 1, 0, 1, 0)
        
        int64_t* rcx_10 = *(arg1 + 0x28)
        void* rax_11 = (*(*rcx_10 + 0x20))(rcx_10)
        
        if (rax_11 != 0)
            char var_10_2 = 0
            int32_t var_20_2 = 0
            int32_t var_28_2 = 1
            return sub_1418f7420(arg1 + 0x30, *(arg1 + 0x18), *(rax_11 + 0x80), 3, 
                *(rax_11 + 0xe4), rsi_1, (&data_1439c85fc)[sx.q(rsi_1) * 0xa], *(arg1 + 0x48), 1, 
                0, 1, 0)
        
        int64_t* rcx_13 = *(arg1 + 0x28)
        result = (*(*rcx_13 + 0x18))(rcx_13)
        uint64_t result_3 = result
        int32_t r9_3
        
        if (result != 0)
            r9_3 = 2
        label_141903f12:
            char var_10_3 = 0
            int32_t var_20_3 = 0
            int32_t var_28_3 = 1
            return sub_1418f7420(arg1 + 0x30, *(arg1 + 0x18), *(result_3 + 0x88), r9_3, 
                *(result_3 + 0xec), rsi_1, (&data_1439c85fc)[sx.q(rsi_1) * 0xa], *(arg1 + 0x48), 1, 
                0, *(result + 0x68), 0)
        
        int64_t* rcx_14 = *(arg1 + 0x28)
        result = (*(*rcx_14 + 0x10))(rcx_14)
        result_3 = result
        
        if (result != 0)
            r9_3 = 5
            goto label_141903f12
else
    uint64_t result_1 = result
    
    if (*(result + 0x38) == 0)
        result = zx.q(*(result + 0x98))
        
        if (*(arg1 + 0x6c) != result.d)
            sub_1405d16e0(arg1 + 0x60, nullptr)
            result_1 = *(arg1 + 0x50)
            result = zx.q(*(result_1 + 0x98))
            *(arg1 + 0x6c) = result.d
    
    if (*(arg1 + 0x60) == 0 || *(result_1 + 0x38) u> 1)
        void*** rax = j_sub_140a82f30(0x38)
        
        if (rax == 0)
            rax = nullptr
        else
            int64_t rcx_1 = *(arg1 + 0x18)
            *rax = &data_142d3ff08
            rax[1].d = 0
            *(rax + 0xc) = 0
            rax[2].w = 0x100
            rax[3] = rcx_1
            *rax = &data_142ff1be0
            __builtin_memset(&rax[4], 0, 0x18)
        
        sub_1405d16e0(arg1 + 0x60, rax)
        void* r8_1 = *(arg1 + 0x50)
        void* rdx_2 = r8_1 + 0x20
        
        if (r8_1 == 0)
            rdx_2 = nullptr
        
        return sub_1418dadb0(*(arg1 + 0x60), rdx_2, *(arg1 + 0x68), *(r8_1 + 0x70), *(r8_1 + 0x18))

return result
