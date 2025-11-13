// 函数: sub_141bf0590
// 地址: 0x141bf0590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int32_t var_1d8 = 0
int32_t rdi = 0

if (arg1[0x102].b != 0 && arg1[0x74] != 0)
    arg1[0x102].b = 0
    
    if (arg1[0xee].d != 0)
        int64_t* rcx = arg1[0xed]
        
        if (rcx != 0)
            char rax_3
            rax_3, arg3 = (*(*rcx + 0x28))(rcx)
            
            if (rax_3 != 0 && arg1[0xf1] != 0)
                int64_t var_158 = 0
                int32_t var_150_1 = 0
                int32_t var_12c_1 = 0x80
                int64_t var_148
                __builtin_memset(&var_148, 0, 0x1c)
                int32_t var_128_1 = 0xffffffff
                int32_t var_124_1 = 0
                int64_t var_118_1 = 0
                int32_t var_110_1 = 0
                int64_t var_1a8
                __builtin_memset(&var_1a8, 0, 0x2c)
                int32_t var_17c_1 = 0x80
                int32_t var_178_1 = 0xffffffff
                int32_t var_174_1 = 0
                int64_t var_168_1 = 0
                int32_t var_160_1 = 0
                void* var_1e8 = nullptr
                int64_t var_1e0_1 = 0
                arg1[0xff].d = 0
                
                if (*(arg1 + 0x7fc) != 0)
                    sub_1405c5570(&arg1[0xfe], 0)
                
                int64_t* rdx = arg1[0xf1]
                int32_t var_1f8_1 = 0xffffffff
                char var_200_1 = 1
                uint64_t var_208_1 = &var_1a8
                int64_t* var_210_1 = &var_158
                int64_t var_1d0
                int64_t* var_218_1 = &var_1d0
                int32_t var_1b4_1 = 0x80
                __builtin_memset(&var_1d0, 0, 0x1c)
                sub_141bc7eb0(arg1, rdx, &arg1[0xfe], &var_1e8, var_218_1, var_210_1, var_208_1, 
                    var_200_1, var_1f8_1)
                int64_t var_108
                int64_t var_b8
                void* rsi_1
                
                if (*(arg1 + 0x811) != 0)
                    rsi_1.b = 0
                else if (arg1[0xc7].d - *(arg1 + 0x664) != var_150_1 - var_124_1)
                    rsi_1.b = 1
                else
                    int64_t* rax_6 = sub_141ba3570(&arg1[0xc6], &var_b8, &var_158)
                    rdi = 1
                    
                    if (rax_6[1].d - *(rax_6 + 0x34) s> 0)
                        rsi_1.b = 1
                    else
                        int64_t* rax_9 = sub_141ba3570(&var_158, &var_108, &arg1[0xc6])
                        rdi = 3
                        
                        if (rax_9[1].d - *(rax_9 + 0x34) s<= 0)
                            rsi_1.b = 0
                        else
                            rsi_1.b = 1
                
                if ((rdi.b & 2) != 0)
                    rdi &= 0xfffffffd
                    int32_t var_c0_1 = 0
                    int64_t var_c8
                    
                    if (var_c8 != 0)
                        sub_140a74f90(var_c8)
                    
                    int32_t var_100_1 = 0
                    int32_t var_fc
                    
                    if (var_fc != 0)
                        sub_1405a5410(&var_108, 0)
                    
                    int32_t var_d8_1 = 0xffffffff
                    int32_t var_d4_1 = 0
                    void var_f8
                    sub_14059a8e0(&var_f8, 0)
                    int64_t var_e8
                    
                    if (var_e8 != 0)
                        sub_140a74f90(var_e8)
                    
                    int64_t rcx_13 = var_108
                    
                    if (rcx_13 != 0)
                        sub_140a74f90(rcx_13)
                
                if ((rdi.b & 1) != 0)
                    int32_t var_70_1 = 0
                    int64_t var_78
                    
                    if (var_78 != 0)
                        sub_140a74f90(var_78)
                    
                    int32_t var_b0_1 = 0
                    int32_t var_ac
                    
                    if (var_ac != 0)
                        sub_1405a5410(&var_b8, 0)
                    
                    int32_t var_88_1 = 0xffffffff
                    int32_t var_84_1 = 0
                    void var_a8
                    sub_14059a8e0(&var_a8, 0)
                    int64_t var_98
                    
                    if (var_98 != 0)
                        sub_140a74f90(var_98)
                    
                    int64_t rcx_18 = var_b8
                    
                    if (rcx_18 != 0)
                        sub_140a74f90(rcx_18)
                
                if (rsi_1.b != 0)
                    sub_140cd48b0(&arg1[0xc6], &var_158)
                    int64_t rdi_1 = arg1[0xd1]
                    int32_t* rax_12
                    
                    if (rdi_1 != 0)
                        rax_12 = sub_1408296b0(&arg1[0xc6], &var_1d8, rdi_1)
                    
                    if (rdi_1 == 0 || *rax_12 == 0xffffffff)
                        arg1[0xd1] = 0
                        arg1[0xd0] = 0
                    else
                        int64_t r8_4 = arg1[0xd0]
                        int32_t* rax_13
                        
                        if (r8_4 != 0)
                            rax_13 = sub_1408296b0(&arg1[0xc6], &var_1d8, r8_4)
                        
                        if (r8_4 == 0 || *rax_13 == 0xffffffff)
                            arg1[0xd0] = rdi_1
                    
                    (*(arg1[0x9f] + 0x40))(&arg1[0x9f], 3)
                
                if (&arg1[0xf2] != &var_1a8)
                    sub_140780e10(&arg1[0xf2], &var_1a8)
                    int64_t r14_1 = var_168_1
                    void var_170
                    
                    if (r14_1 == 0)
                        memmove(&arg1[0xf9], &var_170, (r14_1 + 4).d)
                    int64_t rcx_25 = arg1[0xfa]
                    
                    if (rcx_25 != 0)
                        sub_140a74f90(rcx_25)
                        r14_1 = var_168_1
                    
                    arg1[0xfa] = r14_1
                    arg1[0xfb].d = var_160_1
                    int32_t var_160_2 = 0
                    var_168_1 = 0
                
                void* rcx_28
                
                if (&arg1[0xfc] == &var_1e8)
                    rcx_28 = var_1e8
                else
                    int32_t i_2 = arg1[0xfd].d
                    void* rcx_26 = arg1[0xfc]
                    
                    if (i_2 != 0)
                        int64_t* rdi_3 = rcx_26 + 0x10
                        int32_t i
                        
                        do
                            int64_t rcx_27 = *rdi_3
                            
                            if (rcx_27 != 0)
                                sub_140a74f90(rcx_27)
                            
                            rdi_3 = &rdi_3[5]
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                        rcx_26 = arg1[0xfc]
                    
                    if (rcx_26 != 0)
                        sub_140a74f90(rcx_26)
                    
                    rcx_28 = nullptr
                    arg1[0xfc] = var_1e8
                    arg1[0xfd].d = var_1e0_1.d
                    *(arg1 + 0x7ec) = var_1e0_1:4.d
                    var_1e0_1 = 0
                    var_1e8 = nullptr
                
                if (*(arg1 + 0x812) != 0)
                    (*(*arg1 + 0x2b8))(arg1)
                    rcx_28 = var_1e8
                
                int32_t i_3 = var_1e0_1.d
                
                if (i_3 != 0)
                    int64_t* rdi_4 = rcx_28 + 0x10
                    int32_t i_1
                    
                    do
                        int64_t rcx_30 = *rdi_4
                        
                        if (rcx_30 != 0)
                            sub_140a74f90(rcx_30)
                        
                        rdi_4 = &rdi_4[5]
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                    rcx_28 = var_1e8
                
                if (rcx_28 != 0)
                    sub_140a74f90(rcx_28)
                
                int32_t var_160_3 = 0
                
                if (var_168_1 != 0)
                    sub_140a74f90(var_168_1)
                
                int64_t var_1a0
                var_1a0.d = 0
                int32_t var_178_2 = 0xffffffff
                int32_t var_174_2 = 0
                int64_t var_198
                sub_14059a8e0(&var_198, 0)
                int64_t var_188
                
                if (var_188 != 0)
                    sub_140a74f90(var_188)
                
                int64_t rcx_35 = var_1a8
                
                if (rcx_35 != 0)
                    sub_140a74f90(rcx_35)
                
                int32_t var_110_2 = 0
                
                if (var_118_1 != 0)
                    sub_140a74f90(var_118_1)
                
                var_150_1 = 0
                int32_t var_128_2 = 0xffffffff
                int32_t var_124_2 = 0
                arg3 = sub_14059a8e0(&var_148, 0)
                int64_t var_138
                
                if (var_138 != 0)
                    arg3 = sub_140a74f90(var_138)
                
                int64_t rcx_40 = var_158
                
                if (rcx_40 != 0)
                    arg3 = sub_140a74f90(rcx_40)

int128_t* result = sub_140f8ee40(arg1, arg2, arg3, arg4)
__security_check_cookie(rax_1 ^ &var_238)
return result
