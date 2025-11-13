// 函数: sub_140d35c30
// 地址: 0x140d35c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg2 + 0x20)
int32_t zmm0 = (*rax).d
int32_t r9 = rax[1].d
*(arg2 + 0x20) = rax + 0xc
int32_t arg_14 = r9
void* rax_3 = sub_140d1fd30(arg1, zmm0.q)

if ((*(rax_3 + 0xb0) & 0x400) == 0)
    return sub_140d152d0(arg1, rax_3, arg2, arg3, sub_140d276b0)

return sub_140be1ca0(rax_3, arg1, arg2, arg3) __tailcall
