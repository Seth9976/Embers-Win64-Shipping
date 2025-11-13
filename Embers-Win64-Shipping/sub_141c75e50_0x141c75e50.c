// 函数: sub_141c75e50
// 地址: 0x141c75e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rdi = *arg1

if (rdi == 0)
    return 

sub_142350d20(rdi, arg1)
*rdi = &data_14320cd38
InitializeCriticalSection(&rdi[8])
SetCriticalSectionSpinCount(&rdi[8], 0xfa0)
rdi[0xd].w = 0x100
rdi[0x12].b = (rdi[0x12].b & 0xfb) | 3
*(rdi + 0x6a) = 1
*(rdi + 0x6c) = 0
__builtin_memcpy(&rdi[0xe], 
    "\x00\x00\xc0\xc0\x00\x00\xc0\x3f\x00\x00\x20\x41\x00\x00\x40\x40\x00\x00\x20\x41\x00\x00\xc8\x42", 
    0x18)
rdi[0x11] = 0
*(rdi + 0x94) = 0
*(rdi + 0x9c) &= 0xfe
rdi[0x14] = 0x41a00000
rdi[0x15].b &= 0xfe
*(rdi + 0xac) = 0x41a00000
*(rdi + 0xac) = 0x469c4000
char rax = rdi[0x1c].b
rdi[0x17].w = 0x100
*(rdi + 0xba) = 1
rdi[0x1c].b = (rax & 0xfb) | 3
*(rdi + 0xbc) = 0
__builtin_memcpy(&rdi[0x18], 
    "\x00\x00\xc0\xc0\x00\x00\xc0\x3f\x00\x00\x20\x41\x00\x00\x40\x40\x00\x00\x20\x41\x00\x00\xc8\x42", 
    0x18)
rdi[0x1b] = 0
*(rdi + 0xe4) = 0
*(rdi + 0xec) &= 0xfe
rdi[0x1e] = 0x41a00000
rdi[0x1f].b &= 0xfe
*(rdi + 0xfc) = 0x41a00000
*(rdi + 0xfc) = 0x469c4000
