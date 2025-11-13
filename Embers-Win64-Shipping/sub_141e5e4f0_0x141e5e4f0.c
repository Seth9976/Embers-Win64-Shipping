// 函数: sub_141e5e4f0
// 地址: 0x141e5e4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 == 0)
    int64_t result
    result.b = 0
    return result

int64_t rax = sub_141e5ea90(arg1)
int64_t var_48
sub_140d30800(arg2, &var_48)
int64_t r9 = *arg1
int64_t var_28
(*(r9 + 0x3f0))(arg1, &var_28, arg2, r9)
int64_t* rbx

if (var_28 != 0)
    int64_t var_38
    rbx = sub_140d30800(&var_28, &var_38)
    
    if (&var_48 != rbx)
        int64_t rcx_3 = var_48
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        var_48 = *rbx
        *rbx = 0
        int32_t var_40_1 = rbx[1].d
        int32_t var_3c_1 = *(rbx + 0xc)
        rbx[1] = 0
    
    int64_t rcx_5 = var_38
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

(*(*arg1 + 0x428))(arg1, rax, &var_48, arg3)
bool cond:1 = sub_140b5b8a0(*arg3, 0) == 0
rbx.b = arg3[1] != 0
rbx.b |= cond:1
int64_t var_20

if (var_20 != 0)
    sub_140a74f90(var_20)

int64_t rcx_9 = var_48

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return zx.q(rbx.b)
