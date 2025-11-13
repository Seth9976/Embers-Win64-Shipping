// 函数: sub_14219c580
// 地址: 0x14219c580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_1421bfdf0(arg1, arg2, arg3)
int64_t* r8 = arg2[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *(arg1 + 0xd0) = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xd0, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xd0, 4)

int64_t* rcx_2 = arg2[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    *(arg1 + 0xd4) = *r8_1
    int64_t* rax_6 = arg2[1]
    *rax_6 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xd4, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xd4, 4)

int64_t* rcx_4 = arg2[1]
int32_t* r8_2 = *rcx_4

if (&r8_2[1] u<= rcx_4[1])
    *(arg1 + 0xd8) = *r8_2
    int64_t* rax_10 = arg2[1]
    *rax_10 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xd8, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xd8, 4)

int64_t* rcx_6 = arg2[1]
int32_t* r8_3 = *rcx_6

if (&r8_3[1] u<= rcx_6[1])
    *(arg1 + 0xdc) = *r8_3
    int64_t* rax_14 = arg2[1]
    *rax_14 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xdc, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xdc, 4)

int64_t* rcx_8 = arg2[1]
int32_t* rdx_4 = *rcx_8
int32_t arg_8

if (&rdx_4[1] u> rcx_8[1])
    int32_t rax_18
    rax_18.b = *(arg1 + 0xe0) != 0
    arg_8 = rax_18
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    *(arg1 + 0xe0) = arg_8 != 0
else
    void* rax_16
    rax_16.b = *rdx_4 != 0
    *(arg1 + 0xe0) = rax_16.b
    int64_t* rax_17 = arg2[1]
    *rax_17 += 4

int64_t* rcx_10 = arg2[1]
int32_t* r8_4 = *rcx_10

if (&r8_4[1] u<= rcx_10[1])
    *(arg1 + 0xe4) = *r8_4
    int64_t* rax_23 = arg2[1]
    *rax_23 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xe4, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xe4, 4)

int64_t* rcx_12 = arg2[1]
int32_t* r8_5 = *rcx_12

if (&r8_5[1] u<= rcx_12[1])
    *(arg1 + 0xe8) = *r8_5
    int64_t* rax_27 = arg2[1]
    *rax_27 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xe8, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xe8, 4)

int64_t* rcx_14 = arg2[1]
char* rdx_8 = *rcx_14

if (&rdx_8[1] u> rcx_14[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0xec, 1)
else
    *(arg1 + 0xec) = *rdx_8
    int64_t* rax_31 = arg2[1]
    *rax_31 += 1

int64_t* rcx_16 = arg2[1]
int32_t* rdx_10 = *rcx_16

if (&rdx_10[1] u> rcx_16[1])
    int64_t rax_35 = *arg2
    int32_t rsi
    rsi.b = *(arg1 + 0xed) != 0
    arg_8 = rsi
    (*(rax_35 + 0x150))(arg2, &arg_8, 4)
    *(arg1 + 0xed) = arg_8 != 0
else
    void* rax_33
    rax_33.b = *rdx_10 != 0
    *(arg1 + 0xed) = rax_33.b
    int64_t* rax_34 = arg2[1]
    *rax_34 += 4

return sub_1408d9160(arg2, arg1 + 0xf0, zmm1) __tailcall
