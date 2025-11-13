// 函数: sub_1426ab190
// 地址: 0x1426ab190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x150))()

if (result != 0)
    void* rax_1 = *(result + 0x188)
    void* rdi_1
    
    if (rax_1 == 0)
        rdi_1 = *(result + 0x300)
    else
        rdi_1 = *(rax_1 + 0xc0)
    
    if (sub_1423dce10(rdi_1, &arg1[0x1b]) != 0)
        sub_1423e60e0(rdi_1, arg1[0x1b])
    
    arg1[0x1b] = 0
    void* rax_3 = *(result + 0x188)
    void* rbx_1
    
    if (rax_3 == 0)
        rbx_1 = *(result + 0x300)
    else
        rbx_1 = *(rax_3 + 0xc0)
    
    result = sub_1423dce10(rbx_1, &arg1[0x1c])
    
    if (result != 0)
        result = sub_1423e60e0(rbx_1, arg1[0x1c])
    
    arg1[0x1b] = 0
    arg1[0x1c] = 0

return result
