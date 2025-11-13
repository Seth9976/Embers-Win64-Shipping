// 函数: sub_142a21560
// 地址: 0x142a21560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t count_2 = sx.q(arg6)
int32_t i_5 = arg4
int64_t r9 = arg1
int64_t count = sx.q(arg8)
int64_t rbp_1 = r9 - count_2
int64_t r13 = sx.q(arg2)
int64_t rsi_1 = sx.q(arg3) + r9
uint32_t count_1 = arg3 + count_2.d + count.d
arg6 = count_1
int64_t rbx = rbp_1

if (i_5 s> 0)
    uint64_t i_4 = zx.q(i_5)
    uint64_t i
    
    do
        memset(rbx, zx.d(*(r9 - rbp_1 + rbx)), count_2)
        memset(rsi_1 - rbp_1 + rbx, zx.d(*(rsi_1 - 1 - rbp_1 + rbx)), count)
        rbx += r13
        i = i_4
        i_4 -= 1
    while (i != 1)
    r13 = zx.q(arg2)
    count_1 = arg6
    r9 = arg1
    i_5 = arg4

int64_t rdi_3 = sx.q(neg.d(r13.d * arg5)) - count_2 + r9
int64_t rbx_3 = sx.q(r13.d * i_5) - count_2 + r9

if (arg5 s> 0)
    uint64_t i_3 = zx.q(arg5)
    uint64_t i_1
    
    do
        memcpy(rdi_3, rbp_1, count_1)
        rdi_3 += sx.q(r13.d)
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

int32_t result = arg7

if (result s> 0)
    uint64_t rdi_4 = zx.q(result)
    uint64_t i_2
    
    do
        result = memcpy(rbx_3, sx.q((i_5 - 1) * r13.d) - count_2 + r9, arg6)
        rbx_3 += sx.q(r13.d)
        i_2 = rdi_4
        rdi_4 -= 1
    while (i_2 != 1)

return result
