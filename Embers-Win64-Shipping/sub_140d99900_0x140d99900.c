// 函数: sub_140d99900
// 地址: 0x140d99900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx_1 = *(arg2 + 0x38) + 0x1a8

if (*(rbx_1 + 0x10) != 0)
    int64_t* rcx = *(rbx_1 + 8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rbx_1 + 0x10) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx_1 + 8)
        
        char arg_8
        (*(*rcx_1 + 0x48))(rcx_1, &arg_8)
        *rbx_1 = arg_8

uint64_t result = zx.q(*rbx_1)

if ((*arg1 & result.b) != 0)
    void* rbx_2 = &arg1[8]
    int64_t rdi_1 = sx.q(*(rbx_2 + 0x128))
    int32_t rax_5 = (rdi_1 + 1).d
    *(rbx_2 + 0x128) = rax_5
    
    if (rax_5 s> *(rbx_2 + 0x12c))
        sub_140dbcd70(rbx_2, rdi_1.d)
    
    void* rax_6 = *(rbx_2 + 0x120)
    int64_t rcx_3 = rdi_1 * 9
    
    if (rax_6 != 0)
        rbx_2 = rax_6
    
    *(rbx_2 + (rcx_3 << 3)) = *arg2
    *(rbx_2 + (rcx_3 << 3) + 0x10) = arg2[1]
    *(rbx_2 + (rcx_3 << 3) + 0x20) = arg2[2]
    *(rbx_2 + (rcx_3 << 3) + 0x30) = arg2[3].q
    *(rbx_2 + (rcx_3 << 3) + 0x38) = *(arg2 + 0x38)
    result = arg2[4].q
    *(rbx_2 + (rcx_3 << 3) + 0x40) = result
    
    if (result != 0)
        *(result + 8) += 1

return result
