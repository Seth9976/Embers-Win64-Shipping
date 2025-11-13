// 函数: sub_141b3ebf0
// 地址: 0x141b3ebf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r14 = arg2
int32_t result

if (arg4 != 0)
    char* rdi_1 = arg3 + 8
    int32_t i
    
    do
        void* rbx_1 = r14
        r14 += 0x38
        *(rbx_1 + 8) = *rdi_1
        *(rbx_1 + 0x10) = rdi_1[8]
        *(rbx_1 + 0x14) = *(rdi_1 + 0xc)
        
        if (rbx_1 + 0x20 != &rdi_1[0x18])
            int64_t rbp_1 = sx.q(*(rdi_1 + 0x20))
            int64_t r12_1 = *(rdi_1 + 0x18)
            int32_t r8 = *(rbx_1 + 0x2c)
            *(rbx_1 + 0x28) = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_140808f70(rbx_1 + 0x20, rbp_1.d, r8)
                memcpy(*(rbx_1 + 0x20), r12_1, (rbp_1 * 0x18).d)
            else
                *(rbx_1 + 0x2c) = 0
        
        *(rbx_1 + 0x30) ^= (*(rbx_1 + 0x30) ^ *(rdi_1 + 0x28)) & 1
        result = *(rbx_1 + 0x30)
        int32_t rcx_3 = result ^ *(rdi_1 + 0x28)
        rdi_1 = &rdi_1[0x38]
        *(rbx_1 + 0x30) = (rcx_3 & 2) ^ result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
