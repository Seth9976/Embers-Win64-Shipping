// 函数: sub_14230cea0
// 地址: 0x14230cea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t* result = __security_cookie ^ &var_138
int64_t* result_1 = result

if (arg1[0x2b] != 0 && (arg1[0x2f].b & 0x10) != 0 && (*(arg1 + 0x36) & 4) == 0)
    result = (*(*arg1 + 0xf0))()
    int32_t rbp_1 = 0
    char var_118_1 = result.b
    int32_t rsi_1 = *(arg1[0x2c] + 8)
    int32_t var_114_1 = rsi_1
    
    if (rsi_1 s> 0)
        int64_t r12_1 = 0
        int64_t* rbx_1 = nullptr
        int64_t* var_110_1 = nullptr
        int128_t zmm6
        int128_t var_48_1 = zmm6
        
        do
            result = arg1[0x2c]
            void* r13_1 = *(rbx_1 + *result)
            
            if (arg1[0x32].d s> 0)
                int128_t zmm0_1
                zmm0_1, result = sub_142337b50(arg1[0x2b], rbp_1)
                int64_t rcx_3 = arg1[0x31]
                int64_t var_100_1 = rcx_3
                int32_t rdi_1 = 0
                
                while (true)
                    if (rdi_1 s>= *(r13_1 + 8) || rdi_1 s< 0 || rdi_1 s>= *(r12_1 + rcx_3 + 8))
                        result.b = 0
                    else
                        result.b = 1
                    
                    if (result.b == 0)
                        break
                    
                    int64_t rsi_2 = sx.q(rdi_1)
                    int64_t* rsi_4 = (rsi_2 << 4) + *(r12_1 + rcx_3)
                    int64_t* rcx_4 = arg1[0x2b]
                    void* r15_2 = rsi_2 * 0xe8 + *r13_1
                    int64_t rax_3 = (*(*rcx_4 + 0x30))(rcx_4, 0, zx.q(rbp_1), zx.q(rdi_1), 
                        var_118_1, var_110_1, arg2, var_100_1)
                    
                    if (sub_14233de20(arg1[0x2b], rbp_1, *(rsi_4 + 0xc)).b == 0 && rax_3 != 0)
                        void var_f8
                        sub_14081a190(&var_f8)
                        void* rbx_3 = &var_f8
                        void* var_90
                        
                        if (var_90 != 0)
                            rbx_3 = var_90
                        
                        int32_t var_5c
                        int32_t rax_6 = var_5c ^ ((zx.d(var_118_1) << 0xd ^ var_5c) & 0xe000)
                        int64_t* rcx_11 = arg1[0x2b]
                        int64_t var_80_1 = (*(*rcx_11 + 0x30))(rcx_11, 0, zx.q(rbp_1), zx.q(rdi_1))
                        int64_t* rcx_12 = *rsi_4
                        int512_t zmm2
                        zmm2.o = zmm0_1
                        int64_t var_78_1 = (*(*rcx_12 + 0x280))(rcx_12)
                        int32_t rcx_14 = rax_6 ^ ((zx.d(*(arg1 + 0x35)) ^ rax_6) & 1)
                        int32_t var_5c_2 = rcx_14
                        char var_5e_1 = rbp_1.b
                        int32_t rdx_6 = ((zx.d(rsi_4[1].b) << 2 ^ rcx_14) & 4) ^ rcx_14
                        var_5c = (rdx_6 & 4) << 0x18 | (rdx_6 & 0xfbffe07f)
                        *(rbx_3 + 0x40) = *(r15_2 + 4)
                        *(rbx_3 + 0x50) = *(r15_2 + 0x10)
                        *(rbx_3 + 0x54) = *(r13_1 + 0xec) - 1
                        *(rbx_3 + 0x44) = *(r15_2 + 8)
                        *(rbx_3 + 0x10) = *(r13_1 + 0x18)
                        (*(*arg2 + 0x18))(arg2, &var_f8, zmm2)
                        
                        if (var_90 != 0)
                            sub_140a74f90(var_90)
                    
                    rcx_3 = var_100_1
                    rdi_1 += 1
                
                rbx_1 = var_110_1
                rsi_1 = var_114_1
            
            rbx_1 = &rbx_1[1]
            rbp_1 += 1
            r12_1 += 0x10
            var_110_1 = rbx_1
        while (rbp_1 s< rsi_1)

__security_check_cookie(result_1 ^ &var_138)
return result
