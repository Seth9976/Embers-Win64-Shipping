// 函数: sub_140d30800
// 地址: 0x140d30800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_888
int64_t rax_1 = __security_cookie ^ &var_888

if (arg1[2].d s> 1)
    int32_t rbp_1 = 0
    void* r14_1 = nullptr
    
    if (sub_140b5f8e0(*arg1) != 0)
        void* var_858_1
        void var_848
        var_858_1.o = (&var_848).o
        rbp_1 = sub_140b63d10(arg1, &var_848)
        r14_1 = var_858_1
    
    int32_t rax_4 = arg1[2].d
    int64_t var_868 = 0
    int64_t var_860_1 = 0
    int32_t rax_6
    
    if (rax_4 == 0)
        rax_6 = rbp_1
    else
        rax_6 = rax_4 - 1 + rbp_1
    
    if (rax_6 + 2 s> 0)
        sub_1405947f0(&var_868, rax_6 + 2)
    
    sub_140a20ba0(&var_868, r14_1, rbp_1)
    int32_t rdx_3 = var_860_1.d
    int32_t rbp_2 = rdx_3 - 1
    
    if (rdx_3 s<= 0)
        rbp_2 = 0
    
    int32_t rax_7
    rax_7.b = rdx_3 s<= 0
    int32_t rax_9 = rax_7 + 1 + rdx_3
    var_860_1.d = rax_9
    
    if (rax_9 s> 0)
        sub_140594770(&var_868)
    
    int64_t rcx_5 = sx.q(rbp_2)
    *(var_868 + (rcx_5 << 1)) = 0x3a
    *(var_868 + (rcx_5 << 1) + 2) = 0
    int32_t rax_12 = arg1[2].d
    int32_t r8_3 = rax_12 - 1
    
    if (rax_12 == 0)
        r8_3 = 0
    
    sub_140a20ba0(&var_868, arg1[1], r8_3)
    *arg2 = var_868
    arg2[1].d = var_860_1.d
    *(arg2 + 0xc) = var_860_1:4.d
else if (*arg1 != 0)
    sub_140b63b70(arg1, arg2)
else
    *arg2 = 0
    arg2[1] = 0

__security_check_cookie(rax_1 ^ &var_888)
return arg2
