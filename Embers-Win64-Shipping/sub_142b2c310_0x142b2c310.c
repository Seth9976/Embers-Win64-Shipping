// 函数: sub_142b2c310
// 地址: 0x142b2c310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10_2 = zx.d((arg1 u>> 8).b) - 2 + arg3
int32_t rdx_3 = r10_2 s/ 0xfe
int32_t r10_5 = (r10_2 s% 0xfe + 2) << 8

if (arg2 == 0)
    int32_t r8_2 = zx.d((arg1 u>> 0x10).b) - 2 + rdx_3
    return zx.q((arg1 & 0xff000000) + ((r8_2 s/ 0xfe) << 0x18)) | zx.q(r10_5)
        | zx.q((r8_2 s% 0xfe + 2) << 0x10)

int32_t rcx_2 = zx.d((arg1 u>> 0x10).b) - 4 + rdx_3
return zx.q((arg1 & 0xff000000) + ((rcx_2 s/ 0xfb) << 0x18)) | zx.q(r10_5)
    | zx.q((rcx_2 s% 0xfb + 4) << 0x10)
