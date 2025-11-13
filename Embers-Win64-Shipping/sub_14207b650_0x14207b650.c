// 函数: sub_14207b650
// 地址: 0x14207b650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int64_t* arg_8 = arg1
int32_t rax_1 = *(arg1 + 0xc)
int64_t rdi_1 = arg2
void* const rax_8

if (rax_1 s>= data_143e1d9b4)
    rax_8 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_1)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_1
    arg2 = sx.q(zx.d(rax_3.w) - rdx_1) * 3
    rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + (arg2 << 3)

if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0 && (*(*arg1 + 0x150))(arg1, arg2) == arg3
        && sub_141ddd150(arg1, 0x3e4ccccd, arg4).b != 0)
    sub_1405a7050(rdi_1, &arg_8)
