// 函数: sub_1423a9f80
// 地址: 0x1423a9f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* rbp = arg1

if (*(arg1 + 0x54) == 0)
    void* rdx = arg2[1]
    
    if (rdx != 0)
        int64_t rsi_1 = sx.q(*(arg1 + 8))
        void* r15_1 = *(*arg2 + 0xd0)
        int64_t rax_3 = sx.q(*(rdx + 0x60))
        
        if (rsi_1 s< rax_3)
            do
                int64_t* rbx_2 = *(arg2[1] + 0xe8)
                int32_t* rcx = *(*(r15_1 + 0x18) + (rsi_1 << 3))
                
                if (rbx_2 != 0)
                    rbx_2[1].d += 1
                
                int32_t rax_5 = sub_141998400(*rcx, rcx[1], *(rbx_2 + 0x3c), 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    char rax_6
                    
                    if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                        rax_6 = sub_1405949a0()
                    
                    if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
                        (**rbx_2)(rbx_2, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rbx_2 + 0xc))
                            *(rbx_2 + 0xc) = 1
                            z_1 = true
                        else
                            *(rbx_2 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_8 = sub_140a20af0()
                            uint64_t rdx_2 = zx.q(rax_8)
                            void* const rax_9
                            
                            if (rax_8 != 0)
                                rax_9 = *(&data_143cf0bf8 + (rdx_2 u>> 0xe << 3))
                                    + (zx.q(rdx_2.d) & 0x3fff) * 0x18
                            else
                                rax_9 = nullptr
                            
                            *(rax_9 + 8) = rbx_2
                            arg5 = sub_1405a42f0(&data_143f02390, rdx_2.d)
                
                void* rbx_3 = *(arg1 + 0x178)
                int64_t rax_14 = sub_140a82f30(sx.q(rax_5), 0)
                void* rcx_8 = arg1 + 0x108
                
                if (rbx_3 != 0)
                    rcx_8 = rbx_3
                
                *(rcx_8 + (rsi_1 << 3)) = rax_14
                rsi_1 += 1
            while (rsi_1 s< rax_3)
            
            rbp = arg1

sub_1423b5270(rbp, arg2, arg3, arg4, arg5)
void*** var_78 = nullptr
void** const var_68 = &data_142da2668
void* var_60 = rbp
int128_t* (* var_88)(int64_t* arg1, void* arg2) = j_sub_1423a6a80
void*** var_b8 = nullptr
void** const var_a8 = &data_142da2668
int64_t (* var_c8)(int64_t* arg1, int64_t* arg2) = sub_1423ab540
void* var_a0 = rbp
*(rbp + 0x60) = 2
sub_140a3c510(rbp + 0x70, &var_c8)
*(rbp + 0xb0) = 2
int128_t* result = sub_140a3c510(rbp + 0xc0, &var_88)

if (var_c8 != 0)
    void** const* rcx_12 = &var_a8
    
    if (var_b8 != 0)
        rcx_12 = var_b8
    
    result = (*rcx_12)[2](rcx_12)

if (var_88 != 0)
    void** const* rcx_13 = &var_68
    
    if (var_78 != 0)
        rcx_13 = var_78
    
    result = (*rcx_13)[2](rcx_13)

__security_check_cookie(rax_1 ^ &var_f8)
return result
