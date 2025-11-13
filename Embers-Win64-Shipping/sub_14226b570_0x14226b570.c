// 函数: sub_14226b570
// 地址: 0x14226b570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg2

if (rdi != 0)
    int64_t* rcx_1 = nullptr
    
    if ((*(*rdi + 0x20))(rdi, "PxRigidBody") != 0)
        rcx_1 = rdi
    
    if (rcx_1 != 0)
        void var_18
        int32_t* rax_4 = (*(*rcx_1 + 0x138))(rcx_1, &var_18)
        *arg1 = *rax_4
        int32_t rax_5 = rax_4[2]
        arg1[1] = rax_4[1]
        arg1[2] = rax_5
        return arg1

int32_t rax_7 = data_143dbb200
*arg1 = data_143dbb1f8.q
arg1[2] = rax_7
return arg1
