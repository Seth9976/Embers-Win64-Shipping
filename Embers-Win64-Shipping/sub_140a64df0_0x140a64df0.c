// 函数: sub_140a64df0
// 地址: 0x140a64df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140a1d9d0(*(*arg1 + 8), arg2, arg3)
int512_t zmm1_1 = sub_140a1d9d0(*(*arg1 + 8), &arg2[2], zmm1)
int64_t* r9 = *(*arg1 + 8)
int64_t* rcx_4 = r9[1]
int32_t* rdx_1 = *rcx_4
int32_t arg_8

if (&rdx_1[1] u> rcx_4[1])
    int32_t rax_3
    rax_3.b = arg2[4].b != 0
    arg_8 = rax_3
    (*(*r9 + 0x150))(r9, &arg_8, 4)
    arg2[4].b = arg_8 != 0
else
    void* rax_1
    rax_1.b = *rdx_1 != 0
    arg2[4].b = rax_1.b
    int64_t* rax_2 = r9[1]
    *rax_2 += 4

int64_t* r9_1 = *(*arg1 + 8)
int64_t* rcx_6 = r9_1[1]
int32_t* rdx_3 = *rcx_6

if (&rdx_3[1] u> rcx_6[1])
    int64_t rax_9 = *r9_1
    int32_t rsi
    rsi.b = *(arg2 + 0x21) != 0
    arg_8 = rsi
    (*(rax_9 + 0x150))(r9_1, &arg_8, 4)
    *(arg2 + 0x21) = arg_8 != 0
else
    void* rax_7
    rax_7.b = *rdx_3 != 0
    *(arg2 + 0x21) = rax_7.b
    int64_t* rax_8 = r9_1[1]
    *rax_8 += 4

return sub_140a64f00(arg1, &arg2[0xf], sub_140a64f00(arg1, &arg2[5], zmm1_1)) __tailcall
