// 函数: sub_14265f910
// 地址: 0x14265f910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x150))()

if (arg3 == result && arg2 != 0)
    if (data_143f71424 == 0)
        void* var_28 = &arg1[0x49]
        void* var_20_1 = &arg1[0x6a]
        sub_1426482b0(&var_28, arg2)
        result = sub_1420e6590(arg2)
        
        if (result.b == 0)
            int64_t* rbx_1 = arg1[0x12]
            int64_t rdi_1 = 0
            result = &rbx_1[arg1[0x13]]
            uint64_t r14_2 = sx.q(arg1[0x13].d) << 3 u>> 3
            
            if (rbx_1 u> result)
                r14_2 = 0
            
            if (r14_2 != 0)
                do
                    int64_t* rcx_2 = *rbx_1
                    
                    if (rcx_2 != 0)
                        result = (*(*rcx_2 + 0x660))(rcx_2, arg2, arg3)
                    
                    rbx_1 = &rbx_1[1]
                    rdi_1 += 1
                while (rdi_1 != r14_2)
    
    if (arg1[0x15].d s> 0)
        return (*(*arg1 + 0x330))(arg1)

return result
