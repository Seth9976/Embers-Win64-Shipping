// 函数: sub_141a6a710
// 地址: 0x141a6a710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_38
int64_t rax_1 = __security_cookie ^ &var_38
*arg1 = 2
*(arg1 + 4) = 0
char r10 = 0
arg1[8] = 2
*(arg1 + 0xc) = 0
uint64_t var_28 = *(arg2 + 0xc)
int32_t rax_4

if (var_28.b == 2)
    rax_4 = var_28.d
else
    if (&arg2[2] != &var_28)
        r10 = 1
        var_28 = arg2[2]
    
    if (not(var_28:4.d.d f!= 0f))
        var_38 = *(arg2 + 0xc)
    
    if (var_28:4.d.d f!= 0f || var_38.b == 1)
        rax_4 = var_28.d + 1
        var_28.b = 0
        var_28:4.d = rax_4
        *(arg1 + 8) = var_28
    else
        rax_4 = var_28.d
        var_28.b = 0
        var_28:4.d = rax_4
        *(arg1 + 8) = var_28

var_38 = *arg2

if (var_38.b != 2)
    uint64_t rdx = *(arg2 + 4)
    var_28 = rdx
    int32_t rcx_2 = rdx.d
    
    if (not(var_28:4.d.d f!= 0f))
        var_38 = *arg2
    
    if (not(var_28:4.d.d f!= 0f) && var_38.b != 0)
        rdx = zx.q(var_28.d)
    else if (r10 == 0 || rcx_2 s< rax_4)
        rdx = zx.q(rcx_2 + 1)
    
    var_28.b = 1
    var_28:4.d = rdx.d
    *arg1 = var_28

__security_check_cookie(rax_1 ^ &var_38)
return arg1
