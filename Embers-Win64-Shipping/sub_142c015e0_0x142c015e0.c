// 函数: sub_142c015e0
// 地址: 0x142c015e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[8].d = 0
__builtin_memset(&arg1[9], 0, 0x20)
__builtin_memset(&arg1[0x13], 0, 0x20)

if (*(arg1 + 0x3c) == 0)
    arg1[7].d = sub_142bfb130(arg2)
    *(arg1 + 0x3c) = 1

int32_t* rax_3 = sub_142bfc340(&arg1[1], sub_142bfb150(arg2, 0x43464632))
*arg1 = rax_3
int32_t* rax_4 = sub_142bf2890(rax_3)
arg1[6] = rax_4
uint32_t rcx_4 = 0x4000
*(arg1 + 0x24) = 0
int64_t rdx_1 = *(rax_4 + 0x10)
arg1[2] = rdx_1
int64_t r9_1 = zx.q(rax_4[6]) + rdx_1
arg1[5].d = 0
arg1[3] = r9_1
uint64_t r8_1 = zx.q(r9_1.d - rdx_1.d)
arg1[1].d = 0
int32_t var_e0 = r8_1.d
int64_t var_e8 = r9_1
int64_t var_f0 = rdx_1
uint32_t rax_5 = (r8_1 << 3).d

if (rax_5 u> 0x4000)
    rcx_4 = rax_5

char const* const var_f8 = "start [%p..%p] (%lu bytes)"
arg1[4].d = rcx_4
int32_t var_100 = 1
int64_t var_108 = 0
int32_t* r13 = *arg1

