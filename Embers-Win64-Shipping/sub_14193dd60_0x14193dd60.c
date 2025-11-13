// 函数: sub_14193dd60
// 地址: 0x14193dd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rsi_1 = (*(arg1 + 0xc0) u>> 4).d
int32_t r14_1 = (0x9e3779b9 - rsi_1) ^ rsi_1 << 8
int32_t rdi_2 = neg.d(r14_1 + rsi_1) ^ r14_1 u>> 0xd
int32_t rsi_4 = (rsi_1 - r14_1 - rdi_2) ^ rdi_2 u>> 0xc
int32_t r14_4 = (r14_1 - rsi_4 - rdi_2) ^ rsi_4 << 0x10
int32_t rdi_5 = (rdi_2 - r14_4 - rsi_4) ^ r14_4 u>> 5
int32_t rsi_7 = (rsi_4 - r14_4 - rdi_5) ^ rdi_5 u>> 3
int32_t r14_7 = (r14_4 - rsi_7 - rdi_5) ^ rsi_7 << 0xa
return zx.q(sub_140b212b0(arg1, 0xc0, 0)) ^ zx.q(rdi_5 - r14_7 - rsi_7) ^ zx.q(r14_7 u>> 0xf)
    ^ zx.q(*(arg1 + 0xc8))
