// 函数: sub_14195c130
// 地址: 0x14195c130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi
int32_t* var_10 = rsi
int32_t rdx = *(arg1 + 0x34)
int64_t rdi

if (rdx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1419833b0(arg1)
    
    int32_t rsi_1 = arg1[5].d
    void* rbx_1 = &arg1[2]
    sub_1405a4980(rbx_1, rsi_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_2 = *(rbx_1 + 0x10)
    
    if (rax_2 != 0)
        rbx_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rsi_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rsi_1 & 0x1f).b)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t r8 = sx.q(*(rdi * 0x1c4 + r9 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r8 * 0x1c4 + r9) = 0xffffffff

void* rax_9 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_9 != 0)
    r8_1 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int32_t* rbp_1 = sx.q(rdi.d) * 0x1c4 + *arg1
sub_141961560(rbp_1, arg3)
rbp_1[0x6f] = 0xffffffff
int64_t rbx_2 = sx.q(sub_141973920(rbp_1))
rsi.b = 0
int32_t rax_17 = arg1[1].d - *(arg1 + 0x34)

if (rax_17 == 1)
    goto label_14195c304

int32_t rbx_3

if (rax_17 != 0)
    void* rcx_9 = arg1[8]
    void* r8_3 = &arg1[7]
    
    if (rcx_9 != 0)
        r8_3 = rcx_9
    
    rbx_3 = *(r8_3 + (((sx.q(arg1[9].d) - 1) & rbx_2) << 2))

if (rax_17 == 0 || rbx_3 == 0xffffffff)
label_14195c2b7:
    rbx_3 = -1
else
    int64_t r12_1 = *arg1
    
    while (true)
        rsi = sx.q(rbx_3) * 0x1c4 + r12_1
        
        if (sub_141965570(rsi, rbp_1) != 0)
            break
        
        rbx_3 = rsi[0x6f]
        
        if (rbx_3 == 0xffffffff)
            goto label_14195c2b7

rsi.b = rbx_3 != 0xffffffff

if (rbx_3 == 0xffffffff)
    rbx_2 = zx.q(rbx_2.d)
label_14195c304:
    
    if (sub_141968270(arg1, rax_17, 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t r8_6 = (arg1[9].d - 1) & rbx_2.d
        rbp_1[0x70] = r8_6
        void* rcx_15 = *(r9_1 + 8)
        void* rax_23 = r9_1
        
        if (rcx_15 != 0)
            rax_23 = rcx_15
        
        rbp_1[0x6f] = *(rax_23 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2))
        void* rcx_16 = *(r9_1 + 8)
        
        if (rcx_16 != 0)
            r9_1 = rcx_16
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2)) = rdi.d
else
    memmove(sx.q(rbx_3) * 0x1c4 + *arg1, rbp_1, 0x1bc)
    sub_1419830d0(arg1, rdi.d, 1)
    rdi = zx.q(rbx_3)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = rsi.b

return arg2
