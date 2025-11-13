// 函数: sub_142824f74
// 地址: 0x142824f74
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rdi = arg1
void* rcx = *arg1
void** rbx = *(rcx + 8)

if (*(rbx + 0x19) == 0)
    do
        sub_14281d6ec(rdi, rdi, rbx[2])
        void** rcx_2 = rbx
        rbx = *rbx
        sub_14058ba50(rcx_2, 0x30)
    while (*(rbx + 0x19) == 0)
    
    rcx = *rdi

return sub_14058ba50(rcx, 0x30) __tailcall
