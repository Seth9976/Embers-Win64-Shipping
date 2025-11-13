// 函数: sub_140b569b0
// 地址: 0x140b569b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg5 == 0)
    return 

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(arg2)
int32_t r8 = arg2 + arg5
int32_t rbx_1 = arg2 & 7
int32_t r13_1 = arg4 + arg5
int32_t rsi_2 = arg4 & 7
uint64_t r10_2 = zx.q(((temp0_1 & 7) + temp1_1) s>> 3)
int32_t temp2_1
int32_t temp3_1
temp2_1:temp3_1 = sx.q(arg4)
uint64_t r9_1 = zx.q(((temp2_1 & 7) + temp3_1) s>> 3)
char rcx_1 = rbx_1.b

if (arg5 s<= 8)
    char r12_1 = (0xff << rcx_1).b
    int32_t temp8_1
    int32_t temp9_1
    temp8_1:temp9_1 = sx.q(r8 - 1)
    char r11_1 = (0xfe << ((r8 - 1).b & 7)).b
    uint64_t r15_2 = zx.q(((temp8_1 & 7) + temp9_1) s>> 3)
    int32_t temp10_1
    int32_t temp11_1
    temp10_1:temp11_1 = sx.q(r13_1 - 1)
    char* rdx_8 = r9_1 + arg3
    uint64_t rax_10 = zx.q((temp11_1 + (temp10_1 & 7)) s>> 3)
    uint32_t r8_4
    
    if (r9_1.d != rax_10.d)
        r8_4 = zx.d(*(rax_10 + arg3)) << (8 - rsi_2.b) | zx.d(*rdx_8) u>> rsi_2.b
    else
        r8_4 = zx.d(*rdx_8) u>> rsi_2.b
    
    char rdx_9 = r8_4.b << rbx_1.b
    char rcx_7 = *(r10_2 + arg1)
    
    if (r10_2.d != r15_2.d)
        *(r10_2 + arg1) = (not.b(r12_1) & rcx_7) | (rdx_9 & r12_1)
        *(r15_2 + arg1) = ((r8_4 u>> (8 - rbx_1.b)).b & not.b(r11_1)) | (r11_1 & *(r15_2 + arg1))
    else
        r11_1 = not.b(r11_1) & r12_1
        *(r10_2 + arg1) = (not.b(r11_1) & rcx_7) | (rdx_9 & r11_1)
    
    return 

int32_t rbx_2 = rbx_1 - rsi_2
int32_t temp4_1
int32_t temp5_1
temp4_1:temp5_1 = sx.q(r8)
char r15_3 = (0xff << rcx_1).b
int32_t rsi_3 = rbx_2 + 8
int32_t r14_2 = 0xff << (r8.b & 7)
int32_t temp6_1
int32_t temp7_1
temp6_1:temp7_1 = sx.q(r13_1)
int32_t rcx_13 = (((temp4_1 & 7) + temp5_1) s>> 3) - r10_2.d
uint32_t rdx_14 = zx.d(*(r9_1 + arg3))
int32_t r11_4 = (((temp6_1 & 7) + temp7_1) s>> 3) - r9_1.d
uint32_t rdx_15

if (rbx_2 s< 0)
    bool cond:1_1 = rcx_13 s>= r11_4 - 1
    r11_4 -= 1
    
    if (cond:1_1)
        r11_4 = rcx_13
    
    uint32_t rdx_16 = rdx_14 << rsi_3.b
    r9_1 = zx.q(r9_1.d + 1)
    rsi_3 += 8
    rdx_15 = ((zx.d(*(r9_1 + arg3)) << rsi_3.b) + rdx_16) u>> 8
else
    if (rcx_13 s>= r11_4)
        r11_4 = rcx_13
    
    rdx_15 = rdx_14 << rbx_2.b

uint64_t r9_2 = zx.q(r9_1.d + 1)
*(r10_2 + arg1) = (not.b(r15_3) & *(r10_2 + arg1)) | (r15_3 & rdx_15.b)
r10_2 = zx.q(r10_2.d + 1)

if (r11_4 u> 1)
    uint64_t i_1 = zx.q(r11_4 - 1)
    uint64_t i
    
    do
        uint32_t r8_10 = zx.d(*(r9_2 + arg3)) << rsi_3.b
        r9_2 = zx.q(r9_2.d + 1)
        rdx_15 = (rdx_15 + r8_10) u>> 8
        *(r10_2 + arg1) = rdx_15.b
        r10_2 = zx.q(r10_2.d + 1)
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r14_2 == 0xff)
    return 

if ((r13_1 - 1) u>> 3 == r9_2.d)
    rdx_15 += zx.d(*(r9_2 + arg3)) << rsi_3.b

char rax = r14_2.b
r14_2.b &= *(r10_2 + arg1)
*(r10_2 + arg1) = (not.b(rax) & (rdx_15 u>> 8).b) | r14_2.b
