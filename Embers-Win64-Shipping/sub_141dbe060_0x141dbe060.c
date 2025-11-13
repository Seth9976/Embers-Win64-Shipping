// 函数: sub_141dbe060
// 地址: 0x141dbe060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
uint64_t rbx = arg3
sub_140b33630("InstanceActorComponent")
void* result = nullptr

if (arg2 != 0)
    void var_c8
    
    if ((arg3:4.d == 0 & sub_140b5b8a0(rbx.d, 0)) == 0)
        sub_141dbc050(arg1, rbx)
    else
        rbx = *sub_141dc3420(&var_c8, arg1, (*(arg2 + 0x18)).d)
    void var_b8
    sub_140d15830(&var_b8, arg2, arg1)
    uint64_t var_a8_1 = rbx
    int32_t var_a0_1 = 0xfb7ffd6
    int32_t var_90_1 = 0x40000000
    void* result_1 = sub_140d2e350(&var_b8)
    result = result_1
    sub_141dd11e0(arg1, result_1)
    int32_t var_38_1 = 0
    int64_t var_40
    
    if (var_40 != 0)
        sub_140a74f90(var_40)
    
    int32_t var_78_1 = 0
    int64_t var_80
    int32_t var_74
    
    if (var_74 != 0)
        sub_1405a5130(&var_80, 0)
    
    int32_t var_50_1 = 0xffffffff
    int32_t var_4c_1 = 0
    void var_70
    sub_14059a8e0(&var_70, 0)
    int64_t var_60
    
    if (var_60 != 0)
        sub_140a74f90(var_60)
    
    int64_t rcx_11 = var_80
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

sub_140b37f60("InstanceActorComponent")
__security_check_cookie(rax_1 ^ &var_e8)
return result
