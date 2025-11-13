// 函数: sub_1403add80
// 地址: 0x1403add80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg2)
int64_t st1 = *(arg1 + result)
int64_t st2 = *(arg1 + (result << 1))
int64_t rcx = sx.q(arg4)
*arg3 = *arg1
void* rsi_2 = result * 3 + arg1
*(arg3 + rcx) = st1
*(arg3 + (rcx << 1)) = st2
void* rdi_2 = rcx * 3 + arg3
int64_t st4 = *(rsi_2 + result)
int64_t st5 = *(rsi_2 + (result << 1))
*rdi_2 = *rsi_2
int64_t* rsi_3 = rsi_2 + (result << 1)
*(rdi_2 + rcx) = st4
*(rdi_2 + (rcx << 1)) = st5
int64_t* rdi_3 = rdi_2 + (rcx << 1)
st1 = *(rsi_3 + (result << 1))
*(rdi_3 + rcx) = *(rsi_3 + result)
*(rdi_3 + (rcx << 1)) = st1
return result
