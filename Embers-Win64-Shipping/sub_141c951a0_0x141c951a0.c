// 函数: sub_141c951a0
// 地址: 0x141c951a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int64_t i_1 = sx.q(arg2[1].d)
sub_141c9c600(arg1, i_1.d)
int32_t rax = arg1[1].d + i_1.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_14090a6a0(arg1)

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
int32_t rbp = 0

if (i_1 s<= 0)
    return arg1

void* rax_5 = *arg2 - rcx_3
int64_t* rbx_1 = rcx_3 + 0x28
int32_t rsi_1 = 1
int64_t i

do
    void* rax_6 = arg2[4]
    void* rcx_6 = &arg2[2]
    
    if (rax_6 != 0)
        rcx_6 = rax_6
    
    int32_t rax_7 = rbp
    
    if (rbp s< 0)
        rax_7 = rbp + 0x1f
    
    if ((*(rcx_6 + (sx.q(rax_7 s>> 5) << 2)) & rsi_1) == 0)
        rbx_1[-5].d = *(rbx_1 + rax_5 - 0x28)
        *(rbx_1 - 0x24) = *(rax_5 - 0x24 + rbx_1)
    else
        rbx_1[-5] = *(rbx_1 + rax_5 - 0x28)
        void* rdx_4 = &rbx_1[-2]
        rbx_1[-4] = 0
        rbx_1[-3] = 0
        *rbx_1 = 0
        rbx_1[1].d = 0
        *(rbx_1 + 0xc) = 0x80
        void* rax_11 = *rbx_1
        
        if (rax_11 != 0)
            rdx_4 = rax_11
        
        *rdx_4 = 0
        *(rdx_4 + 8) = 0
        rbx_1[2].d = 0xffffffff
        *(rbx_1 + 0x14) = 0
        rbx_1[4] = 0
        rbx_1[5].d = 0
        sub_1417d6d70(&rbx_1[-4], rax_5 - 0x20 + rbx_1)
        rbx_1[6].d = *(rax_5 + 0x30 + rbx_1)
        *(rbx_1 + 0x34) = *(rax_5 + 0x34 + rbx_1)
    
    rbp += 1
    rsi_1 = rol.d(rsi_1, 1)
    rbx_1 = &rbx_1[0xc]
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
