// 函数: sub_142127ab0
// 地址: 0x142127ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = (*(arg1 + 0x20)).b
int128_t* rdi = arg4

if ((rax & 8) == 0)
    int32_t rax_6
    
    if ((rax & 1) == 0)
        rax_6 = 3
    else
        rax_6 = *(arg1 + 0x18)
    
    *(arg4 + 0x14) = rax_6
    *(arg4 + 0x18) = *(arg1 + 0x1c)
    return sub_140b51560(arg4 + 0x1c) __tailcall

void* rax_4

if (*(arg1 + 8) != 0)
    if (data_143de5480 == 0)
    label_142127af8:
        rax_4 = *(arg1 + 8)
    label_142127b16:
        *rdi = *(rax_4 + 0x40)
        rdi[1] = *(rax_4 + 0x50)
        int32_t result = *(rax_4 + 0x60)
        rdi[2].d = result
        return result
    
    uint32_t rax_1
    rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_1.b != 0)
        goto label_142127af8
    
    char rax_2
    rax_2, arg4 = data_14399ea98()
    
    if (rax_2 != 0)
        goto label_142127af8

if (*(arg1 + 0x10) != 0)
    char rax_3
    rax_3, arg4 = sub_140a80ed0()
    
    if (rax_3 != 0)
        rax_4 = *(arg1 + 0x10)
        goto label_142127b16

sub_140af98a0("Unknown", 0x211, u"Tried to access cooked shader map ID from unknown thread", arg4)
return sub_140afbb40() __tailcall
