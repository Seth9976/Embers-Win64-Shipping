// 函数: sub_142ad3230
// 地址: 0x142ad3230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(int.d((_mm_cvtepi32_pd(zx.q(arg2 - 0x54f5d)) f* 25920.0 f/ 765433.0 f* 19.0
    f+ 234.0) f/ 235.0 f+ 1.0))
int32_t i

for (i = arg2 - 0x54f5d - sub_142ad3a30(rsi.d, arg3); i s< 1; 
        i = arg2 - 0x54f5d - sub_142ad3a30(rsi.d, arg3))
    rsi = zx.q(rsi.d - 1)

int32_t rax_3 = (*(*arg1 + 0x110))(arg1, zx.q(rsi.d))

if (rax_3 s> 0x17c)
    rax_3 -= 0x1e

int32_t rcx_3

if (rax_3 == 0x161)
    rcx_3 = 0
else if (rax_3 == 0x162 || rax_3 != 0x163)
    rcx_3 = 1
else
    rcx_3 = 2

uint64_t r11 = zx.q(rcx_3)
uint64_t rcx_4 = r11 * 2
int32_t rdx_6 = 0
int32_t r9_1 = ((zx.q((rsi * 3).d) << 2) + 0x11).d s% 0x13

for (int64_t i_1 = 0; i_1 s< 0xe; )
    int16_t rax_13
    
    if (r9_1 s< (r9_1 s>> 0x1f & 0xffffffed) + 0xc)
        rax_13 = *(rcx_4 + &data_143657f40)
    else
        rax_13 = *(rcx_4 + &data_143657fa0)
    
    if (i s<= sx.d(rax_13))
        break
    
    rdx_6 += 1
    i_1 += 1
    rcx_4 += 6

int32_t result = rdx_6 - 1

if (result u> 0xc)
    *arg3 = 1
else
    int64_t rcx_6 = sx.q(rdx_6 - 1) * 3 + r11
    int16_t result_1
    
    if (r9_1 s< (r9_1 s>> 0x1f & 0xffffffed) + 0xc)
        result_1 = *((rcx_6 << 1) + &data_143657f40)
    else
        result_1 = *((rcx_6 << 1) + &data_143657fa0)
    
    *(arg1 + 0xc) = 0
    arg1[0x10].d = 1
    arg1[0xd].w = 0x101
    arg1[2].d = rsi.d
    *(arg1 + 0x84) = 1
    arg1[0xb].d = rsi.d
    *(arg1 + 0xcc) = 1
    *(arg1 + 0x7b) = 1
    *(arg1 + 0x14) = rdx_6 - 1
    arg1[0x11].d = 1
    *(arg1 + 0x6a) = 1
    result = sx.d(result_1)
    *(arg1 + 0x94) = 1
    arg1[4].d = i - result
    *(arg1 + 0x6d) = 0x101
    *(arg1 + 0x24) = i
    arg1[0x13].d = 1

return result
