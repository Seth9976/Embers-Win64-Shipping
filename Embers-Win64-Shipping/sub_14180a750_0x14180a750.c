// 函数: sub_14180a750
// 地址: 0x14180a750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

void var_e8
sub_140685ed0(&var_e8, rdx)
int32_t var_58
int64_t r12 = sx.q(var_58)
*arg1 = 0
arg1[1] = 0
int32_t var_118 = 0

if (r12 s> 0)
    char* r14_1 = nullptr
    
    do
        int64_t var_60
        char rbx_1 = r14_1[var_60]
        
        if (sub_141805310(rbx_1) != 0)
            int32_t rdx_1 = 0
            var_118.w = zx.w(rbx_1)
            int32_t rcx_2 = 0
            int32_t var_108_1 = 0
            int64_t rdi_1 = 0
            int32_t var_104_1 = 0
            int64_t var_110 = 0
            int32_t rsi_1
            
            if (rbx_1 != 0)
                int64_t rbx_2 = -1
                
                do
                    rbx_2 += 1
                while (*(&var_118 + (rbx_2 << 1)) != 0)
                
                if (rbx_2.d + 1 s> 0)
                    sub_1405947f0(&var_110, rbx_2.d + 1)
                    rcx_2 = var_104_1
                    rdx_1 = var_108_1
                    rdi_1 = var_110
                
                rsi_1 = rbx_2.d + 1 + rdx_1
                
                if (rsi_1 s> rcx_2)
                    sub_140594770(&var_110)
                    rdi_1 = var_110
                
                UnDecorator::getReferenceType(rdi_1, &var_118, (rbx_2.d + 1) * 2)
            
            int32_t r8_3
            
            if (rbx_1 == 0 || rsi_1 == 0)
                r8_3 = 0
            else
                r8_3 = rsi_1 - 1
            
            sub_140a20ba0(arg1, rdi_1, r8_3)
            
            if (rdi_1 != 0)
                sub_140a74f90(rdi_1)
        else if (rbx_1 != 0)
            sub_140a20ba0(arg1, &data_142e6c320, 1)
            int64_t var_100
            sub_140a2e390(&var_100, u"%.2X", zx.q(rbx_1))
            int32_t var_f8
            int32_t r8_6
            
            if (var_f8 == 0)
                r8_6 = 0
            else
                r8_6 = var_f8 - 1
            
            sub_140a20ba0(arg1, var_100, r8_6)
            int64_t rcx_7 = var_100
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
        
        r14_1 = &r14_1[1]
    while (r14_1 s< r12)

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

__security_check_cookie(rax_1 ^ &var_138)
return arg1
