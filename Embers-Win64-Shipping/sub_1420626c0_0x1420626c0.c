// 函数: sub_1420626c0
// 地址: 0x1420626c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = 0
char* result = arg1

while (arg3 != 0)
    char* rcx = *arg2
    char r9_1 = *rcx
    *arg2 = &rcx[1]
    char rdx = rcx[1]
    *arg2 = &rcx[2]
    char rbx_1 = rcx[2]
    *arg2 = &rcx[3]
    char r10_1 = rcx[3]
    *arg2 = &rcx[4]
    *result = r9_1
    result[1] = rdx
    result[2] = rbx_1
    result[3] = r10_1
    result = &result[4]
    
    if (r9_1 != 1 || rdx != r9_1 || rbx_1 != r9_1)
        r11 = 0
        arg3 -= 1
    else
        uint32_t j = zx.d(r10_1) << r11.b
        
        while (j s> 0)
            *result = 0x101
            arg3 -= 1
            result[2] = 1
            j -= 1
            result[3] = r10_1
            result = &result[4]
        
        r11 += 8

return result
