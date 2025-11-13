// 函数: sub_1413852a0
// 地址: 0x1413852a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x18)
int64_t* rax = j_sub_140a82f30(0x10)
int64_t* rdi = rax

if (rax == 0)
    rdi = nullptr
else
    *rax = 0
    rax[1] = 0

void arg_8

if (arg1 != &arg_8)
    int64_t* rdx_1 = *arg1
    *arg1 = rdi
    sub_141389c90(arg1, rdx_1)
    return arg1

if (rdi != 0)
    void* rbx_1 = *rdi
    int32_t i_1 = rdi[1].d
    
    if (i_1 != 0)
        int32_t i
        
        do
            sub_14125cf90(rbx_1)
            rbx_1 += 0xa0
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_1 = *rdi
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    j_sub_140a74f90(rdi)

return arg1
