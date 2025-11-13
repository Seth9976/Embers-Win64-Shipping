// 函数: sub_1424358d0
// 地址: 0x1424358d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = 0xffffffff
int64_t var_28 = 0
int32_t i_2 = 0
void* result = sub_140d3cc80(sub_1425be5e0(), &var_28, 1, 0x10, 0)
int32_t i = i_2
int32_t i_1 = var_18 + 1
int64_t r8_1 = var_28
int32_t i_3 = i_1

if (i_1 s< i)
    do
        result = sx.q(i_1)
        
        if (*(r8_1 + (result << 3)) != 0)
            break
        
        result = zx.q(i_1 + 1)
        i_3 = result.d
        i_1 = result.d
    while (result.d s< i)

while (i_1 s>= 0)
    if (i_1 s>= i)
        break
    
    void* r9_1 = *(r8_1 + (sx.q(i_1) << 3))
    
    if (r9_1 != 0)
        void* rax_2 = *(r9_1 + 0x30)
        
        if (rax_2 != 0 && *(rax_2 + 0xb8) == r9_1)
            sub_1420de830()
            i_1 = i_3
            i = i_2
            r8_1 = var_28
    
    result = zx.q(i_1 + 1)
    i_3 = result.d
    i_1 = result.d
    
    if (result.d s< i)
        do
            result = sx.q(i_1)
            
            if (*(r8_1 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)

if (r8_1 == 0)
    return result

return sub_140a74f90(r8_1)
