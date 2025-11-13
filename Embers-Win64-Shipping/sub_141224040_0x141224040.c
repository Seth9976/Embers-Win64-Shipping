// 函数: sub_141224040
// 地址: 0x141224040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = data_1439b6438
void*** rdx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &rdx_2[5]
int64_t entry_r9

if (rax u> *(arg1 + 0x38))
    entry_r9 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rdx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &rdx_2[5]

*(arg1 + 0x30) = rax
*(arg1 + 0x14) += 1
**(arg1 + 8) = rdx_2
*(arg1 + 8) = &rdx_2[1]
rdx_2[3] = rsi
rdx_2[1] = 0
*rdx_2 = &data_142d56618
rdx_2[2].d = 0
rdx_2[4].d = 0
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, data_1439b6460)
int64_t rbp = data_1439b6458
int32_t r14 = data_1439b6440

if (rbp == 0)
    sub_140af98a0("Unknown", 0xbc8, Tried to call DrawIndexedPrimitive with null IndexBuffer!", 
        entry_r9)
    sub_140afbb40()

void*** rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_3[6]

if (rax_4 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_3[6]

*(arg1 + 0x30) = rax_4
int64_t* rax_5 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_5 = rcx_3
*(arg1 + 8) = &rcx_3[1]
rcx_3[1] = 0
rcx_3[2] = rbp
rcx_3[5].d = (temp0 u>> 0x1f) + temp0
*rcx_3 = &data_142f11598
rcx_3[3] = 0
rcx_3[4].d = r14
*(rcx_3 + 0x24) = 0
*(rcx_3 + 0x2c) = 1
return &data_142f11598
