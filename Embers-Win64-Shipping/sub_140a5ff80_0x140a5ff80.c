// 函数: sub_140a5ff80
// 地址: 0x140a5ff80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t i = *arg1
void* r10 = &arg1[1]
int32_t rdx = not.d(arg2)

while (i != 0)
    uint64_t i_1 = zx.q(i)
    r10 += 2
    int32_t r8_2 = *(&data_1439a0500 + ((zx.q(rdx.b) ^ zx.q(i_1.b)) << 2)) ^ rdx u>> 8
    int32_t rdx_3 = *(&data_1439a0500 + ((zx.q((i_1 u>> 8).b) ^ zx.q(r8_2.b)) << 2)) ^ r8_2 u>> 8
    int32_t r8_5 = *(&data_1439a0500 + (zx.q(rdx_3.b) << 2)) ^ rdx_3 u>> 8
    i = *(r10 - 2)
    rdx = *(&data_1439a0500 + (zx.q(r8_5.b) << 2)) ^ r8_5 u>> 8

return zx.q(not.d(rdx))
