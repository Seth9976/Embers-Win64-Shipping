// 函数: sub_1423aa220
// 地址: 0x1423aa220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg2
void* r13 = arg3
void* rbp = arg1
void* r15 = *(rdi + 0x78)
int64_t* var_48
uint64_t arg_10
int64_t* rax
int32_t rcx
uint64_t rbx
void* const r15_1

if (r15 == 0)
    r15_1 = nullptr
    rax = &arg_10
    rbx = 0
    rcx = 2
else
    r15_1 = *(r15 + 0xe8)
    
    if (r15_1 != 0)
        *(r15_1 + 8) += 1
    
    rax = &var_48
    rbx = 1
    rcx = 0

void* const var_40 = r15_1
*rax = 0

if (rcx != 0)
    sub_1405d1550(&arg_10)

if (rbx.d != 0)
    sub_1405d1550(&var_48)

if (r15_1 != 0)
    sub_1423a9960(r13, arg2[2].d)
    rbx = sx.q(*(arg2 + 0xc))
    int64_t* rdx_2 = *(rdi + 0xd0) + 0x18
    var_48 = rdx_2
    
    if (rbx.d s< arg2[2].d)
        uint64_t rcx_4 = rbx << 3
        uint64_t rbp_2 = rbx * 0x28
        arg_10 = rcx_4
        
        do
            void* r14_1 = r13
            int32_t r8 = *(r15_1 + 0x3c)
            int32_t* rdx_3 = *(rcx_4 + *rdx_2)
            void* rax_2 = *(r13 + 0x230)
            
            if (rax_2 != 0)
                r14_1 = rax_2
            
            void* r14_2 = r14_1 + rbp_2
            *(r14_2 + 0xc) = r8
            int32_t rcx_5 = *rdx_3
            *(r14_2 + 0x10) = rcx_5
            int32_t rdx_4 = rdx_3[1]
            *(r14_2 + 0x14) = rdx_4
            int32_t rax_3 = sub_141998400(rcx_5, rdx_4, r8, 0)
            *(r14_2 + 8) = rax_3
            *r14_2 = sub_140a82f30(zx.q(rax_3), 0)
            int64_t r12_1 = sx.q(*(rbp + 0xa0))
            int32_t rax_5 = (r12_1 + 1).d
            *(rbp + 0xa0) = rax_5
            
            if (rax_5 s> *(rbp + 0xa4))
                sub_1423b4cf0(rbp + 0x28, r12_1.d)
            
            void* rax_6 = *(rbp + 0x98)
            void* rdx_6 = rbp + 0x28
            
            if (rax_6 != 0)
                rdx_6 = rax_6
            
            int64_t rax_7 = *r14_2
            rcx_4 = arg_10 + 8
            rbx = zx.q(rbx.d + 1)
            rbp_2 += 0x28
            arg_10 = rcx_4
            *(rdx_6 + (r12_1 << 3)) = rax_7
            rdx_2 = var_48
        while (rbx.d s< arg2[2].d)
        
        rbx = zx.q(*(arg2 + 0xc))
        rbp = arg1

if (r15_1 == 0 || rbx.d s< 0 || rbx.d s>= *(r13 + 0x238))
    rbx.b = 0
else
    void* rax_8 = *(r13 + 0x230)
    void* rdx_7 = r13
    
    if (rax_8 != 0)
        rdx_7 = rax_8
    
    int64_t rax_9 = sx.q(rbx.d)
    rbx.b = 1
    void* rdx_8 = r13
    *(rbp + 0x18) = *(rdx_7 + rax_9 * 0x28 + 0x10)
    void* rax_11 = *(r13 + 0x230)
    
    if (rax_11 != 0)
        rdx_8 = rax_11
    
    *(rbp + 0x1c) = *(rdx_8 + sx.q(*(arg2 + 0xc)) * 0x28 + 0x14)
    void* rax_14 = *(r13 + 0x230)
    
    if (rax_14 != 0)
        r13 = rax_14
    
    *(rbp + 0x20) = *(r13 + sx.q(*(arg2 + 0xc)) * 0x28 + 0xc)
    *(rbp + 8) = 1

sub_1405d1550(&var_40)
return zx.q(rbx.b)
