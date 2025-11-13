// 函数: sub_140834b90
// 地址: 0x140834b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x90))()
int32_t rcx = data_14396f030

if (rcx == 0xffffffff)
    rcx = data_14396f034

data_14396f030 = rcx

if (rcx != result.d)
    data_14396f030 = result.d
    int32_t rax_1 = data_14399fa50
    int64_t var_28 = 0
    int32_t i_2 = 0
    data_143ce3850 = rax_1
    int32_t var_18_1 = 0xffffffff
    result = sub_140d3cc80(sub_14087dea0(), &var_28, 1, 0x10, 0)
    int32_t i = i_2
    int32_t i_1 = var_18_1 + 1
    int64_t r8_2 = var_28
    int32_t i_3 = i_1
    
    if (i_1 s< i)
        do
            result = sx.q(i_1)
            
            if (*(r8_2 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)
    
    while (i_1 s>= 0)
        if (i_1 s>= i)
            break
        
        result = sub_140857280(*(r8_2 + (sx.q(i_1) << 3)))
        i = i_2
        i_1 = i_3 + 1
        r8_2 = var_28
        i_3 = i_1
        
        if (i_1 s< i)
            do
                result = sx.q(i_1)
                
                if (*(r8_2 + (result << 3)) != 0)
                    break
                
                result = zx.q(i_1 + 1)
                i_3 = result.d
                i_1 = result.d
            while (result.d s< i)
    
    if (r8_2 != 0)
        return sub_140a74f90(r8_2)

return result
