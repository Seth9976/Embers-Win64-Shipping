// 函数: sub_1420b6320
// 地址: 0x1420b6320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int32_t temp0 = arg2[1].d

if (temp0 == 1)
    sub_140597df0(arg1, *arg2)
    return arg1

if (temp0 s> 1)
    sub_140597df0(arg1, *arg2)
    int32_t i = 1
    
    if (arg2[1].d s> 1)
        int64_t r14_1 = 0x10
        
        do
            int64_t* rcx = *arg2
            int16_t* const var_28
            
            if (arg1[1].d == 0)
                var_28 = &data_142d40450
            else
                var_28 = *arg1
            
            if (*(rcx + r14_1 + 8) == 0)
                int16_t* const var_20_2 = &data_142d40450
            else
                int64_t var_20_1 = *(rcx + r14_1)
            
            uint64_t var_38 = 0
            int64_t var_30_1 = 0
            sub_140b0f5f0(&var_38, &var_28, 2)
            
            if (arg1 == &var_38)
                uint64_t rcx_3 = var_38
                
                if (rcx_3 != 0)
                    sub_140a74f90(rcx_3)
            else
                int64_t rcx_2 = *arg1
                
                if (rcx_2 != 0)
                    sub_140a74f90(rcx_2)
                
                *arg1 = var_38
                arg1[1].d = var_30_1.d
                *(arg1 + 0xc) = var_30_1:4.d
                int64_t var_30_2 = 0
                var_38 = 0
            
            i += 1
            r14_1 += 0x10
        while (i s< arg2[1].d)

return arg1
