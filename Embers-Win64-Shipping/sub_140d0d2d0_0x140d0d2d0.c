// 函数: sub_140d0d2d0
// 地址: 0x140d0d2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce7ea0(arg1, arg2, arg3)
int64_t* r8 = arg2[1]
char* rcx = *r8

if (&rcx[1] u> r8[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0x78, 1)
else
    *(arg1 + 0x78) = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 1

int64_t* rcx_2 = arg2[1]
char* rdx_1 = *rcx_2

if (&rdx_1[1] u> rcx_2[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0x79, 1)
else
    *(arg1 + 0x79) = *rdx_1
    int64_t* rax_6 = arg2[1]
    *rax_6 += 1

int64_t* rcx_4 = arg2[1]
char* rdx_3 = *rcx_4

if (&rdx_3[1] u> rcx_4[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0x7a, 1)
else
    *(arg1 + 0x7a) = *rdx_3
    int64_t* rax_10 = arg2[1]
    *rax_10 += 1

int64_t* rcx_6 = arg2[1]
char* rdx_5 = *rcx_6

if (&rdx_5[1] u> rcx_6[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0x7b, 1)
else
    *(arg1 + 0x7b) = *rdx_5
    int64_t* rax_14 = arg2[1]
    *rax_14 += 1

int64_t* rcx_8 = arg2[1]
char i_1 = *(arg1 + 0x3c)
char* rdx_7 = *rcx_8

if (&rdx_7[1] u> rcx_8[1])
    (*(*arg2 + 0x150))(arg2, &i_1, 1)
else
    i_1 = *rdx_7
    *rcx_8 += 1

bool rax_29 = arg2[5].b
char arg_8[0x8]
arg_8[0] = 0

if ((rax_29 & 1) == 0)
    if ((rax_29 & 2) == 0)
        rax_29 = false
    else
        rax_29 = *(arg1 + 0x7b) == 0xff
    
    int64_t* rcx_13 = arg2[1]
    arg_8[0] = rax_29
    char* rdx_11 = *rcx_13
    
    if (&rdx_11[1] u> rcx_13[1])
        return (*(*arg2 + 0x150))(arg2, &arg_8, 1)
    
    char rax_31 = *rdx_11
    arg_8[0] = rax_31
    *rcx_13 += 1
    return rax_31

int64_t* rcx_10 = arg2[1]
char* rdx_9 = *rcx_10

if (&rdx_9[1] u> rcx_10[1])
    rcx_10, rdx_9 = (*(*arg2 + 0x150))(arg2, &arg_8, 1)
else
    arg_8[0] = *rdx_9
    *rcx_10 += 1

char rax_23 = arg_8[0]
uint32_t i = zx.d(i_1)
rcx_10.b = rax_23 != 0

if (rax_23 == 0)
    *(arg1 + 0x40) = (*(arg1 + 0x40) & 0xffffffffbffffdff) | 0x1000000000
else
    *(arg1 + 0x40) |= 0x1040000200

__builtin_memcpy(&arg_8, "\x01\x00\x00\x00", 4)
*(arg1 + 0x3c) = i
*(arg1 + 0x78) = i.b
*(arg1 + 0x79) = 0

if (rcx_10.b != 0)
    int64_t rax_24
    rax_24.b = 0xff
    *(arg1 + 0x7a) = 1
    *(arg1 + 0x7b) = 0xff
    return rax_24

if (i != 0)
    rdx_9.b = 0
    
    do
        char rcx_12 = arg_8[zx.q(rdx_9.b)]
        *(arg1 + 0x7a) = rcx_12
        
        if (rcx_12 != 0)
            break
        
        rdx_9.b += 1
        rdx_9 = zx.q(rdx_9.b)
        *(arg1 + 0x79) = rdx_9.b
    while (rdx_9.d u< i)

char rax_28 = *(arg1 + 0x7a)
*(arg1 + 0x7b) = rax_28
return rax_28
