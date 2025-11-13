// 函数: sub_141091110
// 地址: 0x141091110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg2[1].d s<= 0)
    int64_t rax
    rax.b = 1
    return rax

int64_t r8 = *arg2
int64_t rdi = 0
uint64_t rax_2

do
    rax_2 = sub_1410911f0(sx.q(i) * 0x5240 + r8)
    r8 = *arg2
    
    if (*(rdi + r8 + 0x1548) s< 3)
        rax_2.b = 0
        return rax_2
    
    int32_t rcx_2 = *(data_143e2de08 + 4)
    
    if (rcx_2 s< 1 || rax_2.d != 1 || rcx_2 s< 2)
        rax_2.b = 0
        return rax_2
    
    if (rcx_2 != 3 && data_143f0f1c5 == 0)
        rax_2.b = 0
        return rax_2
    
    i += 1
    rdi += 0x5240
while (i s< arg2[1].d)

rax_2.b = 1
return rax_2
