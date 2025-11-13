// 函数: sub_1413c98f0
// 地址: 0x1413c98f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int32_t r10 = 0
int64_t rax = sx.q(*(rbx + 0x1c20))

if (rax.d s<= 0)
    return rax

int64_t rcx = 0
int64_t* rax_1 = *(rbx + 0x1c18)

while (*rax_1 != arg1[1])
    r10 += 1
    rcx += 1
    rax_1 = &rax_1[0x15]
    
    if (rcx s>= rax)
        return rax_1

int32_t rcx_1 = *(rbx + 0x1c20)
int32_t rax_3 = rcx_1 - r10

if (rax_3 != 1)
    memmove(sx.q(r10) * 0xa8 + *(rbx + 0x1c18), sx.q(r10 + 1) * 0xa8 + *(rbx + 0x1c18), 
        (rax_3 - 1) * 0xa8)
    rcx_1 = *(rbx + 0x1c20)

*(rbx + 0x1c20) = rcx_1 - 1
return sub_140b8a5c0(rbx + 0x1c18) __tailcall
