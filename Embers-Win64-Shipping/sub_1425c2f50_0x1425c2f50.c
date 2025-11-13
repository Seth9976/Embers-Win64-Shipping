// 函数: sub_1425c2f50
// 地址: 0x1425c2f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_28 = 0
int32_t var_20 = 0
char rbx = sub_140b2acc0(arg3, u"-Sandbox=", &var_28, 1)

if (var_20 s<= 1 && arg2 == __crt_deferred_errno_cache::get(&data_143db7b00) && *(arg1 + 0x90) != 0)
    uint64_t var_18[0x2]
    uint64_t* rax_3 = sub_1425c1060(&var_18)
    
    if (&var_28 != rax_3)
        uint64_t rcx_2 = var_28
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        var_28 = *rax_3
        *rax_3 = 0
        var_20 = rax_3[1].d
        var_20 = *(rax_3 + 0xc)
        rax_3[1] = 0
    
    uint64_t rcx_4 = var_18[0]
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t* rax_6 = __crt_deferred_errno_cache::get(&data_143db7b00)
    uint64_t rdx = &data_142d40450
    
    if (var_20 != 0)
        rdx = var_28
    
    int64_t r8_1 = *rax_6
    rbx = (*(r8_1 + 0xd8))(rax_6, rdx, r8_1)

uint64_t rcx_6 = var_28

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return zx.q(rbx)
