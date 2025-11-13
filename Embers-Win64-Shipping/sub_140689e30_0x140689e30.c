// 函数: sub_140689e30
// 地址: 0x140689e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg3
int32_t r13 = arg7
int64_t* rbx = arg2
int64_t var_a8 = 0
char var_a0 = 0
int32_t r15 = r13
int64_t var_50
__builtin_memset(&var_50, 0, 0x11)
int128_t var_98
__builtin_memset(&var_98, 0, 0x29)
int128_t var_68
__builtin_memset(&var_68, 0, 0x11)
int128_t var_88
int64_t* rsi_2

if (sub_14068a130(rdi, arg4, &var_a8, arg5, r13, arg3) == 0)
label_14068a02b:
    rsi_2 = var_98.q
else
    int32_t rax_2 = r13 & 0x800
    arg7 = rax_2
    
    while (true)
        if (rax_2 == 0)
            int64_t var_78
            
            for (char* i = var_88:8.q; i != var_78; i = &i[1])
                int64_t rcx_1 = rbx[2]
                int64_t rdx_1 = rbx[3]
                char r9_1 = *i
                
                if (rcx_1 u>= rdx_1)
                    sub_14058b730(rbx, 1, 0, r9_1)
                else
                    rbx[2] = rcx_1 + 1
                    int64_t* rax_4 = rbx
                    
                    if (rdx_1 u>= 0x10)
                        rax_4 = *rbx
                    
                    *(rax_4 + rcx_1) = r9_1
                    *(rax_4 + rcx_1 + 1) = 0
        
        int64_t temp0_1 = arg6[3]
        int64_t* rcx_3 = arg6
        char* r9_2
        
        if (temp0_1 u< 0x10)
            r9_2 = arg6
            
            if (temp0_1 u>= 0x10)
                r9_2 = *arg6
        else
            rcx_3 = *arg6
            r9_2 = *arg6
        
        void* var_c0
        var_c0.d = r15
        int32_t var_c8
        var_c8.q = arg6[2] + rcx_3
        int64_t* rdx_4 = &var_a8
        int64_t** rax_5
        int64_t* var_b8
        int64_t* arg_18
        
        if (not(test_bit(r15, 0xa)))
            rax_5 = sub_1406892b0(&var_b8, rdx_4, rbx, r9_2, var_c8)
        else
            rax_5 = sub_140689770(&arg_18, rdx_4, rbx, r9_2, var_c8)
        rbx = *rax_5
        rsi_2 = var_98.q
        int64_t rax_6
        int64_t rdx_5
        rdx_5:rax_6 = muls.dp.q(0x2aaaaaaaaaaaaaab, var_98:8.q - rsi_2)
        int64_t rdx_6 = rdx_5 s>> 2
        int64_t* rax_9 = &var_50
        
        if (rdx_6 != neg.q(rdx_6 u>> 0x3f))
            rax_9 = rsi_2
        
        rdi = rax_9[1]
        
        if (rdi == arg4)
            break
        
        if (test_bit(r13, 0xc))
            break
        
        int64_t* rdx_8
        
        if ((var_98:8.q - rsi_2) s/ 0x18 != 0)
            rdx_8 = rsi_2
        else
            rsi_2 = &var_50
            rdx_8 = &var_50
        
        int64_t rdx_9 = *rdx_8
        int64_t temp2_1 = rsi_2[1]
        
        if (rdx_9 != temp2_1)
            r15 |= 0x100
        
        int32_t rax_12 = 0x2000
        
        if (rdx_9 != temp2_1)
            rax_12 = 0
        
        rax_2 = arg7
        
        if (sub_14068a130(rdi, arg4, &var_a8, arg5, rax_12 | r15, rdi) == 0)
            goto label_14068a02b

if (not(test_bit(r13, 0xb)) && rdi != arg4)
    do
        int64_t rcx_9 = rbx[2]
        int64_t rdx_11 = rbx[3]
        char r9_4 = *rdi
        
        if (rcx_9 u>= rdx_11)
            sub_14058b730(rbx, 1, 0, r9_4)
        else
            rbx[2] = rcx_9 + 1
            int64_t* rax_16 = rbx
            
            if (rdx_11 u>= 0x10)
                rax_16 = *rbx
            
            *(rax_16 + rcx_9) = r9_4
            *(rax_16 + rcx_9 + 1) = 0
        
        rdi += 1
    while (rdi != arg4)

*arg1 = rbx

if (rsi_2 != 0)
    int64_t* rax_20 = rsi_2
    
    if ((var_88.q - rsi_2) s/ 0x18 * 0x18 u>= 0x1000)
        rsi_2 = rsi_2[-1]
        
        if (rax_20 - rsi_2 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rsi_2)

return arg1
