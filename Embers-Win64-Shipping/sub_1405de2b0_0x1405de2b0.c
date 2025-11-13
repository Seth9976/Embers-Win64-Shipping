// 函数: sub_1405de2b0
// 地址: 0x1405de2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t i = *arg1
int32_t result = 0
int16_t* r9 = arg1

while (i != 0)
    r9 = &r9[1]
    arg1.w = sbb.w(arg1.w, arg1.w, zx.d(i) - 0x61 u< 0x1a)
    arg1.w &= 0x20
    uint64_t r8 = zx.q(i - arg1.w)
    int32_t rcx_3 = *(&data_1439a2500 + ((zx.q(result.b) ^ zx.q(r8.b)) << 2)) ^ result u>> 8
    arg1 = zx.q(rcx_3 u>> 8)
    i = *r9
    result = *(&data_1439a2500 + ((zx.q((r8 u>> 8).b) ^ zx.q(rcx_3.b)) << 2)) ^ arg1.d

return result
