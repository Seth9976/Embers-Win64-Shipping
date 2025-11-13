// 函数: sub_14254e110
// 地址: 0x14254e110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int64_t i_2 = sx.q(arg2[1].d)
sub_14254ef90(arg1, i_2.d)
int32_t rax = arg1[1].d + i_2.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c5190(arg1)

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
int32_t rsi_1 = 0
int64_t i_1 = i_2

if (i_2.d s<= 0)
    return arg1

void* rdi_2 = *arg2 - rcx_3
int32_t rbp = 1
int64_t* rbx_1 = rcx_3 + 0x78
int64_t i

do
    void* rax_5 = arg2[4]
    void* rcx_4 = &arg2[2]
    
    if (rax_5 != 0)
        rcx_4 = rax_5
    
    int32_t rax_6 = rsi_1
    
    if (rsi_1 s< 0)
        rax_6 = rsi_1 + 0x1f
    
    rbx_1[-0xf].d = *(rbx_1 + rdi_2 - 0x78)
    
    if ((*(rcx_4 + (sx.q(rax_6 s>> 5) << 2)) & rbp) == 0)
        *(rbx_1 - 0x74) = *(rbx_1 + rdi_2 - 0x74)
    else
        rbx_1[-0xe] = 0
        rbx_1[-0xd] = 0
        void* rdx_4 = &rbx_1[-0xc]
        rbx_1[-0xa] = 0
        rbx_1[-9].d = 0
        *(rbx_1 - 0x44) = 0x80
        void* rax_10 = rbx_1[-0xa]
        
        if (rax_10 != 0)
            rdx_4 = rax_10
        
        *rdx_4 = 0
        *(rdx_4 + 8) = 0
        rbx_1[-8].d = 0xffffffff
        *(rbx_1 - 0x3c) = 0
        rbx_1[-6] = 0
        rbx_1[-5].d = 0
        sub_140780cc0(&rbx_1[-0xe], rdi_2 - 0x70 + rbx_1)
        rbx_1[-4] = 0
        rbx_1[-3] = 0
        void* rdx_7 = &rbx_1[-2]
        *rbx_1 = 0
        rbx_1[1].d = 0
        *(rbx_1 + 0xc) = 0x80
        void* rax_11 = *rbx_1
        
        if (rax_11 != 0)
            rdx_7 = rax_11
        
        *rdx_7 = 0
        *(rdx_7 + 8) = 0
        rbx_1[2].d = 0xffffffff
        *(rbx_1 + 0x14) = 0
        rbx_1[4] = 0
        rbx_1[5].d = 0
        sub_140780cc0(&rbx_1[-4], rdi_2 - 0x20 + rbx_1)
        rbx_1[6] = 0
        uint32_t count = *(rbx_1 + rdi_2 + 0x38)
        int64_t rax_12 = *(rbx_1 + rdi_2 + 0x30)
        rbx_1[7].d = count
        
        if (count != 0)
            sub_1405da9e0(&rbx_1[6], count, 0)
            memcpy(rbx_1[6], rax_12, count)
        else
            *(rbx_1 + 0x3c) = 0
        
        rbx_1[8].d = *(rdi_2 + rbx_1 + 0x40)
        rbx_1[9].d = *(rdi_2 + rbx_1 + 0x48)
        *(rbx_1 + 0x4c) = *(rbx_1 + rdi_2 + 0x4c)
    
    rsi_1 += 1
    rbp = rol.d(rbp, 1)
    rbx_1 = &rbx_1[0x19]
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
