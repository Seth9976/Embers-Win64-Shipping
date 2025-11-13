// 函数: sub_14084fd50
// 地址: 0x14084fd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x6b8) & 0x100) == 0)
    return &__return_addr

char arg_8[0x10]
sub_140744520(&arg_8, arg1)
sub_140b33630("Niagara")
*(arg1 + 0x6b8) &= 0xfffff6ff
int64_t rsi
rsi.b = 1
int64_t* i = *(arg1 + 0xa0)

for (void* r14_3 = &i[sx.q(*(arg1 + 0xa8)) * 2]; i != r14_3; i = &i[2])
    rsi.b &= sub_140801620(*i, 0)

if (*(arg1 + 0x6e8) - 3 u<= 1 || rsi.b != 0)
    sub_14084b160(arg1)
else
    int128_t zmm1_1 = *(arg1 + 0x6c0)
    *(arg1 + 0x6b8) &= 0xfffffffb
    double zmm2_1[0x2] = sub_14085dd20(arg1, zmm1_1, 1)
    int64_t* rcx_3 = *(arg1 + 0x28)
    
    if (rcx_3 != 0)
        int32_t rax_3 = *(arg1 + 0x6b8)
        
        if (rax_3.b s< 0)
            *(arg1 + 0x6b8) = rax_3 & 0xffffff7f
            zmm2_1 = sub_1405c6ac0(rcx_3, 0, 0)
            rcx_3 = *(arg1 + 0x28)
        
        sub_141ee8470(rcx_3)
        
        if (*(arg1 + 0x720) u> 0)
            void* rax_5 = *(arg1 + 0x6f0)
            
            if (rax_5 != 0 && sub_14074a210(*(rax_5 + 0x14)) != 0
                    && (*(*(arg1 + 0x28) + 0x88) & 1) != 0)
                int64_t* var_108 = nullptr
                int32_t i_4 = 0
                int64_t var_f8
                __builtin_memset(&var_f8, 0, 0x41)
                sub_140852510(&var_108, arg1, zmm2_1)
                void* rax_8 = *(arg1 + 0x6f0)
                int32_t i_2 = i_4
                int64_t* rbx_1 = var_108
                int64_t* var_160 = nullptr
                int32_t i_3 = i_2
                int32_t var_154
                
                if (i_2 != 0)
                    sub_1405c4a00(&var_160, i_2, 0)
                    int64_t* rcx_7 = var_160
                    int32_t i_1
                    
                    do
                        void* rax_9 = *rbx_1
                        *rcx_7 = rax_9
                        
                        if (rax_9 != 0)
                            *(rax_9 + 8) += 1
                        
                        rcx_7 = &rcx_7[1]
                        rbx_1 = &rbx_1[1]
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                else
                    var_154 = 0
                
                int64_t rax_10 = var_f8
                int64_t var_148
                __builtin_memset(&var_148, 0, 0x39)
                
                if (sub_140a80f40() == 0)
                    uint32_t rax_12
                    
                    if (data_143f138f4 == 0 && data_143de5480 != 0)
                        rax_12.b = GetCurrentThreadId() == data_143de5470
                    
                    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_12.b == 0))
                        void var_48
                        void** rax_19 = sub_14084cda0(&var_48, nullptr, 0xff)
                        void* rdx_6 = *rax_19
                        *(rdx_6 + 0x10) = rax_8
                        *(rdx_6 + 0x18) = 0
                        *(rdx_6 + 0x18) = var_160
                        var_160 = nullptr
                        *(rdx_6 + 0x20) = i_3
                        *(rdx_6 + 0x24) = var_154
                        i_3.q = 0
                        *(rdx_6 + 0x28) = rax_10
                        *(rdx_6 + 0x30) = var_148
                        __builtin_memset(rdx_6 + 0x38, 0, 0x31)
                        void* rcx_16 = *rax_19
                        int32_t rax_22 = rax_19[2].d
                        int64_t* rdx_7 = rax_19[1]
                        int64_t* rbx_2 = *(rcx_16 + 0x78)
                        int64_t* arg_18 = rbx_2
                        int32_t* rdi_1 = &rbx_2[9]
                        
                        if (rbx_2 != 0)
                            *rdi_1 += 1
                            rbx_2 = arg_18
                        
                        sub_140778260(rcx_16, rdx_7, rax_22, 1)
                        
                        if (rbx_2 != 0)
                            int32_t rax_23 = *rdi_1
                            *rdi_1 -= 1
                            
                            if (rax_23 == 1)
                                sub_140a2f6e0(arg_18)
                    else
                        int64_t* var_a0 = var_160
                        int32_t i_5 = i_3
                        int32_t var_94_1 = var_154
                        int64_t var_90_1 = rax_10
                        int64_t var_88_1 = var_148
                        int64_t var_80
                        __builtin_memset(&var_80, 0, 0x31)
                        var_160 = nullptr
                        i_3.q = 0
                        sub_1408314e0(rax_8, &var_a0)
                        sub_14081c910(&var_a0)
                else
                    sub_1408314e0(rax_8, &var_160)
                
                sub_14081c910(&var_160)
                sub_14081c910(&var_108)

sub_140b37f60("Niagara")
return sub_140746840(&arg_8)
