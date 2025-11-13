// 函数: sub_14222e7e0
// 地址: 0x14222e7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = arg2[1].d
uint64_t rbx = zx.q(arg2[3].d)
int32_t rdx = 0
arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405dadb0(arg1, 0)
    rdx = arg1[1].d

int32_t rcx_1 = rdx + (rbx << 1).d + rbx.d
arg1[1].d = rcx_1

if (rcx_1 s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

int32_t i = 0

if (arg2[3].d s> 0)
    int64_t rdx_1 = 0
    
    do
        rdx_1 += 0xc
        i += 1
        *(rdx_1 + *arg1 - 0xc) = *(rdx_1 + arg2[2] - 0xc)
        *(rdx_1 + *arg1 - 8) = *(rdx_1 + arg2[2] - 8)
        *(rdx_1 + *arg1 - 4) = *(rdx_1 + arg2[2] - 4)
    while (i s< arg2[3].d)

int32_t rdx_2 = 0
arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_140638cc0(&arg1[2], 0)
    rdx_2 = arg1[3].d

int32_t result = rdx_2 + r13
arg1[3].d = result

if (result s> *(arg1 + 0x1c))
    result = sub_140638a00(&arg1[2])

int32_t i_1 = 0

if (arg2[1].d s> 0)
    int64_t r8 = 0
    
    do
        int64_t rcx_8 = *arg2
        r8 += 0xc
        int64_t rdx_3 = arg1[2]
        i_1 += 1
        *(rdx_3 + r8 - 0xc) = *(r8 + rcx_8 - 0xc)
        result = *(r8 + rcx_8 - 4)
        *(rdx_3 + r8 - 4) = result
    while (i_1 s< arg2[1].d)

int32_t i_2 = 0

if (arg2[7].d s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* r15_1 = arg2[6]
        
        if (*(r15_1 + r14_1 + 8) != r13)
            break
        
        int64_t rbx_1 = sx.q(arg1[5].d)
        int32_t rax_7 = (rbx_1 + 1).d
        arg1[5].d = rax_7
        
        if (rax_7 s> *(arg1 + 0x2c))
            sub_1405a4f90(&arg1[4])
        
        result = 0
        int64_t* rbx_3 = (rbx_1 << 4) + arg1[4]
        *rbx_3 = 0
        int64_t rsi_1 = sx.q(*(r15_1 + r14_1 + 8))
        int64_t r15_2 = *(r15_1 + r14_1)
        rbx_3[1].d = rsi_1.d
        
        if (rsi_1.d != 0)
            sub_1406387e0(rbx_3, rsi_1.d, 0)
            result = memcpy(*rbx_3, r15_2, (rsi_1 << 3).d)
        else
            *(rbx_3 + 0xc) = 0
        
        i_2 += 1
        r14_1 += 0x10
    while (i_2 s< arg2[7].d)

return result
