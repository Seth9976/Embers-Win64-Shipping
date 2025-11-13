// 函数: sub_14060c6c0
// 地址: 0x14060c6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
sub_141db5b80(arg1)
*arg1 = &data_142d64380
sub_1405872c0(&arg1[0x44])
arg1[0x52].d = 0x42f00000
*(arg1 + 0x294) = 0x1e0
arg1[0x53].d = 0x44700001
int16_t var_58 = 0x204
int16_t* rax_2 = j_sub_140a82f30(2)
int16_t* var_50 = rax_2
*rax_2 = var_58
void* var_48 = &rax_2[1]
sub_140588a40(&arg1[0x44], 1)
void* rax_4 = j_sub_140a82f30(0x30)
int64_t var_28 = 0x22
int64_t var_20 = 0x2f
__builtin_strncpy(rax_4, "Recorded using Embers by LyricWulf", 0x23)
void* var_38 = rax_4
sub_1405883f0(&arg1[0x44], 0, 0, &var_38)

if (var_20 u>= 0x10)
    void* rcx_5 = var_38
    void* rax_5 = rcx_5
    
    if (var_20 + 1 u>= 0x1000)
        rcx_5 = *(rcx_5 - 8)
        
        if (rax_5 - rcx_5 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_5)

sub_140588c70(&arg1[0x44], *(arg1 + 0x294))
sub_1405884f0(&arg1[0x44], 0, 0, _mm_cvtps_pd(arg1[0x52].d.q))
sub_140588190(&arg1[0x44], 0, 0, 0x58, &var_50)
int16_t* rcx_9 = var_50

if (rcx_9 != 0)
    int16_t* rax_8 = rcx_9
    
    if (&rax_2[1] - rcx_9 u>= 0x1000)
        rcx_9 = *(rcx_9 - 8)
        
        if (rax_8 - rcx_9 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_9)

__security_check_cookie(rax_1 ^ &var_88)
return arg1
