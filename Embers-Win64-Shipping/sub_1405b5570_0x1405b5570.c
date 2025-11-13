// 函数: sub_1405b5570
// 地址: 0x1405b5570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x1f0)
*(rax + 0x258) &= 0xffd77dd9
*(rax + 0x25c) &= 0xff5fcd96
void arg_8
int64_t* rax_1 = sub_140b58260(&arg_8, u"BloomIntensity", 1)
void* rdi = *(arg1 + 0x1f0)
void* rsi = *(arg1 + 0x2c8)
int64_t rbx = *rax_1
sub_1422e34d0(arg1 + 0x210, rdi + 0x2b0)

if (rsi != 0)
    *(rdi + 0x4c8)
    sub_142131b70(rsi, rbx)

*(rdi + 0x258) |= 2
int32_t rdi_1 = 0
void* rbx_1 = *(arg1 + 0x1f8)
void* var_18 = rbx_1
void* rax_3

if (rbx_1 == 0)
    rax_3 = nullptr
else
    rax_3 = sub_140d21950(rbx_1, sub_142475bc0())

void* var_10 = rax_3
sub_1405b2c90(*(arg1 + 0x1f0) + 0x2b0, &var_18, 0x3f800000)
void* rsi_1 = *(arg1 + 0x1f0)

if (*(rsi_1 + 0x268) != u"ComposureLensBloomPass")
    bool cond:0_1 = *(rsi_1 + 0x274) == 0x17
    *(rsi_1 + 0x270) = 0
    
    if (not(cond:0_1))
        sub_1405947f0(rsi_1 + 0x268, 0x17)
        rdi_1 = *(rsi_1 + 0x270)
    
    *(rsi_1 + 0x270) = rdi_1 + 0x17
    
    if (rdi_1 + 0x17 s> *(rsi_1 + 0x274))
        sub_140594770(rsi_1 + 0x268)
    
    int64_t rcx_8 = *(rsi_1 + 0x268)
    __builtin_memcpy(rcx_8, u"ComposureLensBlo", 0x20)
    *(rcx_8 + 0x20) = 0x610050006d006f
    *(rcx_8 + 0x28) = 0x730073
    *(rcx_8 + 0x2c) = 0
    rsi_1 = *(arg1 + 0x1f0)

char rbx_3 = *(rsi_1 + 0x1f3)
*(rsi_1 + 0x1f3) = 1
int64_t result = sub_141f35e00(*(arg1 + 0x1f0))
*(rsi_1 + 0x1f3) = rbx_3
return result
