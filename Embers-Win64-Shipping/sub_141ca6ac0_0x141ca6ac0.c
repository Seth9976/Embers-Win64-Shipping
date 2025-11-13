// 函数: sub_141ca6ac0
// 地址: 0x141ca6ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = 0
int32_t arg_8 = 0
bool rdx = sub_140b5b8a0(*arg1, 0) == 0
int64_t var_18
int64_t rax_3
int32_t* rbx

if ((arg1[1] != 0 | rdx) != 0)
    int64_t* rax_1 = sub_140b63b70(arg1, &var_18)
    
    if (rax_1[1].d == 0)
        rbx = &data_142d40450
    else
        rbx = *rax_1
    
    rdi = 1
    rax_3 = sub_140d2f1a0(sub_140d41340(), nullptr, rbx, 0)

if ((arg1[1] != 0 | rdx) == 0 || rax_3 == 0)
    rbx.b = 0
else
    rbx = 1

if ((rdi & 1) != 0)
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

return zx.q(rbx.b)
