// 函数: sub_14195c390
// 地址: 0x14195c390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp
int64_t* var_8 = rbp
int32_t rdx = *(arg1 + 0x34)
int64_t rdi

if (rdx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_14092f900(arg1)
    
    int32_t rbp_1 = arg1[5].d
    void* rbx_1 = &arg1[2]
    sub_1405a4980(rbx_1, rbp_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_2 = *(rbx_1 + 0x10)
    
    if (rax_2 != 0)
        rbx_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbp_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rbp_1 & 0x1f).b)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t r8 = sx.q(*(rdi * 0xb8 + r9 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r8 * 0xb8 + r9) = 0xffffffff

void* rax_9 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_9 != 0)
    r8_1 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int128_t* rax_15 = *arg3
int64_t* rdx_9 = arg3[1]
int128_t* r14_1 = sx.q(rdi.d) * 0xb8 + *arg1
*r14_1 = *rax_15
r14_1[1] = rax_15[1]
r14_1[2] = rax_15[2]
r14_1[3] = rax_15[3]
r14_1[4] = rax_15[4]
r14_1[5] = rax_15[5]
r14_1[6] = rax_15[6]
r14_1[7] = rax_15[7]
r14_1[8] = rax_15[8]
r14_1[9] = rax_15[9]
r14_1[0xa].q = rax_15[0xa].q
*(r14_1 + 0xa8) = *rdx_9
r14_1[0xb].d = 0xffffffff
int64_t rbx_2 = sx.q(sub_141974050(r14_1))
rbp.b = 0
int32_t rax_20 = arg1[1].d - *(arg1 + 0x34)

if (rax_20 == 1)
    goto label_14195c5d4

int32_t rbx_3

if (rax_20 != 0)
    void* rcx_8 = arg1[8]
    void* r8_3 = &arg1[7]
    
    if (rcx_8 != 0)
        r8_3 = rcx_8
    
    rbx_3 = *(r8_3 + (((sx.q(arg1[9].d) - 1) & rbx_2) << 2))

if (rax_20 == 0 || rbx_3 == 0xffffffff)
label_14195c587:
    rbx_3 = -1
else
    int64_t r12_1 = *arg1
    
    while (true)
        rbp = sx.q(rbx_3) * 0xb8 + r12_1
        
        if (sub_141965390(rbp, r14_1) != 0)
            break
        
        rbx_3 = rbp[0x16].d
        
        if (rbx_3 == 0xffffffff)
            goto label_14195c587

rbp.b = rbx_3 != 0xffffffff

if (rbx_3 == 0xffffffff)
    rbx_2 = zx.q(rbx_2.d)
label_14195c5d4:
    
    if (sub_141968110(arg1, rax_20, 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_27 = (arg1[9].d - 1) & rbx_2.d
        *(r14_1 + 0xb4) = rax_27
        void* rdx_17 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_27)
        void* rax_28 = r9_1
        
        if (rdx_17 != 0)
            rax_28 = rdx_17
        
        r14_1[0xb].d = *(rax_28 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_30 = *(r9_1 + 8)
        
        if (rax_30 != 0)
            r9_1 = rax_30
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi.d
else
    memmove(sx.q(rbx_3) * 0xb8 + *arg1, r14_1, 0xb0)
    sub_140afeb50(arg1, rdi.d, 1)
    rdi = zx.q(rbx_3)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = rbp.b

return arg2
