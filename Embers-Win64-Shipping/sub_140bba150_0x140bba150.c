// 函数: sub_140bba150
// 地址: 0x140bba150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x2a)

if ((rax & 0x20) == 0 || (rax & 0x40) != 0)
    uint64_t rax_1 = sub_140d3c6e0(arg2)
    uint64_t r8_1 = rax_1
    
    if (rax_1 == 0 && (arg2[6] | arg2[5] | arg2[4] | arg2[3]) != 0)
        if (rax_1.d == data_1439a9d84)
            data_1439a9d84 = 0
        else
            rax_1 = zx.q(data_1439a9d84)
        
        if (rax_1.d != arg2[2] || *arg2 != 0xffffffff)
            void* rax_2 = sub_140ccdeb0(&arg2[3])
            sub_140d3a3a0(arg2, rax_2)
            
            if (rax_2 != 0 || data_143e1d7b4 == 0)
                int32_t rax_3 = 0
                
                if (0 == data_1439a9d84)
                    data_1439a9d84 = 0
                else
                    rax_3 = data_1439a9d84
                
                arg2[2] = rax_3
            
            r8_1 = sub_140d3c6e0(arg2)
    
    int64_t rax_5 = *arg1
    uint64_t arg_8 = r8_1
    (*(rax_5 + 0x130))(arg1, &arg_8, r8_1)
    uint64_t rbx_2 = arg_8
    
    if ((arg1[5].b & 1) != 0)
    label_140bba215:
        
        if (rbx_2 == 0)
            *arg2 = 0xffffffff
            __builtin_memset(&arg2[1], 0, 0x18)
        else
            void var_18
            *(arg2 + 0xc) = *sub_140cbceb0(&var_18, rbx_2)
            sub_140d3a3a0(arg2, rbx_2)
            int32_t rax_7 = 0
            
            if (0 == data_1439a9d84)
                data_1439a9d84 = 0
            else
                rax_7 = data_1439a9d84
            
            arg2[2] = rax_7
    else if (rbx_2 != 0 && (*(arg1 + 0x2a) & 0x40) != 0)
        goto label_140bba215

return arg1
