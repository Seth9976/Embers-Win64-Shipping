// 函数: sub_142aa2a80
// 地址: 0x142aa2a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
struct icu_64::UObject::icu_64::CollationElementIterator::VTable** result = nullptr
int32_t arg_8 = 0
void* rsi = *(arg1 + 0x18)
int32_t rax = *(rsi + 0x188)
char rax_1

if (rax != 2)
    rax_1 = sub_142a85f00(rsi + 0x188)

int32_t rcx_3

if (rax == 2 || rax_1 == 0)
    int32_t rax_4 = *(rsi + 0x18c)
    rcx_3 = arg_8
    
    if (rax_4 s> 0)
        rcx_3 = rax_4
    
    arg_8 = rcx_3
else
    *(rsi + 0x180) = sub_142b180d0(*(rsi + 0x18), &arg_8)
    *(rsi + 0x18c) = arg_8
    sub_142a85e80(rsi + 0x188)
    rcx_3 = arg_8

if (rcx_3 s<= 0)
    struct icu_64::UObject::icu_64::CollationElementIterator::VTable** rax_5 = j_sub_142a7dd00(0x68)
    struct icu_64::UObject::icu_64::CollationElementIterator::VTable** arg_18 = rax_5
    
    if (rax_5 != 0)
        result = sub_142b17e90(rax_5, arg2, arg1, &arg_8)
    
    if (arg_8 s<= 0)
        return result
    
    if (result != 0)
        sub_142b17fc0(result)
        sub_142a47920(result)

return nullptr
