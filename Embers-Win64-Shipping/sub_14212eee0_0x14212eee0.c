// 函数: sub_14212eee0
// 地址: 0x14212eee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax
int512_t zmm1
rax, zmm1 = sub_14212ec40(arg1, arg2, arg3, arg4)

if (arg2[8].d s>= 0x104)
    return rax

int64_t* rcx = arg2[1]
int32_t arg_10 = 0
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &arg_10
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    arg_10 = *rdx
    *rcx += 4

int64_t* rdx_2 = arg2[1]
int32_t* r8_1 = *rdx_2
int32_t arg_18
bool cond:1_1

if (&r8_1[1] u> rdx_2[1])
    int64_t rax_6 = *arg2
    arg_18 = 0
    (*(rax_6 + 0x150))(arg2, &arg_18, 4)
    cond:1_1 = arg_18 != 0
else
    int32_t rcx_2 = *r8_1
    *rdx_2 = &r8_1[1]
    cond:1_1 = rcx_2 != 0

int64_t* rcx_4 = arg2[1]
int32_t rdi_1
rdi_1.b = cond:1_1
int64_t rax_8 = *rcx_4 + 4

if (rax_8 u<= rcx_4[1])
    *rcx_4 = rax_8
    return rax_8

int64_t rax_9 = *arg2
arg_18 = rdi_1
return (*(rax_9 + 0x150))(arg2, &arg_18, 4)
