// 函数: sub_142c5ae40
// 地址: 0x142c5ae40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg1
int64_t* rbx = *(rbp + 0x4ab0)
int32_t rsi = rbx[5].d
int64_t r15

if (*(arg1 + 0x164) != 2 || *(sx.q(arg4) + arg1 + 0x411) != 0)
    r15.b = 0
else
    r15.b = 1

void* const rax_2 = 0x360

if (r15.b != 0)
    rax_2 = 0x3a8

int64_t rcx

if (r15.b == 0)
    rcx = arg1[0x1a]
else
    rcx = arg1[0x2a]

int64_t rax_4 = data_143ccb8b0(rcx)

if (rax_4 == 0)
    return zx.q((rax_4 + 0x1b).d)

int64_t r12

if (*(arg1 + 0x3f3) == 0)
    r12 = 0
else
    int64_t rax_6 = data_143ccb8b0(arg1[0x1f])
    r12 = rax_6
    
    if (rax_6 == 0)
        data_143ccb8a0(rax_4)
        return zx.q((r12 + 0x1b).d)

int32_t arg_8

if (*(arg1 + 0x3f4) == 0)
    arg_8 = 0xffffffff
else
    arg_8 = arg1[0x30].d

void* rax_8 = *(rbp + 0xd0)
void* r13_1

if (rax_8 != 0)
    r13_1 = rax_8 + 0x68

if (rax_8 == 0 || (*rax_8 & 0x10) == 0)
    r13_1 = rbp + 0x4ab8

int64_t r8 = *(rbp + 0x588)
int64_t rcx_4 = 1
bool cond:5_1 = 1 != r8

if (1 u< r8)
    int32_t* rax_10 = *(rbp + 0x4ab0) + 0xa8
    
    while (*(rax_10 - 0x10) != 0)
        int32_t rdx = *rax_10
        
        if (rdx s< rsi)
            rsi = rdx
            rbx = &rax_10[-0xa]
        
        rcx_4 += 1
        rax_10 -= -0x80
        
        if (rcx_4 u>= r8)
            break
    
    cond:5_1 = rcx_4 != r8

if (cond:5_1)
    rbx = (rcx_4 << 7) + *(rbp + 0x4ab0)
else
    void* rcx_5 = rbx[3]
    
    if (rcx_5 != 0)
        j_sub_1428574d0(rcx_5)
        rbx[3] = 0
        rbx[5].d = 0
        sub_142c5aac0(&rbx[7])
        data_143ccb8a0(*rbx)
        int64_t rcx_8 = rbx[1]
        *rbx = 0
        data_143ccb8a0(rcx_8)
        rbx[1] = 0

int64_t rcx_9 = *rbx
rbx[3] = arg2
rbx[4] = arg3
rbx[5].d = *r13_1
data_143ccb8a0(rcx_9)
data_143ccb8a0(rbx[1])
rbx[6].d = arg_8
*rbx = rax_4
rbx[1] = r12
int32_t rax_15

if (r15.b == 0)
    rax_15 = *(arg1 + 0x17c)
else
    rax_15 = arg1[0x2f].d

*(rbx + 0x2c) = rax_15
rbx[2] = *arg1[0x87]

if (sub_142c5a960(rax_2 + arg1, &rbx[7]) != 0)
    return 0

rbx[3] = 0
data_143ccb8a0(rax_4)
data_143ccb8a0(r12)
return 0x1b
