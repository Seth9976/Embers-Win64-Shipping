// 函数: sub_14125fef0
// 地址: 0x14125fef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg1[5]
int64_t rdi = 0
int64_t arg_8

if (rbp == 0)
    arg_8 = 0
else
    int64_t rdx = sx.q(arg1[8].d)
    int64_t rax_1 = rbp[3]
    int64_t r14_1 = rdx << 3
    
    if (*(r14_1 + rax_1) == 0)
        sub_1419ccf30(rbp, rdx.d)
        rax_1 = rbp[3]
    
    arg_8 = *(r14_1 + rax_1)

int64_t* rbp_1 = arg1[4]
int64_t r13

if (rbp_1 == 0)
    r13 = 0
else
    int64_t rdx_1 = sx.q(*(arg1 + 0x3c))
    int64_t rax_3 = rbp_1[3]
    int64_t r14_2 = rdx_1 << 3
    
    if (*(r14_2 + rax_3) == 0)
        sub_1419ccf30(rbp_1, rdx_1.d)
        rax_3 = rbp_1[3]
    
    r13 = *(r14_2 + rax_3)

int64_t* rbp_2 = arg1[3]
int64_t r15_1

if (rbp_2 == 0)
    r15_1 = 0
else
    int64_t rdx_2 = sx.q(arg1[7].d)
    int64_t rax_4 = rbp_2[3]
    int64_t r15 = rdx_2 << 3
    
    if (*(r15 + rax_4) == 0)
        sub_1419ccf30(rbp_2, rdx_2.d)
        rax_4 = rbp_2[3]
    
    r15_1 = *(r15 + rax_4)

int64_t* rbp_3 = arg1[2]
int64_t r14_4

if (rbp_3 == 0)
    r14_4 = 0
else
    int64_t rdx_3 = sx.q(*(arg1 + 0x34))
    int64_t r14_3 = rbp_3[3]
    int64_t r12_1 = rdx_3 << 3
    
    if (*(r12_1 + r14_3) == 0)
        sub_1419ccf30(rbp_3, rdx_3.d)
        r14_3 = rbp_3[3]
    
    r14_4 = *(r12_1 + r14_3)

int64_t* rbp_4 = arg1[1]

if (rbp_4 != 0)
    int64_t rdx_4 = sx.q(arg1[6].d)
    int64_t rdi_1 = rbp_4[3]
    int64_t r12_2 = rdx_4 << 3
    
    if (*(r12_2 + rdi_1) == 0)
        sub_1419ccf30(rbp_4, rdx_4.d)
        rdi_1 = rbp_4[3]
    
    rdi = *(r12_2 + rdi_1)

*arg2 = *arg1
arg2[5] = arg_8
arg2[1] = rdi
arg2[2] = r14_4
arg2[3] = r15_1
arg2[4] = r13
return arg2
