// 函数: sub_1406188e0
// 地址: 0x1406188e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rdi = arg1
void* rcx = *arg1
void** rbx = *(rcx + 8)

if (*(rbx + 0x19) == 0)
    do
        sub_1406181c0(rdi, rdi, rbx[2])
        void** rcx_2 = rbx
        rbx = *rbx
        j_sub_140a74f90(rcx_2)
    while (*(rbx + 0x19) == 0)
    
    rcx = *rdi

return j_sub_140a74f90(rcx) __tailcall
