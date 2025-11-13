// 函数: sub_140920a00
// 地址: 0x140920a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t var_10 = rbx
int64_t var_68 = 0
int32_t var_60 = 0
int64_t var_78 = 0
int32_t var_70 = 0
int64_t var_58 = 0
int32_t var_50 = 0
sub_140af2b60()
sub_140b2acc0(&data_143dbb3f0, u"AUTH_LOGIN=", &var_68, 1)
sub_140af2b60()
sub_140b2acc0(&data_143dbb3f0, u"AUTH_PASSWORD=", &var_78, 1)
sub_140af2b60()
sub_140b2acc0(&data_143dbb3f0, u"AUTH_TYPE=", &var_58, 1)
int32_t rsi = var_60

if (rsi s>= 2)
    rbx = zx.q(var_70)

if (rsi s< 2 || rbx.d s<= 1 || var_50 s<= 1)
    rbx.b = 0
else
    int64_t r14_1 = var_58
    uint64_t var_48 = 0
    int32_t var_40_1 = var_50
    
    if (var_50 != 0)
        sub_1405a4c70(&var_48, var_50, 0)
        memcpy(var_48, r14_1, var_50 * 2)
        rsi = var_60
        rbx = zx.q(var_70)
    else
        int32_t var_3c_1 = 0
    
    int64_t rdi_2 = var_68
    uint64_t var_38 = 0
    int32_t var_30_1 = rsi
    
    if (rsi != 0)
        sub_1405a4c70(&var_38, rsi, 0)
        memcpy(var_38, rdi_2, rsi * 2)
        rbx = zx.q(var_70)
    else
        int32_t var_2c_1 = 0
    
    int64_t rdi_3 = var_78
    uint64_t var_28 = 0
    int32_t var_20_1 = rbx.d
    
    if (rbx.d != 0)
        sub_1405a4c70(&var_28, rbx.d, 0)
        memcpy(var_28, rdi_3, rbx.d * 2)
    else
        int32_t var_1c_1 = 0
    
    char rax_2 = (*(*arg1 + 0x68))(arg1, 0, &var_48)
    uint64_t rcx_7 = var_28
    rbx = zx.q(rax_2)
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    uint64_t rcx_8 = var_38
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    uint64_t rcx_9 = var_48
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

int64_t rcx_10 = var_58

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = var_78

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = var_68

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

return zx.q(rbx.b)
