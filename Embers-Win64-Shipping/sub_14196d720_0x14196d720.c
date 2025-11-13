// 函数: sub_14196d720
// 地址: 0x14196d720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg4
int64_t* rcx = *(arg1 + 8)
(*(*rcx + 8))(rcx)

if (rsi == 0)
    rsi = *(arg3 + 0x18)

int64_t r15 = *(arg1 + 0x10)
void*** rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_1 = &rcx_3[5]

if (rax_1 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_1 = &rcx_3[5]

*(arg2 + 0x30) = rax_1
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_3
*(arg2 + 8) = &rcx_3[1]
rcx_3[1] = 0
*rcx_3 = &data_142fbb380
rcx_3[2] = arg3
rcx_3[3] = r15
rcx_3[4].d = 0
*(rcx_3 + 0x24) = rsi
void* rsi_1 = *(arg1 + 8)
void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_9[3]

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_9[3]

*(arg2 + 0x30) = rax_4
int64_t* rax_5 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_5 = rcx_9
*(arg2 + 8) = &rcx_9[1]
rcx_9[1] = 0
*rcx_9 = &data_142f7e220
rcx_9[2] = rsi_1

if (rsi_1 != 0)
    *(rsi_1 + 0x18) += 1

return &data_142f7e220
