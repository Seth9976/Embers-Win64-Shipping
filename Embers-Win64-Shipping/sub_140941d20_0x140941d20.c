// 函数: sub_140941d20
// 地址: 0x140941d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x20))()

if (result == 0)
    return result

int64_t* rcx = *(result + 8)

if ((**rcx)(rcx, arg3) == 0)
    int64_t* rbp_1 = *(result + 0xd0)
    int64_t* rbx_1 = rbp_1
    void* rdi_3 = &rbp_1[sx.q(*(result + 0xd8)) * 2]
    
    if (rbp_1 != rdi_3)
        while (true)
            int64_t r8 = *arg3
            
            if ((*r8)(arg3, *rbx_1, r8) != 0)
                break
            
            rbx_1 = &rbx_1[2]
            
            if (rbx_1 == rdi_3)
                return 0
    
    if (rbp_1 == rdi_3 || ((rbx_1 - rbp_1) s>> 4).d == 0xffffffff)
        return 0

return 1
