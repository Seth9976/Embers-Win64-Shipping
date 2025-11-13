// 函数: sub_142466c10
// 地址: 0x142466c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* r13 = arg2

if (arg4 != 0)
    int32_t* rdi_1 = arg3 + 0x50
    int32_t i
    
    do
        int32_t* r14_1 = r13
        r13 = &r13[0x32]
        *r14_1 = rdi_1[-0x14]
        r14_1[1] = rdi_1[-0x13]
        r14_1[2] = rdi_1[-0x12]
        sub_140780b40(&r14_1[4], &rdi_1[-0x10])
        *(r14_1 + 0x20) = *(rdi_1 - 0x30)
        r14_1[0xc] = rdi_1[-8]
        r14_1[0xd] = rdi_1[-7]
        r14_1[0xe] = rdi_1[-6]
        r14_1[0xf] = rdi_1[-5]
        r14_1[0x10] = rdi_1[-4]
        
        if (&r14_1[0x12] != &rdi_1[-2])
            int64_t rsi_1 = sx.q(*rdi_1)
            int64_t rbp_1 = *(rdi_1 - 8)
            int32_t r8 = r14_1[0x15]
            r14_1[0x14] = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1405c4a00(&r14_1[0x12], rsi_1.d, r8)
                memcpy(*(r14_1 + 0x48), rbp_1, (rsi_1 << 3).d)
            else
                r14_1[0x15] = rsi_1.d
        
        if (&r14_1[0x16] != &rdi_1[2])
            int32_t j_1 = r14_1[0x18]
            
            if (j_1 != 0)
                int64_t* rbx_3 = *(r14_1 + 0x58) + 0x30
                int32_t j
                
                do
                    int64_t rcx_3 = *rbx_3
                    
                    if (rcx_3 != 0)
                        sub_140a74f90(rcx_3)
                    
                    rbx_3 = &rbx_3[8]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            sub_142464560(&r14_1[0x16], *(rdi_1 + 8), rdi_1[4], r14_1[0x19], 0)
        
        sub_142464c80(&r14_1[0x1a], &rdi_1[6])
        *(r14_1 + 0x88) = *(rdi_1 + 0x38)
        *(r14_1 + 0x98) = *(rdi_1 + 0x48)
        *(r14_1 + 0xa8) = *(rdi_1 + 0x58)
        *(r14_1 + 0xb8) = *(rdi_1 + 0x68)
        r14_1[0x30].b = rdi_1[0x1c].b
        *(r14_1 + 0xc1) = *(rdi_1 + 0x71)
        char rax = *(rdi_1 + 0x72)
        rdi_1 = &rdi_1[0x32]
        *(r14_1 + 0xc2) = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
