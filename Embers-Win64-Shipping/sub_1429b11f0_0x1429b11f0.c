// 函数: sub_1429b11f0
// 地址: 0x1429b11f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return 

int64_t* rbx_1 = arg1

do
    int64_t* rcx = *rbx_1
    
    if (rcx != 0)
        sub_1429914c0(rcx, rbx_1[1])
        void* r8_2 = *rbx_1
        int64_t rax_1
        int64_t rdx_1
        rdx_1:rax_1 = muls.dp.q(0x2aaaaaaaaaaaaaab, rbx_1[2] - r8_2)
        int64_t rdx_2 = rdx_1 s>> 2
        
        if ((rdx_2 + (rdx_2 u>> 0x3f)) * 0x18 u>= 0x1000)
            void* rcx_3 = *(r8_2 - 8)
            
            if (r8_2 - rcx_3 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            r8_2 = rcx_3
        
        j_sub_140a74f90(r8_2)
        __builtin_memset(rbx_1, 0, 0x18)
    
    rbx_1 = &rbx_1[3]
while (rbx_1 != arg2)
