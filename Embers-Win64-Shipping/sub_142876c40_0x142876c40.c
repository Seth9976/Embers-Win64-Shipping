// 函数: sub_142876c40
// 地址: 0x142876c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rdi = 0
int64_t rsi = 0
void* result = sub_1428a6730(0x68)

if (result == 0)
    sub_1428a5670(0x14, 0x26f, 0x41, "ssl\statem\statem_dtls.c", 0x3f)
    return nullptr

int64_t rax_1

if (arg1 != 0)
    rax_1 = sub_1428a6730(arg1)
    rdi = rax_1

if (arg1 == 0 || rax_1 != 0)
    *(result + 0x58) = rdi
    int64_t rax_2
    
    if (arg2 != 0)
        rax_2 = sub_1428a6a70((arg1 + 7) u>> 3)
        rsi = rax_2
    
    if (arg2 == 0 || rax_2 != 0)
        *(result + 0x60) = rsi
        return result
    
    sub_1428a5670((rax_2 + 0x14).d, 0x26f, (rax_2 + 0x41).d, "ssl\statem\statem_dtls.c", 0x52)
    sub_1428a6780(rdi)
else
    sub_1428a5670((rax_1 + 0x14).d, 0x26f, (rax_1 + 0x41).d, "ssl\statem\statem_dtls.c", 0x45)

sub_1428a6780(result)
return nullptr
