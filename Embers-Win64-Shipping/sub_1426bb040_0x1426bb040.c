// 函数: sub_1426bb040
// 地址: 0x1426bb040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = 0xffffffff
int64_t var_28 = 0
int32_t i_2 = 0
void* result = sub_140d3cc80(sub_14272e090(), &var_28, 1, 0x10, 0)
int32_t i = i_2
int32_t i_1 = var_18 + 1
int64_t rcx_1 = var_28
int32_t i_3 = i_1

if (i_1 s< i)
    do
        result = sx.q(i_1)
        
        if (*(rcx_1 + (result << 3)) != 0)
            break
        
        result = zx.q(i_1 + 1)
        i_3 = result.d
        i_1 = result.d
    while (result.d s< i)

while (i_1 s>= 0)
    if (i_1 s>= i)
        break
    
    void* r9_1 = *(rcx_1 + (sx.q(i_1) << 3))
    
    if (*(r9_1 + 0x30) == arg1)
        sub_1426c2c70(r9_1)
        void* r8_1 = *(var_28 + (sx.q(i_3) << 3))
        int64_t rax_3 = *(r8_1 + 0x30)
        int32_t rcx_4
        
        if (rax_3 != 0)
            rcx_4 = 1
        
        if (rax_3 == 0 || (*(rax_3 + 0x48) & 1) == 0)
            rcx_4 = 0
        
        int32_t r10_1 = 0
        int32_t r11_1 = *(r8_1 + 0x40)
        int32_t rax_6 = (*(r8_1 + 0x48) & 0xfffffffe) | rcx_4
        *(r8_1 + 0x48) = rax_6
        
        if (r11_1 s> 0)
            int64_t r9_2 = 0
            
            while ((rax_6.b & 1) == 0)
                r10_1 += 1
                int32_t rdx_2 = *(r9_2 + *(r8_1 + 0x38) + 0x10)
                r9_2 += 0x18
                int32_t rdx_6 = (((rdx_2 | rax_6) ^ rax_6) & 1) ^ rax_6
                *(r8_1 + 0x48) = rdx_6
                rax_6 = rdx_6
                
                if (r10_1 s>= r11_1)
                    break
        
        sub_1426bb040(*(var_28 + (sx.q(i_3) << 3)))
        i_1 = i_3
        i = i_2
        rcx_1 = var_28
    
    result = zx.q(i_1 + 1)
    i_3 = result.d
    i_1 = result.d
    
    if (result.d s< i)
        do
            result = sx.q(i_1)
            
            if (*(rcx_1 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)

if (rcx_1 == 0)
    return result

return sub_140a74f90(rcx_1)
