// 函数: sub_14119b6c0
// 地址: 0x14119b6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_428
int64_t rax_1 = __security_cookie ^ &var_428
void* i_2 = data_143e6d188
int64_t r14 = arg4
int32_t result_2 = (data_143e6d190.q).d
void* r15 = arg1
int32_t rbx = arg6
int64_t result = sx.q(result_2)
int64_t result_1 = result * 0x160 + i_2
void* r9 = arg3
int32_t var_3d8 = arg2
int32_t var_408
int64_t* i_3
int64_t* var_3f8

if (i_2 != result_1)
    result = result_1
    void* rdi_1 = i_2 + 0xc0
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int32_t r14_1 = 0
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    
    do
        *(rdi_1 + 0x90) = 0xffffffff
        
        if (*(rdi_1 - 0xb8) == arg2)
            void* r13_1 = nullptr
            
            if (r9 != 0)
                void var_318
                void* rax_3 = &sub_14205a1d0(r9, &var_318, *(rdi_1 - 0xbc))[2]
                int32_t r15_1 = 0
                void* rbx_1 = nullptr
                void var_2f8
                
                if (&var_2f8 != rax_3)
                    r13_1 = *rax_3
                    *rax_3 = 0
                    rbx_1 = r13_1
                    r15_1 = *(rax_3 + 8)
                    *(rax_3 + 8) = 0
                
                int64_t var_310
                
                if (var_310 != 0)
                    sub_140a74f90(var_310)
                
                if (r15_1 != 0)
                    int32_t rcx_4 = 0
                    void* r15_4 = (sx.q(r15_1) << 6) + rbx_1
                    int64_t var_3d0 = 0
                    int64_t var_3c8_1 = 0
                    
                    if (rbx_1 != r15_4)
                        void* rbx_4 = rbx_1 + 8
                        
                        while (true)
                            if (*(rdi_1 + 0x90) s< 0)
                                *(rdi_1 + 0x90) = *(rbx_4 + 0x30)
                            
                            int64_t rax_6 = *(rbx_4 + 8)
                            zmm6 = *(rdi_1 - 0x20)
                            zmm7 = *(rdi_1 - 0x10)
                            zmm8 = *rdi_1
                            int64_t rax_7 = *(rbx_4 - 8)
                            int64_t var_350_1 = *rbx_4
                            int32_t var_33c_1 = *(rbx_4 + 0x10)
                            int32_t var_340_1 = *(rbx_4 + 0x14)
                            int32_t var_32c_1 = *(rbx_4 + 0x24)
                            int32_t rax_12 = *(rbx_4 + 0x28)
                            int32_t var_334_1 = *(rbx_4 + 0x1c)
                            int32_t var_330_1 = *(rbx_4 + 0x20)
                            int32_t rax_15 = *(rbx_4 + 0x18)
                            int32_t var_324_1 = *(rbx_4 + 0x2c)
                            int32_t var_320_1 = *(rbx_4 + 0x30)
                            var_3c8_1.d = r14_1 + 1
                            
                            if (r14_1 + 1 s> rcx_4)
                                sub_1405fdd60(&var_3d0)
                            
                            rbx_4 += 0x40
                            int128_t* rcx_6 = sx.q(r14_1) * 0x70
                            int64_t rax_20 = var_3d0
                            *(rcx_6 + rax_20) = zmm6
                            *(rcx_6 + rax_20 + 0x10) = zmm7
                            *(rcx_6 + rax_20 + 0x20) = zmm8
                            *(rcx_6 + rax_20 + 0x30) = rax_7.o
                            *(rcx_6 + rax_20 + 0x40) = rax_6.o
                            *(rcx_6 + rax_20 + 0x50) = rax_15.o
                            *(rcx_6 + rax_20 + 0x60) = rax_12.o
                            
                            if (rbx_4 - 8 == r15_4)
                                break
                            
                            rcx_4 = var_3c8_1:4.d
                            r14_1 = var_3c8_1.d
                    
                    r15 = arg1
                    r14_1 = 0
                    int64_t var_3b0 = 0
                    int64_t var_3a8_1 = 0
                    void var_2e8
                    sub_1419928d0(&var_2e8, r15)
                    rbx = arg6
                    
                    if (*(rdi_1 + 0x90) s>= 0)
                        if (rbx == 0)
                            int64_t* i = *(rdi_1 - 0x48)
                            
                            for (void* r14_3 = sx.q(*(rdi_1 - 0x40)) * 0x70 + i; i != r14_3; 
                                    i = &i[0xe])
                                int64_t r8_2 = sx.q(*(rdi_1 + 0x90))
                                
                                if (r8_2.d s< i[6].d)
                                    int32_t* rdx_4 = *(r8_2 * 0x38 + i[5] + 8)
                                    
                                    if (rdx_4 != 0 && *rdx_4 - 1 u<= 1)
                                        var_3f8 = &var_3b0
                                        i_3 = i
                                        var_408.q = &var_3d0
                                        j_sub_1411d2340(&var_2e8, arg5, r8_2.d, 1, var_408, i_3, 
                                            var_3f8)
                            
                            rbx = arg6
                            r14_1 = 0
                        else if (rbx == 1)
                            int64_t* i_1 = *(rdi_1 - 0x38)
                            uint64_t rcx_10 = sx.q(*(rdi_1 - 0x30))
                            void* r14_5 = rcx_10 * 0x70 + i_1
                            
                            if (i_1 != r14_5)
                                do
                                    int64_t r8_3 = sx.q(*(rdi_1 + 0x90))
                                    
                                    if (r8_3.d s< i_1[6].d)
                                        int32_t* rdx_6 = *(r8_3 * 0x38 + i_1[5] + 8)
                                        
                                        if (rdx_6 != 0 && *rdx_6 - 1 u<= 1)
                                            var_3f8 = &var_3b0
                                            i_3 = i_1
                                            var_408.q = &var_3d0
                                            j_sub_1411d2340(&var_2e8, arg5, r8_3.d, 1, var_408, 
                                                i_3, var_3f8)
                                    
                                    i_1 = &i_1[0xe]
                                while (i_1 != r14_5)
                                
                                i_1 = *(rdi_1 - 0x38)
                                rcx_10 = zx.q(*(rdi_1 - 0x30))
                            
                            for (void* r14_7 = sx.q(rcx_10.d) * 0x70 + i_1; i_1 != r14_7; 
                                    i_1 = &i_1[0xe])
                                int64_t r8_4 = sx.q(*(rdi_1 + 0x90))
                                
                                if (r8_4.d s< i_1[6].d)
                                    int32_t* rdx_8 = *(r8_4 * 0x38 + i_1[5] + 8)
                                    
                                    if (rdx_8 != 0 && *rdx_8 - 1 u<= 1)
                                        var_3f8 = &var_3b0
                                        var_408.q = &var_3d0
                                        j_sub_1411d1df0(&var_2e8, arg5, r8_4.d, 1, var_408, i_1, 
                                            var_3f8)
                                        i_3 = &var_3b0
                                        var_408.q = i_1
                                        j_sub_1411d20c0(&var_2e8, arg5, *(rdi_1 + 0x90), &var_3d0, 
                                            var_408, i_3)
                            
                            rbx = arg6
                            r14_1 = 0
                    
                    sub_14199ef00(&var_2e8)
                    sub_1411a4610(r15, &var_3b0)
                    int32_t var_c0_1 = 0
                    int32_t var_bc
                    void var_c8
                    
                    if (var_bc != 0)
                        sub_1410b3aa0(&var_c8, 0)
                    int32_t var_138_1 = 0
                    int32_t var_134
                    void var_140
                    
                    if (var_134 != 0)
                        sub_1410b3aa0(&var_140, 0)
                    int32_t var_190_1 = 0
                    int32_t var_1d0_1 = 0
                    int32_t var_1cc
                    void var_1d8
                    
                    if (var_1cc != 0)
                        sub_1410b3bb0(&var_1d8, 0)
                    int32_t var_1a8_1 = 0xffffffff
                    int32_t var_1a4_1 = 0
                    void var_1c8
                    sub_141095ed0(&var_1c8, 0)
                    int32_t var_1e0_1 = 0
                    int32_t var_220_1 = 0
                    int32_t var_21c
                    void var_228
                    
                    if (var_21c != 0)
                        sub_1410b3bb0(&var_228, 0)
                    int32_t var_1f8_1 = 0xffffffff
                    int32_t var_1f4_1 = 0
                    void var_218
                    sub_141095ed0(&var_218, 0)
                    int32_t var_230_1 = 0
                    void var_278
                    sub_141096480(&var_278, 0)
                    int32_t var_280_1 = 0
                    void var_2c8
                    sub_14108c840(&var_2c8)
                    int64_t rcx_26 = var_3b0
                    
                    if (rcx_26 != 0)
                        sub_140a74f90(rcx_26)
                    
                    int64_t rcx_27 = var_3d0
                    
                    if (rcx_27 != 0)
                        sub_140a74f90(rcx_27)
                    
                    if (r13_1 != 0)
                        sub_140a74f90(r13_1)
                else
                    if (rbx_1 != 0)
                        sub_140a74f90(r13_1)
                    
                    rbx = arg6
                    r15 = arg1
                
                result = result_1
                r9 = arg3
                arg2 = var_3d8
        
        i_2 += 0x160
        rdi_1 += 0x160
    while (i_2 != result)
    
    result_2 = (data_143e6d190.q).d
    i_2 = data_143e6d188
    r14 = arg4

