// 函数: sub_141d82eb0
// 地址: 0x141d82eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rdi = *arg1

if (rdi == 0)
    return 

sub_141d74f50(rdi, arg1)
int32_t rcx_1 = 0
*rdi = &data_143235f20
__builtin_memset(&rdi[0xb], 0, 0x31)

if (rdi[0xb] == u"{world}")
    return 

rdi[0xc].d = 0

if (*(rdi + 0x64) != 8)
    sub_1405947f0(&rdi[0xb], 8)
    rcx_1 = rdi[0xc].d

rdi[0xc].d = rcx_1 + 8

if (rcx_1 + 8 s> *(rdi + 0x64))
    sub_140594770(&rdi[0xb])

*rdi[0xb] = *u"{world}"
