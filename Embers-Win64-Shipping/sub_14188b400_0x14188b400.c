// 函数: sub_14188b400
// 地址: 0x14188b400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
void** const var_218
memset(&var_218, 0, 0x90)
sub_140b4c2a0(&var_218)
void* var_180 = arg1
var_218 = &data_142d6b230
int64_t var_178 = 0x7fffffffffffffff
int64_t var_188 = 0
sub_140b55290(&var_218, 1)
var_218[0x1b](&var_218, 0)
void var_168
sub_141820bd0(&var_168)
sub_141825e10(&var_218, &var_168, arg3)
char var_1ef
char* rbx

if ((var_1ef & 1) != 0)
    rbx.b = 0
else
    int32_t var_164
    int64_t rcx_6 = sx.q(var_164)
    int32_t rax_3 = *(arg1 + 8)
    
    if (rax_3 s<= rcx_6.d)
        rbx.b = 0
    else
        int64_t var_140
        __builtin_memset(&var_140, 0, 0x14)
        int512_t zmm1 = sub_140b3f690(rcx_6 + *arg1, zx.q(rax_3 - rcx_6.d), &var_140)
        int64_t var_154
        int64_t var_14c
        int32_t var_144
        int64_t var_138
        int32_t var_130
        
        if (var_140 != var_154 || var_138 != var_14c || var_130 != var_144)
            rbx.b = 0
        else
            int64_t rdx_3 = sx.q(var_164)
            int128_t* rdi_1 = nullptr
            int128_t* var_238 = nullptr
            int64_t var_230_1 = 0
            char var_158
            int32_t r14_1
            
            if ((var_158 & 1) != 0)
                r14_1 = *(arg1 + 8)
            
            int32_t var_160
            int32_t var_15c
            
            if ((var_158 & 1) == 0 || var_160 + rdx_3.d != r14_1)
                rbx = sx.q(var_15c)
                
                if ((&rbx[rdx_3]).d == *(arg1 + 8))
                    var_230_1.d = rbx.d
                    int64_t r14_4 = rdx_3 + *arg1
                    
                    if (rbx.d s> 0)
                        sub_1405daba0(&var_238)
                        rdi_1 = var_238
                    
                    memcpy(rdi_1, r14_4, rbx.d)
                    goto label_14188b618
                
                rbx.b = 0
            else
                var_230_1.d = var_15c
                
                if (var_15c s> 0)
                    sub_1405daba0(&var_238)
                    rdx_3 = zx.q(var_164)
                    r14_1 = *(arg1 + 8)
                    rdi_1 = var_238
                
                int32_t var_248_1 = 0
                int32_t var_224_1 = 0
                void var_220
                char rax_10
                rax_10, zmm1 = sub_140b02330((*sub_140b5e500(&var_220, 0x101)).q, rdi_1, var_15c, 
                    sx.q(rdx_3.d) + *arg1, r14_1 - var_164, 0x10)
                
                if (rax_10 != 0)
                label_14188b618:
                    void var_128
                    sub_141864940(&var_128, &var_238, zmm1)
                    rbx = zx.q(sub_14188b680(&var_128, arg2))
                    void var_88
                    sub_1405ae200(&var_88)
                    sub_140b4cb40(&var_128)
                    rdi_1 = var_238
                else
                    rdi_1 = var_238
                    rbx.b = 0
            
            if (rdi_1 != 0)
                sub_140a74f90(rdi_1)

sub_140b4cb40(&var_218)
__security_check_cookie(rax_1 ^ &var_278)
return zx.q(rbx.b)
