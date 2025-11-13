// 函数: sub_141776c90
// 地址: 0x141776c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = nullptr
int64_t* rdi = nullptr

if (*(arg2 + 0xc) u>= 2)
    rdi = arg2

if (rdi == 0)
    return 

void* rcx = *rdi
int64_t rdx = sx.q(rdi[1].d)
char r8 = *(rdx + *(rcx + 0x398))

if ((r8 != 4 && r8 != 1) || *(rdx + *(rcx + 0x368)) != 0)
    return 

sub_14177fe50(rcx, rdx.d, 1)
sub_14177fa60(*rdi, zx.q(rdi[1].d), 1)
uint64_t rax = zx.q(*(arg2 + 0xc))
int64_t* r15_1 = nullptr

if (rax.b u>= 3)
    r15_1 = arg2

int32_t arg_10

if (r15_1 == 0)
    sub_140865c40(&arg1[0x12], &arg_10, rdi)
    int64_t rax_10 = sx.q(arg_10)
    int64_t rcx_10
    
    if (rax_10.d == 0xffffffff)
        rcx_10 = 0
    else
        rcx_10 = arg1[0x12] + rax_10 * 0x18
    
    rax = rcx_10 + 8
    
    if (rcx_10 == 0)
        rax = 0
    
    if (rax != 0)
        int64_t r15_2 = sx.q(*rax)
        int32_t rdx_12 = arg1[0x1d].d
        int32_t rax_14 = rdx_12 - r15_2.d - 1
        
        if (rax_14 s>= 1)
            rax_14 = 1
        
        if (rax_14 != 0)
            int64_t rcx_11 = arg1[0x1c]
            memcpy(rcx_11 + (r15_2 << 3), rcx_11 + (sx.q(rdx_12 - rax_14) << 3), rax_14 << 3)
            rdx_12 = arg1[0x1d].d
        
        arg1[0x1d].d = rdx_12 - 1
        sub_1405c53d0(&arg1[0x1c])
        
        if (r15_2.d s< arg1[0x1d].d)
            sub_140865c40(&arg1[0x12], &arg_10, *(arg1[0x1c] + (r15_2 << 3)))
            int64_t rax_17 = sx.q(arg_10)
            
            if (rax_17.d != 0xffffffff)
                rbx = arg1[0x12] + rax_17 * 0x18
            
            *(rbx + 8) = r15_2.d
        
        sub_140868c90(&arg1[0x12], rdi)
else if (rax.b != 6)
    sub_140865c40(&arg1[0x1e], &arg_10, r15_1)
    int64_t rax_1 = sx.q(arg_10)
    int64_t rcx_3
    
    if (rax_1.d == 0xffffffff)
        rcx_3 = 0
    else
        rcx_3 = arg1[0x1e] + rax_1 * 0x18
    
    rax = rcx_3 + 8
    
    if (rcx_3 == 0)
        rax = 0
    
    if (rax != 0)
        int64_t r14_1 = sx.q(*rax)
        int32_t rdx_4 = arg1[0x29].d
        int32_t rax_5 = rdx_4 - r14_1.d - 1
        
        if (rax_5 s>= 1)
            rax_5 = 1
        
        if (rax_5 != 0)
            int64_t rcx_4 = arg1[0x28]
            memcpy(rcx_4 + (r14_1 << 3), rcx_4 + (sx.q(rdx_4 - rax_5) << 3), rax_5 << 3)
            rdx_4 = arg1[0x29].d
        
        arg1[0x29].d = rdx_4 - 1
        sub_1405c53d0(&arg1[0x28])
        
        if (r14_1.d s< arg1[0x29].d)
            sub_140865c40(&arg1[0x1e], &arg_10, *(arg1[0x28] + (r14_1 << 3)))
            int64_t rax_8 = sx.q(arg_10)
            
            if (rax_8.d != 0xffffffff)
                rbx = arg1[0x1e] + rax_8 * 0x18
            
            *(rbx + 8) = r14_1.d
        
        sub_140868c90(&arg1[0x1e], r15_1)
else
    arg1[0x11].b = 1

if (arg3 == 0)
    sub_14175b460(arg1)
