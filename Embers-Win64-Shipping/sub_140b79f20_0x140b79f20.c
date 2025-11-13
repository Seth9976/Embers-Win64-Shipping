// 函数: sub_140b79f20
// 地址: 0x140b79f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t var_158[0x16]
sub_140b78360(&var_158)
void var_188
sub_140a96170(&var_188)

if (sub_140b7f4e0(&var_158, arg2, &var_188) != 0)
    int32_t var_f8_1 = 0
    int32_t var_f4
    uint64_t var_100
    
    if (var_f4 != 0)
        sub_140638c50(&var_100, 0)
    sub_140b8aa60(&var_158, arg2, &var_188)
    int16_t* var_198
    int64_t var_170
    sub_140b11a30(&var_198, sub_140b1aa20(&var_170))
    int64_t rcx_7 = var_170
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int16_t* var_1a8
    sub_140b11c80(&var_1a8, arg2)
    int16_t* const rcx_9 = &data_142d40450
    int16_t* rdx_4 = &data_142d40450
    int32_t var_1a0
    
    if (var_1a0 != 0)
        rdx_4 = var_1a8
    
    int32_t var_190
    
    if (var_190 != 0)
        rcx_9 = var_198
    
    if (sub_140a54510(rcx_9, rdx_4) == 0)
        sub_140599090(arg1 + 0x30)
    
    int16_t* rcx_11 = var_1a8
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int16_t* rcx_12 = var_198
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)

int64_t* var_180

if (var_180 != 0)
    var_180[1].d -= 1
    
    if (var_180[1].d == 1)
        (**var_180)(var_180)
        int32_t rdi_1 = *(var_180 + 0xc)
        *(var_180 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_180 + 8))(var_180, zx.q(rdi_1))

int64_t result = sub_140b78da0(&var_158)
__security_check_cookie(rax_1 ^ &var_1c8)
return result
