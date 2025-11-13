// 函数: sub_140b8ca50
// 地址: 0x140b8ca50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int32_t var_168[0x16]
sub_140b78360(&var_168)
void var_198
sub_140a96170(&var_198)

if (sub_140b7f4e0(&var_168, arg2, &var_198) != 0)
    int64_t* var_110
    
    if (arg4 == 0)
        sub_1409d7d20(&var_110, arg3)
    else
        int64_t* r8_1 = var_110
        int32_t var_108
        int64_t rbx_1 = sx.q(var_108)
        int64_t* rcx_3 = r8_1
        void* rdx_1 = &r8_1[rbx_1]
        
        if (r8_1 != rdx_1)
            while (*rcx_3 != *arg3)
                rcx_3 = &rcx_3[1]
                
                if (rcx_3 == rdx_1)
                    goto label_140b8caf0
        
        if (r8_1 == rdx_1 || ((rcx_3 - r8_1) s>> 3).d == 0xffffffff)
        label_140b8caf0:
            int32_t rax_4 = (rbx_1 + 1).d
            int32_t var_108_1 = rax_4
            int32_t var_104
            
            if (rax_4 s> var_104)
                sub_1405a4d70(&var_110)
                r8_1 = var_110
            
            r8_1[rbx_1] = *arg3
    sub_140b8aa60(&var_168, arg2, &var_198)
    int16_t* var_1a8
    int64_t var_180
    sub_140b11a30(&var_1a8, sub_140b1aa20(&var_180))
    int64_t rcx_11 = var_180
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int16_t* var_1b8
    sub_140b11c80(&var_1b8, arg2)
    int16_t* const rcx_13 = &data_142d40450
    int16_t* rdx_7 = &data_142d40450
    int32_t var_1b0
    
    if (var_1b0 != 0)
        rdx_7 = var_1b8
    
    int32_t var_1a0
    
    if (var_1a0 != 0)
        rcx_13 = var_1a8
    
    if (sub_140a54510(rcx_13, rdx_7) == 0)
        sub_140599090(arg1 + 0x30)
    
    int16_t* rcx_15 = var_1b8
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    int16_t* rcx_16 = var_1a8
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)

int64_t* var_190

if (var_190 != 0)
    var_190[1].d -= 1
    
    if (var_190[1].d == 1)
        (**var_190)(var_190)
        int32_t rdi_1 = *(var_190 + 0xc)
        *(var_190 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_190 + 8))(var_190, zx.q(rdi_1))

int64_t result = sub_140b78da0(&var_168)
__security_check_cookie(rax_1 ^ &var_1d8)
return result
