// 函数: sub_142a7ca90
// 地址: 0x142a7ca90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

pdb_internal::Array<struct PortablePDB::MethodInfo>::reset(*(arg1 + 0xb0))
void* rsi = *(arg1 + 0xb0)
int32_t i = 0
int32_t rdx = *(rsi + 8)
int32_t r14 = *(*(arg1 + 8) + 0x80)
int32_t rdx_1 = rdx + r14
char rax_1

if (rdx + r14 s< 0 || *(rsi + 0xc) s< rdx_1)
    rax_1 = sub_142aeb240(rsi, rdx_1, arg1 + 0x13c)

void* result

if ((rdx + r14 s>= 0 && *(rsi + 0xc) s>= rdx_1) || rax_1 != 0)
    int64_t rdx_2 = sx.q(*(rsi + 8))
    result = *(rsi + 0x18) + (rdx_2 << 3)
    *(rsi + 8) = rdx_2.d + r14
else
    result = nullptr

if (*(arg1 + 0x13c) s> 0)
    return nullptr

if (*(*(arg1 + 8) + 0x80) - 2 s> 0)
    int64_t* r8_2 = result + 0x10
    
    do
        *r8_2 = -1
        r8_2 = &r8_2[1]
        i += 1
    while (i s< *(*(arg1 + 8) + 0x80) - 2)

return result
