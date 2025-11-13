// 函数: sub_140ae79a0
// 地址: 0x140ae79a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int64_t i_1 = sx.q(arg2[1].d)
sub_140a71d50(arg1, i_1.d)
int32_t rax = arg1[1].d + i_1.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405fde00(arg1)

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
int64_t* rbx_1 = rcx_3 + 0x30
int32_t rsi_1 = 1
int64_t i

do
    void* rax_6 = arg2[4]
    int64_t* rdx_4 = rbx_1 + rax_5 - 0x30
    void* r8_4 = &arg2[2]
    
    if (rax_6 != 0)
        r8_4 = rax_6
    
    int32_t rax_7 = rbp
    
    if (rbp s< 0)
        rax_7 = rbp + 0x1f
    
    if ((*(r8_4 + (sx.q(rax_7 s>> 5) << 2)) & rsi_1) == 0)
        rbx_1[-6].d = *rdx_4
        *(rbx_1 - 0x2c) = *(rax_5 - 0x2c + rbx_1)
    else
        sub_140596d10(&rbx_1[-6], rdx_4)
        rbx_1[-4] = 0
        int64_t* rdx_5 = &rbx_1[-2]
        rbx_1[-3] = 0
        *rbx_1 = 0
        rbx_1[1].d = 0
        *(rbx_1 + 0xc) = 0x80
        int64_t* rax_10 = *rbx_1
        
        if (rax_10 != 0)
            rdx_5 = rax_10
        
        *rdx_5 = 0
        rdx_5[1] = 0
        rbx_1[2].d = 0xffffffff
        *(rbx_1 + 0x14) = 0
        rbx_1[4] = 0
        rbx_1[5].d = 0
        sub_140747450(&rbx_1[-4], rax_5 - 0x20 + rbx_1)
        rbx_1[6].d = *(rax_5 + 0x30 + rbx_1)
        *(rbx_1 + 0x34) = *(rax_5 + 0x34 + rbx_1)
    
    rbp += 1
    rsi_1 = rol.d(rsi_1, 1)
    rbx_1 = &rbx_1[0xd]
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
