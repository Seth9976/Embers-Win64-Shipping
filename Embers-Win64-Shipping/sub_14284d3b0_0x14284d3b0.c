// 函数: sub_14284d3b0
// 地址: 0x14284d3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 - 1 u<= 0xbd && arg3 != 0 && arg4 != 0 && arg5 != 0)
    if (arg2 - 0x6f u<= 3)
        return 0x80070032
    
    int64_t arg_30
    
    if (sub_14284da70(arg3, arg4, &arg_30) != 0)
        sub_14284d590(arg1)
        arg1[6] = arg_30
        arg1[5] = arg5
        arg1[7] = 0
        arg1[2] = arg3
        arg1[3] = arg4
        arg1[4] = 1
        arg1[8].d = arg2
        *(arg1 + 0x44) = 3
        int64_t var_38
        uint64_t _Count_1
        
        if (sub_14284d5f0(&arg1[2], arg6, &var_38, &_Count_1) == 0)
            return 0x80070216
        
        int64_t rdi_1 = var_38
        int64_t rax_7 = 0x30 * rdi_1
        
        if (mulu.dp.q(0x30, rdi_1) u>> 0x40 != zx.o(0))
            rax_7 = -1
        
        int64_t rax_8 = j_sub_140a82f30(rax_7)
        arg1[9] = rax_8
        
        if (rax_8 != 0)
            *arg1 = rdi_1
            memset(rax_8, 0, rdi_1 * 0x30)
            uint64_t _Count = _Count_1
            int64_t rax_9 = _aligned_malloc(_Count, 0x10)
            arg1[0xa] = rax_9
            
            if (rax_9 != 0)
                int64_t rax_11 = arg1[9]
                arg1[1] = _Count
                
                if (sub_14284d7b0(rax_9, _Count, &arg1[2], arg6, rax_11, rdi_1) != 0)
                    return 0
                
                sub_14284d590(arg1)
                return 0x80004005
            
            sub_14284d590(arg1)
        
        return 0x8007000e

return 0x80070057
