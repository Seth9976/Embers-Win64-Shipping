// 函数: sub_142493e40
// 地址: 0x142493e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r12 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x30
    int32_t i
    
    do
        void* rdi_1 = r12
        r12 += 0x58
        *(rdi_1 + 8) = *(rbx_1 - 0x28)
        *(rdi_1 + 0x10) = rbx_1[-8].b
        *(rdi_1 + 0x14) = rbx_1[-7]
        
        if (rdi_1 + 0x18 != &rbx_1[-6])
            uint32_t count = rbx_1[-4]
            int64_t r14_1 = *(rbx_1 - 0x18)
            int32_t r8 = *(rdi_1 + 0x24)
            *(rdi_1 + 0x20) = count
            
            if (count != 0 || r8 != 0)
                sub_1405da9e0(rdi_1 + 0x18, count, r8)
                memcpy(*(rdi_1 + 0x18), r14_1, count)
            else
                *(rdi_1 + 0x24) = 0
        
        if (rdi_1 + 0x28 != &rbx_1[-2])
            int64_t rbp_1 = sx.q(*rbx_1)
            int64_t r14_2 = *(rbx_1 - 8)
            int32_t r8_2 = *(rdi_1 + 0x34)
            *(rdi_1 + 0x30) = rbp_1.d
            
            if (rbp_1.d != 0 || r8_2 != 0)
                sub_1405a4be0(rdi_1 + 0x28, rbp_1.d, r8_2)
                memcpy(*(rdi_1 + 0x28), r14_2, (rbp_1 << 4).d)
            else
                *(rdi_1 + 0x34) = 0
        
        if (rdi_1 + 0x38 != &rbx_1[2])
            int64_t rbp_2 = sx.q(rbx_1[4])
            int64_t r14_3 = *(rbx_1 + 8)
            int32_t r8_5 = *(rdi_1 + 0x44)
            *(rdi_1 + 0x40) = rbp_2.d
            
            if (rbp_2.d != 0 || r8_5 != 0)
                sub_1405c4a00(rdi_1 + 0x38, rbp_2.d, r8_5)
                memcpy(*(rdi_1 + 0x38), r14_3, (rbp_2 << 3).d)
            else
                *(rdi_1 + 0x44) = 0
        
        if (rdi_1 + 0x48 != &rbx_1[6])
            int64_t rsi_4 = sx.q(rbx_1[8])
            int64_t rbp_3 = *(rbx_1 + 0x18)
            int32_t r8_8 = *(rdi_1 + 0x54)
            *(rdi_1 + 0x50) = rsi_4.d
            
            if (rsi_4.d != 0 || r8_8 != 0)
                sub_1405c4a00(rdi_1 + 0x48, rsi_4.d, r8_8)
                memcpy(*(rdi_1 + 0x48), rbp_3, (rsi_4 << 3).d)
            else
                *(rdi_1 + 0x54) = 0
        
        rbx_1 = &rbx_1[0x16]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
