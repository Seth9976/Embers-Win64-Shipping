// 函数: sub_1419c7610
// 地址: 0x1419c7610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* r13 = *(arg2 + 0xf8)
int16_t* const r14 = &data_142d40450
void* var_d8 = arg2
int32_t var_60 = arg3
void* var_d0 = arg1
void* var_c8 = arg4
int64_t var_c0 = 0
int32_t var_b8 = 0
int32_t var_94 = 0x80
int64_t var_b0
__builtin_memset(&var_b0, 0, 0x1c)
int32_t var_90 = 0xffffffff
int32_t var_8c = 0
int64_t var_80 = 0
int32_t var_78 = 0
int64_t var_70 = 0
int64_t var_68 = 0
char var_5c = 0
sub_1419c6b10(&var_d8, arg5, &data_142d40450, 0)
*(arg1 + 0x90) = *(arg5 + 0x94)
int16_t* var_108 = nullptr
*(arg1 + 0x94) = 0xffff
int32_t var_100 = 0
sub_1419be9a0(arg4, &var_108)
int64_t rdi_1 = sx.q(var_100)
int16_t* r15 = var_108

if (arg6 != 0 && var_b8 - var_8c != rdi_1.d)
    sub_140a2e390(&var_108, 
        Shader %s has unbound parameters not represented in the parameter struct:", *(r13 + 0x18))
    int16_t* rbx_1 = r15
    void* rsi_3 = &r15[rdi_1 * 8]
    
    if (r15 != rsi_3)
        do
            void var_f8
            
            if (*sub_14062d6e0(&var_c0, &var_f8, rbx_1) == 0xffffffff)
                int16_t* const r8_2
                
                if (*(rbx_1 + 8) == 0)
                    r8_2 = &data_142d40450
                else
                    r8_2 = *rbx_1
                
                int64_t var_f0
                sub_140a2e390(&var_f0, u"\n  %s", r8_2)
                int32_t var_e8
                int32_t r8_4
                
                if (var_e8 == 0)
                    r8_4 = 0
                else
                    r8_4 = var_e8 - 1
                
                sub_140a20ba0(&var_108, var_f0, r8_4)
                int64_t rcx_6 = var_f0
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
            
            rbx_1 = &rbx_1[8]
        while (rbx_1 != rsi_3)
    
    if (var_100 != 0)
        r14 = var_108
    
    sub_140af98a0("Unknown", 0x126, u"%s", r14)
    sub_140afbb40()
    int16_t* rcx_7 = var_108
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

int16_t* rbx_2 = r15

if (rdi_1.d != 0)
    int32_t i
    
    do
        int64_t rcx_8 = *rbx_2
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        rbx_2 = &rbx_2[8]
        i = rdi_1.d
        rdi_1 = zx.q(rdi_1.d - 1)
    while (i != 1)

if (r15 != 0)
    sub_140a74f90(r15)

if (var_70 != 0)
    sub_140a74f90(var_70)

int32_t var_78_1 = 0

if (var_80 != 0)
    sub_140a74f90(var_80)

int64_t result = sub_1405e1b50(&var_c0, 0)
int64_t var_a0

if (var_a0 != 0)
    result = sub_140a74f90(var_a0)

int64_t rcx_14 = var_c0

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

__security_check_cookie(rax_1 ^ &var_128)
return result
