// 函数: sub_142c65dc0
// 地址: 0x142c65dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg4
void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t r9 = sx.q(*(arg1 + 0x380))
int64_t rbx_1 = zx.q((sbb.q(arg4, arg4, arg3 != 0)).d) & 0x493e0
int32_t rax_3
rax_3.b = r9.d s> 0
int32_t rcx = rax_3

if (arg3 != 0 && *(arg1 + 0x384) s> 0)
    rcx |= 2

int64_t result

if (rcx == 1)
    rbx_1 = r9
label_142c65e4f:
    int128_t var_38
    int128_t var_28
    
    if (arg2 == 0)
        arg2 = &var_28
        var_28 = *sub_142c59600(&var_38)
    
    int128_t zmm0
    
    if (arg3 == 0)
        zmm0 = *(arg1 + 0x960)
    else
        zmm0 = *(arg1 + 0x950)
    
    var_38 = zmm0
    var_28 = *arg2
    int64_t result_1 = rbx_1 - sub_142c595d0(&var_28, &var_38)
    
    if (result_1 == 0)
        result_1 = -1
    
    result = result_1
else
    if (rcx == 2)
        rbx_1 = sx.q(*(arg1 + 0x384))
        goto label_142c65e4f
    
    if (rcx == 3)
        int32_t rax_4 = *(arg1 + 0x384)
        
        if (r9.d s< rax_4)
            rax_4 = r9.d
        
        rbx_1 = sx.q(rax_4)
        goto label_142c65e4f
    
    if (arg3 != 0)
        goto label_142c65e4f
    
    result = 0

__security_check_cookie(rax_1 ^ &var_58)
return result
