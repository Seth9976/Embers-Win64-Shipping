// 函数: sub_14238b980
// 地址: 0x14238b980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int32_t* rbx = *arg4
void* r14 = *(arg1 + 8)
uint64_t rsi_1 = sx.q(arg4[1].d) << 2 u>> 2
void* rbp = *(r14 + 8)

if (rbx u> &rbx[arg4[1]])
    rsi_1 = 0

if (rsi_1 != 0)
    do
        sub_1423b79e0(rbp, *rbx)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != rsi_1)

*(r14 + 0x28) = arg3
int32_t* result = data_143f5a2c8

if (*result s> 0)
    result = zx.q(arg5)
    
    if (result.d s< arg6)
        *(r14 + 0x30) = result.d
        *(r14 + 0x2c) = arg6

return result
