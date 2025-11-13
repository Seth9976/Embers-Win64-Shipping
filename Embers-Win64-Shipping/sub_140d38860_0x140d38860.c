// 函数: sub_140d38860
// 地址: 0x140d38860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg2 + 0x20)
int32_t zmm0 = (*rax).d
int32_t r9 = rax[1].d
*(arg2 + 0x20) = rax + 0xc
int32_t arg_14 = r9
void* rax_3
int512_t zmm0_1
rax_3, zmm0_1 = sub_140d1fd30(arg1, zmm0.q)
return sub_140d19360(arg1, arg2, arg3, rax_3, zmm0_1) __tailcall
