// 函数: sub_141c6f640
// 地址: 0x141c6f640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_141c6cda0(arg1 + 0x1c0)

if (arg2 != 0)
    int64_t* rbx_1 = nullptr
    int64_t* arg_8
    
    if (arg3 == 0)
        result = (*(*arg2 + 0x88))(arg2)
        
        if (result != 0)
            int64_t r8 = *result
            result = (*(r8 + 0x260))(result, &arg_8, r8)
            goto label_141c6f6ac
    else
        result = (*(*arg3 + 0x260))(arg3, &arg_8)
    label_141c6f6ac:
        int64_t* rdi_1 = nullptr
        void arg_10
        
        if (&arg_10 != result)
            rbx_1 = *result
            *result = 0
            rdi_1 = rbx_1
        
        int64_t* rcx_4 = arg_8
        
        if (rcx_4 != 0)
            result = (**rcx_4)(rcx_4, 1)
        
        if (rdi_1 != 0)
            void* rax_3 = *(arg1 + 0x88)
            int32_t rcx_5
            
            if (rax_3 == 0)
                rcx_5 = 0
            else
                rcx_5 = *(rax_3 + 0x14)
            
            int32_t var_2c_1 = rcx_5
            int32_t rcx_6
            
            if (rax_3 == 0)
                rcx_6 = 0
            else
                rcx_6 = *(rax_3 + 0x958)
            
            int32_t var_34_1 = rcx_6
            uint128_t zmm0_1
            
            if (rax_3 == 0)
                zmm0_1 = zx.o(0)
            else
                zmm0_1 = _mm_cvtepi32_ps(zx.o(*(rax_3 + 0xc)))
            
            int32_t var_38 = 1
            int64_t* rax_6 =
                (*(*arg2 + 0x78))(arg2, &arg_8, &var_38, rbx_1, var_38, (int.q(zmm0_1.d)).d, rax_3)
            
            if (arg1 + 0x1e0 != rax_6)
                int64_t* rcx_8 = *(arg1 + 0x1e0)
                *(arg1 + 0x1e0) = *rax_6
                *rax_6 = 0
                
                if (rcx_8 != 0)
                    (**rcx_8)(rcx_8, 1, arg1 + 0x1e0)
            
            int64_t* rcx_9 = arg_8
            
            if (rcx_9 != 0)
                (**rcx_9)(rcx_9, 1)
            
            return (**rbx_1)(rbx_1, 1)

return result
