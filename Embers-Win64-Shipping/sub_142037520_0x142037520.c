// 函数: sub_142037520
// 地址: 0x142037520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141e80b60(arg1 + 0x68)

if (result.b != 0)
    int64_t var_28 = 0
    int32_t i_2 = 0
    int32_t var_18_1 = 0xffffffff
    int32_t var_38_1 = 0
    int64_t r9_1
    result, r9_1 = sub_140d3cc80(sub_1425a4180(), &var_28, 1, 0x10, 0)
    int32_t i = i_2
    int32_t i_1 = var_18_1 + 1
    int64_t r10_1 = var_28
    int32_t i_3 = i_1
    
    if (i_1 s< i)
        do
            result = sx.q(i_1)
            
            if (*(r10_1 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)
    
    while (i_1 s>= 0)
        if (i_1 s>= i)
            break
        
        int64_t* rcx_2 = *(arg1 + 0x70)
        r9_1.b = 1
        var_38_1.b = 0
        result, r9_1 = (*(*rcx_2 + 0x40))(rcx_2, *(r10_1 + (sx.q(i_1) << 3)), 0, r9_1, 0)
        i = i_2
        i_1 = i_3 + 1
        r10_1 = var_28
        i_3 = i_1
        
        if (i_1 s< i)
            do
                result = sx.q(i_1)
                
                if (*(r10_1 + (result << 3)) != 0)
                    break
                
                result = zx.q(i_1 + 1)
                i_3 = result.d
                i_1 = result.d
            while (result.d s< i)
    
    if (r10_1 != 0)
        result = sub_140a74f90(r10_1)

data_143a2e1b0 = 0
return result
