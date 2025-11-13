// 函数: sub_141cb3520
// 地址: 0x141cb3520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2[1]
int64_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg1 = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 8
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b540d0(arg2, arg1, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1, 8)

sub_1409ac860(arg2, &arg1[1], arg3)
int64_t* rcx_3 = arg2[1]
int32_t* rdx_3 = *rcx_3
bool result

if (&rdx_3[1] u> rcx_3[1])
    int32_t rax_6
    rax_6.b = arg1[3].b != 0
    int32_t arg_8 = rax_6
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    result = arg_8 != 0
    arg1[3].b = result
else
    void* rax_4
    rax_4.b = *rdx_3 != 0
    arg1[3].b = rax_4.b
    int64_t* rax_5 = arg2[1]
    *rax_5 += 4
    result = arg1[3].b

if (result == 0)
    return result

return (*(*arg2 + 0x150))(arg2, arg1 + 0x19, 0x10)