if (rbx == 1)
    result = sx.q(result_2)
    
    for (void* rbx_3 = result * 0x160 + i_2; i_2 != rbx_3; i_2 += 0x160)
        if (*(i_2 + 8) == arg2)
            int64_t rdx_1 = *(i_2 + 0x58)
            
            if (rdx_1 != 0)
                int64_t r8_1 = *(i_2 + 0x60)
                
                if (r8_1 != 0)
                    int64_t r10 = *(i_2 + 0x70)
                    
                    if (r10 != 0)
                        result = r10(r15, rdx_1, r8_1, i_2 + 0x88, *(i_2 + 0x150), i_3, var_3f8)
            
            arg2 = var_3d8
else if (rbx == 0)
    result = sx.q(result_2)
    
    for (void* rbx_6 = result * 0x160 + i_2; i_2 != rbx_6; i_2 += 0x160)
        if (*(i_2 + 8) == arg2 && *(i_2 + 0x58) != 0)
            int64_t r10_1 = *(i_2 + 0x60)
            
            if (r10_1 != 0)
                int64_t r11_1 = *(i_2 + 0x68)
                
                if (r11_1 != 0)
                    int64_t var_3e8_1 = arg7
                    int32_t var_3f0_1 = *(i_2 + 0x150)
                    void* var_3f8_1 = i_2 + 0x88
                    void* var_400_1 = i_2 + 0x78
                    var_408.q = r10_1
                    result = r11_1(r15, r14, i_2 + 0xd0)
                    arg2 = var_3d8

__security_check_cookie(rax_1 ^ &var_428)
return result
