// 函数: sub_141a76ec0
// 地址: 0x141a76ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r14 = arg2
int64_t result

if (arg4 != 0)
    char* rbx_1 = arg3 + 8
    int32_t i
    
    do
        void* rdi_1 = r14
        r14 += 0xa0
        *(rdi_1 + 8) = *rbx_1
        *(rdi_1 + 9) = rbx_1[1]
        sub_14086c240(rdi_1 + 0x10, &rbx_1[8])
        
        if (rdi_1 + 0x20 != &rbx_1[0x18])
            int32_t rbp_1 = *(rbx_1 + 0x20)
            int64_t r12_1 = *(rbx_1 + 0x18)
            int32_t r8 = *(rdi_1 + 0x2c)
            *(rdi_1 + 0x28) = rbp_1
            
            if (rbp_1 != 0 || r8 != 0)
                sub_1405c4b20(rdi_1 + 0x20, rbp_1, r8)
                memcpy(*(rdi_1 + 0x20), r12_1, rbp_1 * 0x1c)
            else
                *(rdi_1 + 0x2c) = 0
        
        *(rdi_1 + 0x30) = *(rbx_1 + 0x28)
        *(rdi_1 + 0x34) = rbx_1[0x2c]
        sub_141f98dc0(rdi_1 + 0x38)
        result = *(rbx_1 + 0x90)
        rbx_1 = &rbx_1[0xa0]
        *(rdi_1 + 0x98) = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
