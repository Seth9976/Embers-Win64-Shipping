// 函数: sub_140b56e20
// 地址: 0x140b56e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg1[1].d)
int16_t* i = *arg1
void* r9 = arg2
int32_t r10_1 = r10.d & 0x80000001

if (r10_1 s< 0)
    r10_1 = ((r10_1 - 1) | 0xfffffffe) + 1

if (r10_1 == 1)
    int16_t rcx = *i
    
    if (rcx - 0x30 u<= 9)
        rcx.b -= 0x30
    else if (rcx - 0x41 u<= 5)
        rcx.b -= 0x37
    else if (rcx - 0x61 u> 5)
        rcx.b = 0
    else
        rcx.b -= 0x57
    
    *arg2 = rcx.b
    r9 = &arg2[1]
    i = &i[1]

while (i != &i[r10])
    int16_t rdx = *i
    
    if (rdx - 0x30 u> 9)
        if (rdx - 0x41 u<= 5)
            rdx.b -= 0x37
        else if (rdx - 0x61 u> 5)
            rdx.b = 0
        else
            rdx.b -= 0x57
    
    int16_t rax_7 = i[1]
    rdx.b <<= 4
    
    if (rax_7 - 0x30 u<= 9)
        rax_7.b -= 0x30
    else if (rax_7 - 0x41 u<= 5)
        rax_7.b -= 0x37
    else if (rax_7 - 0x61 u> 5)
        rax_7.b = 0
    else
        rax_7.b -= 0x57
    
    rax_7.b |= rdx.b
    i = &i[2]
    *r9 = rax_7.b
    r9 += 1

return zx.q(r9.d - arg2.d)
