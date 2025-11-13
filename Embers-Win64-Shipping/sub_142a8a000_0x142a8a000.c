// 函数: sub_142a8a000
// 地址: 0x142a8a000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = -1
uint64_t rbx = zx.q(arg2)

if (arg2 s< 0)
    rbx = -1
    
    do
        rbx += 1
    while (arg1[rbx] != 0)

int32_t rcx = rbx.d

if (rbx.d s< 0)
    do
        rax += 1
    while (arg1[rax] != 0)
    
    rcx = rax.d

uint32_t result

if (rcx - 5 u<= 3)
    result = sub_142a89d60(arg1, rcx)

if (rcx - 5 u<= 3 && result.b != 0)
    result.b = 1
    return result

if (rbx.d == 4)
    result.b = *arg1 - 0x30
    
    if (result.b u<= 9 && sub_142a89d60(&arg1[1], (rbx - 1).d).b != 0)
        result.b = 1
        return result

result.b = 0
return result
