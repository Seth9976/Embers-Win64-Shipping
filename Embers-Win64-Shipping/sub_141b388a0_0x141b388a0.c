// 函数: sub_141b388a0
// 地址: 0x141b388a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x28
    int32_t i
    
    do
        void* rdi_1 = r14
        r14 += 0xf8
        *(rdi_1 + 8) = rbx_1[-4].b
        *(rdi_1 + 0x10) = rbx_1[-3].b
        *(rdi_1 + 0x14) = *(rbx_1 - 0x14)
        *(rdi_1 + 0x20) = rbx_1[-1]
        
        if (rdi_1 + 0x28 != rbx_1)
            int32_t rbp_1 = rbx_1[1].d
            int64_t r12_1 = *rbx_1
            int32_t r8 = *(rdi_1 + 0x34)
            *(rdi_1 + 0x30) = rbp_1
            
            if (rbp_1 != 0 || r8 != 0)
                sub_1405a4c70(rdi_1 + 0x28, rbp_1, r8)
                memcpy(*(rdi_1 + 0x28), r12_1, rbp_1 * 2)
            else
                *(rdi_1 + 0x34) = 0
        
        *(rdi_1 + 0x38) = rbx_1[2]
        *(rdi_1 + 0x40) = rbx_1[3]
        sub_141b380e0(rdi_1 + 0x48, &rbx_1[4])
        rbx_1 = &rbx_1[0x1f]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
