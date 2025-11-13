// 函数: sub_141ba19a0
// 地址: 0x141ba19a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
int64_t var_50 = 0
void* result = sub_140d2dfc0(sub_141c1b030(), rax, 0, 0, 0, 0, 0, 0, 0)
*(result + 8) |= 0x1000000

if (arg2 == 0)
    *arg1 = 0
    return result

sub_140d3a3a0(result + 0x38, (*(*arg2 + 0x150))(arg2))
void* rax_4
int64_t rdx_3
int64_t r8
int512_t zmm1_1
int32_t zmm6_1
rax_4, rdx_3, r8, zmm1_1, zmm6_1 = sub_141baf110(arg2, arg3)

if (rax_4 != 0)
    zmm1_1.o = zx.o(0)
    var_50.d = arg7
    _mm_cvtps_pd(arg4)
    zmm1_1.q = fconvert.d(zmm6_1)
    sub_141bc77b0(rax_4, rdx_3, r8, arg5, arg6, 0, 0)
    int64_t r8_1 = *arg2
    (*(r8_1 + 0x2e8))(arg2, rax_4, r8_1)
    sub_141bf4410(arg2)
    *(result + 0x40) = *sub_141b6d430(rax_4 + 0x760, &arg_8, result, sub_141bbe1d0)

*arg1 = rax_4
return result
