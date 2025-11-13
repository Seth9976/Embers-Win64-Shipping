// 函数: sub_142b7cb90
// 地址: 0x142b7cb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::CollationIterator::icu_64::DataBuilderCollationIterator::VTable** result = arg1
*arg1 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
arg1[1] = arg1[0x32]
arg1[2] = &arg1[0x32]
result[3].d = 0
result[4] = &result[6]
result[5].d = 0x28
*(result + 0x2c) = 0
*result = &icu_64::DataBuilderCollationIterator::`vftable'{for `icu_64::CollationIterator'}
result[0x31] = arg2
result[0x2e].d = 0
result[0x2f] = 0
result[0x30].d = 0xffffffff
*(result + 0x184) = 0
arg1[0x38] = *(arg2 + 8)
__builtin_memset(&arg1[0x32], 0, 0x30)
arg1[0x39] = 0x12000000
__builtin_memset(&arg1[0x3a], 0, 0x3c)
arg1[0x42] = 0
arg1[0x43].d = 0
void* rax_3 = result[0x31]
void* rdx = &result[0x44]
result[0x66] = 0
result[0x67].d = 0
int32_t rax_4 = 0x1180
result[0x36] = *(rax_3 + 0x10)

do
    int32_t rcx_2
    
    if (rax_4 - 0x1180 s>= 0x13)
        rcx_2 = rax_4 - 0x32
        
        if (rax_4 - 0x1193 s>= 0x15)
            rcx_2 = rax_4
    else
        rcx_2 = rax_4 - 0x80
    
    rax_4 += 1
    *rdx = rcx_2 << 0xd | 0x1c7
    rdx += 4
while (rax_4 - 0x1180 s< 0x43)

result[0x37] = &result[0x44]
return result
