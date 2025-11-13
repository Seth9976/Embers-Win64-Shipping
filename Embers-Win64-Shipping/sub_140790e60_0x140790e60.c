// 函数: sub_140790e60
// 地址: 0x140790e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_14399f5f0
void arg_8
int64_t* rax_1
int128_t zmm6_1
rax_1, zmm6_1 = sub_140b58260(&arg_8, &data_142daf3e8, 1)
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
rax_5, zmm6_2 = sub_140b58260(&arg_8, u"Green", 1)
int64_t rdi_1 = sx.q(arg2[1].d)
int32_t rax_6 = (rdi_1 + 1).d
int64_t var_30_1 = *rax_5
arg2[1].d = rax_6

if (rax_6 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t rax_7 = *arg2
int64_t rcx_8 = rdi_1 << 5
*(rcx_8 + rax_7) = (arg1 + 0xd8).o
*(rcx_8 + rax_7 + 0x10) = zmm6_2
data_14399f610
int64_t* rax_9
int128_t zmm6_3
rax_9, zmm6_3 = sub_140b58260(&arg_8, u"Blue", 1)
int64_t rdi_2 = sx.q(arg2[1].d)
int32_t rax_10 = (rdi_2 + 1).d
int64_t var_30_2 = *rax_9
arg2[1].d = rax_10

if (rax_10 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t rax_11 = *arg2
int64_t rcx_13 = rdi_2 << 5
*(rcx_13 + rax_11) = (arg1 + 0x158).o
*(rcx_13 + rax_11 + 0x10) = zmm6_3
data_14399f5c0
int64_t* rax_13
int128_t zmm6_4
rax_13, zmm6_4 = sub_140b58260(&arg_8, u"Alpha", 1)
int64_t rdi_3 = sx.q(arg2[1].d)
int32_t rax_14 = (rdi_3 + 1).d
int64_t var_30_3 = *rax_13
arg2[1].d = rax_14

if (rax_14 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t result = *arg2
int64_t rcx_18 = rdi_3 << 5
*(rcx_18 + result) = (arg1 + 0x1d8).o
*(rcx_18 + result + 0x10) = zmm6_4
return result
