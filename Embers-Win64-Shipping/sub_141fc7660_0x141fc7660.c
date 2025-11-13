// 函数: sub_141fc7660
// 地址: 0x141fc7660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(*arg2 + 8)
int512_t zmm1 = sub_140ce8e80(arg1, arg2)
void* rcx = arg1[5]

if (rcx != 0 && ((*(rcx + 8) u>> 0xa).b & 1) != 0)
    int64_t rax_3 = sub_140d3cb50(rcx)
    
    if (rax_3 != 0)
        zmm1 = sub_140cc45a0(rax_3 + 0x200, arg1[5])

char result = *(rsi + 0x28)

if ((result & 1) == 0)
    if ((result & 2) == 0)
        return result
    
    return sub_141fc6ee0(arg1, arg2, zmm1)

void* arg_8
int512_t zmm1_1 = sub_141fa4f40(&arg_8, arg1)
(*(*arg1 + 0x288))(arg1)
sub_141fbcd90(arg1, arg2, zmm1_1)
EnterCriticalSection(&data_143f3d1e8)
void* rbx_1 = arg_8
sub_140865c40(&data_143a2dbd0, &arg_8, rbx_1)
int64_t rax_5 = sx.q(arg_8.d)
void* const rcx_5

if (rax_5.d == 0xffffffff)
    rcx_5 = nullptr
else
    rcx_5 = data_143a2dbd0 + rax_5 * 0x18

int32_t temp0 = *(rcx_5 + 8)
*(rcx_5 + 8) -= 1

if (temp0 == 1)
    sub_140599090(rbx_1 + 0x98)
    sub_140868c90(&data_143a2dbd0, rbx_1)

return LeaveCriticalSection(&data_143f3d1e8) __tailcall
