// 函数: sub_141823aa0
// 地址: 0x141823aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int64_t i_2 = sx.q(arg2[1].d)
sub_1418376a0(arg1, i_2.d)
int32_t rax = arg1[1].d + i_2.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c4f50(arg1)

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
int32_t rbp = 0
int64_t i_1 = i_2

if (i_2.d s<= 0)
    return arg1

int32_t* rdi_2 = *arg2 - rax_4
int32_t rsi_1 = 1
int32_t* rbx_1 = rax_4 + 0x20
int64_t i

do
    void* rax_5 = arg2[4]
    int64_t* rdx_5 = &rdi_2[-8] + rbx_1
    void* r8_4 = &arg2[2]
    
    if (rax_5 != 0)
        r8_4 = rax_5
    
    int32_t rax_6 = rbp
    
    if (rbp s< 0)
        rax_6 = rbp + 0x1f
    
    if ((*(r8_4 + (sx.q(rax_6 s>> 5) << 2)) & rsi_1) == 0)
        rbx_1[-8] = *rdx_5
        rbx_1[-7] = *(rdi_2 + rbx_1 - 0x1c)
    else
        sub_140596d10(&rbx_1[-8], rdx_5)
        rbx_1[-4] = *(rdi_2 + rbx_1 - 0x10)
        *(rbx_1 - 8) = 0
        uint32_t count = *(rdi_2 + rbx_1)
        int64_t rax_10 = *(rdi_2 + rbx_1 - 8)
        *rbx_1 = count
        
        if (count != 0)
            sub_1405da9e0(&rbx_1[-2], count, 0)
            memcpy(*(rbx_1 - 8), rax_10, count)
            rbx_1[2] = *(rdi_2 + rbx_1 + 8)
            rbx_1[3] = *(rdi_2 + rbx_1 + 0xc)
        else
            rbx_1[1] = 0
            rbx_1[2] = *(rdi_2 + rbx_1 + 8)
            rbx_1[3] = *(rdi_2 + rbx_1 + 0xc)
    
    rbp += 1
    rsi_1 = rol.d(rsi_1, 1)
    rbx_1 = &rbx_1[0xc]
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
