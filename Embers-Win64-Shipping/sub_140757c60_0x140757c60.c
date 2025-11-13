// 函数: sub_140757c60
// 地址: 0x140757c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
void* r11 = *(arg1 + 8)
int32_t rdx_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t var_28 = rdx_1
int32_t rax_2
rax_2.b = rdx_1 != 0x7fff
void* var_18
void var_20

if (rdx_1 == 0x7fff)
    var_18 = &var_20
else
    var_18 = zx.q(*(arg2 + 0x80) * rdx_1) + *(arg2 + 0x70)
int32_t i = 0
int32_t result

if (*(arg2 + 0x40) s> 0)
    do
        void* rcx_2 = *(r11 + 0x28)
        result = 0
        
        if (0 == *(rcx_2 + 0x210))
            *(rcx_2 + 0x210) = 0
        else
            result = *(rcx_2 + 0x210)
        
        int32_t* r8_1 = var_18
        i += 1
        var_18 = &r8_1[sx.q(rax_2)]
        *r8_1 = result
    while (i s< *(arg2 + 0x40))

result.b = 1
return result
