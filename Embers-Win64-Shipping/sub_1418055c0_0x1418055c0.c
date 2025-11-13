// 函数: sub_1418055c0
// 地址: 0x1418055c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = data_143ef9cf8

if (rdi == 0)
    void arg_18
    int64_t rbx_1 = *sub_140b58170(&arg_18, "HTTP", (rdi + 1).d)
    j_sub_140b3db50()
    j_sub_140b407e0(&data_143de7d78, rbx_1)
    rdi = data_143ef9cf8

if (*(rdi + 0xb8) s<= 0)
    int64_t result
    result.b = 1
    return result

int64_t var_18
sub_1418042f0(&var_18, arg2)
int64_t* rbx_2 = *(rdi + 0xb0)
void* rdi_3 = &rbx_2[sx.q(*(rdi + 0xb8)) * 2]

if (rbx_2 == rdi_3)
label_141805660:
    rbx_2.b = 0
else
    while (true)
        if (sub_140a236f0(&var_18, rbx_2, 1) != 0)
            rbx_2.b = 1
            break
        
        rbx_2 = &rbx_2[2]
        
        if (rbx_2 == rdi_3)
            goto label_141805660

int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return zx.q(rbx_2.b)
