// 函数: sub_142944a70
// 地址: 0x142944a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x910)
void var_938
int64_t rax_1 = __security_cookie ^ &var_938
char var_238[0xfc]
sub_1429487c0(&var_238, arg2)
char var_138[0xfc]
sub_1429487c0(&var_138, arg4)
void var_738
sub_142945da0(&var_738, arg3)
void var_878
memmove(&var_878, arg3, 0x28)
void var_850
memmove(&var_850, &arg3[0xa], 0x28)
void var_828
memmove(&var_828, &arg3[0x14], 0x28)
void var_918
sub_142945b10(&var_918, &var_878)
void var_8a0
void var_7d8
sub_142942bd0(&var_7d8, &var_918, &var_8a0)
void var_8f0
void var_8c8
void var_7b0
sub_142942bd0(&var_7b0, &var_8f0, &var_8c8)
void var_788
sub_142942bd0(&var_788, &var_8c8, &var_8a0)
void var_760
sub_142942bd0(&var_760, &var_918, &var_8f0)
sub_142944770(&var_918, &var_7d8, &var_738)
sub_142942bd0(&var_878, &var_918, &var_8a0)
sub_142942bd0(&var_850, &var_8f0, &var_8c8)
sub_142942bd0(&var_828, &var_8c8, &var_8a0)
void var_800
sub_142942bd0(&var_800, &var_918, &var_8f0)
void var_698
sub_142945da0(&var_698, &var_878)
sub_142944770(&var_918, &var_7d8, &var_698)
sub_142942bd0(&var_878, &var_918, &var_8a0)
sub_142942bd0(&var_850, &var_8f0, &var_8c8)
sub_142942bd0(&var_828, &var_8c8, &var_8a0)
sub_142942bd0(&var_800, &var_918, &var_8f0)
void var_5f8
sub_142945da0(&var_5f8, &var_878)
sub_142944770(&var_918, &var_7d8, &var_5f8)
sub_142942bd0(&var_878, &var_918, &var_8a0)
sub_142942bd0(&var_850, &var_8f0, &var_8c8)
sub_142942bd0(&var_828, &var_8c8, &var_8a0)
sub_142942bd0(&var_800, &var_918, &var_8f0)
void var_558
sub_142945da0(&var_558, &var_878)
sub_142944770(&var_918, &var_7d8, &var_558)
sub_142942bd0(&var_878, &var_918, &var_8a0)
sub_142942bd0(&var_850, &var_8f0, &var_8c8)
sub_142942bd0(&var_828, &var_8c8, &var_8a0)
sub_142942bd0(&var_800, &var_918, &var_8f0)
void var_4b8
sub_142945da0(&var_4b8, &var_878)
sub_142944770(&var_918, &var_7d8, &var_4b8)
sub_142942bd0(&var_878, &var_918, &var_8a0)
sub_142942bd0(&var_850, &var_8f0, &var_8c8)
sub_142942bd0(&var_828, &var_8c8, &var_8a0)
sub_142942bd0(&var_800, &var_918, &var_8f0)
void var_418
sub_142945da0(&var_418, &var_878)
sub_142944770(&var_918, &var_7d8, &var_418)
sub_142942bd0(&var_878, &var_918, &var_8a0)
sub_142942bd0(&var_850, &var_8f0, &var_8c8)
sub_142942bd0(&var_828, &var_8c8, &var_8a0)
sub_142942bd0(&var_800, &var_918, &var_8f0)
void var_378
sub_142945da0(&var_378, &var_878)
sub_142944770(&var_918, &var_7d8, &var_378)
sub_142942bd0(&var_878, &var_918, &var_8a0)
sub_142942bd0(&var_850, &var_8f0, &var_8c8)
sub_142942bd0(&var_828, &var_8c8, &var_8a0)
sub_142942bd0(&var_800, &var_918, &var_8f0)
void var_2d8
sub_142945da0(&var_2d8, &var_878)
int64_t result = 0
int32_t rdx_52 = 0xff
__builtin_memset(arg1, 0, 0x50)
arg1[0xa] = 1
__builtin_memset(&arg1[0x14], 0, 0x28)
arg1[0x14] = 1
void var_139

