// 函数: sub_141f74710
// 地址: 0x141f74710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_14211e5f0(arg2)

if (result == 0)
    return result

int64_t* var_18
(*(*arg1 + 0x860))(arg1, &var_18)
int64_t* rbx_1 = var_18
int32_t var_10
void* rdi = &rbx_1[sx.q(var_10)]

if (rbx_1 != rdi)
    do
        int64_t* rcx_2 = *rbx_1
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x418))(rcx_2) == 0)
            rbx_1 = var_18
            rdi.b = 0
            goto label_141f74779
        
        rbx_1 = &rbx_1[1]
    while (rbx_1 != rdi)
    
    rbx_1 = var_18

rdi.b = 1
label_141f74779:

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return zx.q(rdi.b)
