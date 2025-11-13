// 函数: sub_1406e8d80
// 地址: 0x1406e8d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = 0
__builtin_memset(arg1 + 0x10, 0, 0x18)
void* rax
int64_t rdx
rax, rdx = j_sub_140a82f30(0x120)
int32_t* rbx = *(arg1 + 0x10)
int64_t rbp = *(arg1 + 0x18)

if (rbx != rbp)
    void* rdi_1 = rax + 8
    
    do
        *(rdi_1 - 8) = *rbx
        *(rdi_1 + 0x38) = 0
        sub_1406ec540(rdi_1, &rbx[2])
        rdi_1 += 0x48
        rbx = &rbx[0x12]
    while (rbx != rbp)
    
    rbx = *(arg1 + 0x10)

if (rbx != 0)
    int64_t rbp_1 = *(arg1 + 0x18)
    
    if (rbx != rbp_1)
        void* rdi_2 = &rbx[0x10]
        
        do
            int64_t* rcx_2 = *rdi_2
            
            if (rcx_2 != 0)
                int64_t r8_1 = *rcx_2
                rdx.b = rcx_2 != rdi_2 - 0x38
                (*(r8_1 + 0x20))(rcx_2, rdx, r8_1)
                *rdi_2 = 0
            
            rbx = &rbx[0x12]
            rdi_2 += 0x48
        while (rbx != rbp_1)
        
        rbx = *(arg1 + 0x10)
    
    int64_t rax_2
    int64_t rdx_2
    rdx_2:rax_2 = muls.dp.q(0xe38e38e38e38e39, *(arg1 + 0x20) - rbx)
    int64_t rdx_3 = rdx_2 s>> 2
    
    if ((rdx_3 + (rdx_3 u>> 0x3f)) * 0x48 u>= 0x1000)
        int32_t* rax_5 = *(rbx - 8)
        
        if (rbx - rax_5 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rbx = rax_5
    
    j_sub_140a74f90(rbx)

*(arg1 + 0x10) = rax
*(arg1 + 0x18) = rax
*(arg1 + 0x20) = rax + 0x120
sub_1406e8c00(arg1 + 0x30)
sub_1406e8c00(arg1 + 0x60)
sub_1406e8c00(arg1 + 0x80)
sub_1406e8c00(arg1 + 0xa0)
sub_1406e8c00(arg1 + 0xc0)
sub_1406e8c00(arg1 + 0xe8)
*(arg1 + 0x108) = 0
__builtin_memset(arg1 + 0x110, 0, 0x18)
sub_1406ec320(arg1 + 0x110, 4)
*(arg1 + 0x130) = 0
__builtin_memset(arg1 + 0x138, 0, 0x18)
sub_1406ec320(arg1 + 0x138, 4)
*(arg1 + 0x150) = 0
__builtin_memset(arg1 + 0x158, 0, 0x18)
sub_1406ec320(arg1 + 0x158, 4)
*(arg1 + 0x170) = 0
__builtin_memset(arg1 + 0x178, 0, 0x18)
sub_1406ec320(arg1 + 0x178, 4)
*(arg1 + 0x190) = 0
__builtin_memset(arg1 + 0x198, 0, 0x18)
sub_1406ec320(arg1 + 0x198, 4)
*(arg1 + 0x1b0) = 0
__builtin_memset(arg1 + 0x1b8, 0, 0x18)
sub_1406ec320(arg1 + 0x1b8, 4)
*(arg1 + 0x1d0) = 0
__builtin_memset(arg1 + 0x1d8, 0, 0x18)
sub_1406ec320(arg1 + 0x1d8, 4)
*(arg1 + 0x1f0) = 0
__builtin_memset(arg1 + 0x1f8, 0, 0x18)
sub_1406ec320(arg1 + 0x1f8, 4)
*(arg1 + 0x210) = 0
__builtin_memset(arg1 + 0x218, 0, 0x18)
sub_1406ec320(arg1 + 0x218, 4)
*(arg1 + 0x238) = 0
__builtin_memset(arg1 + 0x240, 0, 0x18)
sub_1406ec320(arg1 + 0x240, 4)
sub_1406e8c00(arg1 + 0x258)
*(arg1 + 0x280) = 0
__builtin_memset(arg1 + 0x288, 0, 0x18)
sub_1406ec320(arg1 + 0x288, 4)
*(arg1 + 0x2b0) = 0
__builtin_memset(arg1 + 0x2b8, 0, 0x18)
sub_1406ec320(arg1 + 0x2b8, 4)
*(arg1 + 0x2d0) = 0
__builtin_memset(arg1 + 0x2d8, 0, 0x18)
sub_1406ec320(arg1 + 0x2d8, 4)
sub_1406e8c00(arg1 + 0x2f8)
*(arg1 + 0x320) = 0
__builtin_memset(arg1 + 0x328, 0, 0x18)
sub_1406ec320(arg1 + 0x328, 4)
return arg1
