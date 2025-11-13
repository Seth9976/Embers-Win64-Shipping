// 函数: sub_1410104a0
// 地址: 0x1410104a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** r14_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &r14_2[0x11]

if (rax u> *(arg2 + 0x38))
    arg3 = sub_140b0e3d0(arg2 + 0x30, 0x90)
    r14_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &r14_2[0x11]

*(arg2 + 0x30) = rax
*(arg2 + 0x14) += 1
**(arg2 + 8) = r14_2
*(arg2 + 8) = &r14_2[1]
int64_t* rdi_1 = arg1[1]
int32_t rsi = arg1[2].d
int64_t rax_2 = *arg1
r14_2[1] = 0
*r14_2 = &data_142f00038
r14_2[2] = rax_2
sub_14103f450(&r14_2[3], *rdi_1)
r14_2[0x10].d = rsi
int64_t result
int512_t zmm0
result, zmm0 = sub_14105b290(&r14_2[3], rdi_1, arg3)
void* rbx = arg1[1]

if (rbx == 0)
    return result

j_sub_141059a80(rbx, zmm0)
return j_sub_140a74f90(rbx)
