// 函数: sub_1424c94c0
// 地址: 0x1424c94c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r12 = arg2
int32_t result

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x128
    int32_t i
    
    do
        void* rsi_1 = r12
        r12 += 0x140
        sub_141c213f0(rsi_1, &rbx_1[-0x4a])
        sub_141c212a0(rsi_1 + 0x58, &rbx_1[-0x34])
        *(rsi_1 + 0xa8) = *(rbx_1 - 0x80)
        sub_1424c8ab0(rsi_1 + 0xb0, &rbx_1[-0x1e])
        
        if (rsi_1 + 0xf0 != &rbx_1[-0xe])
            int64_t rbp_1 = sx.q(rbx_1[-0xc])
            int64_t r15_1 = *(rbx_1 - 0x38)
            int32_t r8 = *(rsi_1 + 0xfc)
            *(rsi_1 + 0xf8) = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1407c35c0(rsi_1 + 0xf0, rbp_1.d, r8)
                memcpy(*(rsi_1 + 0xf0), r15_1, (rbp_1 << 6).d)
            else
                *(rsi_1 + 0xfc) = 0
        
        if (rsi_1 + 0x100 != &rbx_1[-0xa])
            int64_t rbp_2 = sx.q(rbx_1[-8])
            int64_t r15_2 = *(rbx_1 - 0x28)
            int32_t r8_3 = *(rsi_1 + 0x10c)
            *(rsi_1 + 0x108) = rbp_2.d
            
            if (rbp_2.d != 0 || r8_3 != 0)
                sub_140638750(rsi_1 + 0x100, rbp_2.d, r8_3)
                memcpy(*(rsi_1 + 0x100), r15_2, (rbp_2 << 2).d)
            else
                *(rsi_1 + 0x10c) = 0
        
        void* rdi_3 = rsi_1 + 0x110
        void* rbp_3 = &rbx_1[-6]
        
        if (rdi_3 != rbp_3)
            sub_14059a8e0(rdi_3, *rbx_1)
            int32_t rax_3 = *rbx_1
            *(rdi_3 + 0x18) = rax_3
            
            if (rax_3 != 0)
                void* r9 = *(rbx_1 - 8)
                void* r10_1 = *(rdi_3 + 0x10)
                
                if (r9 != 0)
                    rbp_3 = r9
                
                if (r10_1 != 0)
                    rdi_3 = r10_1
                
                memcpy(rdi_3, rbp_3, (zx.q(rax_3 + 0x1f) u>> 5 << 2).d)
        
        result = rbx_1[2]
        rbx_1 = &rbx_1[0x50]
        *(rsi_1 + 0x130) = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
