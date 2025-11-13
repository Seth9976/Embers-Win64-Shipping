// 函数: sub_1405c6940
// 地址: 0x1405c6940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x1f0)
*(rax + 0x258) &= 0xffd77dd9
*(rax + 0x25c) &= 0xff5fcd96
sub_1405b3e40(arg1 + 0x210, arg1 + 0x360, *(arg1 + 0x374), *(arg1 + 0x1f0) + 0x2b0)
void* rbx = *(arg1 + 0x1f8)
int32_t rsi = 0
void* var_18 = rbx
void* rax_2

if (rbx == 0)
    rax_2 = nullptr
else
    rax_2 = sub_140d21950(rbx, sub_142475bc0())

void* var_10 = rax_2
sub_1405b2c90(*(arg1 + 0x1f0) + 0x2b0, &var_18, 0x3f800000.d)
void* rdi = *(arg1 + 0x1f0)

if (*(rdi + 0x268) != u"ComposureTonemapperPass")
    bool cond:0_1 = *(rdi + 0x274) == 0x18
    *(rdi + 0x270) = 0
    
    if (not(cond:0_1))
        sub_1405947f0(rdi + 0x268, 0x18)
        rsi = *(rdi + 0x270)
    
    *(rdi + 0x270) = rsi + 0x18
    
    if (rsi + 0x18 s> *(rdi + 0x274))
        sub_140594770(rdi + 0x268)
    
    __builtin_memcpy(*(rdi + 0x268), u"ComposureTonemapperPass", 0x30)
    rdi = *(arg1 + 0x1f0)

char rbx_2 = *(rdi + 0x1f3)
*(rdi + 0x1f3) = 1
int64_t result = sub_141f35e00(*(arg1 + 0x1f0))
*(rdi + 0x1f3) = rbx_2
return result
