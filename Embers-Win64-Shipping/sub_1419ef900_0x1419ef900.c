// 函数: sub_1419ef900
// 地址: 0x1419ef900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t var_18 = 0xffffffff
int64_t var_28 = 0
int32_t i = 0
void* result = sub_140d3cc80(sub_141a203c0(), &var_28, 1, 0x10, 0)
int32_t i_1 = var_18 + 1
int64_t r9 = var_28
int32_t i_2 = i_1

if (i_1 s< i)
    do
        result = sx.q(i_1)
        
        if (*(r9 + (result << 3)) != 0)
            break
        
        result = zx.q(i_1 + 1)
        int32_t var_18_1 = result.d
        i_1 = result.d
    while (result.d s< i)

while (i_1 s>= 0)
    if (i_1 s>= i)
        break
    
    int32_t rcx_2 = rbx + 1
    bool cond:0_1 = (*(*(r9 + (sx.q(i_1) << 3)) + 0x20b) & 0x48) != 0x48
    result = zx.q(i_1 + 1)
    i_1 = result.d
    int32_t var_18_2 = result.d
    
    if (cond:0_1)
        rcx_2 = rbx
    
    rbx = rcx_2
    
    if (result.d s< i)
        do
            result = sx.q(i_1)
            
            if (*(r9 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            int32_t var_18_3 = result.d
            i_1 = result.d
        while (result.d s< i)

if (r9 == 0)
    return result

return sub_140a74f90(r9)
