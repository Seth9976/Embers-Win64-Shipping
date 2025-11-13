// 函数: sub_141e2a370
// 地址: 0x141e2a370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141df1e90(arg1)
void* rbp = nullptr
void* arg_8 = rax
void* r14

if (rax == 0)
    r14 = nullptr
else
    r14 = sub_141e01bc0(*(rax + 0x10))

void* r15 = arg2[4]

if (arg1[0x11] != 0)
    sub_141e1be90(arg1)

if (rax != 0 && rax != arg2)
    sub_141e0ebf0(rax)
    sub_1409d7d20(r15 + 0x6c0, &arg_8)
    int32_t rax_3 = *(arg_8 + 0xc)
    
    if (rax_3 s< data_143e1d9b4)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_3)
        uint32_t rdx_3 = zx.d(temp0_1)
        int32_t rax_5 = temp1_1 + rdx_3
        rbp = *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_3) * 0x18
    
    *(rbp + 8) |= 0x20000000

arg1[6] = arg2
sub_141e1bc40(arg1, arg2)
int64_t* rbx_1 = arg2[2]
(*(*arg1 + 0xd0))(arg1, arg2, rbx_1)
int64_t* rax_11 = sub_141e01bc0(rbx_1)
int64_t r8_1 = *arg1
int64_t result
int32_t zmm0
zmm0, result = sub_141e22620(r14, rax_11, *(*(r8_1 + 0xe8))(arg1, &arg_8, r8_1))
*(arg1 + 0x94) = zmm0
return result
