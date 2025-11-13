// 函数: sub_1407865c0
// 地址: 0x1407865c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 0
int32_t rbp = (data_143ce0450.q).d
int32_t rdi = arg3[1].d

if (rbp s> 1)
    int32_t rsi_1 = rdi - 1
    
    if (rdi == 0)
        rsi_1 = 0
    
    int32_t rax_1
    
    if (rbp == 0)
        rax_1 = rbp + 1
    
    if (rbp != 0 || rsi_1 == 0)
        rax_1 = 0
    
    int64_t rdi_1 = data_143ce0448
    int32_t rcx_2 = rsi_1 + rax_1
    uint64_t var_38 = 0
    
    if (rbp != 0 || rcx_2 != 0)
        sub_1405a4c70(&var_38, rcx_2 + rbp, 0)
        memcpy(var_38, rdi_1, rbp * 2)
    else
        int32_t var_2c_1 = 0
    
    sub_140a20ba0(&var_38, *arg3, rsi_1)
    uint64_t rax_2 = var_38
    rdi = rbp
    var_38 = 0
    int32_t var_30_1
    var_30_1.q = 0
    rbx = rax_2
else
    int64_t rsi = *arg3
    uint64_t var_28 = 0
    
    if (rdi != 0)
        sub_1405a4c70(&var_28, rdi, 0)
        rbx = var_28
        memcpy(rbx, rsi, rdi * 2)

uint64_t r8_5 = &data_142d40450

if (rdi != 0)
    r8_5 = rbx

int64_t result = sub_1419c6ab0(arg2 + 8, arg4, r8_5, 0)

if (rbx == 0)
    return result

return sub_140a74f90(rbx) __tailcall
