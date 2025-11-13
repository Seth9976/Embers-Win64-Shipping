// 函数: sub_140a47220
// 地址: 0x140a47220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t var_158
sub_140b69590(&var_158)
int16_t* var_178 = nullptr
int32_t i = 0
int32_t var_170 = 0

for (; i s>= 0; i += 1)
    int32_t var_150
    
    if (i s>= var_150)
        break
    
    int64_t var_168
    sub_140a2e390(&var_168, u"%02x", zx.q(*(sx.q(i) + var_158)))
    int32_t var_160
    int32_t r8_3
    
    if (var_160 == 0)
        r8_3 = 0
    else
        r8_3 = var_160 - 1
    
    sub_140a20ba0(&var_178, var_168, r8_3)
    int64_t rcx_4 = var_168
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

int64_t rcx_5 = var_158

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int16_t* const rdx_2 = &data_142d40450
int64_t rdi = -1

if (var_170 != 0)
    rdx_2 = var_178

do
    rdi += 1
while (rdx_2[rdi] != 0)

void var_d8
sub_1408f2b40(&var_d8, rdx_2)
void var_138
sub_140b2edf0(&var_138)
void* var_50
sub_140b4aca0(&var_138, var_50, sx.q(rdi.d))
char var_38[0x10]
sub_140b38ef0(&var_138, &var_38)
*arg1 = 0
int64_t i_1 = 0
arg1[1] = 0

do
    int64_t var_148
    sub_140a2e390(&var_148, u"%02x", zx.q(var_38[i_1]))
    int32_t var_140
    int32_t r8_7
    
    if (var_140 == 0)
        r8_7 = 0
    else
        r8_7 = var_140 - 1
    
    sub_140a20ba0(arg1, var_148, r8_7)
    int64_t rcx_12 = var_148
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    i_1 += 1
while (i_1 s< 0x10)

int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int16_t* rcx_14 = var_178

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

__security_check_cookie(rax_1 ^ &var_198)
return arg1
