// 函数: sub_141e551e0
// 地址: 0x141e551e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *data_143f399f0
int32_t* result
result.b = rbx != 0

if (data_143a2d2b8 != result.b)
    int64_t var_28 = 0
    int32_t i_2 = 0
    data_143a2d2b8 = result.b
    int32_t var_18_1 = 0xffffffff
    result = sub_140d3cc80(sub_1424718b0(), &var_28, 1, 0x10, 0)
    int32_t i = i_2
    int32_t i_1 = var_18_1 + 1
    int64_t r9_1 = var_28
    int32_t i_3 = i_1
    
    if (i_1 s< i)
        do
            result = sx.q(i_1)
            
            if (*(r9_1 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)
    
    while (i_1 s>= 0)
        if (i_1 s>= i)
            break
        
        void* r10_1 = *(r9_1 + (sx.q(i_1) << 3))
        
        if (((*(*(r10_1 + 0x20) + 8) u>> 4).b & 1) == 0)
            if (rbx == 0 || (*(r10_1 + 0x88) & 1) == 0)
                sub_141e68c80(r10_1)
            else
                sub_141e63970(r10_1)
            
            r9_1 = var_28
            i = i_2
            i_1 = i_3
        
        result = zx.q(i_1 + 1)
        i_3 = result.d
        i_1 = result.d
        
        if (result.d s< i)
            do
                result = sx.q(i_1)
                
                if (*(r9_1 + (result << 3)) != 0)
                    break
                
                result = zx.q(i_1 + 1)
                i_3 = result.d
                i_1 = result.d
            while (result.d s< i)
    
    if (r9_1 != 0)
        return sub_140a74f90(r9_1)

return result
