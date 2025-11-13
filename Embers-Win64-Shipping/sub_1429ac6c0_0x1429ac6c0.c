// 函数: sub_1429ac6c0
// 地址: 0x1429ac6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1

if (rdi == 0)
    return 

int64_t rbp_1 = arg1[1]

if (rdi != rbp_1)
    do
        int64_t* i = *rdi
        
        if (i != 0)
            for (int64_t rsi_1 = rdi[1]; i != rsi_1; i = &i[3])
                void* rcx_1 = *i
                
                if (rcx_1 != 0)
                    if (((i[2] - rcx_1) & 0xfffffffffffffff8) u>= 0x1000)
                        void* r8_1 = *(rcx_1 - 8)
                        
                        if (rcx_1 - r8_1 - 8 u> 0x1f)
                            goto label_1429ac85c
                        
                        rcx_1 = r8_1
                    
                    j_sub_140a74f90(rcx_1)
                    __builtin_memset(i, 0, 0x18)
            
            void* r8_3 = *rdi
            int64_t rax_2
            int64_t rdx_4
            rdx_4:rax_2 = muls.dp.q(0x2aaaaaaaaaaaaaab, rdi[2] - r8_3)
            int64_t rdx_5 = rdx_4 s>> 2
            
            if ((rdx_5 + (rdx_5 u>> 0x3f)) * 0x18 u>= 0x1000)
                void* rcx_4 = *(r8_3 - 8)
                
                if (r8_3 - rcx_4 - 8 u> 0x1f)
                    goto label_1429ac85c
                
                r8_3 = rcx_4
            
            j_sub_140a74f90(r8_3)
            __builtin_memset(rdi, 0, 0x18)
        
        rdi = &rdi[3]
    while (rdi != rbp_1)
    
    rdi = *arg1

int64_t rax_6
int64_t rdx_9
rdx_9:rax_6 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - rdi)
int64_t rdx_10 = rdx_9 s>> 2

if ((rdx_10 + (rdx_10 u>> 0x3f)) * 0x18 u>= 0x1000)
    int64_t* rcx_8 = rdi[-1]
    
    if (rdi - rcx_8 - 8 u> 0x1f)
    label_1429ac85c:
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rdi = rcx_8

j_sub_140a74f90(rdi)
__builtin_memset(arg1, 0, 0x18)
