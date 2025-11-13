// 函数: sub_142c08d40
// 地址: 0x142c08d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *arg1
int32_t var_28
int32_t var_28_1 = var_28
bool cond:0 = rdx != 0
int64_t result

if (rdx == 0)
    while (true)
        int64_t rdx_1
        
        if (arg1[-1] == 0)
            rdx_1 = 0
        else
            rdx_1 = 1
            bool z_1
            
            if (0 == *arg1)
                *arg1 = 1
                z_1 = true
            else
                *arg1
                z_1 = false
            
            if (not(z_1))
                int64_t rdx_2 = *arg1
                
                if (rdx_2 == 0)
                    continue
                
                result.b = rdx_2 != 0
                return result
        
        cond:0 = rdx_1 != 0
        break

result.b = cond:0
return result
