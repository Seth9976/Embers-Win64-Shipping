// 函数: sub_1422d1490
// 地址: 0x1422d1490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 4
int64_t* r8 = arg2[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *(arg1 + 0x78) = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x78, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x78, 4)

int64_t* rcx_2 = arg2[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    *(arg1 + 0x7c) = *r8_1
    int64_t* rax_6 = arg2[1]
    *rax_6 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x7c, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x7c, 4)

int64_t* rcx_4 = arg2[1]
int32_t* rdx_2 = *rcx_4
int32_t arg_8

if (&rdx_2[1] u> rcx_4[1])
    int32_t rax_10
    rax_10.b = *(arg1 + 0x80) != 0
    arg_8 = rax_10
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    *(arg1 + 0x80) = arg_8 != 0
else
    void* rax_8
    rax_8.b = *rdx_2 != 0
    *(arg1 + 0x80) = rax_8.b
    int64_t* rax_9 = arg2[1]
    *rax_9 += 4

int64_t* rcx_6 = arg2[1]
int32_t* rdx_4 = *rcx_6
bool rcx_7

if (&rdx_4[1] u> rcx_6[1])
    int64_t rax_15 = *arg2
    int32_t rbp
    rbp.b = *(arg1 + 0x81) != 0
    arg_8 = rbp
    (*(rax_15 + 0x150))(arg2, &arg_8, 4)
    rcx_7 = arg_8 != 0
    *(arg1 + 0x81) = rcx_7
else
    void* rax_13
    rax_13.b = *rdx_4 != 0
    *(arg1 + 0x81) = rax_13.b
    int64_t* rax_14 = arg2[1]
    *rax_14 += 4
    rcx_7 = *(arg1 + 0x81)

int32_t result = 8

if (rcx_7 != 0)
    result = 0x10

bool cond:5 = *(arg1 + 0x80) != 0
*(arg1 + 0x70) = result

if (cond:5)
    rsi = 8

*(arg1 + 0x74) = rsi
return result
