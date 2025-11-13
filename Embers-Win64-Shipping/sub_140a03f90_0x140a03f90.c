// 函数: sub_140a03f90
// 地址: 0x140a03f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 s< 0 || arg2 s>= *(arg1 + 0x450))
    return 

int32_t rax_1 = arg3[1].d
int64_t* rsi_3 = (sx.q(arg2) << 6) + *(arg1 + 0x448)
int64_t rbx_1 = sx.q(rsi_3[1].d)

if (rbx_1.d s> rax_1)
    arg3[1].d = rbx_1.d
    
    if (rbx_1.d s> *(arg3 + 0xc))
        sub_140638a00(arg3)
else if (rbx_1.d s< rax_1 && rbx_1.d != rax_1)
    arg3[1].d = rbx_1.d
    sub_140775970(arg3)

int32_t rax_2 = arg5[1].d

if (rbx_1.d s> rax_2)
    arg5[1].d = rbx_1.d
    
    if (rbx_1.d s> *(arg5 + 0xc))
        sub_140638a00(arg5)
else if (rbx_1.d s< rax_2 && rbx_1.d != rax_2)
    arg5[1].d = rbx_1.d
    sub_140775970(arg5)

int32_t rax_3 = arg6[1].d

if (rbx_1.d s> rax_3)
    arg6[1].d = rbx_1.d
    
    if (rbx_1.d s> *(arg6 + 0xc))
        sub_1405a4d70(arg6)
else if (rbx_1.d s< rax_3 && rbx_1.d != rax_3)
    arg6[1].d = rbx_1.d
    sub_1405c53d0(arg6)

int32_t rax_4 = arg7[1].d

if (rbx_1.d s> rax_4)
    arg7[1].d = rbx_1.d
    
    if (rbx_1.d s> *(arg7 + 0xc))
        sub_1405a4f90(arg7)
else if (rbx_1.d s< rax_4 && rbx_1.d != rax_4)
    arg7[1].d = rbx_1.d
    sub_1405a5010(arg7)

int64_t rbx_2 = 0

if (rbx_1 s> 0)
    int64_t r8 = 0
    int64_t r10_1 = 0
    int64_t r9 = 0
    int64_t r11_1 = 0
    
    do
        r10_1 += 0x10
        int64_t rcx_8 = *arg3
        r9 += 0xc
        int64_t* rdx_5 = *rsi_3 + r11_1
        r11_1 += 0x4c
        *(rcx_8 + r9 - 0xc) = *rdx_5
        *(rcx_8 + r9 - 4) = rdx_5[1].d
        int64_t rcx_9 = *arg5
        *(rcx_9 + r9 - 0xc) = *(rdx_5 + 0xc)
        *(rcx_9 + r9 - 4) = *(rdx_5 + 0x14)
        *(*arg6 + (r8 << 3)) = *(rdx_5 + 0x2c)
        r8 += 1
        *(r10_1 + *arg7 - 0x10) = *(rdx_5 + 0x18)
    while (r8 s< rbx_1)

int64_t rbp_2 = sx.q(rsi_3[3].d)
int32_t rax = arg4[1].d

if (rbp_2.d s> rax)
    arg4[1].d = rbp_2.d
    
    if (rbp_2.d s> *(arg4 + 0xc))
        sub_1405a4cf0(arg4)
else if (rbp_2.d s< rax && rbp_2.d != rax)
    arg4[1].d = rbp_2.d
    sub_1405dac90(arg4)

if (rbp_2 s<= 0)
    return 

do
    *(*arg4 + (rbx_2 << 2)) = *(rsi_3[2] + (rbx_2 << 2))
    rbx_2 += 1
while (rbx_2 s< rbp_2)
