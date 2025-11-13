// 函数: sub_1420ee280
// 地址: 0x1420ee280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg1[0x25]
*(arg1 + 0xba) &= 0xfb
arg1[0x26] = rax
arg1[0x25] = arg2
sub_14242e9e0(arg2)
uint8_t rsi = *(arg1 + 0xba) u>> 5 & 2
void* rdi

if (sub_140d23dc0(arg1, 0x30) == 0)
    rdi = arg1[4]
else
    rdi = nullptr

char* rax_2 = sub_1424350b0(rdi, rsi)
sub_1424414c0(rax_2, arg1[0x26])
uint64_t rcx_4 = arg1[0x25]

if (rcx_4 == 0)
    rcx_4.b = 1
else
    *(rcx_4 + 0xb8) = rdi
    void* rdx_2 = arg1[0x25]
    void* rcx_5 = *(rdx_2 + 0x248)
    
    if (rcx_5 != 0)
        sub_1424414c0(rcx_5, rdx_2)
        rdx_2 = arg1[0x25]
    
    sub_14242c030(rax_2, rdx_2)
    rcx_4.b = *(arg1[0x25] + 0x1f4) & 0x20
    rcx_4.b |= 0x40
    rcx_4.b u>>= 4

arg1[0x17].b = rcx_4.b
return sub_14244a940(rdi, arg1) __tailcall
