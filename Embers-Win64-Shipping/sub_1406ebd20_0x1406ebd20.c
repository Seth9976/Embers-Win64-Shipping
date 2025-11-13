// 函数: sub_1406ebd20
// 地址: 0x1406ebd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t r14 = arg2

if (rbx != 0)
    int64_t rbp_1 = arg1[1]
    
    if (rbx != rbp_1)
        int64_t* rdi_1 = rbx + 0x40
        
        do
            int64_t* rcx = *rdi_1
            
            if (rcx != 0)
                int64_t r8 = *rcx
                arg2.b = rcx != &rdi_1[-7]
                (*(r8 + 0x20))(rcx, arg2, r8)
                *rdi_1 = 0
            
            rbx += 0x48
            rdi_1 = &rdi_1[9]
        while (rbx != rbp_1)
        
        rbx = *arg1
    
    int64_t rax_2
    int64_t rdx
    rdx:rax_2 = muls.dp.q(0xe38e38e38e38e39, arg1[2] - rbx)
    int64_t rdx_1 = rdx s>> 2
    
    if ((rdx_1 + (rdx_1 u>> 0x3f)) * 0x48 u>= 0x1000)
        void* rax_5 = *(rbx - 8)
        
        if (rbx - rax_5 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rbx = rax_5
    
    j_sub_140a74f90(rbx)

*arg1 = r14
arg1[1] = r14 + arg3 * 0x48
int64_t result = arg4 * 9
arg1[2] = r14 + (result << 3)
return result
