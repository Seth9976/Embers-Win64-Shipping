// 函数: sub_141e5c6f0
// 地址: 0x141e5c6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || arg3 == 0)
    return 

sub_140cea340()
int32_t i = 1
int64_t* var_50 = nullptr
char var_30_1 = 0
void* var_40_1 = &data_143e1b820
char var_38_1 = 1
int32_t var_34_1 = 1
sub_1407c3b60(&var_50)
int64_t* rbx_1 = var_50
sub_140b93ce0(rbx_1, arg2, 1, 1, 0)
rbx_1[3] = arg3
__builtin_memset(&rbx_1[4], 0, 0x14)
sub_140d23ed0(&var_50)

while (i s> 0)
    void* rax_4 = &var_50[sx.q(i - 1) * 7]
    int64_t rcx_5 = *(rax_4 + 0x20)
    int64_t rdx_2 = sx.q(*(rax_4 + 0x30))
    int64_t* rbx_2 = *(rcx_5 + rdx_2 * 0x10 + 8)
    void* rdi_2 = *(rcx_5 + rdx_2 * 0x10)
    int64_t j
    int64_t j_1
    
    if (rdi_2 == 0)
        j_1 = 0
        j = 0
    else
        j = *(rdi_2 + 0x28)
        j_1 = j
    int64_t* rcx_6 = *arg5
    void* r8 = &rcx_6[sx.q(arg5[1].d)]
    
    if (rcx_6 == r8)
    label_141e5c80e:
        int64_t var_68
        __builtin_memset(&var_68, 0, 0x18)
        uint64_t var_60
        
        if (rdi_2 != 0)
            int64_t rcx_7 = *(*(rdi_2 + 8) + 0x10)
            
            if (((rcx_7 u>> 0x21).b & 1) != 0 || ((rcx_7 u>> 0x1d).b & 1) != 0)
                if (rbx_2 != 0)
                    var_68 = rbx_2[2]
                    sub_140597df0(&var_60, &rbx_2[3])
            else if (((rcx_7 u>> 0x14).b & 1) != 0)
                int64_t rax_13 = sub_140bdcca0()
                int64_t rax_14
                
                if (*(rdi_2 + 0x78) != rax_13)
                    rax_14 = sub_140bdcc20()
                
                if (*(rdi_2 + 0x78) == rax_13 || *(rdi_2 + 0x78) == rax_14)
                    if (rbx_2 != 0)
                        var_68 = *rbx_2
                        sub_140597df0(&var_60, &rbx_2[1])
                    
                    char var_30_3 = 1
        
        if (var_68 != 0)
            int64_t* r14_2 = *arg4
            int64_t* rbx_3 = r14_2
            void* rdi_3 = &r14_2[sx.q(arg4[1].d) * 3]
            int64_t rdx_9
            
            if (r14_2 != rdi_3)
                while (sub_140d16af0(rbx_3, &var_68) == 0)
                    rbx_3 = &rbx_3[3]
                    
                    if (rbx_3 == rdi_3)
                        goto label_141e5c907
                
                int64_t rax_18
                int64_t rdx_8
                rdx_8:rax_18 = muls.dp.q(0x2aaaaaaaaaaaaaab, rbx_3 - r14_2)
                rdx_9 = rdx_8 s>> 2
            
            if (r14_2 == rdi_3 || rdx_9.d + (rdx_9 u>> 0x3f).d == 0xffffffff)
            label_141e5c907:
                int64_t rbx_5 = sx.q(arg4[1].d)
                int32_t rax_21 = (rbx_5 + 1).d
                arg4[1].d = rax_21
                
                if (rax_21 s> *(arg4 + 0xc))
                    sub_1405a4df0(arg4)
                
                int64_t* rcx_16 = *arg4 + rbx_5 * 0x18
                *rcx_16 = var_68
                sub_140596d10(&rcx_16[1], &var_60)
        
        uint64_t rcx_18 = var_60
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        sub_140d23ed0(&var_50)
    else
        while (*rcx_6 != j)
            rcx_6 = &rcx_6[1]
            
            if (rcx_6 == r8)
                goto label_141e5c80e
        
        char var_30_2 = 1
        sub_140d23ed0(&var_50)

sub_1408d45e0(&var_50)
