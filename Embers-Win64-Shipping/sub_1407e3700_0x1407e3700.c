// 函数: sub_1407e3700
// 地址: 0x1407e3700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745800(arg1)
*arg1 = &data_142dc4fe0
arg1[6] = 0
arg1[7] = 0
__builtin_memset(&arg1[9], 0, 0x14)
void*** rax = j_sub_140a82f30(0x118)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    memset(rax, 0, 0x118)
    sub_140744780(rdi)
    int64_t* rcx_2 = &rdi[0x1b]
    *rdi = &data_142dc5320
    rdi[0x19] = 0
    rdi[0x1a] = 0
    rcx_2[2] = 0
    rcx_2[3].d = 0
    *(rcx_2 + 0x1c) = 0x80
    int64_t* rax_1 = rcx_2[2]
    
    if (rax_1 != 0)
        rcx_2 = rax_1
    
    *rcx_2 = 0
    rcx_2[1] = 0
    rdi[0x1f].d = 0xffffffff
    *(rdi + 0xfc) = 0
    rdi[0x21] = 0
    rdi[0x22].d = 0

int64_t* rcx_3 = arg1[5]

if (rcx_3 != rdi)
    arg1[5] = rdi
    
    if (rcx_3 != 0)
        (**rcx_3)(rcx_3, 1)

return arg1
