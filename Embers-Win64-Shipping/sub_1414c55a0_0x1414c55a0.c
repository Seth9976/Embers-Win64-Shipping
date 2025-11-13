// 函数: sub_1414c55a0
// 地址: 0x1414c55a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_1439b708c
int32_t r9 = int.d(data_1439b7088 f* arg1.d * 0.00100000005f)
int32_t rcx

if (r9 s>= 0xa)
    rcx = rax
    
    if (r9 s< rax)
        rcx = r9
else
    rcx = 0xa

if (rcx == rax)
    rcx = 0

*arg3 = rcx
arg1.d = _mm_cvtepi32_ps(zx.o(rcx)).d f* data_1439b7090
int32_t rdx = int.d(arg1.d)

if (rdx s< 0xa)
    *arg2 = rcx + 0xa
    return rcx + 0xa

int32_t rax_2 = data_1439b708c

if (rdx s< rax_2)
    rax_2 = rdx

int32_t result = rax_2 + rcx
*arg2 = result
return result
