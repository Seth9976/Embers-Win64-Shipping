// 函数: sub_14262d530
// 地址: 0x14262d530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r11 = *(arg1 + 0x48)
int64_t rbp = 0
uint32_t i = arg1[0x14]
int32_t r10 = 0
int64_t rbx = *r11

if (i s> 0)
    while (rbx != arg2)
        rbp = rbx
        r10 += 1
        rbx = *r11
        r11 = &r11[1]
        
        if (r10 s>= i)
            break

if (r10 == i)
    i.b = 0
else
    uint64_t r9_1 = zx.q(r10)
    
    if (r10 s< i)
        int64_t r8 = sx.q(r10)
        int64_t r11_1 = r8
        
        do
            int64_t rdx = *(arg1 + 0x48)
            int64_t rcx_1 = r8 - r11_1
            r9_1 = zx.q(r9_1.d + 1)
            int64_t rax = *(rdx + (r8 << 3))
            r8 += 1
            *(rdx + (rcx_1 << 3)) = rax
            i = arg1[0x14]
        while (r9_1.d s< i)
    
    arg1[0x14] = i - r10
    *arg3 = rbp
    arg3[1] = rbx
    int32_t* var_10_1 = arg5
    
    if (((sub_14260fe90(*arg6, rbp, rbx, r9_1, arg4) u>> 0x1e).b & 1) == 0)
        i.b = 0
    else
        *arg1 = *arg5
        arg1[1] = arg5[1]
        arg1[2] = arg5[2]
        i.b = 1

return i
