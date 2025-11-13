// 函数: sub_14226bee0
// 地址: 0x14226bee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
*arg1 = data_143dbb0c0
arg1[1] = data_143dbb0d0
arg1[2] = data_143dbb0e0
int64_t* rdi = *arg2

if (rdi != 0)
    int64_t* rcx_1 = nullptr
    
    if ((*(*rdi + 0x20))(rdi, "PxRigidBody") != 0)
        rcx_1 = rdi
    
    if (rcx_1 != 0)
        int64_t r8_1 = *rcx_1
        void var_68
        void var_48
        int128_t* rax_5 = sub_1417cbc40(&var_48, (*(r8_1 + 0xf0))(rcx_1, &var_68, r8_1))
        *arg1 = *rax_5
        arg1[1] = rax_5[1]
        arg1[2] = rax_5[2]

__security_check_cookie(rax_1 ^ &var_88)
return arg1
