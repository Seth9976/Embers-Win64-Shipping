// 函数: sub_14240e030
// 地址: 0x14240e030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
void* result = __security_cookie ^ &var_158
void* result_1 = result

if (((*(arg1 + 0x78) & 1) != 0 || arg2 != 0) && *(arg1 + 0xb0) != 0)
    int64_t* rcx = data_143f5b828
    
    if (rcx != 0)
        sub_142424910(rcx)
    
    void* r14_1 = arg1 + 0xa8
    char var_138
    sub_1423fa190(*r14_1, *(r14_1 + 8), var_138)
    int64_t* rcx_2 = *(arg1 + 0x58)
    int64_t var_110
    (*(*rcx_2 + 0x18))(rcx_2, &var_110)
    
    if ((*(arg1 + 0x44) - *(arg1 + 0x3c)) * (*(arg1 + 0x40) - *(arg1 + 0x38)) s<= 0)
        int64_t rax_4 = data_143dbb180
        *(arg1 + 0x38) = rax_4.d
        int64_t var_c8_1 = rax_4
        *(arg1 + 0x3c) = (rax_4 u>> 0x20).d
        int64_t rax_6 = var_110
        *(arg1 + 0x40) = rax_6.d
        *(arg1 + 0x44) = (rax_6 u>> 0x20).d
    
    int64_t rax_8 = *(arg1 + 0x58)
    char rax_9 = *(arg1 + 0x8c)
    int128_t var_108 = *(arg1 + 0x38)
    char var_d0_1 = rax_9
    int128_t zmm0_1 = *(arg1 + 0x48)
    result = sub_140af3aa0()
    
    if (*(arg1 + 0xb0) s> 0 && data_143f0f1d4 == 0)
        int64_t* rax_10 = j_sub_140a82f30(0x10)
        
        if (rax_10 == 0)
            rax_10 = nullptr
        else
            *rax_10 = 0
            rax_10[1] = 0
        
        int64_t* var_128 = rax_10
        void*** rax_11 = sub_140a82f30(0x38, 8)
        int128_t zmm0_2 = var_108
        *rax_11 = &data_142ec17a8
        *(rax_11 + 8) = zmm0_2
        *(rax_11 + 0x18) = zmm0_1
        *(rax_11 + 0x28) = rax_8.o
        int64_t* rbx_1 = var_128
        int64_t (* var_b8)(int128_t* arg1, void* arg2)
        int64_t (* rax_12)(int128_t* arg1, void* arg2) = var_b8
        
        if (rax_11 != -8)
            rax_12 = j_sub_1423ff8d0
        
        int64_t rsi_1 = sx.q(rbx_1[1].d)
        int32_t rax_13 = (rsi_1 + 1).d
        rbx_1[1].d = rax_13
        
        if (rax_13 s> *(rbx_1 + 0xc))
            sub_1405c4fe0(rbx_1)
        
        int64_t* rcx_10 = (rsi_1 << 6) + *rbx_1
        *rcx_10 = rax_12
        rcx_10[2] = rax_11
        int128_t* var_a8_2 = nullptr
        int128_t var_98
        *(rcx_10 + 0x20) = var_98
        int128_t var_88
        *(rcx_10 + 0x30) = var_88
        
        if (*rcx_10 == 0 && rax_12 != 0)
            int128_t* rcx_11 = &var_98
            
            if (var_a8_2 != 0)
                rcx_11 = var_a8_2
            
            (*(*rcx_11 + 0x10))(rcx_11)
        
        int32_t i = 0
        int64_t* var_130
        
        if (*(arg1 + 0xb0) s> 0)
            int64_t* rbx_2 = nullptr
            var_130 = nullptr
            
            do
                int32_t j = 0
                void* r15_2 = *r14_1 + rbx_2
                
                if (*(r15_2 + 0x10) s> 0)
                    int64_t* rsi_2 = nullptr
                    
                    do
                        int64_t* rbx_4 = *(rsi_2 + *(r15_2 + 8))
                        
                        if (rbx_4 != 0)
                            char rax_19 = (*(*rbx_4 + 0x10))(rbx_4, arg1, &var_128)
                            *(arg1 + 0x7c) |= rax_19
                            
                            if ((*(arg1 + 0x78) & 2) != 0)
                                (**rbx_4)(rbx_4, 1)
                        
                        j += 1
                        rsi_2 = &rsi_2[1]
                    while (j s< *(r15_2 + 0x10))
                    
                    rbx_2 = var_130
                
                if ((*(arg1 + 0x78) & 2) != 0)
                    bool cond:3_1 = *(r15_2 + 0x14) == 0
                    *(r15_2 + 0x10) = 0
                    
                    if (not(cond:3_1))
                        sub_1405c5570(r15_2 + 8, 0)
                
                rbx_2 = &rbx_2[3]
                r14_1 = arg1 + 0xa8
                i += 1
                var_130 = rbx_2
            while (i s< *(arg1 + 0xb0))
            
            r14_1 = arg1 + 0xa8
        
        int64_t* rbx_5 = var_128
        void** const var_58 = &data_142d42d18
        int64_t (* var_78_1)(int64_t arg1, void* arg2) = sub_14139bc50
        void*** var_68_1 = nullptr
        int64_t rsi_3 = sx.q(rbx_5[1].d)
        int32_t rax_21 = (rsi_3 + 1).d
        rbx_5[1].d = rax_21
        
        if (rax_21 s> *(rbx_5 + 0xc))
            sub_1405c4fe0(rbx_5)
        
        int64_t (** rcx_18)(int64_t arg1, void* arg2) = (rsi_3 << 6) + *rbx_5
        *rcx_18 = var_78_1
        rcx_18[2] = var_68_1
        *(rcx_18 + 0x20) = var_58.o
        int128_t var_48
        *(rcx_18 + 0x30) = var_48
        
        if (*rcx_18 == 0 && var_78_1 != 0)
            void** const* rcx_19 = &var_58
            
            if (var_68_1 != 0)
                rcx_19 = var_68_1
            
            (*rcx_19)[2](rcx_19)
        
        int64_t* rbx_6 = var_128
        var_130 = rbx_6
        
        if (sub_140a80f40() == 0)
            uint32_t rax_27
            
            if (data_143f138f4 == 0 && data_143de5480 != 0)
                rax_27.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_27.b == 0))
                void var_f8
                void** rax_28 = sub_142404d90(&var_f8, nullptr, 0xff)
                *(*rax_28 + 0x10) = rbx_6
                void* rcx_24 = *rax_28
                int32_t r8_3 = rax_28[2].d
                int64_t* rdx_5 = rax_28[1]
                void* rbx_7 = *(rcx_24 + 0x20)
                int128_t var_120_1
                var_120_1.q = rbx_7
                int32_t* rsi_4 = rbx_7 + 0x48
                
                if (rbx_7 != 0)
                    *rsi_4 += 1
                    rbx_7 = var_120_1.q
                
                result = sub_1407c9450(rcx_24, rdx_5, r8_3, 1)
                
                if (rbx_7 != 0)
                    result = zx.q(*rsi_4)
                    *rsi_4 -= 1
                    
                    if (result.d == 1)
                        result = sub_140a2f6e0(var_120_1.q)
            else
                var_108.q = rbx_6
                result = sub_1423ffd20(&var_108, &data_143f02b98)
        else
            result = sub_1423ffd20(&var_130, &data_143f02b98)
    
    if ((*(arg1 + 0x78) & 2) != 0)
        sub_1418e0220(r14_1, 0)
        result = sub_140a42ca0(arg1 + 0xb8, 0)
        *(arg1 + 0x108) = 0xffffffff

__security_check_cookie(result_1 ^ &var_158)
return result
