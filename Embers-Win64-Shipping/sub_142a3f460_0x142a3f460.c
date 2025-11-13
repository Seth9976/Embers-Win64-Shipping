// 函数: sub_142a3f460
// 地址: 0x142a3f460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax

if (arg2 != 3)
    rax = divu.dp.q(0x400000, 1 << arg3.b)
else
    rax = 1

int64_t r15_3 = (rax * 0x50 + 0x17f) & 0xffffffffffffff00
int64_t var_60 = r15_3
int64_t var_58 = r15_3
int64_t r14

if (arg1 != 0)
    r14 = (arg1 + 0x3ffff + r15_3) & 0xfffffffffffc0000
else
    r14 = 0x400000

int32_t rax_1 = sub_142a43b90(0xb)
int64_t rcx_1 = *(arg4 + 0x20)
int64_t rax_2 = sx.q(rax_1)
int64_t var_68 = rax_2
int64_t arg_20 = rcx_1

if (rcx_1 u>= rax_2)
    if (sub_142a43d70(3).b != 0 || arg2 s> 1)
        rax_2.b = 1
    else
        rax_2.b = 0
else if (arg2 s> 1)
    rax_2.b = 1
else
    rax_2.b = 0

uint64_t i = 0
char arg_8 = rax_2.b
char arg_10 = 0
int64_t* rbx_1

if ((r14 & 0xffffffffffbfffff) == 0)
    rbx_1 = *(arg4 + 0x50)

if ((r14 & 0xffffffffffbfffff) != 0 || rbx_1 == 0)
    bool var_77 = arg_20 u>= var_68
    int64_t* rax_8 = sub_142a413f0(r14, 0x400000, &arg_8, &var_77, &arg_10, &var_68, arg5)
    rbx_1 = rax_8
    
    if (rax_8 == 0)
        return rax_8
    
    if (arg_8 == 0)
        void* r9_4 = *(arg4 + 0x58)
        char var_78 = 0
        j_sub_142a41ee0(rbx_1, r15_3, &var_78, r9_4)
        char rax_9 = arg_10
        
        if (var_78 != 0)
            rax_9 = 1
        
        arg_10 = rax_9
    
    *rbx_1 = var_68
    rbx_1[1].b = var_77
    *(rbx_1 + 9) = arg_8
    sub_142a3fc30(r14.d, arg4)
else
    *(arg4 + 0x40) -= 1
    *(arg4 + 0x50) = rbx_1[2]
    rbx_1[2] = 0
    sub_142a43f80(*(arg4 + 0x58) + 0x1e0, 1)
    
    if (*(rbx_1 + 9) == 0 && arg2 s> 1)
        j_sub_142a41ee0(rbx_1, rbx_1[8], &arg_10, *(arg4 + 0x58))
        *(rbx_1 + 9) = 1
    
    if (rbx_1[1].b == 0)
        char rax_4 = sub_142a43d70(9)
        char rax_5
        
        if (rax_4 == 0)
            rax_5 = sub_142a43d70(8)
        
        if (rax_4 != 0 || rax_5 != 0)
            arg_20.b = 0
            j_sub_142a42480(rbx_1, rbx_1[8], &arg_20, *(arg4 + 0x58))
            
            if (arg_20.b != 0)
                arg_10 = 1

memset(&rbx_1[2], 0, r15_3 - 0x10)
rbx_1[7] = rax
rbx_1[0xb] = arg3
rbx_1[0xd].d = arg2
rbx_1[8] = r14
rbx_1[9] = r15_3
TEB* gsbase
rbx_1[0xc] = gsbase->NtTib.Self
char i_1 = 0
rbx_1[0xa] = sub_142a40dd0(rbx_1)

if (rbx_1[7] u> 0)
    do
        void* rdx_7 = &rbx_1[i * 0xa]
        *(rdx_7 + 0x71) &= 0xfd
        *(rdx_7 + 0x70) = i_1
        i_1 += 1
        i = zx.q(i_1)
        char rcx_11 = ((arg_8 << 2 ^ *(rdx_7 + 0x71)) & 4) ^ *(rdx_7 + 0x71)
        *(rdx_7 + 0x71) = rcx_11
        *(rdx_7 + 0x71) = ((arg_10 << 3 ^ rcx_11) & 8) ^ rcx_11
    while (i u< rbx_1[7])

j_sub_142a44ce0(*(arg4 + 0x58) + 0xa0, rbx_1[9])
return rbx_1
