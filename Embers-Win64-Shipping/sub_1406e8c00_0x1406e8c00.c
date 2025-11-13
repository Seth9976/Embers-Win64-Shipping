// 函数: sub_1406e8c00
// 地址: 0x1406e8c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
__builtin_memset(&arg1[2], 0, 0x18)
void* rax
int64_t rdx
rax, rdx = j_sub_140a82f30(0x120)
int32_t* rbx = *(arg1 + 8)
int64_t r15 = *(arg1 + 0x10)

if (rbx != r15)
    int64_t* rdi_1 = &rbx[0x10]
    int64_t* rsi_1 = rax + 0x40
    
    do
        rsi_1[-8].d = *rbx
        *rsi_1 = 0
        int64_t* rcx_1 = *rdi_1
        
        if (rcx_1 != 0)
            if (rcx_1 != &rdi_1[-7])
                *rsi_1 = rcx_1
                *rdi_1 = 0
            else
                int64_t rax_2
                rax_2, rdx = (*(*rcx_1 + 8))(rcx_1, &rsi_1[-7])
                *rsi_1 = rax_2
                int64_t* rcx_2 = *rdi_1
                
                if (rcx_2 != 0)
                    rdx.b = rcx_2 != &rdi_1[-7]
                    (*(*rcx_2 + 0x20))(rcx_2, rdx)
                    *rdi_1 = 0
        
        rsi_1 = &rsi_1[9]
        rbx = &rbx[0x12]
        rdi_1 = &rdi_1[9]
    while (rbx != r15)
    
    rbx = *(arg1 + 8)

if (rbx != 0)
    int64_t rsi_2 = *(arg1 + 0x10)
    
    if (rbx != rsi_2)
        void* rdi_2 = &rbx[0x10]
        
        do
            int64_t* rcx_3 = *rdi_2
            
            if (rcx_3 != 0)
                int64_t r8_1 = *rcx_3
                rdx.b = rcx_3 != rdi_2 - 0x38
                (*(r8_1 + 0x20))(rcx_3, rdx, r8_1)
                *rdi_2 = 0
            
            rbx = &rbx[0x12]
            rdi_2 += 0x48
        while (rbx != rsi_2)
        
        rbx = *(arg1 + 8)
    
    int64_t rax_5
    int64_t rdx_2
    rdx_2:rax_5 = muls.dp.q(0xe38e38e38e38e39, *(arg1 + 0x18) - rbx)
    int64_t rdx_3 = rdx_2 s>> 2
    
    if ((rdx_3 + (rdx_3 u>> 0x3f)) * 0x48 u>= 0x1000)
        int32_t* rax_8 = *(rbx - 8)
        
        if (rbx - rax_8 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rbx = rax_8
    
    j_sub_140a74f90(rbx)

*(arg1 + 8) = rax
*(arg1 + 0x10) = rax
*(arg1 + 0x18) = rax + 0x120
return arg1
