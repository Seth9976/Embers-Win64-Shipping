// 函数: sub_14211b270
// 地址: 0x14211b270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x1d8))(arg1, &data_1439a9478)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg1, &data_1439a9478)

if (rax_1 s>= 0x15)
    sub_14211aee0(arg1, arg2, zmm1)
else
    (*(*arg1 + 0x140))(arg1, arg2)

int64_t* rcx_2 = arg1[1]
int32_t* rdx_1 = *rcx_2

if (&rdx_1[1] u> rcx_2[1])
    int32_t rax_5
    rax_5.b = *(arg2 + 0x24) != 0
    int32_t arg_8 = rax_5
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    *(arg2 + 0x24) = arg_8 != 0
else
    void* rax_3
    rax_3.b = *rdx_1 != 0
    *(arg2 + 0x24) = rax_3.b
    int64_t* rax_4 = arg1[1]
    *rax_4 += 4

int64_t* rcx_4 = arg1[1]
int32_t* rdx_3 = *rcx_4

if (&rdx_3[1] u> rcx_4[1])
    int64_t rax_10 = *arg1
    int32_t rsi
    rsi.b = *(arg2 + 0x10) != 0
    int32_t arg_10 = rsi
    (*(rax_10 + 0x150))(arg1, &arg_10, 4)
    *(arg2 + 0x10) = arg_10 != 0
else
    void* rax_8
    rax_8.b = *rdx_3 != 0
    *(arg2 + 0x10) = rax_8.b
    int64_t* rax_9 = arg1[1]
    *rax_9 += 4

sub_1409ac860(arg1, arg2 + 0x14, zmm1)
return arg1
