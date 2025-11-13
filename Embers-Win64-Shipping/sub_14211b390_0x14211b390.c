// 函数: sub_14211b390
// 地址: 0x14211b390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x1d8))(arg1, &data_1439a9478)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg1, &data_1439a9478)

if (rax_1 s>= 0x15)
    sub_14211aee0(arg1, arg2, zmm1)
else
    (*(*arg1 + 0x140))(arg1, arg2)

(*(*arg1 + 0x1d8))(arg1, &data_1439a94d8)
int32_t rax_4
int512_t zmm1_1
rax_4, zmm1_1 = sub_140b4e7c0(arg1, &data_1439a94d8)
int32_t arg_8

if (rax_4 s>= 8)
    int64_t* rcx_4 = arg1[1]
    int32_t* rdx_1 = *rcx_4
    
    if (&rdx_1[1] u> rcx_4[1])
        int32_t rax_7
        rax_7.b = *(arg2 + 0x28) != 0
        arg_8 = rax_7
        (*(*arg1 + 0x150))(arg1, &arg_8, 4)
        *(arg2 + 0x28) = arg_8 != 0
    else
        void* rax_5
        rax_5.b = *rdx_1 != 0
        *(arg2 + 0x28) = rax_5.b
        int64_t* rax_6 = arg1[1]
        *rax_6 += 4

int64_t* rcx_6 = arg1[1]
int32_t* r8 = *rcx_6

if (&r8[1] u<= rcx_6[1])
    *(arg2 + 0x24) = *r8
    int64_t* rax_12 = arg1[1]
    *rax_12 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2 + 0x24, zmm1_1)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 0x24, 4)

int64_t* rcx_8 = arg1[1]
int32_t* rdx_4 = *rcx_8

if (&rdx_4[1] u> rcx_8[1])
    int64_t rax_16 = *arg1
    int32_t rsi
    rsi.b = *(arg2 + 0x10) != 0
    arg_8 = rsi
    (*(rax_16 + 0x150))(arg1, &arg_8, 4)
    *(arg2 + 0x10) = arg_8 != 0
else
    void* rax_14
    rax_14.b = *rdx_4 != 0
    *(arg2 + 0x10) = rax_14.b
    int64_t* rax_15 = arg1[1]
    *rax_15 += 4

sub_1409ac860(arg1, arg2 + 0x14, zmm1_1)
return arg1
