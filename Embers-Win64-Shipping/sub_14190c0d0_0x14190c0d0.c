// 函数: sub_14190c0d0
// 地址: 0x14190c0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419339e0(*(arg1 + 0x568), arg2, 0)
sub_1419339e0(*(arg1 + 0x568) + 0x80, arg2, 1)
void* result = *(arg1 + 0x570)
void* rsi = *(result + 0x98)

if (rsi != 0)
    if (data_143f01c92 != 0)
        result = sub_140a80f40()
    
    if (*(rsi + 0x38) != 0)
        return sub_1419339e0(*(arg1 + 0x568) + 0x100, arg2, 2)

return result
