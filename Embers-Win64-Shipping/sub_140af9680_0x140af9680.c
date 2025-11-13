// 函数: sub_140af9680
// 地址: 0x140af9680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_28
sub_140b13890(&var_28)
int16_t* var_38
sub_140b24f00(&var_38)
int64_t var_48
int32_t var_30
int32_t var_20

if (arg3 != 0 && data_143ddb400 != 0)
    int64_t* rax_1 = sub_140b58260(&var_48, arg2, 1)
    void* rax_2
    rax_2, arg5 = sub_140aefca0(data_143ddb400, *rax_1)
    
    if (rax_2 != 0)
        int32_t rbx_1 = *(rax_2 + 0xc0)
        
        if (rbx_1 != 0 && rbx_1 != 1 && &var_28 != rax_2 + 0xb8)
            int64_t rsi_1 = *(rax_2 + 0xb8)
            var_20 = rbx_1
            int32_t var_1c
            
            if (rbx_1 != 0 || var_1c != 0)
                sub_1405a4c70(&var_28, rbx_1, var_1c)
                memcpy(var_28, rsi_1, rbx_1 * 2)
            else
                int32_t var_1c_1 = var_1c
        
        int32_t rbx_2 = *(rax_2 + 0xd0)
        
        if (rbx_2 != 0 && rbx_2 != 1 && &var_38 != rax_2 + 0xc8)
            int64_t rdi_3 = *(rax_2 + 0xc8)
            var_30 = rbx_2
            int32_t var_2c
            
            if (rbx_2 != 0 || var_2c != 0)
                sub_1405a4c70(&var_38, rbx_2, var_2c)
                memcpy(var_38, rdi_3, rbx_2 * 2)
            else
                int32_t var_2c_1 = var_2c

int64_t* rax_5 = sub_140b17c60(&var_48)
int16_t* r8_6 = &data_142d40450
int16_t* const rcx_10

if (rax_5[1].d == 0)
    rcx_10 = &data_142d40450
else
    rcx_10 = *rax_5

int16_t* r9 = &data_142d40450

if (var_30 != 0)
    r9 = var_38

int16_t* const var_50 = rcx_10

if (var_20 != 0)
    r8_6 = var_28

char rax_7 = sub_140af8b90(arg1, arg2, r8_6, r9, arg5, arg3, arg4, arg6, 0, 1)
int64_t rcx_12 = var_48

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int16_t* rcx_13 = var_38

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int16_t* rcx_14 = var_28

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return zx.q(rax_7)
