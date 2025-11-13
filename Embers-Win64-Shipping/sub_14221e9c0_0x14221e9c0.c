// 函数: sub_14221e9c0
// 地址: 0x14221e9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x10)
void* rax = rdi[0x23]

if (rax != 0)
    *(arg1 + 0x22c) = *(rax + 0x22c)
    return rax

(*(*rdi + 0x390))(rdi)
void* rax_2 = rdi[0x23]
*(arg1 + 0x22c) = *(rax_2 + 0x22c)
return rax_2
