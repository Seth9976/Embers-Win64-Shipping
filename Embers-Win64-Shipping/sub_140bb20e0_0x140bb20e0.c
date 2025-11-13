// 函数: sub_140bb20e0
// 地址: 0x140bb20e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2[1].d
int64_t rbp = *arg2
uint64_t var_28 = 0
int32_t var_20 = rdi
int32_t var_1c

if (rdi != 0)
    sub_1405a4c70(&var_28, rdi, 0)
    memcpy(var_28, rbp, rdi * 2)
else
    var_1c = 0

if (sub_140b1d530(&var_28) != 0)
    int64_t var_18
    int64_t* rax_1 = sub_140b11c80(&var_18, arg2)
    
    if (&var_28 != rax_1)
        uint64_t rcx_4 = var_28
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        var_28 = *rax_1
        *rax_1 = 0
        var_20 = rax_1[1].d
        var_1c = *(rax_1 + 0xc)
        rax_1[1] = 0
    
    int64_t rcx_6 = var_18
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    if ((var_20 == 0 || var_20 - 1 s<= 1) && &var_28 != arg2)
        int32_t rdi_2 = arg2[1].d
        int64_t rbx_1 = *arg2
        var_20 = rdi_2
        
        if (rdi_2 != 0 || var_1c != 0)
            sub_1405a4c70(&var_28, rdi_2, var_1c)
            memcpy(var_28, rbx_1, rdi_2 * 2)
        else
            int32_t var_1c_1 = 0

sub_140a464c0()
int16_t* const r8_6 = &data_142d40450

if (var_20 != 0)
    r8_6 = var_28

char const (* r9)[0x4] = data_14399ea08
(*(r9 + 0xf0))(&data_14399ea08, arg1, r8_6, r9)
uint64_t rcx_9 = var_28

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return arg1
