// 函数: sub_1417526f0
// 地址: 0x1417526f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141754910(arg1, arg2, arg3)
void* rsi = *(arg1 + 0x40)
sub_14090ad70(arg2, rsi + 0x18, arg3)
int512_t zmm1 = sub_1416f1dc0(arg2, rsi + 0x28)
int64_t* rcx_2 = arg2[1]
int32_t* r8 = *rcx_2

if (&r8[1] u<= rcx_2[1])
    *(rsi + 0x88) = *r8
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, rsi + 0x88, zmm1)
else
    (*(*arg2 + 0x150))(arg2, rsi + 0x88, 4)

int64_t* rax_4
int512_t zmm1_1
rax_4, zmm1_1 = sub_1417078f0(arg2, rsi + 0x90, zmm1)
return sub_141707c80(rax_4, rsi + 0xa0, zmm1_1) __tailcall
