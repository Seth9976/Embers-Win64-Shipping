// 函数: sub_14254e580
// 地址: 0x14254e580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int64_t i_3 = sx.q(arg2[1].d)
sub_14254f2b0(arg1, i_3.d)
int32_t rax = arg1[1].d + i_3.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_140a88a90(arg1)

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

void* rax_4 = *arg1
int64_t i_1 = i_3
int64_t i_2 = i_1
int32_t rsi_1 = 0

if (i_3.d s<= 0)
    return arg1

int32_t rbp = 1
int64_t* rbx_1 = rax_4 + 0x38
void* r15_1 = *arg2 - rax_4
int64_t i

do
    void* rax_5 = arg2[4]
    void* rcx_3 = &arg2[2]
    
    if (rax_5 != 0)
        rcx_3 = rax_5
    
    int32_t rax_6 = rsi_1
    
    if (rsi_1 s< 0)
        rax_6 = rsi_1 + 0x1f
    
    rbx_1[-7].d = *(rbx_1 + r15_1 - 0x38)
    
    if ((*(rcx_3 + (sx.q(rax_6 s>> 5) << 2)) & rbp) == 0)
        *(rbx_1 - 0x34) = *(rbx_1 + r15_1 - 0x34)
    else
        rbx_1[-6].d = *(rbx_1 + r15_1 - 0x30)
        void* rdx_4 = &rbx_1[-2]
        *(rbx_1 - 0x2c) = *(r15_1 + rbx_1 - 0x2c)
        rbx_1[-5].d = *(r15_1 + rbx_1 - 0x28)
        rbx_1[-4] = 0
        rbx_1[-3] = 0
        *rbx_1 = 0
        rbx_1[1].d = 0
        *(rbx_1 + 0xc) = 0x80
        void* rax_13 = *rbx_1
        
        if (rax_13 != 0)
            rdx_4 = rax_13
        
        *rdx_4 = 0
        *(rdx_4 + 8) = 0
        rbx_1[2].d = 0xffffffff
        *(rbx_1 + 0x14) = 0
        rbx_1[4] = 0
        rbx_1[5].d = 0
        sub_140780cc0(&rbx_1[-4], r15_1 - 0x20 + rbx_1)
        rbx_1[6] = 0
        rbx_1[7] = 0
        void* rdx_7 = &rbx_1[8]
        rbx_1[0xa] = 0
        rbx_1[0xb].d = 0
        *(rbx_1 + 0x5c) = 0x80
        void* rax_14 = rbx_1[0xa]
        
        if (rax_14 != 0)
            rdx_7 = rax_14
        
        *rdx_7 = 0
        *(rdx_7 + 8) = 0
        rbx_1[0xc].d = 0xffffffff
        *(rbx_1 + 0x64) = 0
        rbx_1[0xe] = 0
        rbx_1[0xf].d = 0
        sub_140780cc0(&rbx_1[6], r15_1 + 0x30 + rbx_1)
        rbx_1[0x10] = 0
        uint32_t count = *(rbx_1 + r15_1 + 0x88)
        int64_t rax_15 = *(rbx_1 + r15_1 + 0x80)
        rbx_1[0x11].d = count
        
        if (count != 0)
            sub_1405da9e0(&rbx_1[0x10], count, 0)
            memcpy(rbx_1[0x10], rax_15, count)
        else
            *(rbx_1 + 0x8c) = 0
        
        i_1 = i_2
        rbx_1[0x12] = *(rbx_1 + r15_1 + 0x90)
        rbx_1[0x13].d = *(rbx_1 + r15_1 + 0x98)
        *(rbx_1 + 0x9c) = *(rbx_1 + r15_1 + 0x9c)
    
    rsi_1 += 1
    rbp = rol.d(rbp, 1)
    rbx_1 = &rbx_1[0x1b]
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
return arg1
