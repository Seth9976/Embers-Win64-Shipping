// 函数: sub_141a71530
// 地址: 0x141a71530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r15 = arg2

if (arg4 != 0)
    void* rbx_1 = arg3 + 8
    int32_t i
    
    do
        void* rdi_1 = r15
        r15 += 0x98
        sub_14086c240(rdi_1 + 8, rbx_1)
        *(rdi_1 + 0x18) = *(rbx_1 + 0x10)
        *(rdi_1 + 0x19) = *(rbx_1 + 0x11)
        
        if (rdi_1 + 0x20 != rbx_1 + 0x18)
            uint32_t count = *(rbx_1 + 0x20)
            int64_t r12_1 = *(rbx_1 + 0x18)
            int32_t r8 = *(rdi_1 + 0x2c)
            *(rdi_1 + 0x28) = count
            
            if (count != 0 || r8 != 0)
                sub_1405da9e0(rdi_1 + 0x20, count, r8)
                memcpy(*(rdi_1 + 0x20), r12_1, count)
            else
                *(rdi_1 + 0x2c) = 0
        
        *(rdi_1 + 0x30) = *(rbx_1 + 0x28)
        sub_141f98dc0(rdi_1 + 0x38)
        rbx_1 += 0x98
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