if (r13[6] u>= 5)
    void* r13_1 = *(r13 + 0x10)
    void* arg_8 = r13_1
    
    if (r13_1 != &data_14369a5d0)
        void* r14_2 = zx.q(*(r13_1 + 2)) + r13_1
        uint32_t rsi_3 = (zx.d(*(r13_1 + 3)) << 8) + zx.d(*(r13_1 + 4))
        
        if (rsi_3 u< 0xffffffff && sub_142bf7510(&arg1[1], r14_2, rsi_3) != 0)
            uint32_t var_c8_1 = rsi_3
            int32_t rsi_4 = 0
            int64_t var_b0_1 = 0
            int32_t var_c0_1 = 0
            int64_t var_a8_1 = 0
            void* var_d0_1 = r14_2
            char var_bc_1 = 0
            void var_b8
            sub_142c01bd0(&var_b8)
            arg1[8].d = 0
            __builtin_memset(&arg1[9], 0, 0x20)
            char var_a0_1 = 0
            void var_d8
            void* result
            
            if (sub_142c02a50(&var_d8, &arg1[8]) == 0)
            label_142c0179b:
                result = sub_142bfdc10(arg1)
            label_142c017a4:
                
                if (var_a8_1 == 0)
                    return result
                
                return j_sub_140a74f90(var_a8_1)
            
            if (var_a8_1 != 0)
                j_sub_140a74f90(var_a8_1)
            
            arg1[0xd] = zx.q(*(r13_1 + 2)) + zx.q(*(r13_1 + 4)) + r13_1 + (zx.q(*(r13_1 + 3)) << 8)
            uint64_t rax_11 = zx.q(arg1[0xc].d)
            void* rcx_15 = rax_11 + r13_1
            
            if (rax_11.d == 0)
                rcx_15 = &data_14369a5d0
            
            uint64_t rax_12 = zx.q(arg1[0xb].d)
            arg1[0xe] = rcx_15
            void* rax_13
            
            if (rax_12.d == 0)
                rax_13 = &data_14369a5d0
            else
                rax_13 = rax_12 + r13_1
            
            arg1[0xf] = rax_13
            uint64_t rax_14 = zx.q(*(arg1 + 0x5c))
            void* rax_15
            
            if (rax_14.d == 0)
                rax_15 = &data_14369a5d0
            else
                rax_15 = rax_14 + r13_1
            
            arg1[0x10] = rax_15
            uint64_t rax_16 = zx.q(*(arg1 + 0x64))
            void* rax_17
            
            if (rax_16.d == 0)
                rax_17 = &data_14369a5d0
            else
                rax_17 = rax_16 + r13_1
            
            arg1[0x11] = rax_17
            char rax_18
            
            if (rcx_15 != &data_14369a5d0)
                rax_18 = sub_142c05840(rcx_15, &arg1[1])
            
            if (rcx_15 == &data_14369a5d0 || rax_18 != 0)
                char* rcx_16 = arg1[0xf]
                
                if (rcx_16 != &data_14369a5d0 && sub_142c04970(rcx_16, &arg1[1]) != 0)
                    char* rcx_17 = arg1[0xd]
                    
                    if (rcx_17 != &data_14369a5d0 && sub_142c04970(rcx_17, &arg1[1]) != 0)
                        char* rcx_18 = arg1[0x10]
                        
                        if (rcx_18 != &data_14369a5d0 && sub_142c04970(rcx_18, &arg1[1]) != 0)
                            char* rcx_19 = arg1[0x11]
                            char rax_27
                            
                            if (rcx_19 != &data_14369a5d0)
                                char* rdx_10 = arg1[0x10]
                                rax_27 = sub_142c057b0(rcx_19, &arg1[1], 
                                    (zx.d(rdx_10[1]) << 0x10) + (zx.d(rdx_10[2]) << 8)
                                        + (zx.d(*rdx_10) << 0x18) + zx.d(rdx_10[3]))
                            
                            if (rcx_19 == &data_14369a5d0 || rax_27 != 0)
                                char* rcx_20 = arg1[0xf]
                                uint32_t rcx_22 = zx.d(rcx_20[3]) + (zx.d(rcx_20[1]) << 0x10)
                                    + (zx.d(rcx_20[2]) << 8) + (zx.d(*rcx_20) << 0x18)
                                arg1[0x17].d = rcx_22
                                
                                if (rcx_22 == arg1[7].d)
                                    char* rcx_23 = arg1[0x10]
                                    uint32_t rdx_20 = (zx.d(rcx_23[1]) << 0x10)
                                        + (zx.d(rcx_23[2]) << 8) + (zx.d(*rcx_23) << 0x18)
                                        + zx.d(rcx_23[3])
                                    arg1[0x12].d = rdx_20
                                    result = sub_142c04470(&arg1[0x15], rdx_20)
                                    
                                    if (arg1[0x12].d u<= 0)
                                        return result
                                    
                                    while (true)
                                        void var_48
                                        sub_142bfcc80(arg1[0x10], &var_48, rsi_4)
                                        int32_t var_38
                                        
                                        if (var_38 u>= 0xffffffff)
                                            return sub_142bfdc10(arg1)
                                        
                                        int64_t var_40
                                        
                                        if (sub_142bf7510(&arg1[1], var_40, var_38) == 0)
                                            return sub_142bfdc10(arg1)
                                        
                                        int64_t var_d0_2 = var_40
                                        int64_t var_b0_2 = 0
                                        int32_t var_c0_2 = 0
                                        var_a8_1 = 0
                                        int32_t var_c8_2 = var_38
                                        char var_bc_2 = 0
                                        sub_142c01bd0(&var_b8)
                                        char var_a0_2 = 0
                                        int32_t* rax_38 = sub_142c04170(&arg1[0x13])
                                        int128_t zmm1_1 = data_14369a5e0.o
                                        data_144017550 = data_14369a5d0
                                        data_144017570 = 0
                                        data_144017560.o = zmm1_1
                                        
                                        if (rax_38 == &data_144017550)
                                            goto label_142c0179b
                                        
                                        *rax_38 = 0
                                        __builtin_memset(&rax_38[2], 0, 0x1c)
                                        
                                        if (sub_142c028a0(&var_d8, rax_38) == 0)
                                            goto label_142c0179b
                                        
                                        uint64_t rax_40 = zx.q(rax_38[6])
                                        void* r14_4 = rax_40 + r13_1
                                        
                                        if (rax_40.d == 0)
                                            r14_4 = &data_14369a5d0
                                        
                                        int32_t rdi_3 = rax_38[7]
                                        
                                        if (rdi_3 u>= 0xffffffff)
                                            goto label_142c0179b
                                        
                                        if (sub_142bf7510(&arg1[1], r14_4, rdi_3) == 0)
                                            goto label_142c0179b
                                        
                                        void* var_90_1 = r14_4
                                        int64_t var_70_1 = 0
                                        int64_t var_68_1 = 0
                                        int32_t var_80_1 = 0
                                        char var_7c_1 = 0
                                        int32_t var_88_1 = rdi_3
                                        void var_78
                                        sub_142c01bd0(&var_78)
                                        char var_60_1 = 0
                                        int32_t var_58_1 = 0
                                        char var_54_1 = 0
                                        int32_t* rax_42 = sub_142bfcde0(&arg1[0x15], rsi_4)
                                        *rax_42 = 0
                                        *(rax_42 + 8) = 0
                                        *(rax_42 + 0x10) = 0
                                        *(rax_42 + 0x20) = &data_14369a5d0
                                        rax_42[6] = 0
                                        rax_42[0xa] = 0
                                        void var_98
                                        
                                        if (sub_142c029c0(&var_98, 
                                                sub_142bfcde0(&arg1[0x15], rsi_4)) != 0)
                                            void* r13_2 = &data_14369a5d0
                                            
                                            if (rdi_3 != 0)
                                                r13_2 = r14_4
                                            
                                            uint64_t rcx_36 =
                                                zx.q(*(sub_142bfcde0(&arg1[0x15], rsi_4) + 0x18))
                                            void* rdi_4 = rcx_36 + r13_2
                                            
                                            if (rcx_36.d == 0)
                                                rdi_4 = &data_14369a5d0
                                            
                                            *(sub_142bfcde0(&arg1[0x15], rsi_4) + 0x20) = rdi_4
                                            result = sub_142bfcde0(&arg1[0x15], rsi_4)
                                            
                                            if (*(result + 0x20) == &data_14369a5d0)
                                            label_142c01b5e:
                                                
                                                if (var_68_1 != 0)
                                                    result = j_sub_140a74f90(var_68_1)
                                                
                                                if (var_a8_1 != 0)
                                                    result = j_sub_140a74f90(var_a8_1)
                                                
                                                rsi_4 += 1
                                                
                                                if (rsi_4 u>= arg1[0x12].d)
                                                    return result
                                                
                                                r13_1 = arg_8
                                                continue
                                            else
                                                result = sub_142c04970(
                                                    *(sub_142bfcde0(&arg1[0x15], rsi_4) + 0x20), 
                                                    &arg1[1])
                                                
                                                if (result.b != 0)
                                                    goto label_142c01b5e
                                        
                                        result = sub_142bfdc10(arg1)
                                        
                                        if (var_68_1 != 0)
                                            result = j_sub_140a74f90(var_68_1)
                                        
                                        break
                                    
                                    goto label_142c017a4

return sub_142bfdc10(arg1)
