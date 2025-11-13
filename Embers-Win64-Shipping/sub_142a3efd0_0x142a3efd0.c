// 函数: sub_142a3efd0
// 地址: 0x142a3efd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** rdi = arg3
int64_t* rbx_1 = arg1 & 0xffffffffffc00000
sub_142a3fab0(rbx_1, arg1, arg3[0xb])
void* rax = rbx_1[6]

if (rax == 0)
    return sub_142a3f750(rbx_1, arg2, rdi) __tailcall

if (rax == rbx_1[5])
    return sub_142a3f390(rbx_1, rdi) __tailcall

void* result = rax + 1

if (result == rbx_1[7])
    int32_t rax_3 = rbx_1[0xd].d
    
    if (rax_3 != 0)
        if (rax_3 != 1)
            rdi = nullptr
        else
            rdi = &rdi[2]
    
    rbx_1[2] = 0
    rbx_1[3] = rdi[1]
    result = rdi[1]
    
    if (result == 0)
        *rdi = rbx_1
    else
        *(result + 0x10) = rbx_1
    
    rdi[1] = rbx_1

return result
