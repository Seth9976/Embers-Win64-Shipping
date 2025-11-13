// 函数: sub_14101f290
// 地址: 0x14101f290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f161 == 0 || *(arg1 + 0x48) == 0)
    return 

uint64_t rbp_1 = zx.q(*(arg1 + 0x1c) * 2)
int32_t r14_1 = (rbp_1 + 1).d
void* rsi_1 = **(*(*(arg1 + 0x10) + 0x9d8) + 0x6d8)
*(rsi_1 + 0x3b94) += 2
int64_t* rbx_1 = *(arg1 + 0x28)

if (rbx_1 != 0 && data_1439c7a34 u> 1)
    while (*rbx_1 != *(rsi_1 + 0x138))
        rbx_1 = rbx_1[1]
        
        if (rbx_1 == 0)
            break

int64_t* rcx = *(*(rsi_1 + 0x1c8) + 0x30)
(*(*rcx + 0x1a8))(rcx, rbx_1[3], 2, zx.q(r14_1))
int64_t* rcx_1 = *(*(rsi_1 + 0x1c8) + 0x30)
(*(*rcx_1 + 0x1b0))(rcx_1, rbx_1[3], 2, zx.q(rbp_1.d), 2, *(*(arg1 + 0x40) + 0x20), 
    zx.q((rbp_1 << 3).d))

if (data_1439b4ad4 != 0 && rbx_1 != -0x20 && rbx_1[5] != 0)
    sub_141026da0(*(*(rsi_1 + 0x1c8) + 0x118), &rbx_1[4])

sub_14105c1a0(*(arg1 + 0x40), rsi_1 + 0x1c0)
sub_1410101f0(*(arg1 + 0x30) + sx.q(r14_1) * 0x18, rsi_1 + 0x1c0)
int32_t rcx_7 = *(arg1 + 0x18)
int32_t rax = *(arg1 + 0x20) + 1

if (rax s<= rcx_7)
    rcx_7 = rax

*(arg1 + 0x20) = rcx_7
*(arg1 + 0x48) = 0
