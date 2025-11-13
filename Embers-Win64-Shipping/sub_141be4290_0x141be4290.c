// 函数: sub_141be4290
// 地址: 0x141be4290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t var_58 = 0
int64_t var_40
int64_t var_20
int32_t* rdx
int32_t rbx_1

if (sub_140f46600(arg2)[1].b == 0)
    char var_4c_1 = 0
    int32_t var_50
    
    if (*(arg1 + 0x54c) != 0)
        var_50 = *(arg1 + 0x548)
        char var_4c_2 = 1
    
    char var_48_1 = *(arg1 + 0x550)
    var_40 = 0
    int32_t var_38_1 = 0
    sub_1407473e0(&var_40, arg1 + 0x558)
    rdx = &var_50
    rbx_1 = 2
else
    int32_t* rax_3 = sub_140f46600(arg2)
    char var_2c_1 = 0
    int32_t var_30
    
    if (rax_3[1].b != 0)
        var_30 = *rax_3
        char var_2c_2 = 1
    
    char var_28_1 = 1
    rdx = &var_30
    var_20 = 0
    rbx_1 = 1
    int32_t var_18_1 = 0

int64_t* rcx_3 = *(arg1 + 0x408)
uint64_t result = (*(*rcx_3 + 0x18))(rcx_3, rdx)

if ((rbx_1.b & 2) != 0)
    rbx_1 &= 0xfffffffd
    result = sub_140745b20(&var_40)
    char var_4c_3 = 0

if ((rbx_1.b & 1) != 0)
    result = sub_140745b20(&var_20)

__security_check_cookie(rax_1 ^ &var_78)
return result
