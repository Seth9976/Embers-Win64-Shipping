// 函数: sub_1423665a0
// 地址: 0x1423665a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
uint64_t var_48 = __security_cookie ^ &var_128
uint64_t result

if (*(arg1 + 0x54) s< 0)
    void* r15_1 = ***(arg1 + 0x10)
    void* var_c0_1 = r15_1
    int64_t var_f0
    sub_14229e7e0(r15_1 + 0x178, &var_f0)
    int32_t var_6c_1 = 0x80
    bool cond:1_1 = (*(arg1 + 0x54) & 0x10) != 0
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    void* rax_3
    
    if (not(cond:1_1))
        int64_t* rax_2 = sub_142565030()
        rax_3 = rax_2[0x23]
        
        if (rax_3 == 0)
            int64_t rdx_1 = *rax_2
            (*(rdx_1 + 0x390))(rax_2, rdx_1)
            rax_3 = rax_2[0x23]
    
    int64_t* rbx_1
    
    if (cond:1_1 || *(rax_3 + 0xb0) != 0)
        int64_t r14_1 = sx.q(*(r15_1 + 0xe8))
        rbx_1 = sx.q(arg2[7].d)
        int32_t rax_4 = (rbx_1 + r14_1).d
        arg2[7].d = rax_4
        
        if (rax_4 s> *(arg2 + 0x3c))
            sub_1405a4f90(&arg2[6])
        
        memset((rbx_1 << 4) + arg2[6], 0, r14_1 << 4)
    
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*(r15_1 + 0x30) s> 0)
        void* r8_3 = r15_1 + 0x10
        int64_t rcx_7 = 0
        void* var_b8_1 = r8_3
        int64_t var_d0_1 = 0
        
        do
            void* rax_5 = *(r8_3 + 0x18)
            void* r13_1 = r8_3
            
            if (rax_5 != 0)
                r13_1 = rax_5
            
            void* r13_2 = r13_1 + rcx_7
            int32_t rdi_1 = *(r13_2 + 4)
            uint64_t rcx_8 = zx.q(*(r13_2 + 8))
            int32_t rcx_9 = rcx_8.d + rdi_1 + (rcx_8 << 1).d
            
            if (rdi_1 u< rcx_9)
                void* r14_2 = r15_1 + 0x70
                void* rdx_3 = r15_1 + 0xf8
                void* var_c8_1 = r14_2
                void* var_d8_1 = rdx_3
                void* r8_4 = &arg2[6]
                
                do
                    int64_t rax_7 = var_f0
                    int64_t rbx_2 = sx.q(rdi_1)
                    char var_e4
                    uint32_t rcx_10
                    
                    if (var_e4 == 0)
                        rcx_10 = zx.d(*(rax_7 + (rbx_2 << 1)))
                    else
                        rcx_10 = *(rax_7 + (rbx_2 << 2))
                    
                    int32_t rax_8 = sub_142363420(rcx_10, &var_98, arg2, r8_4, rdx_3, r14_2)
                    int64_t rax_9 = var_f0
                    uint32_t rcx_11
                    
                    if (var_e4 == 0)
                        rcx_11 = zx.d(*(rax_9 + (rbx_2 << 1) + 2))
                    else
                        rcx_11 = *(rax_9 + (rbx_2 << 2) + 4)
                    
                    int32_t var_ac_1 =
                        sub_142363420(rcx_11, &var_98, arg2, &arg2[6], var_d8_1, r14_2)
                    int64_t rax_12 = var_f0
                    uint32_t rcx_12
                    
                    if (var_e4 == 0)
                        rcx_12 = zx.d(*(rax_12 + (rbx_2 << 1) + 4))
                    else
                        rcx_12 = *(rax_12 + (rbx_2 << 2) + 8)
                    
                    int32_t rax_14 = sub_142363420(rcx_12, &var_98, arg2, &arg2[6], var_d8_1, r14_2)
                    int64_t rbx_3 = sx.q(arg2[3].d)
                    int32_t rcx_13 = (rbx_3 + 1).d
                    arg2[3].d = rcx_13
                    
                    if (rcx_13 s> *(arg2 + 0x1c))
                        sub_14083a7e0(&arg2[2])
                    
                    int64_t rax_15 = arg2[2]
                    int64_t rdx_8 = rbx_3 * 3
                    *(rax_15 + (rdx_8 << 2)) = rax_8.q
                    *(rax_15 + (rdx_8 << 2) + 8) = rax_14
                    rbx_1 = sx.q(arg2[5].d)
                    int16_t r14_4 = *r13_2
                    int32_t rax_16 = (rbx_1 + 1).d
                    arg2[5].d = rax_16
                    
                    if (rax_16 s> *(arg2 + 0x2c))
                        sub_140594770(&arg2[4])
                    
                    r8_4 = &arg2[6]
                    rdx_3 = var_d8_1
                    rdi_1 += 3
                    *(arg2[4] + (rbx_1 << 1)) = r14_4
                    r14_2 = var_c8_1
                while (rdi_1 u< rcx_9)
                
                r15_1 = var_c0_1
                i = i_1
                r8_3 = var_b8_1
            
            i += 1
            rcx_7 = var_d0_1 + 0x18
            i_1 = i
            var_d0_1 = rcx_7
        while (i s< *(r15_1 + 0x30))
    
    arg2[8].d |= 1
    
    if (arg2[1].d s<= 0 || arg2[3].d s<= 0)
        rbx_1.b = 0
    else
        rbx_1.b = 1
    
    int32_t var_50_2 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    int64_t var_90
    bool cond:3_1 = var_90:4.d == 0
    var_90.d = 0
    
    if (not(cond:3_1))
        sub_1405a5410(&var_98, 0)
    
    int32_t var_68_2 = 0xffffffff
    int32_t var_64_2 = 0
    int64_t var_88
    sub_14059a8e0(&var_88, 0)
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    int64_t rcx_21 = var_98
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    result = zx.q(rbx_1.b)
else
    result.b = 0

__security_check_cookie(var_48 ^ &var_128)
return result
