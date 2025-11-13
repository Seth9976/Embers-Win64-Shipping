// 函数: sub_142972660
// 地址: 0x142972660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r9 = arg2[1].d
int64_t* rsi = arg2
int32_t temp0 = arg3[1].d
int64_t* rbx = arg3

if (r9 s>= temp0)
    rbx = arg2

if (r9 s>= temp0)
    rsi = arg3

int64_t* result = sub_142890e60(arg1, rbx[1].d)

if (result == 0)
    return result

int32_t i = 0

if (rsi[1].d s> 0)
    int64_t r9_1 = 0
    
    do
        r9_1 += 8
        i += 1
        *(r9_1 + *arg1 - 8) = *(r9_1 + *rsi - 8) ^ *(r9_1 + *rbx - 8)
    while (i s< rsi[1].d)

int32_t rcx_5 = rbx[1].d

if (i s< rcx_5)
    int64_t r8_2 = sx.q(i) << 3
    
    do
        r8_2 += 8
        i += 1
        *(r8_2 + *arg1 - 8) = *(r8_2 + *rbx - 8)
        rcx_5 = rbx[1].d
    while (i s< rcx_5)

arg1[1].d = rcx_5
sub_142890ce0(arg1)
return 1
