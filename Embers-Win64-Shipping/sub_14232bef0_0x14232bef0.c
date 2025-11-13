// 函数: sub_14232bef0
// 地址: 0x14232bef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int64_t i_3 = sx.q(arg2[1].d)
sub_142334cd0(arg1, i_3.d)
int32_t rax = arg1[1].d + i_3.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_140775640(arg1)

void* rsi = &arg1[2]
arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)

if (rsi != &arg2[2])
    sub_14059a8e0(rsi, arg2[5].d)
    int32_t rax_3 = arg2[5].d
    *(rsi + 0x18) = rax_3
    
    if (rax_3 != 0)
        void* r9_1 = arg2[4]
        void* r10_1 = *(rsi + 0x10)
        void* rdx_3 = &arg2[2]
        
        if (r9_1 != 0)
            rdx_3 = r9_1
        
        if (r10_1 != 0)
            rsi = r10_1
        
        memcpy(rsi, rdx_3, (zx.q(rax_3 + 0x1f) u>> 5 << 2).d)

void* rcx_3 = *arg1
int64_t i_1 = i_3
int64_t i_2 = i_1
int32_t rbp = 0

if (i_3.d s<= 0)
    return arg1

void* rax_5 = *arg2 - rcx_3
int32_t r14 = 1
int32_t* rbx_1 = rcx_3 + 0x28
int64_t i

do
    void* rax_6 = arg2[4]
    void* rcx_4 = &arg2[2]
    
    if (rax_6 != 0)
        rcx_4 = rax_6
    
    int32_t rax_7 = rbp
    
    if (rbp s< 0)
        rax_7 = rbp + 0x1f
    
    int32_t rcx_5 = *(rcx_4 + (sx.q(rax_7 s>> 5) << 2))
    rbx_1[-0xa] = *(rax_5 + rbx_1 - 0x28)
    
    if ((rcx_5 & r14) == 0)
        rbx_1[-9] = *(rbx_1 + rax_5 - 0x24)
    else
        *(rbx_1 - 0x18) = 0
        int64_t rsi_1 = sx.q(*(rbx_1 + rax_5 - 0x10))
        int64_t r12_1 = *(rbx_1 + rax_5 - 0x18)
        rbx_1[-4] = rsi_1.d
        
        if (rsi_1.d != 0)
            sub_1407c3650(&rbx_1[-6], rsi_1.d, 0)
            memcpy(*(rbx_1 - 0x18), r12_1, (rsi_1 * 0xc).d)
        else
            rbx_1[-3] = 0
        
        *(rbx_1 - 8) = 0
        int64_t rsi_2 = sx.q(*(rbx_1 + rax_5))
        int64_t r12_2 = *(rbx_1 + rax_5 - 8)
        *rbx_1 = rsi_2.d
        
        if (rsi_2.d != 0)
            sub_1407c3650(&rbx_1[-2], rsi_2.d, 0)
            memcpy(*(rbx_1 - 8), r12_2, (rsi_2 * 0xc).d)
        else
            rbx_1[1] = 0
        
        i_1 = i_2
        *(rbx_1 + 8) = *(rbx_1 + rax_5 + 8)
        *(rbx_1 + 0x18) = *(rbx_1 + rax_5 + 0x18)
        *(rbx_1 + 0x28) = *(rbx_1 + rax_5 + 0x28)
        *(rbx_1 + 0x38) = *(rbx_1 + rax_5 + 0x38)
        *(rbx_1 + 0x48) = *(rbx_1 + rax_5 + 0x48)
        *(rbx_1 + 0x58) = *(rbx_1 + rax_5 + 0x58)
        rbx_1[0x1a] = *(rbx_1 + rax_5 + 0x68)
        rbx_1[0x1b] = *(rbx_1 + rax_5 + 0x6c)
    
    rbp += 1
    r14 = rol.d(r14, 1)
    rbx_1 = &rbx_1[0x28]
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
return arg1
