// 函数: sub_1423ff400
// 地址: 0x1423ff400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1

if (rbx == 0)
    return 

int64_t* rcx = *rbx

if (rcx != 0)
    int32_t rax_1 = *(rcx + 0x44)
    *(rcx + 0x44) -= 1
    
    if (rax_1 == 1 && rcx != 0)
        (**rcx)(rcx, 1)

return j_sub_140a74f90(rbx) __tailcall
