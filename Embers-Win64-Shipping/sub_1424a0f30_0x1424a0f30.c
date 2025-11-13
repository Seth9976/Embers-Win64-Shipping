// 函数: sub_1424a0f30
// 地址: 0x1424a0f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = 0
int32_t arg_8 = 0
void* rax = sub_140d3c6e0(arg1)
int16_t* var_18

if (rax != 0)
    arg_8.q = *(rax + 0x18)
    sub_140b63b70(&arg_8, &var_18)
    rbx = 1

if ((rbx & 1) != 0)
    int16_t* rcx_1 = var_18
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)

sub_140b291e0(&arg1[2], &var_18, 0)
int16_t* const rcx_3 = &data_142d40450
int16_t* rdi_1 = var_18
int32_t var_10

if (var_10 != 0)
    rcx_3 = rdi_1

int32_t result = sub_140a5ff80(rcx_3, 0)

if (rdi_1 == 0)
    return result

sub_140a74f90(rdi_1)
return result
