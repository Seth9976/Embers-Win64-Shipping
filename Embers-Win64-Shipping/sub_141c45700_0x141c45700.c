// 函数: sub_141c45700
// 地址: 0x141c45700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int32_t* rbx = arg1 + 8
int64_t i_1 = 7
int64_t count = rdi << 2
int64_t i

do
    *rbx = 0
    int32_t rdx = 0
    
    if (rdi.d s> rbx[1])
        sub_140775b10(&rbx[-2], rdi.d)
        rdx = *rbx
    
    int32_t rax_1 = rdx + rdi.d
    *rbx = rax_1
    
    if (rax_1 s> rbx[1])
        sub_140775270(&rbx[-2])
    
    memset(*(rbx - 8), 0, count)
    rbx = &rbx[4]
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg1 + 0x78) = 0

if (rdi.d s> *(arg1 + 0x7c))
    sub_140775b10(arg1 + 0x70, rdi.d)

int32_t rax_2 = *(arg1 + 0x78) + rdi.d
*(arg1 + 0x78) = rax_2

if (rax_2 s> *(arg1 + 0x7c))
    sub_140775270(arg1 + 0x70)

return memset(*(arg1 + 0x70), 0, count) __tailcall
