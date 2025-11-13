// 函数: sub_1418f61e0
// 地址: 0x1418f61e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_40 = 0
int128_t var_68 = zx.o(0)
int32_t var_58 = 1
void*** rbx = nullptr
int128_t var_54 = data_143dbb1e0
int32_t var_44 = (1 << (data_1439c7a34).b) - 1
int64_t var_38 = 0
int32_t var_30 = 0
void*** rax_2 = j_sub_140a82f30(0x110)

if (rax_2 != 0)
    rbx = sub_1418f27f0(rax_2, *(arg1 + 0x58), *(arg4 + 0x3c), arg6, arg7, arg5, *(arg4 + 0x38), 
        *(arg4 + 0x40), &var_68)

void*** r8_4 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &r8_4[8]

if (rax_4 u> *(arg3 + 0x38))
    sub_140b0e3d0(arg3 + 0x30, 0x48)
    r8_4 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &r8_4[8]

*(arg3 + 0x30) = rax_4
*(arg3 + 0x14) += 1
**(arg3 + 8) = r8_4
*(arg3 + 8) = &r8_4[1]
int64_t rdx_2 = *(*(arg1 + 0x58) + 0x1a50)
*r8_4 = &data_142ff1f78
r8_4[5].d = arg5
r8_4[7] = arg8
r8_4[1] = 0
r8_4[2] = rdx_2
r8_4[3] = arg4
r8_4[4] = rbx
*(r8_4 + 0x2c) = arg6
r8_4[6].d = arg7
*arg2 = rbx

if (rbx != 0)
    rbx[1].d += 1

return arg2
