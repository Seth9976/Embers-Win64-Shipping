// 函数: sub_140a9ca60
// 地址: 0x140a9ca60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* rdi = *arg1
void var_b8
sub_140b24bd0(&arg3[2], &var_b8, *(rdi + 0x12), nullptr)
char var_a0

if (var_a0 != 0)
    void* var_c8 = rdi
    void** var_90_1 = &var_c8
    int64_t (* var_98)(int64_t* arg1, int16_t* arg2) = sub_140aa39c0
    void* var_58
    sub_140b24d50(&arg3[2], &var_58, &var_98, &var_b8)
    char var_40
    
    if (var_40 != 0 && *(sub_140b24bd0(&arg3[2], &var_98, *(rdi + 0x14), &var_b8) + 0x18) != 0)
        void* rdx_3 = var_58
        var_c8 = rdx_3
        int64_t var_50
        int32_t r9_5 = ((var_50 - rdx_3) s>> 1).d
        int32_t var_c0_1 = r9_5
        int32_t var_bc_1 = 0xffffffff
        
        if (r9_5 s> 0)
            uint64_t rcx_3 = 0
            int32_t r10_1 = 0
            
            do
                int16_t r8_3 = *rdx_3
                
                if (r8_3 - 0x30 u> 9)
                    int32_t var_bc_3 = 0xffffffff
                    break
                
                r10_1 += 1
                rdx_3 += 2
                rcx_3 = zx.q(zx.d(r8_3) + (((rcx_3 * 5).d - 0x18) << 1))
                int32_t var_bc_2 = rcx_3.d
            while (r10_1 s< r9_5)
        
        sub_140ab2440()
        void** const var_88_1 = &data_142e66738
        var_98.o = data_143db9f38.o
        int128_t var_80_1 = var_c8.o
        sub_140b0e240(arg3, &var_b8, &var_98)
        sub_140b0bbf0(&var_98)

*(arg2 + 0x18) = 0
__security_check_cookie(rax_1 ^ &var_e8)
return arg2
