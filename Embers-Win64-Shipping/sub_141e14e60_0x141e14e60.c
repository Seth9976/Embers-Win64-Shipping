// 函数: sub_141e14e60
// 地址: 0x141e14e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*arg1)
int32_t rbp = arg4[1].d
int64_t r9 = *arg4
int32_t r11 = rbp
int32_t rdi_2 = rbp - result.d - 1

if (*(r9 + result * 0xc) != arg2)
    int64_t rdx_1 = r9
    int32_t rbx_1 = result.d
    
    do
        int32_t temp2_1 = r11
        r11 -= 1
        r9 = rdx_1
        
        if (temp2_1 - 1 s< 0)
            break
        
        if (rbx_1 == 0 && arg3 == 0)
            break
        
        int32_t temp1_1 = mods.dp.d(sx.q(rdi_2 + 1), rbp)
        rdi_2 = temp1_1
        result = zx.q(rbp - temp1_1 - 1)
        *arg1 = result.d
        rbx_1 = result.d
        r9 = *arg4
        rdx_1 = r9
    while (*(r9 + sx.q(result.d) * 0xc) != arg2)

if (result.d s< 0 || result.d s>= arg4[1].d)
    *arg1 = 0xffffffff
else
    result = sx.q(result.d) * 3
    
    if (*(r9 + (result << 2)) != arg2)
        *arg1 = 0xffffffff

return result
