// 函数: sub_1405921a0
// 地址: 0x1405921a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
void* var_48 = arg1
int128_t* var_18 = arg2

if (*(arg1 + 0x58) u<= *(arg1 + 0x68) + 1)
    sub_1405941b0(arg1 + 0x48)

int64_t rdx = *(arg1 + 0x58)
int64_t rcx_2 = (rdx - 1) & *(arg1 + 0x60)
*(arg1 + 0x60) = rcx_2
int64_t* rax_6 = *(arg1 + 0x50)

if (rax_6[(rdx - 1) & (rcx_2 + *(arg1 + 0x68))] == 0)
    *((((rdx - 1) & (rcx_2 + *(arg1 + 0x68))) << 3) + *(arg1 + 0x50)) = j_sub_140a82f30(0x20)
    rax_6 = *(arg1 + 0x50)

int128_t* result = rax_6[(rdx - 1) & (rcx_2 + *(arg1 + 0x68))]
result[1].q = 0
*(result + 0x18) = 0
*result = *arg2
result[1] = arg2[1]
arg2[1].q = 0
*(arg2 + 0x18) = 7
*arg2 = 0
*(arg1 + 0x68) += 1
int64_t rdx_1 = *(arg2 + 0x18)

if (rdx_1 u>= 8)
    void* rcx_5 = *arg2
    
    if ((rdx_1 << 1) + 2 u>= 0x1000)
        void* r8_1 = *(rcx_5 - 8)
        
        if (rcx_5 - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_5 = r8_1
    
    result = j_sub_140a74f90(rcx_5)

arg2[1].q = 0
*(arg2 + 0x18) = 7
*arg2 = 0
__security_check_cookie(rax_1 ^ &var_68)
return result
