// 函数: sub_141adbbe0
// 地址: 0x141adbbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r14 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x50
    int32_t i
    
    do
        void* rdi_1 = r14
        r14 += 0x98
        *(rdi_1 + 8) = *(rbx_1 - 0x48)
        
        if (rdi_1 + 0x10 != &rbx_1[-0x10])
            int64_t rbp_1 = sx.q(rbx_1[-0xe])
            int64_t r15_1 = *(rbx_1 - 0x40)
            int32_t r8 = *(rdi_1 + 0x1c)
            *(rdi_1 + 0x18) = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405a4be0(rdi_1 + 0x10, rbp_1.d, r8)
                memcpy(*(rdi_1 + 0x10), r15_1, (rbp_1 << 4).d)
            else
                *(rdi_1 + 0x1c) = 0
        
        sub_140627690(rdi_1 + 0x20, &rbx_1[-0xc])
        *(rdi_1 + 0x30) = rbx_1[-8].b
        *(rdi_1 + 0x31) = *(rbx_1 - 0x1f)
        *(rdi_1 + 0x32) = *(rbx_1 - 0x1e)
        *(rdi_1 + 0x34) = rbx_1[-7]
        *(rdi_1 + 0x38) = *(rbx_1 - 0x18)
        *(rdi_1 + 0x40) = *(rbx_1 - 0x10)
        
        if (rdi_1 + 0x48 != &rbx_1[-2])
            int64_t rbp_2 = sx.q(*rbx_1)
            int64_t r15_2 = *(rbx_1 - 8)
            int32_t r8_3 = *(rdi_1 + 0x54)
            *(rdi_1 + 0x50) = rbp_2.d
            
            if (rbp_2.d != 0 || r8_3 != 0)
                sub_1405a4b40(rdi_1 + 0x48, rbp_2.d, r8_3)
                memcpy(*(rdi_1 + 0x48), r15_2, (rbp_2 * 0x30).d)
            else
                *(rdi_1 + 0x54) = 0
        
        sub_140627690(rdi_1 + 0x58, &rbx_1[2])
        sub_140627690(rdi_1 + 0x68, &rbx_1[6])
        sub_141ada350(rdi_1 + 0x78, &rbx_1[0xa])
        sub_14090a0d0(rdi_1 + 0x88, &rbx_1[0xe])
        rbx_1 = &rbx_1[0x26]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
