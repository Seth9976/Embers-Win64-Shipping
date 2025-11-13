// 函数: sub_142279680
// 地址: 0x142279680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1

if (rbx == 0)
    return 

int64_t* rcx_1 = nullptr

if ((*(*rbx + 0x20))(rbx, "PxRigidBody") != 0)
    rcx_1 = rbx

if (rcx_1 == 0)
    return 

int32_t zmm1 = arg2[1]
int64_t rax_2 = *rcx_1
int32_t var_18 = *arg2
int32_t var_10_1 = arg2[2]
int32_t var_14_1 = zmm1
(*(rax_2 + 0x110))(rcx_1, &var_18)
