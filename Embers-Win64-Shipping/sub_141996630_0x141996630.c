// 函数: sub_141996630
// 地址: 0x141996630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg3
int32_t var_44 = arg3[1]
int32_t var_40 = arg3[2]
int32_t var_3c = arg3[3]
int64_t* rax_4 = sub_14081d830(0x10, *(arg1 + 8), 1, 0)
rax_4[1] = 0
int64_t* arg_8 = rax_4
*rax_4 = arg2
int64_t* rsi = arg_8
int64_t** var_28 = &arg_8
int64_t var_20 = arg2
void*** rax_5 = sub_14081d830(0x58, *(arg1 + 8), 1, 0)
void*** rbx_1 = rax_5

if (rax_5 == 0)
    rbx_1 = nullptr
else
    void var_38
    int128_t zmm0_1 = *sub_14198f6d0(&var_38, rsi)
    rbx_1[2] = 0
    rbx_1[3] = 0
    *(rbx_1 + 0x20) = zmm0_1
    rbx_1[6].b = 2
    *rbx_1 = &data_14300aa00
    *(rbx_1 + 0x38) = var_28.o
    *(rbx_1 + 0x48) = rax.o

rbx_1[2] = *(arg1 + 0x1a0)
rbx_1[3] = *(arg1 + 0x218)
int64_t rsi_1 = sx.q(*(arg1 + 0x18))
int32_t rax_9 = (rsi_1 + 1).d
*(arg1 + 0x18) = rax_9

if (rax_9 s> *(arg1 + 0x1c))
    sub_14083a440(arg1 + 0x10, rsi_1.d)

int64_t result = *(arg1 + 0x10)
*(result + (rsi_1 << 3)) = rbx_1
return result
