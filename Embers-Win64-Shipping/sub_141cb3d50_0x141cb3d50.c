// 函数: sub_141cb3d50
// 地址: 0x141cb3d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg1[0x1c].d s> 0)
    result = (*(*arg1 + 0x178))(arg3, sx.q(*(arg1 + 0xe4)))
    int32_t i = 0
    
    if (arg1[0x1c].d s> 0)
        do
            int32_t var_828 = 0
            char var_824_1 = 0
            int32_t var_22_1 = 0
            sub_140b5b600(arg1, &var_828, arg2)
            void arg_8
            int64_t* rax_1
            rax_1, arg2 = sub_140b57e80(&arg_8, &var_828)
            int64_t rbp_1 = sx.q(arg1[0x39].d)
            int32_t rcx_2 = (rbp_1 + 1).d
            arg1[0x39].d = rcx_2
            
            if (rcx_2 s> *(arg1 + 0x1cc))
                sub_1405a4d70(&arg1[0x38])
            
            i += 1
            result = *rax_1
            *(arg1[0x38] + (rbp_1 << 3)) = result
        while (i s< arg1[0x1c].d)

return result
