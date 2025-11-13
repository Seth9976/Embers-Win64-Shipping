// 函数: sub_142a35df0
// 地址: 0x142a35df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
int64_t rsi = arg1[1]

while (rbx != rsi)
    void* rdi_1 = *rbx
    rbx = &rbx[1]
    
    if (rdi_1 != 0)
        j_sub_140a74f90(*(rdi_1 + 8))
        j_sub_140a74f90(rdi_1)

j_sub_140a74f90(*arg1)
int64_t* rbx_1 = arg1[2]
int64_t rsi_1 = arg1[3]

while (rbx_1 != rsi_1)
    void* rdi_2 = *rbx_1
    rbx_1 = &rbx_1[1]
    
    if (rdi_2 != 0)
        j_sub_140a74f90(*(rdi_2 + 8))
        j_sub_140a74f90(*(rdi_2 + 0x18))
        j_sub_140a74f90(*(rdi_2 + 0x28))
        j_sub_140a74f90(rdi_2)

return j_sub_140a74f90(arg1[2]) __tailcall
