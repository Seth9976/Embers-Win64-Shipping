// 函数: sub_141c7d980
// 地址: 0x141c7d980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t rax = arg1[7]
int128_t zmm6
zmm6.q = float.d(performanceCount)
zmm6.q = zmm6.q f* data_143d796f8
zmm6.q = zmm6.q f+ 16777216.0
int32_t rdi = int.d((zmm6.q f- *(arg1 + 0x98)) * 1000.0)
char r8

if (rax s<= 0 || *arg1 s< rax)
    r8 = 0
else
    r8 = 1

int32_t rax_1 = arg1[8]
char rdx

if (rax_1 s<= 0 || arg1[2] s< rax_1)
    rdx = 0
else
    rdx = 1

int32_t rax_2 = arg1[9]
char rcx_1

if (rax_2 s<= 0 || arg1[3] s< rax_2)
    rcx_1 = 0
else
    rcx_1 = 1

uint32_t result = zx.d(arg1[0xa].w)

if (result.w s<= 0 || rdi s<= sx.d(result.w))
    result.b = 0
else
    result.b = 1

if (r8 != 0 || rdx != 0 || rcx_1 != 0 || result.b != 0)
    sub_141c7ecb0(arg1, 1)
else if (arg1[0x18].b == result.b)
    result = zx.d(arg1[0x14].b)
    
    if (result.b s> 0
            && sub_141c7dac0(sx.q(sx.d(result.b) - 1) * 0x30 + *(arg1 + 0x40), arg1, rdi).b != 0)
        *(arg1 + 0x58) = zmm6.q
        arg1[0x18].b = 1

int32_t rcx_6 = arg1[0xb]

if (rcx_6 != 0 && (rcx_6 s<= 0 || *arg1 - arg1[0x2a] s< rcx_6))
    result = arg1[0xc]
    
    if (result s<= 0 || rdi s<= result)
        result.b = 0
        return result

result.b = 1
return result
