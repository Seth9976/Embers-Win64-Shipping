// 函数: sub_141ea1180
// 地址: 0x141ea1180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void var_138
void* var_38_1 = __security_cookie ^ &var_138
uint64_t var_e0 = arg3
uint64_t r13_1 = arg3

if (arg3 != 0 && arg5 != 0)
    int32_t r12_1 = arg5[1].d
    uint128_t var_50_1 = *(arg2 + 0x80)
    int32_t var_f0 = *(arg2 + 0x90)
    int32_t rax_3 = *(arg4 + 0x90)
    uint128_t var_50_2 = *(arg4 + 0x80)
    uint128_t zmm0 = *(arg6 + 0x80)
    int32_t r8 = *(arg6 + 0x90)
    uint64_t r15_1 = *(arg6 + 0x78)
    uint128_t var_d8_1 = zmm0
    uint64_t var_88 = r15_1
    uint128_t var_78 = zmm0
    int32_t var_f8_1 = r8
    int32_t var_68_1 = r8
    int32_t i = r12_1 - *(arg5 + 0x34)
    uint64_t var_e8
    void* rax
    
    if (r12_1 != *(arg5 + 0x34))
        int32_t rdi_1 = 0
        
        if ((*(r15_1 + 0x40) & 0x1040000000) == 0)
            int64_t r13_2 = *arg5
            int32_t r14_1 = 1
            uint64_t rdx = zx.q(_mm_bsrli_si128(zmm0, 8).d)
            var_e8 = rdx
            
            do
                if (rdi_1 s>= 0 && rdi_1 s< arg5[5].d)
                    void* rax_4 = arg5[4]
                    void* rcx = &arg5[2]
                    
                    if (rax_4 != 0)
                        rcx = rax_4
                    
                    int32_t rax_5 = rdi_1
                    
                    if (rdi_1 s< 0)
                        rax_5 = rdi_1 + 0x1f
                    
                    if ((*(rcx + (sx.q(rax_5 s>> 5) << 2)) & r14_1) != 0)
                        if ((not.b((*(r15_1 + 0x40) u>> 0x24).b) & 1) != 0)
                            (*(*r15_1 + 0xe8))(r15_1, sx.q(*(r15_1 + 0x4c)) + r13_2)
                            rdx = var_e8
                        
                        i -= 1
                
                r13_2 += rdx
                r14_1 = rol.d(r14_1, 1)
                rdi_1 += 1
            while (i != 0)
            
            r13_1 = var_e0
            r8 = var_f8_1
        
        arg5[1].d = 0
        
        if (*(arg5 + 0xc) != 0)
            sub_140ce4fc0(arg5, 0, r8)
        
        arg5[6].d = 0xffffffff
        *(arg5 + 0x34) = 0
        arg5[5].d = 0
        
        if (*(arg5 + 0x2c) != 0)
            *(arg5 + 0x2c) = 0
            sub_140d0bc80(&arg5[2], 0)
        
        int64_t rcx_4 = sx.q(arg5[9].d)
        void* rdi_2 = &arg5[7]
        rax = *(rdi_2 + 8)
        r8 = var_f8_1
        zmm0 = var_d8_1
        
        if (rcx_4 s> 0)
            if (rax != 0)
                rdi_2 = rax
            
            __builtin_memset(rdi_2, 0xffffffff, rcx_4 << 2)
    
    int32_t r14_2 = *(arg1 + 8)
    int32_t rdi_3 = 0
    int32_t r12_2 = 1
    int32_t i_1 = r14_2 - *(arg1 + 0x34)
    
    if (r14_2 != *(arg1 + 0x34))
        rax = zx.q(var_f0)
        int32_t rbx_2 = 1
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
                
                if ((*(rcx_5 + (sx.q(rax_12 s>> 5) << 2)) & rbx_2) != 0)
                    int64_t rdx_3
                    
                    if (*(arg1 + 8) != *(arg1 + 0x34))
                        rdx_3 = sx.q(r15_2) + *arg1
                    else
                        rdx_3 = 0
                    
                    sub_141e92e30(&var_88, rdx_3)
                    i_1 -= 1
                
                rax = zx.q(var_f0)
            
            rdi_3 += 1
            rbx_2 = rol.d(rbx_2, 1)
            r15_2 += rax.d
        while (i_1 != 0)
        
        zmm0 = var_78
        r8 = var_68_1
        r15_1 = var_88
        var_d8_1 = zmm0
        var_f8_1 = r8
    
    int32_t r14_3 = *(r13_1 + 8)
    int32_t rdi_4 = 0
    int32_t i_2 = r14_3 - *(r13_1 + 0x34)
    
    if (r14_3 != *(r13_1 + 0x34))
        rax = zx.q(rax_3)
        int32_t rsi_2 = 0
        
        do
            if (rdi_4 s>= 0 && rdi_4 s< *(r13_1 + 0x28))
                int64_t rax_16 = *(r13_1 + 0x20)
                int64_t rcx_7 = r13_1 + 0x10
                
                if (rax_16 != 0)
                    rcx_7 = rax_16
                
                int32_t rax_17 = rdi_4
                
                if (rdi_4 s< 0)
                    rax_17 = rdi_4 + 0x1f
                
                if ((*(rcx_7 + (sx.q(rax_17 s>> 5) << 2)) & r12_2) != 0)
                    int64_t rdx_5
                    
                    if (*(r13_1 + 8) != *(r13_1 + 0x34))
                        rdx_5 = sx.q(rsi_2) + *r13_1
                    else
                        rdx_5 = 0
                    
                    void* const var_c8 = &data_140d19280
                    uint64_t* var_c0_1 = &var_e0
                    int32_t var_40_1 = r8
                    uint64_t var_60
                    uint64_t* var_b0_1 = &var_60
                    var_e0 = r15_1
                    uint64_t* var_a0_1 = &var_e8
                    var_60 = r15_1
                    int32_t* var_90_1 = &var_f0
                    int64_t (* var_98)(int64_t* arg1, int64_t* arg2) = sub_140cf2f40
                    void* const* var_108_1 = &var_c8
                    int64_t (* var_b8)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm0)
                    int64_t* var_110_1 = &var_b8
                    int64_t (* var_a8)(int64_t* arg1, int64_t* arg2, int64_t* arg3)
                    int64_t* var_118_1 = &var_a8
                    int64_t var_58_1 = rdx_5
                    uint128_t var_50_3 = zmm0
                    var_b8 = sub_140d19220
                    var_e8 = r15_1
                    var_a8 = sub_140cf2f50
                    var_f0.q = r15_1
                    sub_140d16fd0(arg5, rdx_5, &var_78, &var_98, var_118_1, var_110_1)
                    zmm0 = var_d8_1
                    r8 = var_f8_1
                    i_2 -= 1
                
                rax = zx.q(rax_3)
            
            rdi_4 += 1
            r12_2 = rol.d(r12_2, 1)
            rsi_2 += rax.d
        while (i_2 != 0)

__security_check_cookie(var_38_1 ^ &var_138)
