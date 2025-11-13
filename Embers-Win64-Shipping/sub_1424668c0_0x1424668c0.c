// 函数: sub_1424668c0
// 地址: 0x1424668c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r13 = arg2

if (arg4 != 0)
    int32_t* rdi_1 = arg3 + 0x88
    int32_t i
    
    do
        void* rbp_1 = r13
        r13 += 0xb0
        *(rbp_1 + 8) = *(rdi_1 - 0x80)
        *(rbp_1 + 0x10) = rdi_1[-0x1e]
        *(rbp_1 + 0x14) = rdi_1[-0x1d]
        *(rbp_1 + 0x18) = rdi_1[-0x1c].b
        *(rbp_1 + 0x19) = *(rdi_1 - 0x6f)
        *(rbp_1 + 0x1a) = *(rdi_1 - 0x6e)
        *(rbp_1 + 0x1c) = rdi_1[-0x1b]
        *(rbp_1 + 0x20) = rdi_1[-0x1a]
        *(rbp_1 + 0x24) = rdi_1[-0x19]
        *(rbp_1 + 0x28) = *(rdi_1 - 0x60)
        
        if (rbp_1 + 0x30 != &rdi_1[-0x16])
            int32_t j_1 = *(rbp_1 + 0x38)
            
            if (j_1 != 0)
                void* rbx_2 = *(rbp_1 + 0x30) + 0x58
                int32_t j
                
                do
                    int64_t rcx = *(rbx_2 + 0x20)
                    
                    if (rcx != 0)
                        sub_140a74f90(rcx)
                    
                    sub_141a90330(rbx_2)
                    int64_t rcx_2 = *(rbx_2 - 0x10)
                    
                    if (rcx_2 != 0)
                        sub_140a74f90(rcx_2)
                    
                    int64_t rcx_3 = *(rbx_2 - 0x48)
                    
                    if (rcx_3 != 0)
                        sub_140a74f90(rcx_3)
                    
                    rbx_2 += 0xc8
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            sub_142464340(rbp_1 + 0x30, *(rdi_1 - 0x58), rdi_1[-0x14], *(rbp_1 + 0x3c), 0)
        
        sub_1405b0be0(rbp_1 + 0x40, &rdi_1[-0x12])
        sub_14090a0d0(rbp_1 + 0x50, &rdi_1[-0xe])
        sub_142464d10(rbp_1 + 0x60, &rdi_1[-0xa])
        sub_142464d10(rbp_1 + 0x70, &rdi_1[-6])
        
        if (rbp_1 + 0x80 != &rdi_1[-2])
            int64_t rsi_1 = sx.q(*rdi_1)
            int64_t r14_2 = *(rdi_1 - 8)
            int32_t r8_1 = *(rbp_1 + 0x8c)
            *(rbp_1 + 0x88) = rsi_1.d
            
            if (rsi_1.d != 0 || r8_1 != 0)
                sub_1405c4a00(rbp_1 + 0x80, rsi_1.d, r8_1)
                memcpy(*(rbp_1 + 0x80), r14_2, (rsi_1 << 3).d)
            else
                *(rbp_1 + 0x8c) = rsi_1.d
        
        *(rbp_1 + 0x90) = *(rdi_1 + 8)
        
        if (rbp_1 + 0xa0 != &rdi_1[6])
            int64_t rsi_2 = sx.q(rdi_1[8])
            int64_t rbp_2 = *(rdi_1 + 0x18)
            int32_t r8_4 = *(rbp_1 + 0xac)
            *(rbp_1 + 0xa8) = rsi_2.d
            
            if (rsi_2.d != 0 || r8_4 != 0)
                sub_1405a4be0(rbp_1 + 0xa0, rsi_2.d, r8_4)
                memcpy(*(rbp_1 + 0xa0), rbp_2, (rsi_2 << 4).d)
            else
                *(rbp_1 + 0xac) = rsi_2.d
        
        rdi_1 = &rdi_1[0x2c]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
