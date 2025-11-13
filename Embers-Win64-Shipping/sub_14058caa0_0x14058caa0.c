// 函数: sub_14058caa0
// 地址: 0x14058caa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int32_t i = 0

if (((arg1[1] - rax) s>> 3).d s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        int64_t* rdi_1 = *(rbx_1 + rax)
        
        if (rdi_1 != 0)
            sub_14058c9d0(rdi_1)
            j_sub_140a74f90(rdi_1)
            *(rbx_1 + *arg1) = 0
            rax = *arg1
        
        i += 1
        rbx_1 = &rbx_1[1]
    while (i s< ((arg1[1] - rax) s>> 3).d)

return sub_14058a280(arg1, 0) __tailcall
