// 函数: sub_14225e820
// 地址: 0x14225e820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1

if (rbx == 0)
    return 

char rax
int64_t r9_1
rax, r9_1 = (*(*rbx + 0x20))(rbx, "PxRigidBody")
int64_t* rcx_1 = nullptr

if (rax != 0)
    rcx_1 = rbx

if (rcx_1 == 0)
    return 

int32_t zmm1 = arg2[1]
r9_1.b = 1
int64_t rax_2 = *rcx_1
int32_t var_18 = *arg2
int32_t var_14_1 = zmm1
(*(rax_2 + 0x148))(rcx_1, &var_18, 1, r9_1, var_18, arg2[2])
