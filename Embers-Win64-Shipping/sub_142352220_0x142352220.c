// 函数: sub_142352220
// 地址: 0x142352220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg3, 4)

int64_t* rcx_2 = arg1[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    arg2[1] = *r8_1
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[1], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[1], 4)

int64_t* rcx_4 = arg1[1]
int32_t* r8_2 = *rcx_4

if (&r8_2[1] u<= rcx_4[1])
    arg2[2] = *r8_2
    int64_t* rax_10 = arg1[1]
    *rax_10 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[2], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[2], 4)

int64_t* rcx_6 = arg1[1]
int32_t* r8_3 = *rcx_6

if (&r8_3[1] u<= rcx_6[1])
    arg2[3] = *r8_3
    int64_t* rax_14 = arg1[1]
    *rax_14 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[3], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[3], 4)

int64_t* rcx_8 = arg1[1]
int32_t* r8_4 = *rcx_8

if (&r8_4[1] u<= rcx_8[1])
    arg2[4] = *r8_4
    int64_t* rax_18 = arg1[1]
    *rax_18 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[4], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[4], 4)

int64_t* rcx_10 = arg1[1]
int32_t* rdx_4 = *rcx_10
int32_t arg_8

if (&rdx_4[1] u> rcx_10[1])
    int32_t rax_22
    rax_22.b = arg2[5].b != 0
    arg_8 = rax_22
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    arg2[5].b = arg_8 != 0
else
    void* rax_20
    rax_20.b = *rdx_4 != 0
    arg2[5].b = rax_20.b
    int64_t* rax_21 = arg1[1]
    *rax_21 += 4

int64_t* rcx_12 = arg1[1]
int32_t* rdx_6 = *rcx_12

if (&rdx_6[1] u> rcx_12[1])
    int32_t rax_27
    rax_27.b = *(arg2 + 0x15) != 0
    arg_8 = rax_27
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    *(arg2 + 0x15) = arg_8 != 0
else
    void* rax_25
    rax_25.b = *rdx_6 != 0
    *(arg2 + 0x15) = rax_25.b
    int64_t* rax_26 = arg1[1]
    *rax_26 += 4

int32_t rax_30

if ((arg1[5].b & 1) != 0)
    rax_30 = sub_140b4e7c0(arg1, &data_1439a9478)

if ((arg1[5].b & 1) == 0 || rax_30 s>= 0x25)
    int64_t* rcx_15 = arg1[1]
    int32_t* rdx_8 = *rcx_15
    
    if (&rdx_8[1] u<= rcx_15[1])
        void* rax_31
        rax_31.b = *rdx_8 != 0
        *(arg2 + 0x16) = rax_31.b
        int64_t* rax_32 = arg1[1]
        *rax_32 += 4
        return arg1
    
    int64_t rax_34 = *arg1
    int32_t rsi
    rsi.b = *(arg2 + 0x16) != 0
    arg_8 = rsi
    (*(rax_34 + 0x150))(arg1, &arg_8, 4)
    *(arg2 + 0x16) = arg_8 != 0

return arg1
