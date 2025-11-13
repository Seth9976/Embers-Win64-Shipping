// 函数: sub_140615620
// 地址: 0x140615620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xd0) != 0)
    *(arg1 + 0xd0) = 0
    int64_t* rcx = *(arg1 + 0x178)
    (*(*rcx + 0x10))(rcx, 0)

int64_t* rcx_1 = *(arg1 + 0x228)

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)
    int64_t* rcx_2 = *(arg1 + 0x228)
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x28))(rcx_2, 1)

*(arg1 + 0x228) = 0
int64_t* result

while (true)
    result = *(arg1 + 0x248)
    void* rdx_1 = *result
    
    if (rdx_1 == 0)
        break
    
    int64_t rcx_3 = *(arg1 + 0x248)
    *(arg1 + 0x248) = rdx_1
    *(rdx_1 + 8) = zx.o(0)
    j_sub_140a74f90(rcx_3)

return result
