// 函数: sub_140670400
// 地址: 0x140670400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t* result = sub_14066d460(arg1 + 0x30, &arg_8, arg2)

if (*result == 0xffffffff)
    return result

sub_14066d460(arg1 + 0x30, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rax_2

if (rax.d == 0xffffffff)
    rax_2 = nullptr
else
    rax_2 = rax * 0x38 + *(arg1 + 0x30)

int64_t* r14_1 = rax_2 + 8

if (rax_2 == 0)
    r14_1 = nullptr

sub_140679060(arg2 + 0x48, r14_1[3])
sub_140679060(arg2 + 0x60, r14_1[4])
int32_t rcx_4
rcx_4.b = sub_140b5b8a0(r14_1[2].d, 0) == 0

if ((*(r14_1 + 0x14) != 0 | rcx_4.b) != 0)
    void* rax_4 = sub_140d3c6e0(&r14_1[1])
    
    if (rax_4 != 0 && sub_140d1fd20(rax_4, r14_1[2]) != 0)
        arg_8.q = arg2
        int64_t* rax_6 = sub_140d3c6e0(&r14_1[1])
        int64_t rax_7 = sub_140d1fd30(rax_6, r14_1[2])
        int64_t r9_1 = *rax_6
        (*(r9_1 + 0x210))(rax_6, rax_7, &arg_8, r9_1)

*r14_1 = 0
return sub_140679130(arg1 + 0x30, arg2)
