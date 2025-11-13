// 函数: sub_142307d20
// 地址: 0x142307d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t* rdx = *rcx
int32_t arg_8

if (&rdx[1] u> rcx[1])
    int32_t rax_2
    rax_2.b = *arg2 != 0
    arg_8 = rax_2
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    *arg2 = arg_8 != 0
else
    void* rax
    rax.b = *rdx != 0
    *arg2 = rax.b
    int64_t* rax_1 = arg1[1]
    *rax_1 += 4

int64_t* rcx_2 = arg1[1]
int32_t* rdx_2 = *rcx_2

if (&rdx_2[1] u> rcx_2[1])
    int64_t rax_7 = *arg1
    int32_t rsi
    rsi.b = arg2[1] != 0
    arg_8 = rsi
    (*(rax_7 + 0x150))(arg1, &arg_8, 4)
    arg2[1] = arg_8 != 0
else
    void* rax_5
    rax_5.b = *rdx_2 != 0
    arg2[1] = rax_5.b
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4

void* rdi_1 = &arg2[4]
int64_t i_1 = 4
int64_t i

do
    int64_t* rcx_4 = arg1[1]
    int32_t* rdx_4 = *rcx_4
    
    if (&rdx_4[1] u<= rcx_4[1])
        *rdi_1 = *rdx_4
        int64_t* rax_11 = arg1[1]
        *rax_11 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdi_1, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdi_1, 4)
    
    rdi_1 += 4
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
