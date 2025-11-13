// 函数: sub_142c9a130
// 地址: 0x142c9a130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t var_48 = 0
int128_t zmm0 = data_143702ea0
char var_30 = 0
int32_t var_48_1 = 2
char rdx = (*(arg2 + 0x88)).b
int64_t rcx

if ((rdx & 2) == 0)
    rcx = **(arg2 + 0x58)

int64_t rdx_1

if ((rdx & 2) == 0 && rcx != 0)
    rdx_1 = **(arg2 + 0x38)
    int64_t var_40 = rcx
    int64_t* r8_1 = &var_40
    
    if (rcx u< *(arg2 + 0x80))
        r8_1 = arg2 + 0x80
    
    sub_14058ad40(&var_30, rdx_1, *r8_1 - rdx_1)
else if ((rdx & 4) == 0)
    int64_t rcx_1 = **(arg2 + 0x50)
    
    if (rcx_1 != 0)
        rdx_1 = **(arg2 + 0x30)
        sub_14058ad40(&var_30, rdx_1, sx.q(**(arg2 + 0x68)) - rdx_1 + rcx_1)

if (arg1 + 0x18 == &var_30)
    int64_t rdx_2 = zmm0:8.q
    
    if (rdx_2 u>= 0x10)
        void* rcx_4 = var_30.q
        void* rax_8 = rcx_4
        
        if (rdx_2 + 1 u>= 0x1000)
            rcx_4 = *(rcx_4 - 8)
            
            if (rax_8 - rcx_4 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_4)
else
    sub_140909b70(arg1 + 0x18)
    *(arg1 + 0x18) = var_30.o
    *(arg1 + 0x28) = zmm0

__security_check_cookie(rax_1 ^ &var_68)
return arg1
