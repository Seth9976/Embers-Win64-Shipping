// 函数: sub_141ea0b60
// 地址: 0x141ea0b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void var_f8
uint64_t var_38_1 = __security_cookie ^ &var_f8
void* r10_1 = arg3

if (arg3 != 0 && arg5 != 0)
    int32_t rax_2 = *(arg4 + 0x90)
    int128_t var_78 = *(arg2 + 0x80)
    int32_t r12_1 = arg5[1].d
    int32_t r13_1 = *(arg2 + 0x90)
    int64_t rdx = *(arg4 + 0x78)
    int64_t var_88_1 = rdx
    int32_t var_68_1 = rax_2
    int32_t r14_1 = 1
    var_78 = *(arg4 + 0x80)
    int64_t* r15_1 = *(arg6 + 0x78)
    uint64_t rax = zx.q(*(arg6 + 0x90))
    int96_t var_50_1 = (*(arg6 + 0x80)).12
    int32_t var_c0 = r13_1
    int64_t var_b0_1 = rdx
    void* var_80_1 = arg3
    int64_t* var_60 = r15_1
    int64_t* var_58_1 = arg5
    int32_t var_c8 = rax.d
    int32_t var_40_1 = rax.d
    int32_t i = r12_1 - *(arg5 + 0x34)
    
    if (r12_1 != *(arg5 + 0x34))
        int32_t rdi_1 = 0
        
        if ((r15_1[8] & 0x1040000000) == 0)
            int64_t r13_2 = *arg5
            int32_t rbp_1 = 1
            uint64_t rdx_1 = zx.q(var_50_1:8.d)
            
            do
                if (rdi_1 s>= 0 && rdi_1 s< arg5[5].d)
                    void* rax_4 = arg5[4]
                    void* rcx = &arg5[2]
                    
                    if (rax_4 != 0)
                        rcx = rax_4
                    
                    int32_t rax_5 = rdi_1
                    
                    if (rdi_1 s< 0)
                        rax_5 = rdi_1 + 0x1f
                    
                    if ((*(rcx + (sx.q(rax_5 s>> 5) << 2)) & rbp_1) != 0)
                        if ((1 & not.b((r15_1[8] u>> 0x24).b)) != 0)
                            (*(*r15_1 + 0xe8))(r15_1, sx.q(*(r15_1 + 0x4c)) + r13_2)
                            rdx_1 = zx.q(var_50_1:8.d)
                        
                        i -= 1
                
                r13_2 += rdx_1
                rbp_1 = rol.d(rbp_1, 1)
                rdi_1 += 1
            while (i != 0)
            
            rax = zx.q(var_c8)
            r13_1 = var_c0
        
        arg5[1].d = 0
        
        if (*(arg5 + 0xc) != 0)
            sub_140ce4fc0(arg5, 0, rax.d)
        
        arg5[6].d = 0xffffffff
        *(arg5 + 0x34) = 0
        arg5[5].d = 0
        
        if (*(arg5 + 0x2c) != 0)
            *(arg5 + 0x2c) = 0
            sub_140d0bc80(&arg5[2], 0)
        
        int64_t rcx_4 = sx.q(arg5[9].d)
        uint64_t rdi_2 = &arg5[7]
        rax = *(rdi_2 + 8)
        r10_1 = arg3
        rdx = var_b0_1
        
        if (rcx_4 s> 0)
            if (rax != 0)
                rdi_2 = rax
            
            __builtin_memset(rdi_2, 0xffffffff, rcx_4 << 2)
    
    int32_t rbp_2 = *(arg1 + 8)
    int32_t rdi_3 = 0
    int32_t i_1 = rbp_2 - *(arg1 + 0x34)
    
    if (rbp_2 != *(arg1 + 0x34))
        int32_t r15_2 = 0
        
        do
            if (rdi_3 s>= 0 && rdi_3 s< *(arg1 + 0x28))
                void* rax_11 = *(arg1 + 0x20)
                void* rcx_5 = arg1 + 0x10
                
                if (rax_11 != 0)
                    rcx_5 = rax_11
                
                int32_t rax_12 = rdi_3
                
                if (rdi_3 s< 0)
                    rax_12 = rdi_3 + 0x1f
                
                if ((*(rcx_5 + (sx.q(rax_12 s>> 5) << 2)) & r14_1) != 0)
                    int64_t rbx_2
                    
                    if (*(arg1 + 8) != *(arg1 + 0x34))
                        rbx_2 = sx.q(r15_2) + *arg1
                    else
                        rbx_2 = 0
                    
                    var_c0.q = rdx
                    int32_t* var_a0_1 = &var_c0
                    var_c8.q = rdx
                    int32_t* var_90_1 = &var_c8
                    int64_t (* var_98)(int64_t* arg1, int64_t* arg2) = sub_140cf2f40
                    int64_t (* var_a8)(int64_t* arg1, int64_t* arg2, int64_t* arg3)
                    int64_t* var_d8_1 = &var_a8
                    var_a8 = sub_140cf2f50
                    
                    if (sub_141e9f780(r10_1, rbx_2, &var_78, &var_98, var_d8_1).d != 0xffffffff)
                        sub_141e92e30(&var_60, rbx_2)
                    
                    i_1 -= 1
            
            r10_1 = arg3
            rdi_3 += 1
            rdx = var_b0_1
            r15_2 += r13_1
            r14_1 = rol.d(r14_1, 1)
        while (i_1 != 0)

__security_check_cookie(var_38_1 ^ &var_f8)
