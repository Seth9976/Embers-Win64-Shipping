// 函数: sub_140b030b0
// 地址: 0x140b030b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t var_5c = 0x80
bool cond:0 = arg4[1].d s<= 1
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int64_t* var_b8 = nullptr
int32_t i_2 = 0

if (not(cond:0))
    int32_t var_a0
    sub_1405d1820(&var_88, &var_a0)
    int64_t* var_98
    *var_98 = 0
    var_98[1] = 0
    sub_140596d10(&var_98[2], arg4)
    var_98[4].d = 0xffffffff
    int32_t rax_2 = var_98[1].d
    int16_t* rdx_2
    
    if (rax_2 == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *var_98
    
    int32_t rcx_2 = rax_2 - 1
    
    if (rax_2 == 0)
        rcx_2 = 0
    
    void var_a8
    sub_1405d2a60(&var_88, &var_a8, sub_1405969c0(rcx_2, rdx_2), var_98, var_a0, nullptr)

char rax_4 = sub_140b03240(arg1, arg2, arg3, &var_88, &var_b8)
int32_t i_1 = i_2
int64_t* rsi_1 = var_b8
int64_t* rbx_2 = rsi_1

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_5 = *rbx_2
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rbx_2 = &rbx_2[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

sub_140681eb0(&var_88)
__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(rax_4)
