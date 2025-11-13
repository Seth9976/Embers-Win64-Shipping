// 函数: sub_142996010
// 地址: 0x142996010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t* result = arg1
int128_t* var_40 = arg1
int64_t* var_38 = arg2
sub_140592d30(arg1, arg2)
result[4].d = arg3
*(result + 0x24) = arg4
result[5].d = arg5
*(result + 0x2c) = arg6

if (arg6 != 0)
    int64_t* result_3 = result
    int64_t rcx = result[3]
    
    if (rcx u>= 0x10)
        result_3 = *result
    
    int64_t* result_1 = result
    
    if (rcx u>= 0x10)
        result_1 = *result
    
    void* rax_5 = result[2] + result_1
    int64_t* result_2 = result
    
    if (rcx u>= 0x10)
        result_2 = *result
    
    int64_t rdi_2 = rax_5 - result_2
    
    if (result_2 u> rax_5)
        rdi_2 = 0
    
    if (rdi_2 != 0)
        void* rbx_1 = nullptr
        
        do
            *(rbx_1 + result_3) = tolower(sx.d(*(rbx_1 + result_2)))
            rbx_1 += 1
        while (rbx_1 != rdi_2)

int64_t rdx = arg2[3]

if (rdx u>= 0x10)
    void* rcx_2 = *arg2
    
    if (rdx + 1 u>= 0x1000)
        void* r8 = *(rcx_2 - 8)
        
        if (rcx_2 - r8 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_2 = r8
    
    j_sub_140a74f90(rcx_2)

arg2[2] = 0
arg2[3] = 0xf
*arg2 = 0
__security_check_cookie(rax_1 ^ &var_68)
return result
