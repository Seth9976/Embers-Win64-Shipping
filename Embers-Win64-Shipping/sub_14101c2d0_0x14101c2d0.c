// 函数: sub_14101c2d0
// 地址: 0x14101c2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = **(arg1 + 8)

if (rbp == 0)
    int64_t* result
    result.b = 0
    return result

sub_141010280(arg2, rbp + 8)
*(arg2 + 0x18) = *(rbp + 0x20)
*(arg2 + 0x1c) = *(rbp + 0x24)
*(arg2 + 0x20) = *(rbp + 0x28)
*(arg2 + 0x24) = *(rbp + 0x2c)
void* rdi_1 = *(arg1 + 8)
*(arg1 + 8) = rbp
void** const var_38 = &data_142efcd90
int64_t var_30 = (zx.o(0)).q
int64_t var_20 = 0
int32_t var_18 = 0
char var_14 = 1
sub_141010280(rbp + 8, &var_38)
*(rbp + 0x20) = var_20.d
*(rbp + 0x24) = var_20:4.d
*(rbp + 0x28) = var_18
*(rbp + 0x2c) = var_14

if (var_30 != 0)
    int32_t rax_8 = *(var_30 + 0x14)
    *(var_30 + 0x14) -= 1
    
    if (rax_8 == 1)
        sub_141011360(var_30, 1)

if (rdi_1 != 0)
    void* rax_9 = *(rdi_1 + 0x10)
    *(rdi_1 + 8) = &data_142efcd90
    
    if (rax_9 != 0)
        int32_t rbx_1 = *(rax_9 + 0x14)
        *(rax_9 + 0x14) -= 1
        
        if (rbx_1 == 1)
            int64_t* rcx_4 = *(rdi_1 + 0x10)
            
            if (rcx_4 != 0)
                sub_141011360(rcx_4, rbx_1.b)
    
    j_sub_140a74f90(rdi_1)

return 1
