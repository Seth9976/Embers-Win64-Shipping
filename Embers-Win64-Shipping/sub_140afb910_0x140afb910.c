// 函数: sub_140afb910
// 地址: 0x140afb910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t var_48 = 0
int32_t rbx = 0
int32_t var_3c = 0
int32_t r9 = 0

if (arg3 s> 0)
    uint64_t i_1 = zx.q(arg3)
    uint64_t i
    
    do
        int32_t rsi_1 = rbx - 1
        
        if (rbx s<= 0)
            rsi_1 = 0
        
        int32_t rbx_1
        rbx_1.b = rbx s<= 0
        rbx += rbx_1 + 1
        
        if (rbx s> r9)
            sub_140594770(&var_48)
            r9 = var_3c
            rdi = var_48
        
        *(rdi + (sx.q(rsi_1) << 1)) = 9
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t var_38
int64_t* rax_3 = (*(*arg1 + 0x28))(arg1, &var_38)

if (rbx s> 1)
    int32_t rax_4 = rax_3[1].d
    int32_t r14_1 = rax_4 - 1
    
    if (rax_4 == 0)
        r14_1 = 0
    
    int32_t rax_5
    
    if (rbx == 0)
        rax_5 = rbx + 1
    
    if (rbx != 0 || r14_1 == 0)
        rax_5 = 0
    
    int64_t var_58 = 0
    int32_t rcx_7 = r14_1 + rax_5
    int32_t var_4c
    
    if (rbx != 0 || rcx_7 != 0)
        sub_1405a4c70(&var_58, rcx_7 + rbx, 0)
        memcpy(var_58, rdi, rbx * 2)
    else
        var_4c = 0
    
    sub_140a20ba0(&var_58, *rax_3, r14_1)
    var_48 = var_58
    int32_t var_40_3 = rbx
    int32_t var_3c_2 = var_4c
    int32_t var_50_1
    var_50_1.q = 0
    var_58 = 0
else
    var_48 = *rax_3
    *rax_3 = 0
    int32_t var_40_2 = rax_3[1].d
    int32_t var_3c_1 = *(rax_3 + 0xc)
    rax_3[1] = 0

int64_t result = sub_140b1f5f0(arg2, &var_48)
int64_t rcx_12 = var_48

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int64_t rcx_13 = var_38

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

if (rdi == 0)
    return result

return sub_140a74f90(rdi)
