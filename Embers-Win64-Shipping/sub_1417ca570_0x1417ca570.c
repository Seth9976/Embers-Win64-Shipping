// 函数: sub_1417ca570
// 地址: 0x1417ca570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = (data_143ef8708.q).d
int32_t rdi = arg1[1].d
uint64_t rbx = 0
int32_t r12 = 1
uint64_t var_28
int32_t rax_1
uint64_t rsi_1

if (rsi s> 1)
    int32_t r14_1 = rdi - 1
    
    if (rdi == 0)
        r14_1 = 0
    
    int32_t rax_2
    
    if (rsi == 0)
        rax_2 = 1
    
    if (rsi != 0 || r14_1 == 0)
        rax_2 = 0
    
    int64_t rdi_1 = data_143ef8700
    int32_t rcx_2 = r14_1 + rax_2
    uint64_t var_48 = 0
    int32_t var_3c
    
    if (rsi != 0 || rcx_2 != 0)
        sub_1405a4c70(&var_48, rcx_2 + rsi, 0)
        memcpy(var_48, rdi_1, rsi * 2)
    else
        var_3c = 0
    
    sub_140a20ba0(&var_48, *arg1, r14_1)
    rax_1 = var_3c
    rsi_1 = var_48
    rdi = rsi
    int32_t var_40_1
    var_40_1.q = 0
    var_48 = 0
else
    int64_t r14 = *arg1
    rsi_1 = 0
    var_28 = 0
    
    if (rdi != 0)
        sub_1405a4c70(&var_28, rdi, 0)
        rsi_1 = var_28
        memcpy(rsi_1, r14, rdi * 2)
        int32_t var_1c
        rax_1 = var_1c
    else
        rax_1 = 0

if (rdi s> 1)
    int32_t rcx_8 = (data_143ef8758.q).d
    int32_t r14_3 = rcx_8 - 1
    
    if (rcx_8 == 0)
        r14_3 = 0
    
    if (rdi != 0 || r14_3 == 0)
        r12 = 0
    
    uint64_t var_38 = rsi_1
    int32_t rdx_9 = r12 + r14_3 + rdi
    rsi_1 = 0
    
    if (rdx_9 s> rax_1)
        sub_1405947f0(&var_38, rdx_9)
    
    sub_140a20ba0(&var_38, data_143ef8750, r14_3)
    uint64_t rdx_11 = var_38
    int32_t var_20_3 = rdi
    var_38 = 0
    rbx = rdx_11
    int32_t var_1c_2 = rax_1
    int32_t var_30_1
    var_30_1.q = 0
    var_28 = rdx_11
else
    int32_t rdi_2 = (data_143ef8758.q).d
    int64_t r14_2 = data_143ef8750
    var_28 = 0
    int32_t var_20_2 = rdi_2
    
    if (rdi_2 != 0)
        sub_1405a4c70(&var_28, rdi_2, 0)
        rbx = var_28
        memcpy(rbx, r14_2, rdi_2 * 2)
    else
        int32_t var_1c_1 = 0

HMODULE result = sub_1417cb960(&var_28)

if (rbx != 0)
    sub_140a74f90(rbx)

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

return result
