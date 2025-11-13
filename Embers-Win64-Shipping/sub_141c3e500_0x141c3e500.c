// 函数: sub_141c3e500
// 地址: 0x141c3e500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xa0)
int32_t* rcx = *(rax + 0x18)
int32_t rdi = *(rax + 4)

if (rcx[0xe] s<= rdi)
    rdi = rcx[0xe]

if (arg2 s<= rdi)
    rdi = arg2

int64_t result = sub_141c3bdb0(rcx, rdi, 0)
int32_t rcx_1 = *(arg3 + 0xc)
int32_t rdx_1 = 0
arg3[1].d = 0

if (result == 0)
    if (rcx_1 s< 0 && rcx_1 != 0)
        return sub_140775b10(arg3, 0) __tailcall
    
    return result

if (rdi s> rcx_1)
    sub_140775b10(arg3, rdi)
    rdx_1 = arg3[1].d

int32_t rax_2 = rdx_1 + rdi
arg3[1].d = rax_2

if (rax_2 s> *(arg3 + 0xc))
    sub_140775270(arg3)

return memcpy(*arg3, result, rdi << 2)