while (*(&var_139 + result) == 0)
    void var_39
    
    if (*(&var_39 + result) != 0)
        break
    
    void var_13a
    void var_3a
    
    if (*(&var_13a + result) != 0 || *(&var_3a + result) != 0)
        rdx_52 -= 1
        break
    
    void var_13b
    void var_3b
    
    if (*(&var_13b + result) != 0 || *(&var_3b + result) != 0)
        rdx_52 -= 2
        break
    
    void var_13c
    void var_3c
    
    if (*(&var_13c + result) != 0 || *(&var_3c + result) != 0)
        rdx_52 -= 3
        break
    
    result -= 4
    rdx_52 -= 4
    
    if (result + 0xff s< 0)
        break
    
    continue

int64_t rdi_1 = sx.q(rdx_52)

if (rdx_52 s>= 0)
    int64_t temp8_1
    
    do
        sub_142945b10(&var_918, arg1)
        char rbx_1 = var_238[rdi_1]
        
        if (rbx_1 s> 0)
            sub_142942bd0(&var_878, &var_918, &var_8a0)
            sub_142942bd0(&var_850, &var_8f0, &var_8c8)
            sub_142942bd0(&var_828, &var_8c8, &var_8a0)
            sub_142942bd0(&var_800, &var_918, &var_8f0)
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(rbx_1)
            sub_142944770(&var_918, &var_878, &var_738 + sx.q((temp2_1 - temp1_1) s>> 1) * 0xa0)
        else if (rbx_1 s< 0)
            sub_142942bd0(&var_878, &var_918, &var_8a0)
            sub_142942bd0(&var_850, &var_8f0, &var_8c8)
            sub_142942bd0(&var_828, &var_8c8, &var_8a0)
            sub_142942bd0(&var_800, &var_918, &var_8f0)
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(rbx_1)
            sub_1429467e0(&var_918, &var_878, 
                &var_738 + sx.q(neg.d((temp5_1 - temp4_1) s>> 1)) * 0xa0)
        
        char rbx_2 = var_138[rdi_1]
        
        if (rbx_2 s> 0)
            sub_142942bd0(&var_878, &var_918, &var_8a0)
            sub_142942bd0(&var_850, &var_8f0, &var_8c8)
            sub_142942bd0(&var_828, &var_8c8, &var_8a0)
            sub_142942bd0(&var_800, &var_918, &var_8f0)
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(rbx_2)
            sub_142945520(&var_918, &var_878, 
                sx.q((temp7_1 - temp6_1) s>> 1) * 0x78 + &data_1435459c0)
        else if (rbx_2 s< 0)
            sub_142942bd0(&var_878, &var_918, &var_8a0)
            sub_142942bd0(&var_850, &var_8f0, &var_8c8)
            sub_142942bd0(&var_828, &var_8c8, &var_8a0)
            sub_142942bd0(&var_800, &var_918, &var_8f0)
            int32_t temp9_1
            int32_t temp10_1
            temp9_1:temp10_1 = sx.q(rbx_2)
            sub_142945830(&var_918, &var_878, 
                sx.q(neg.d((temp10_1 - temp9_1) s>> 1)) * 0x78 + &data_1435459c0)
        
        sub_142942bd0(arg1, &var_918, &var_8a0)
        sub_142942bd0(&arg1[0xa], &var_8f0, &var_8c8)
        result = sub_142942bd0(&arg1[0x14], &var_8c8, &var_8a0)
        temp8_1 = rdi_1
        rdi_1 -= 1
    while (temp8_1 - 1 s>= 0)

__security_check_cookie(rax_1 ^ &var_938)
return result
