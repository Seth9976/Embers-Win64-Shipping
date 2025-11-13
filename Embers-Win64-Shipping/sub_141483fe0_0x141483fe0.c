// 函数: sub_141483fe0
// 地址: 0x141483fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg2 + 0x28))
int64_t rdi = 0
int32_t r14 = 0
arg1[1].d = 0

if (*(arg1 + 0xc) != rbp.d)
    sub_14083ad10(arg1, rbp.d)
    r14 = arg1[1].d

int32_t rax = r14 + rbp.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_14083a440(arg1, r14)

memset(*arg1 + (sx.q(r14) << 3), 0, rbp << 3)

if (rbp s> 0)
    do
        void* rax_2 = *(arg2 + 0x20)
        void* rdx_2 = arg2
        
        if (rax_2 != 0)
            rdx_2 = rax_2
        
        *(*arg1 + (rdi << 3)) = *(rdx_2 + (rdi << 3))
        rdi += 1
    while (rdi s< rbp)

int64_t result = *(arg2 + 0x30)
arg1[2] = result
return result
