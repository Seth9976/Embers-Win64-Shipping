// 函数: sub_1417b5070
// 地址: 0x1417b5070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg2, &data_1439a9538)

if (rax_1 s< 0x1c)
    int64_t* result = sub_1417083f0(arg2, arg1, zmm1)
    arg1[4].b = 1
    return result

int64_t* rcx_3 = arg2[1]
int32_t* rdx_1 = *rcx_3
bool rax_4

if (&rdx_1[1] u> rcx_3[1])
    int32_t rax_5
    rax_5.b = arg1[4].b != 0
    int32_t arg_10 = rax_5
    (*(*arg2 + 0x150))(arg2, &arg_10, 4)
    rax_4 = arg_10 != 0
    arg1[4].b = rax_4
else
    void* rax_2
    rax_2.b = *rdx_1 != 0
    arg1[4].b = rax_2.b
    int64_t* rax_3 = arg2[1]
    *rax_3 += 4
    rax_4 = arg1[4].b

if (rax_4 == 0)
    return sub_1417a3140(arg2, &arg1[2], zmm1) __tailcall

return sub_1417083f0(arg2, arg1, zmm1) __tailcall
