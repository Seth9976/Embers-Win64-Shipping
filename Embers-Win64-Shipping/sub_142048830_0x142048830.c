// 函数: sub_142048830
// 地址: 0x142048830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg3
arg3.b = 1
sub_14237f650(arg1, rsi, arg3.b)
*arg1 = &data_1432ab988
arg1[0xc8] = rsi[0x88]
arg1[0xc9] = rsi
arg1[0xca] = rsi[0x9d]
void* rax_2 = rsi[0x9e]
arg1[0xcb] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[0xcc] = 0
arg1[0xcd] = 0
arg1[0xce] = *(arg1[0xc9][0x88] + 0x50)
arg1[0xcf].d = arg4
sub_142098cf0(&arg1[0xc9])

if (*(arg1[0xc9][0x88] + 0xc8) != 0)
    int32_t i = 0
    
    if (arg1[0xce][1].d s> 0)
        int64_t* r14_1 = nullptr
        
        do
            int64_t* rax_7 = sub_141ee6400(arg1[0xc9])
            int64_t r9 = *rax_7
            (*(r9 + 0x208))(rax_7, *(r14_1 + arg1[0xcc]), arg1[0xc9][0x88], r9)
            r14_1 = &r14_1[1]
            i += 1
        while (i s< arg1[0xce][1].d)

__builtin_memset(&arg1[0xe5], 0, 0x30)
*(arg1 + 0x3b) |= 2
sub_1420a4550(arg1, rsi)
sub_1420a4970(arg1)
*arg1 = &data_1432abb38
arg1[0xeb] = rsi[0xa8]
void* rax_10 = rsi[0xa9]
arg1[0xec] = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

arg1[0xed] = rsi[0xa8]
arg1[0xee] = 0
int32_t rbp_1 = rsi[0xb5].d
int64_t r14_2 = rsi[0xb4]
arg1[0xef].d = rbp_1

if (rbp_1 != 0)
    sub_1405c4b20(&arg1[0xee], rbp_1, 0)
    memcpy(arg1[0xee], r14_2, rbp_1 * 0x1c)
else
    *(arg1 + 0x77c) = 0

int32_t rax_12 = rsi[0xac].d

if (rax_12 s<= 0)
    rax_12 = *(rsi + 0x564)

arg1[0xf0].d = rax_12
void* rcx_9 = &arg1[0xf6]
*(arg1 + 0x784) = *(rsi + 0x5dc)
__builtin_memset(&arg1[0xf2], 0, 0x20)
*(rcx_9 + 0x10) = 0
*(rcx_9 + 0x18) = 0
*(rcx_9 + 0x1c) = 0x80
void* rax_14 = *(rcx_9 + 0x10)

if (rax_14 != 0)
    rcx_9 = rax_14

*rcx_9 = 0
*(rcx_9 + 8) = 0
arg1[0xfa].d = 0xffffffff
*(arg1 + 0x7d4) = 0
arg1[0xfc] = 0
arg1[0xfd].d = 0
arg1[0xfe].b = arg2
char rax_16 = (*(*rsi + 0x8e0))(rsi, zx.q(arg4))
*(arg1 + 0x7f4) = 0xffffffff
*(arg1 + 0x7f1) = rax_16
sub_142069d20(arg1, rsi)
return arg1
