// 函数: sub_14212f820
// 地址: 0x14212f820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = 0xffffffff
int64_t var_28 = 0
int32_t i_2 = 0
void* result = sub_140d3cc80(sub_142543940(), &var_28, 1, 0x10, 0)
int32_t i = i_2
int32_t i_1 = var_18 + 1
int64_t rdx_1 = var_28
int32_t i_3 = i_1

if (i_1 s< i)
    do
        result = sx.q(i_1)
        
        if (*(rdx_1 + (result << 3)) != 0)
            break
        
        result = zx.q(i_1 + 1)
        i_3 = result.d
        i_1 = result.d
    while (result.d s< i)

while (i_1 s>= 0)
    if (i_1 s>= i)
        break
    
    int64_t* rcx_2 = *(rdx_1 + (sx.q(i_1) << 3))
    result = (*(*rcx_2 + 0x458))(rcx_2, zx.q(arg1))
    i = i_2
    i_1 = i_3 + 1
    rdx_1 = var_28
    i_3 = i_1
    
    if (i_1 s< i)
        do
            result = sx.q(i_1)
            
            if (*(rdx_1 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)

if (rdx_1 == 0)
    return result

return sub_140a74f90(rdx_1)
