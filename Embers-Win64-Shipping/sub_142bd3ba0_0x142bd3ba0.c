// 函数: sub_142bd3ba0
// 地址: 0x142bd3ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
uint64_t r15
r15.b = 0
int64_t var_70 = arg4
bool cond:0 = *(arg1 + 0x4944) != 2
int64_t var_78 = 0
int64_t rax_2
int64_t rcx

if (cond:0)
    rax_2 = 0x4958
    rcx = 0x4960
else
    rax_2 = 0x4948
    rcx = 0x4950

int32_t* r14 = arg1 + rcx
char rax_5

if (*r14 != *arg3 || r14[1] != arg3[1])
    rax_5 = sub_142bd2fc0(arg1, arg1 + rax_2, r14, arg3, &var_70, &var_78)
    r15 = zx.q(rax_5)

int64_t rbx

if ((*r14 == *arg3 && r14[1] == arg3[1]) || rax_5 == 0)
    rbx = var_78
else
    rbx = var_78
    *r14 = rbx

int64_t var_68 = arg1[0x926]
uint64_t result = zx.q(*(arg1 + 0x4944))
int32_t* var_88
int32_t var_60
int32_t result_1

if (result.d == 2)
    var_88.d = *(arg1 + 0x4954)
    void* rdx_5 = &arg1[0x307]
    int32_t var_48_2 = 2
    
    if (arg5 == 0)
        rdx_5 = arg2
    
    sub_142bd3560(arg1, rdx_5, &var_60, arg1[0x92a].d, var_88.d)
    
    if (var_68.d == var_60)
        result = zx.q(result_1)
    
    if (var_68.d != var_60 || var_68:4.d != result.d)
        int64_t rax_13 = arg1[1]
        (*(rax_13 + 8))(rax_13, &var_68)
        result = var_60.q
        arg1[0x926] = result
else if (result.d == 4)
    int32_t var_48_1 = result.d
    var_88.d = *(arg1 + 0x4954)
    sub_142bd3560(arg1, arg2, &var_60, arg1[0x92a].d, var_88.d)
    var_88.d = *(arg1 + 0x495c)
    void var_58
    sub_142bd3560(arg1, arg2, &var_58, arg1[0x92b].d, var_88.d)
    var_88.d = *(arg1 + 0x4964)
    uint64_t result_2
    sub_142bd3560(arg1, arg2, &result_2, arg1[0x92c].d, var_88.d)
    int64_t rax_10 = arg1[1]
    (*(rax_10 + 0x18))(rax_10, &var_68)
    result = result_2
    arg1[0x926] = result

void* rdx_7

if (r15.b == 0)
    if (arg5 == 0)
        rdx_7 = arg2
    else
        rdx_7 = &arg1[0x307]
    
    goto label_142bd3d84

if (arg5 != 0)
    rdx_7 = &arg1[0x307]
label_142bd3d84:
    var_88.d = arg3[1]
    sub_142bd3560(arg1, rdx_7, &var_60, *arg3, var_88.d)
    
    if (var_60 == arg1[0x926].d)
        result = zx.q(*(arg1 + 0x4934))
    
    if (var_60 != arg1[0x926].d || result_1 != result.d)
        var_68 = arg1[0x926]
        int64_t rax_17 = arg1[1]
        int32_t var_48_3 = 2
        (*(rax_17 + 8))(rax_17, &var_68)
        result = var_60.q
        arg1[0x926] = result

if (r15.b != 0)
    *arg3 = rbx

__security_check_cookie(rax_1 ^ &var_a8)
return result
