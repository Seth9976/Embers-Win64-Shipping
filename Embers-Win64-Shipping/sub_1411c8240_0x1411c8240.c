// 函数: sub_1411c8240
// 地址: 0x1411c8240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_4 = 0x13a
__builtin_memset(arg1, 0, 0x20)
void* var_38 = nullptr
sub_1405a4f90(&var_38)
void* r15 = var_38
memset(r15, 0, 0x13a0)
int32_t i = 1
int32_t* rbx = r15 + 0x18
int64_t rbp = 1

do
    int64_t rsi_1 = sx.q(*rbx)
    
    if (i s> rsi_1.d)
        *rbx = i
        
        if (i s> rbx[1])
            sub_1405a4cf0(&rbx[-2])
        
        memset(*(rbx - 8) + (rsi_1 << 2), 0, sx.q(i - rsi_1.d) << 2)
    else if (i s< rsi_1.d && i != rsi_1.d)
        *rbx = i
        sub_1405dac90(&rbx[-2])
    
    int32_t rdx_2 = 0
    int64_t rax_2 = 0
    
    if (rbp s> 0)
        do
            *(*(rbx - 8) + (rax_2 << 2)) = rdx_2
            rdx_2 += 1
            rax_2 += 1
        while (rax_2 s< rbp)
    
    i += 1
    rbp += 1
    rbx = &rbx[4]
while (i s<= 3)

int32_t i_1 = 4
void* rbx_1 = r15 + 0x40
int64_t r14_3 = 3

do
    int64_t rsi_2 = sx.q(*(rbx_1 + 8))
    
    if (i_1 s> rsi_2.d)
        *(rbx_1 + 8) = i_1
        
        if (i_1 s> *(rbx_1 + 0xc))
            sub_1405a4cf0(rbx_1)
        
        memset(*rbx_1 + (rsi_2 << 2), 0, sx.q(i_1 - rsi_2.d) << 2)
    else if (i_1 s< rsi_2.d && i_1 != rsi_2.d)
        *(rbx_1 + 8) = i_1
        sub_1405dac90(rbx_1)
    
    uint64_t r8_6 = zx.q(i_1 u>> 1)
    
    if ((i_1.b & 1) == 0)
        uint64_t r10_2 = zx.q(r8_6.d)
        int64_t r9_2 = 0
        
        if (r8_6.d != 0)
            uint64_t r8_8 = zx.q(r10_2.d) * 2
            
            do
                *(*rbx_1 + (r9_2 << 2)) = *(*(r15 + (r8_8 << 3)) + (r9_2 << 2)) * 2
                int32_t rdx_6 = ((zx.q(*(*(r15 + (r8_8 << 3)) + (r9_2 << 2))) << 1) + 1).d
                int64_t rcx_13 = *rbx_1 + (r9_2 << 2)
                r9_2 += 1
                *(rcx_13 + (r10_2 << 2)) = rdx_6
            while (r9_2 s< r10_2)
    else
        int32_t r9_1 = 0
        int64_t r10_1 = 0
        
        if (r14_3 s> 0)
            do
                int64_t rax_4 = *(rbx_1 - 0x10)
                int32_t rdx_4
                rdx_4.b = *(rax_4 + (r10_1 << 2)) s>= r8_6.d
                int32_t rdx_5 = rdx_4 + *(rax_4 + (r10_1 << 2))
                int32_t rax_5
                rax_5.b = r9_1 s>= r8_6.d
                r10_1 += 1
                int32_t rax_6 = rax_5 + r9_1
                r9_1 += 1
                *(*rbx_1 + (sx.q(rax_6) << 2)) = rdx_5
            while (r10_1 s< r14_3)
        
        *(*rbx_1 + (r8_6 << 2)) = r8_6.d
    
    i_1 += 1
    r14_3 += 1
    rbx_1 += 0x10
while (i_1 s<= 0x139)

sub_1411e6890(arg1, &var_38)
int32_t i_3 = i_4
void* rbx_2 = r15

if (i_3 != 0)
    int32_t i_2
    
    do
        int64_t rcx_15 = *rbx_2
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        rbx_2 += 0x10
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

if (r15 != 0)
    sub_140a74f90(r15)

return arg1
