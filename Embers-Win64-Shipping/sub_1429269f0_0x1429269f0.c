// 函数: sub_1429269f0
// 地址: 0x1429269f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rsi = *(arg1 + 0x18)
void* rax = rsi[0x1b]
int64_t rdi = rsi[0x19]
void* rbx = rax + rsi
memset(rbx + 0xe0, 0, rdi - rax)
*(rbx + 0xe0) = rsi[0x31].b
*(rdi + rsi + 0xdf) |= 0x80
sub_142962d80(rsi, &rsi[0x1c], rdi, rdi)
sub_142962e60(rsi, arg2, rsi[0x1a], rdi)
return 1
