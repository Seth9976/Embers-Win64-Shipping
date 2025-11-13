// 函数: sub_140755ca0
// 地址: 0x140755ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
void* r11 = *(arg1 + 8)
int32_t rdx_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t var_28 = rdx_1
int32_t result
result.b = rdx_1 != 0x7fff
int32_t result_1 = result
void* var_18

if (rdx_1 == 0x7fff)
    void var_20
    result = &var_20
    var_18 = &var_20
else
    var_18 = zx.q(*(arg2 + 0x80) * rdx_1) + *(arg2 + 0x70)

int32_t i = 0

if (*(arg2 + 0x40) s> 0)
    do
        void* rcx_3 = *(r11 + 0x28)
        result = 0
        
        if (0 == *(rcx_3 + 0x210))
            *(rcx_3 + 0x210) = 0
        else
            result = *(rcx_3 + 0x210)
        
        int32_t* r8_1 = var_18
        i += 1
        var_18 = &r8_1[sx.q(result_1)]
        *r8_1 = result
    while (i s< *(arg2 + 0x40))

return result
