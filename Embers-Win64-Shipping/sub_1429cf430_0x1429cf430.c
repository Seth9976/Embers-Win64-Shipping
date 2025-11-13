// 函数: sub_1429cf430
// 地址: 0x1429cf430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_468
int64_t rax_1 = __security_cookie ^ &var_468
int32_t* rbx = **(arg1 + 0x28)
int32_t rdi = rbx[1]
int64_t result

if (rdi == 0)
    if (sub_1429cb310(rbx) != 0)
        goto label_1429cf4cc
    
    int32_t var_448_1 = 0xffff
    char var_438[0x400]
    sub_1429ced00(rdi + 4, &var_438, 
        _snscanf(&var_438, 0x400, 
            "Failure in TopologyRefinerFactory<>::Create() -- vertex with valence %d > %d max.", 
            zx.q(rbx[5])))
    result.b = 0
else if (rbx[5] != 0)
label_1429cf4cc:
    char rax_4
    int64_t r8_2
    
    if (arg2 != 0)
        rax_4, r8_2 = sub_1429cd680(rbx, arg3, arg4)
    
    if (arg2 == 0 || rax_4 != 0)
        sub_1429ceb80(arg1)
        result.b = 1
    else
        char const* const rdx_2 = "Failure in TopologyRefinerFactory<>::Create() -- invalid topology "
        "detected from partial specification."
        
        if (rdi != 0)
            rdx_2 = "Failure in TopologyRefinerFactory<>::Create() -- invalid topology detected as "
            "fully specified."
        
        sub_1429ced00(4, rdx_2, r8_2)
        result.b = 0
else
    sub_1429ced00(4, 
        "Failure in TopologyRefinerFactory<>::Create() -- maximum valence not assigned.", arg3)
    result.b = 0

__security_check_cookie(rax_1 ^ &var_468)
return result
