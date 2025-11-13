// 函数: sub_1405969c0
// 地址: 0x1405969c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 0
int16_t* r10 = arg2

if (arg1 s> 0)
    uint64_t i_1 = zx.q(arg1)
    uint64_t i
    
    do
        uint32_t r8_1 = zx.d(*r10)
        r10 = &r10[1]
        int32_t rcx
        rcx.w = sbb.w((r8_1 - 0x61).w, (r8_1 - 0x61).w, r8_1 - 0x61 u< 0x1a)
        rcx.w &= 0x20
        r8_1.w -= rcx.w
        uint64_t r9_1 = zx.q(r8_1.w)
        int32_t rcx_4 = *(&data_1439a2500 + ((zx.q(result.b) ^ zx.q(r9_1.b)) << 2)) ^ result u>> 8
        result = *(&data_1439a2500 + ((zx.q((r9_1 u>> 8).b) ^ zx.q(rcx_4.b)) << 2)) ^ rcx_4 u>> 8
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
