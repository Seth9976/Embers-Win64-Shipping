// 函数: sub_140d09270
// 地址: 0x140d09270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

uint64_t rax = *(arg1 + 0x78)

if ((*(rax + 0x40) & 0x8000080000) == 0)
    return 

int128_t zmm0 = *(arg1 + 0x80)
int32_t rdi_1 = 0
int32_t r12_1 = *(arg1 + 0x90)
int128_t var_50_1 = zmm0

if (arg3 == 0)
    int32_t r14_2 = *(arg2 + 8)
    int32_t i = r14_2 - *(arg2 + 0x34)
    
    if (r14_2 != *(arg2 + 0x34))
        int32_t rsi_2 = 1
        int32_t rbp_3 = 0
        
        do
            if (rdi_1 s>= 0 && rdi_1 s< *(arg2 + 0x28))
                void* rax_10 = *(arg2 + 0x20)
                void* rcx_4 = arg2 + 0x10
                
                if (rax_10 != 0)
                    rcx_4 = rax_10
                
                int32_t rax_11 = rdi_1
                
                if (rdi_1 s< 0)
                    rax_11 = rdi_1 + 0x1f
                
                if ((*(rcx_4 + (sx.q(rax_11 s>> 5) << 2)) & rsi_2) != 0)
                    int64_t rdx_4
                    
                    if (*(arg2 + 8) != *(arg2 + 0x34))
                        rdx_4 = sx.q(rbp_3) + *arg2
                    else
                        rdx_4 = 0
                    
                    int64_t* rcx_5 = *(arg1 + 0x78)
                    int64_t var_78_2 = arg5
                    (*(*rcx_5 + 0x100))(rcx_5, rdx_4, 0)
                    i -= 1
            
            rdi_1 += 1
            rsi_2 = rol.d(rsi_2, 1)
            rbp_3 += r12_1
        while (i != 0)
else
    uint64_t var_60 = rax
    rax = zx.q(r12_1)
    int32_t r12_2 = *(arg2 + 8)
    void* var_58_1 = arg3
    int128_t var_50_2 = zmm0
    int32_t var_68_1 = rax.d
    int32_t var_40_1 = rax.d
    int32_t i_1 = r12_2 - *(arg2 + 0x34)
    
    if (r12_2 != *(arg2 + 0x34))
        rax = zx.q(r12_1)
        int32_t rsi_1 = 1
        int32_t r15_1 = 0
        
        do
            if (rdi_1 s>= 0 && rdi_1 s< *(arg2 + 0x28))
                void* rax_1 = *(arg2 + 0x20)
                void* rcx = arg2 + 0x10
                
                if (rax_1 != 0)
                    rcx = rax_1
                
                int32_t rax_2 = rdi_1
                
                if (rdi_1 s< 0)
                    rax_2 = rdi_1 + 0x1f
                
                if ((*(rcx + (sx.q(rax_2 s>> 5) << 2)) & rsi_1) != 0)
                    int64_t rbp_1
                    
                    if (*(arg2 + 8) != *(arg2 + 0x34))
                        rbp_1 = sx.q(r15_1) + *arg2
                    else
                        rbp_1 = 0
                    
                    int32_t rax_6 = sub_140cfe6e0(&var_60, rbp_1, rdi_1)
                    int64_t r8_2
                    
                    if (rax_6 s< 0 || *(arg3 + 8) == *(arg3 + 0x34))
                        r8_2 = 0
                    else
                        r8_2 = sx.q(var_68_1 * rax_6) + *arg3
                    
                    int64_t* rcx_3 = *(arg1 + 0x78)
                    (*(*rcx_3 + 0x100))(rcx_3, rbp_1, r8_2, arg4, arg5)
                    i_1 -= 1
                
                rax = zx.q(r12_1)
            
            rdi_1 += 1
            rsi_1 = rol.d(rsi_1, 1)
            r15_1 += rax.d
        while (i_1 != 0)
