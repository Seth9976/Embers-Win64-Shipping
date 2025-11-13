// 函数: sub_140fe6240
// 地址: 0x140fe6240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg3
int64_t* rbx = arg3
*(rax + 8) += 1
int128_t zmm0 = *arg3
int128_t zmm1 = *(arg3 + 0x10)
int128_t zmm2 = *(arg3 + 0x20)
int128_t zmm3 = *(arg3 + 0x30)
int128_t zmm4 = *(arg3 + 0x40)
int128_t zmm5 = *(arg3 + 0x50)
int128_t zmm6 = *(arg3 + 0x60)
int128_t zmm7 = *(arg3 + 0x70)
uint128_t zmm8 = zx.o(arg3[0x10])
void*** rcx_2 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_1 = &rcx_2[0x13]

if (rax_1 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0xa0)
    rcx_2 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_1 = &rcx_2[0x13]
    zmm8 = zx.o(zmm8.q)

data_143f02bac += 1
data_143f02bc8 = rax_1
arg3.b = 1
*data_143f02ba0 = rcx_2
data_143f02ba0 = &rcx_2[1]
*(rcx_2 + 0x10) = zmm0
rcx_2[1] = 0
*(rcx_2 + 0x20) = zmm1
*rcx_2 = &data_142efae58
*(rcx_2 + 0x30) = zmm2
*(rcx_2 + 0x40) = zmm3
*(rcx_2 + 0x50) = zmm4
*(rcx_2 + 0x60) = zmm5
*(rcx_2 + 0x70) = zmm6
*(rcx_2 + 0x80) = zmm7
rcx_2[0x12] = zmm8.q
int64_t* arg_20
int32_t result = sub_141980430(arg2, &arg_20, arg3.b)
int64_t* rcx_6 = arg_20

if (rcx_6 != 0)
    result = rcx_6[9].d
    rcx_6[9].d -= 1
    
    if (result == 1)
        result = sub_140a2f6e0(rcx_6)

rbx[7] = 0
return result
