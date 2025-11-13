// 函数: sub_14096e3c0
// 地址: 0x14096e3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xb0)
void* rcx_1 = *(arg1 + 0xa0)
int32_t temp0 = divs.dp.d(sx.q(arg2[1].d), *(arg1 + 0x78))
*(arg1 + 0x78)
int32_t rax_3
int32_t rbp_1

if (rcx_1 != 0)
    rbp_1 = *(arg1 + 0x10)
    rax_3 = sub_141c39db0(rcx_1)

if (rcx_1 == 0 || rax_3 s< rbp_1 * temp0)
    memset(*arg2, 0, sx.q(arg2[1].d) << 2)
else if (*(arg1 + 0x78) == rbp_1)
    sub_141c3f0a0(*(arg1 + 0xa0), *arg2, arg2[1].d, 0)
else
    *(arg1 + 0x20) = 0
    
    if (*(arg1 + 0x24) s<= 0xffffffff)
        sub_140775b10(arg1 + 0x18, 0)
    
    sub_14074a020(arg1 + 0x18, temp0 * *(arg1 + 0x10))
    sub_141c3f0a0(*(arg1 + 0xa0), *(arg1 + 0x18), temp0 * *(arg1 + 0x10), 0)
    sub_14095b150(*(arg1 + 0x18), *arg2, temp0, *(arg1 + 0x10), *(arg1 + 0x78))

if (arg1 != -0xb0)
    LeaveCriticalSection(arg1 + 0xb0)

uint64_t result
result.b = 1
return result
