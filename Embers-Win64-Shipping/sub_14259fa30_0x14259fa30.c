// 函数: sub_14259fa30
// 地址: 0x14259fa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
char* r14 = arg2
int32_t result

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        char* rdi_1 = r14
        r14 = &r14[0x20]
        *rdi_1 = rbx_1[-1].b
        
        if (&rdi_1[8] != rbx_1)
            int32_t rbp_1 = rbx_1[1].d
            int64_t r12_1 = *rbx_1
            int32_t r8 = *(rdi_1 + 0x14)
            *(rdi_1 + 0x10) = rbp_1
            
            if (rbp_1 != 0 || r8 != 0)
                sub_1405a4c70(&rdi_1[8], rbp_1, r8)
                memcpy(*(rdi_1 + 8), r12_1, rbp_1 * 2)
            else
                *(rdi_1 + 0x14) = 0
        
        *(rdi_1 + 0x18) ^= (rbx_1[2].d ^ *(rdi_1 + 0x18)) & 1
        result = *(rbx_1 + 0x14)
        rbx_1 = &rbx_1[4]
        *(rdi_1 + 0x1c) = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
