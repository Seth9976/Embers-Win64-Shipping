// 函数: sub_141fa9a50
// 地址: 0x141fa9a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8
int512_t zmm1 = sub_141fa4f40(&arg_8, arg1)
int64_t* r14 = arg1[5]

if (r14 == 0)
    if (((arg1[1].d u>> 4).b & 1) == 0)
        sub_140d21d80(arg1)
        sub_140cde0b0()
    
    int64_t* rax_3
    rax_3, zmm1, arg4 = sub_142499390()
    r14 = rax_3

int64_t r8 = *arg1
(*(r8 + 0x290))(arg1, arg2, r8)
int32_t rdx_2 = *(r14 + 0x5c)
int32_t r8_4 = (r14[0xb].d - 1 + rdx_2) & neg.d(rdx_2)
int64_t rax_4 = sub_140a82f30(sx.q(r8_4), 0, r8_4)
(*(*r14 + 0x2a0))(r14, rax_4, 1)
sub_140bd9910(r14, rax_4, arg3, 1, zmm1, arg4)
int64_t r9 = *arg1
(*(r9 + 0x268))(arg1, arg2, rax_4, r9)
EnterCriticalSection(&data_143f3d1e8)
void* rbx_1 = arg_8
sub_140865c40(&data_143a2dbd0, &arg_8, rbx_1)
int64_t rax_5 = sx.q(arg_8.d)
void* const rcx_7

if (rax_5.d == 0xffffffff)
    rcx_7 = nullptr
else
    rcx_7 = data_143a2dbd0 + rax_5 * 0x18

int32_t temp0 = *(rcx_7 + 8)
*(rcx_7 + 8) -= 1

if (temp0 == 1)
    sub_140599090(rbx_1 + 0x98)
    sub_140868c90(&data_143a2dbd0, rbx_1)

return LeaveCriticalSection(&data_143f3d1e8) __tailcall
