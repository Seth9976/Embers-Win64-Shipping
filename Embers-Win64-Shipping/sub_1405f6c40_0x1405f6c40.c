// 函数: sub_1405f6c40
// 地址: 0x1405f6c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
uint32_t rdi = arg2
int64_t var_40 = 0
int64_t var_38 = 0
int64_t i_1 = 4
int64_t i

do
    uint32_t _C = zx.d(rdi.b)
    uint64_t _C_1 = zx.q(_C)
    
    if (isprint(_C) == 0)
        int64_t var_20
        sub_140a2e390(&var_20, u"[%d]", _C_1)
        int32_t var_18
        int32_t r8_4
        
        if (var_18 == 0)
            r8_4 = 0
        else
            r8_4 = var_18 - 1
        
        sub_140a20ba0(&var_40, var_20, r8_4)
        int64_t rcx_6 = var_20
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
    else
        int64_t var_30
        sub_140a2e390(&var_30, u"%c", _C_1)
        int32_t var_28
        int32_t r8_2
        
        if (var_28 == 0)
            r8_2 = 0
        else
            r8_2 = var_28 - 1
        
        sub_140a20ba0(&var_40, var_30, r8_2)
        int64_t rcx_3 = var_30
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
    
    rdi u>>= 8
    i = i_1
    i_1 -= 1
while (i != 1)
sub_140a31010(&var_40, arg1)
int64_t rcx_8 = var_40

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg1
