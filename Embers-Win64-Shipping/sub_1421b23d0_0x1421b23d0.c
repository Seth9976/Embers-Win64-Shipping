// 函数: sub_1421b23d0
// 地址: 0x1421b23d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = data_143a2efc0
void*** r9_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &r9_2[5]

if (rax u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    r9_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &r9_2[5]

*(arg1 + 0x30) = rax
int64_t* rax_1 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_1 = r9_2
*(arg1 + 8) = &r9_2[1]
r9_2[1] = 0
*r9_2 = &data_142d56618
r9_2[2].d = 0
r9_2[3] = rbp
r9_2[4].d = 0
void*** rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_3[5]

if (rax_3 u> *(arg1 + 0x38))
    r9_2 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_3[5]

*(arg1 + 0x30) = rax_3
int64_t* rax_4 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_4 = rcx_3
*(arg1 + 8) = &rcx_3[1]
rcx_3[1] = 0
*rcx_3 = &data_142d56618
rcx_3[2].d = 1
rcx_3[3] = arg2
rcx_3[4].d = 0
int64_t rsi_1 = data_143a2eff0

if (rsi_1 == 0)
    sub_140af98a0("Unknown", 0xbc8, Tried to call DrawIndexedPrimitive with null IndexBuffer!", 
        r9_2)
    sub_140afbb40()

void*** rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_9[6]

if (rax_6 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_9[6]

*(arg1 + 0x30) = rax_6
int64_t* rax_7 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_7 = rcx_9
*(arg1 + 8) = &rcx_9[1]
rcx_9[1] = 0
rcx_9[2] = rsi_1
*rcx_9 = &data_142f11598
rcx_9[3] = 0
rcx_9[4] = 4
rcx_9[5].d = 2
*(rcx_9 + 0x2c) = arg3
return &data_142f11598
