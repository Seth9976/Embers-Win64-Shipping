// 函数: sub_1403adc70
// 地址: 0x1403adc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg2)
int128_t zmm1 = *(arg1 + result)
int128_t zmm2 = *(arg1 + (result << 1))
int64_t rcx = sx.q(arg4)
*arg3 = *arg1
void* rsi_2 = result * 3 + arg1
*(arg3 + rcx) = zmm1
*(arg3 + (rcx << 1)) = zmm2
void* rdi_2 = rcx * 3 + arg3
int128_t zmm4 = *(rsi_2 + result)
int128_t zmm5 = *(rsi_2 + (result << 1))
*rdi_2 = *rsi_2
void* rsi_4 = result * 3 + rsi_2
*(rdi_2 + rcx) = zmm4
*(rdi_2 + (rcx << 1)) = zmm5
void* rdi_4 = rcx * 3 + rdi_2
zmm1 = *(rsi_4 + result)
zmm2 = *(rsi_4 + (result << 1))
*rdi_4 = *rsi_4
void* rsi_6 = result * 3 + rsi_4
*(rdi_4 + rcx) = zmm1
*(rdi_4 + (rcx << 1)) = zmm2
zmm4 = *(rsi_6 + result)
void* rdi_6 = rcx * 3 + rdi_4
zmm5 = *(rsi_6 + (result << 1))
*rdi_6 = *rsi_6
void* rsi_8 = result * 3 + rsi_6
*(rdi_6 + rcx) = zmm4
*(rdi_6 + (rcx << 1)) = zmm5
zmm1 = *(rsi_8 + result)
void* rdi_8 = rcx * 3 + rdi_6
zmm2 = *(rsi_8 + (result << 1))
*rdi_8 = *rsi_8
*(rdi_8 + rcx) = zmm1
*(rdi_8 + (rcx << 1)) = zmm2
*(rcx * 3 + rdi_8) = *(result * 3 + rsi_8)
return result
