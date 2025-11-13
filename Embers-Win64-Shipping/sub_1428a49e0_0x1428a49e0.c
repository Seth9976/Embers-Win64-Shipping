// 函数: sub_1428a49e0
// 地址: 0x1428a49e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* result = sub_1428a50d0()
void* result_1 = result

if (result != 0)
    void* rbx_1 = result + 0x100
    int64_t i_1 = 0x10
    void* rdi_1 = result + 0x80
    int64_t i
    
    do
        if ((*rbx_1 & 1) != 0)
            result = sub_1428a6780(*rdi_1)
            *rdi_1 = 0
        
        *rbx_1 = 0
        *(rbx_1 - 0x100) = 0
        *(rbx_1 - 0xc0) = 0
        *(rdi_1 + 0xc0) = 0
        rdi_1 += 8
        *(rbx_1 + 0xc0) = 0xffffffff
        rbx_1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
    *(result_1 + 0x200) = 0

return result
