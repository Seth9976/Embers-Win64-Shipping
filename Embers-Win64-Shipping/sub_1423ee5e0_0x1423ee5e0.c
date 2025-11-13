// 函数: sub_1423ee5e0
// 地址: 0x1423ee5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = nullptr
int16_t* const rsi = &data_142d40450
int32_t* var_28 = nullptr
int32_t var_20 = 0
int32_t* rax_5
int32_t rax_4

if (arg3 == 0)
    sub_1405947f0(&var_28, 2)
    int32_t rax_3 = var_20 + 2
    var_20 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_28)
    
    rax_4 = 0x66
label_1423ee6bb:
    rdi = var_28
    *rdi = rax_4
label_1423ee6c5:
    rax_5 = rdi
    
    if (var_20 == 0)
        rax_5 = &data_142d40450
else
    if (arg3 == 1)
        sub_1405947f0(&var_28, 3)
        int32_t rax_2 = var_20 + 3
        var_20 = rax_2
        
        if (rax_2 s> 0)
            sub_140594770(&var_28)
        
        rdi = var_28
        *rdi = 0x660077
        rdi[1].w = 0
        goto label_1423ee6c5
    
    if (arg3 == 2)
        sub_1405947f0(&var_28, 2)
        int32_t rax_1 = var_20 + 2
        var_20 = rax_1
        
        if (rax_1 s> 0)
            sub_140594770(&var_28)
        
        rax_4 = 0x77
        goto label_1423ee6bb
    
    rax_5 = &data_142d40450
int16_t* var_18
sub_140a2e390(&var_18, u"%dx%d%s", zx.q(arg1))
int64_t* rbx_1 = data_143f5b3f0
int32_t var_10

if (var_10 != 0)
    rsi = var_18

int32_t rax_7 = (*(*rbx_1 + 0x18))(rbx_1)
int64_t r9_1 = *rbx_1
int64_t result = (*(r9_1 + 0x80))(rbx_1, rsi, zx.q(rax_7) & 0xff000000, r9_1, rax_5)
int16_t* rcx_9 = var_18

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

if (rdi == 0)
    return result

return sub_140a74f90(rdi)
