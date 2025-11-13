// 函数: sub_142bd4850
// 地址: 0x142bd4850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r14 = arg2
int64_t r15
r15.b = 1

if (*arg2 != 0)
    if (*arg3 == 0)
        r15.b = 0
        goto label_142bd488f
    
    if (arg3[1].d s>= arg2[1].d)
        goto label_142bd488f
    
    return 

r14 = arg3
r15.b = 0
label_142bd488f:
int32_t rcx = *(arg1 + 0x20)
int32_t rbx_1 = 0

if (rcx != 0)
    while (*((zx.q(rbx_1) << 5) + arg1 + 0x38) s< r14[1].d)
        rbx_1 += 1
        
        if (rbx_1 u>= rcx)
            break

uint64_t rax

if (rbx_1 u< rcx)
    uint64_t rcx_2 = zx.q(rbx_1) << 5
    rax = zx.q(*(rcx_2 + arg1 + 0x38))
    
    if (rax.d != r14[1].d && (r15.b == 0 || rax.d s> arg3[1].d)
            && ((*(rcx_2 + arg1 + 0x28) u>> 3).b & 1) == 0)
        goto label_142bd48e9
    
    return 

label_142bd48e9:
void* rcx_3 = *(arg1 + 8)

if (*(rcx_3 + 0x18) != 0 && ((*r14 u>> 4).b & 1) == 0)
    if (r15.b == 0)
        *(r14 + 0x14) = sub_142bd4a40(rcx_3, r14[1].d).d
    else
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(arg3[1].d + r14[1].d)
        int32_t rax_9 = sub_142bd4a40(rcx_3, (temp1_1 - temp0_1) s>> 1)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(arg3[1].d - r14[1].d)
        int32_t rax_15 = sub_142b93e80((temp3_1 - temp2_1) s>> 1, *(arg1 + 0x1c))
        *(r14 + 0x14) = rax_9 - rax_15
        *(arg3 + 0x14) = rax_15 + rax_9

if (rbx_1 != 0 && *(r14 + 0x14) s< *((zx.q(rbx_1 - 1) << 5) + arg1 + 0x3c))
    return 

int32_t rdx_6 = *(arg1 + 0x20)
bool cond:1_1

if (rbx_1 u< rdx_6)
    rax = zx.q(*((zx.q(rbx_1) << 5) + arg1 + 0x3c))
    
    if (r15.b == 0)
        cond:1_1 = *(r14 + 0x14) s> rax.d
    else
        cond:1_1 = *(arg3 + 0x14) s> rax.d

if (rbx_1 u< rdx_6 && cond:1_1)
    return 

int32_t r9_1 = rdx_6 - 1
int32_t r8 = rdx_6 + 1

if (r15.b == 0)
    r8 = rdx_6

int32_t i_1 = rdx_6 - rbx_1

if (r8 u>= 0xc0)
    return 

if (i_1 != 0)
    int32_t i
    
    do
        uint64_t rcx_9 = zx.q(r9_1)
        r9_1 -= 1
        uint64_t rcx_10 = rcx_9 << 5
        uint64_t rax_18 = zx.q(r8)
        r8 -= 1
        uint64_t rax_19 = rax_18 << 5
        *(rax_19 + arg1 + 0x28) = *(rcx_10 + arg1 + 0x28)
        *(rax_19 + arg1 + 0x38) = *(rcx_10 + arg1 + 0x38)
        i = i_1
        i_1 -= 1
    while (i != 1)

rax = zx.q(rbx_1) << 5
*(rax + arg1 + 0x28) = *r14
*(rax + arg1 + 0x38) = r14[1]
*(arg1 + 0x20) += 1

if (r15.b == 0)
    return 

rax = zx.q(rbx_1 + 1) << 5
*(rax + arg1 + 0x28) = *arg3
*(rax + arg1 + 0x38) = arg3[1]
*(arg1 + 0x20) += 1
