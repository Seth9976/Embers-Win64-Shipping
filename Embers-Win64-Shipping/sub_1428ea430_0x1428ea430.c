// 函数: sub_1428ea430
// 地址: 0x1428ea430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t var_14
int32_t* var_20 = &var_14
int32_t var_18
int32_t* var_28 = &var_18
int32_t arg_18

if (sub_1425f29b0(arg2, "%d.%d.%d.%d", &arg_18) == 4)
    int32_t rax_2 = arg_18
    
    if (rax_2 u<= 0xff && arg3 u<= 0xff)
        int32_t rdx = var_18
        
        if (rdx u<= 0xff)
            int32_t r8_1 = var_14
            
            if (r8_1 u<= 0xff)
                *arg1 = rax_2.b
                arg1[1] = arg3.b
                arg1[2] = rdx.b
                arg1[3] = r8_1.b
                return 1

return 0
