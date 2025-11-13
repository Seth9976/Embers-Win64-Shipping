// 函数: sub_140891ab0
// 地址: 0x140891ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg1
void* r10 = *result

if ((r10.b & 1) != 0)
    r10 = (r10 s>> 1) + result

int32_t rcx = 0
int32_t r9_1 = result[1].d - 1

if (r9_1 s> 0)
    do
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r9_1 + rcx)
        result = zx.q((temp1_1 - temp0_1) s>> 1)
        
        if (zx.d(*(r10 + (sx.q(result.d) << 2))) u>= arg3)
            r9_1 = result.d
        else if (rcx != result.d)
            rcx = result.d
        else
            rcx += 1
    while (rcx s< r9_1)

if (rcx == r9_1)
    int64_t rdx_2 = sx.q(rcx)
    result = zx.q(*(r10 + (rdx_2 << 2)))
    
    if (result.d == arg3 && rcx s>= 0)
        result = arg1[1]
        result[rdx_2] = arg2

return result
