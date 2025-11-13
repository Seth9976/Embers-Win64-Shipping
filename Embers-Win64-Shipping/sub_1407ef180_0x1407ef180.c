// 函数: sub_1407ef180
// 地址: 0x1407ef180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_14399f5f0
void arg_8
int64_t* rax_1
int128_t zmm6_1
rax_1, zmm6_1 = sub_140b58260(&arg_8, &(*U"RGBXYZF10|")[3], 1)
int64_t rdi = sx.q(arg2[1].d)
int32_t rax_2 = (rdi + 1).d
int64_t var_30 = *rax_1
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t rax_3 = *arg2
int64_t rcx_3 = rdi << 5
*(rcx_3 + rax_3) = (arg1 + 0x58).o
*(rcx_3 + rax_3 + 0x10) = zmm6_1
data_14399f600
int64_t* rax_5
int128_t zmm6_2
rax_5, zmm6_2 = sub_140b58260(&arg_8, &(*U"RGBXYZF10|")[4], 1)
int64_t rdi_1 = sx.q(arg2[1].d)
int32_t rax_6 = (rdi_1 + 1).d
int64_t var_30_1 = *rax_5
arg2[1].d = rax_6

if (rax_6 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t result = *arg2
int64_t rcx_8 = rdi_1 << 5
*(rcx_8 + result) = (arg1 + 0xd8).o
*(rcx_8 + result + 0x10) = zmm6_2
return result
