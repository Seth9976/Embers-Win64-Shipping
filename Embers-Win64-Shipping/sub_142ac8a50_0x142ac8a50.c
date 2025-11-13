// 函数: sub_142ac8a50
// 地址: 0x142ac8a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg2

if (*arg5 s> 0)
    sub_142a4ab40(arg4)
    return arg4

int32_t rcx_1 = data_143ccb0b0

if (r9 s<= neg.d(rcx_1) || r9 s>= rcx_1)
    sub_142a4ab40(arg4)
    *arg5 = 1
    return arg4

if (r9 == 0)
    sub_142a48aa0(arg4, arg1 + 0x428, 0)
    return arg4

rcx_1.b = 1

if (r9 s< 0)
    r9 = neg.d(r9)
    rcx_1.b = 0

int32_t r13_2 = r9 s/ 0x36ee80
int32_t r9_1 = r9 + r13_2 * 0xffc91180
int32_t r14_2 = r9_1 s/ 0xea60
int32_t r15_2 = r9_1 s% 0xea60 s/ 0x3e8
void* rbp

if (rcx_1.b == 0)
    if (r15_2 != 0)
        rbp = *(arg1 + 0x508)
    else if (r14_2 != 0 || arg3 == 0)
        rbp = *(arg1 + 0x500)
    else
        rbp = *(arg1 + 0x518)
else if (r15_2 != 0)
    rbp = *(arg1 + 0x4f8)
else if (r14_2 != 0 || arg3 == 0)
    rbp = *(arg1 + 0x4f0)
else
    rbp = *(arg1 + 0x510)

sub_142a48aa0(arg4, arg1 + 0x470, 0)
int32_t i = 0

if (*(rbp + 8) s> 0)
    do
        void* rax_12 = sub_142ae72d0(rbp, i)
        int32_t rcx_5 = *(rax_12 + 0x10)
        
        if (rcx_5 == 0)
            sub_142a48d70(arg4, *(rax_12 + 8), 0, 0xffffffff)
        else if (rcx_5 == 1)
            sub_142ac77e0(arg1, arg4, r13_2, (arg3 == 0) + 1)
        else if (rcx_5 == 2)
            sub_142ac77e0(arg1, arg4, r14_2, true)
        else if (rcx_5 == 4)
            sub_142ac77e0(arg1, arg4, r15_2, (rcx_5 - 2).b)
        
        i += 1
    while (i s< *(rbp + 8))

int16_t rax_13 = *(arg1 + 0x4b8)

if (rax_13 s< 0)
    sub_142a48d00(arg4, arg1 + 0x4b0, 0, *(arg1 + 0x4bc))
    return arg4

sub_142a48d00(arg4, arg1 + 0x4b0, 0, sx.d(rax_13) s>> 5)
return arg4
