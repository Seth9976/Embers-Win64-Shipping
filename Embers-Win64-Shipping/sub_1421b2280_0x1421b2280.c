// 函数: sub_1421b2280
// 地址: 0x1421b2280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = data_143a2efc0
void*** r8_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &r8_2[5]
int64_t entry_r9

if (rax u> *(arg1 + 0x38))
    entry_r9 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    r8_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &r8_2[5]

*(arg1 + 0x30) = rax
int64_t* rax_1 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_1 = r8_2
*(arg1 + 8) = &r8_2[1]
r8_2[1] = 0
*r8_2 = &data_142d56618
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
r8_2[2].d = 0
r8_2[3] = rsi
r8_2[4].d = 0
int64_t rsi_1 = data_143a2eff0

if (rsi_1 == 0)
    sub_140af98a0("Unknown", 0xbc8, Tried to call DrawIndexedPrimitive with null IndexBuffer!", 
        entry_r9)
    sub_140afbb40()

void*** rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_3[6]

if (rax_5 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_3[6]

*(arg1 + 0x30) = rax_5
void**** rax_6 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_6 = rcx_3
*(arg1 + 8) = &rcx_3[1]
rcx_3[1] = 0
rcx_3[2] = rsi_1
*(rcx_3 + 0x2c) = ((temp0 & 7) + temp1) s>> 3
*rcx_3 = &data_142f11598
rcx_3[3] = 0
rcx_3[4] = 4
rcx_3[5].d = 0x10
return &data_142f11598
