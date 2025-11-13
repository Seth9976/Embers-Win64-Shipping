// 函数: sub_1423bd410
// 地址: 0x1423bd410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = 0xffffffff
int64_t var_28 = 0
int32_t i_2 = 0
void* result = sub_140d3cc80(sub_1425b3af0(), &var_28, 1, 0x10, 0)
int32_t i = i_2
int32_t i_1 = var_18 + 1
int64_t r9 = var_28
int32_t i_3 = i_1

if (i_1 s< i)
    do
        result = sx.q(i_1)
        
        if (*(r9 + (result << 3)) != 0)
            break
        
        result = zx.q(i_1 + 1)
        i_3 = result.d
        i_1 = result.d
    while (result.d s< i)

while (i_1 s>= 0)
    if (i_1 s>= i)
        break
    
    int64_t* rcx_2 = *(*(r9 + (sx.q(i_1) << 3)) + 0xe0)
    
    if (rcx_2 != 0 && *(rcx_2 + 0x54) == 0)
        (*(*rcx_2 + 0x20))(rcx_2)
        i_1 = i_3
        i = i_2
        r9 = var_28
    
    result = zx.q(i_1 + 1)
    i_3 = result.d
    i_1 = result.d
    
    if (result.d s< i)
        do
            result = sx.q(i_1)
            
            if (*(r9 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)

if (r9 == 0)
    return result

return sub_140a74f90(r9)
