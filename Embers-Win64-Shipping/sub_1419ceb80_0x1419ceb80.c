// 函数: sub_1419ceb80
// 地址: 0x1419ceb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143f203f8)
int64_t rbx = 0

if (arg1 != &data_143f203e8)
    int32_t r8_1 = *(arg1 + 0xc)
    int32_t rbp_1 = (data_143f203f0.q).d
    int64_t r14_1 = data_143f203e8
    arg1[1].d = rbp_1
    
    if (rbp_1 != 0 || r8_1 != 0)
        sub_1405c4a00(arg1, rbp_1, r8_1)
        memcpy(*arg1, r14_1, rbp_1 << 3)
    else
        *(arg1 + 0xc) = 0

int32_t* r8_4 = data_143f203d8
void* rcx_2 = &r8_4[sx.q(data_143f203e0)]
uint64_t r9_3 = (rcx_2 - r8_4 + 3) u>> 2

if (r8_4 u> rcx_2)
    r9_3 = 0

if (r9_3 != 0)
    do
        int64_t rdx_2 = sx.q(*r8_4)
        r8_4 = &r8_4[1]
        rbx += 1
        *(*arg1 + (rdx_2 << 3)) = arg2
    while (rbx != r9_3)

return LeaveCriticalSection(&data_143f203f8) __tailcall
