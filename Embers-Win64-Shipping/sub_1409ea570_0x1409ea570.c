// 函数: sub_1409ea570
// 地址: 0x1409ea570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r15 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x38
    int32_t i
    
    do
        int32_t* rcx = r15
        void* rdi_1 = r15
        r15 += 0x48
        *rcx = rbx_1[-0xe]
        rcx[1] = rbx_1[-0xd]
        rcx[2] = rbx_1[-0xc]
        
        if (&rcx[4] != &rbx_1[-0xa])
            int64_t rsi_1 = sx.q(rbx_1[-8])
            *(rdi_1 + 0x18) = 0
            
            if (*(rdi_1 + 0x1c) != rsi_1.d)
                sub_1405a5410(&rcx[4], rsi_1.d)
            
            *(rdi_1 + 0x44) = 0
            void* rbp_1 = rdi_1 + 0x20
            *(rdi_1 + 0x40) = 0xffffffff
            sub_14059a8e0(rbp_1, rsi_1.d)
            int32_t rax_2 = *(rdi_1 + 0x18) + rsi_1.d
            *(rdi_1 + 0x18) = rax_2
            
            if (rax_2 s> *(rdi_1 + 0x1c))
                sub_140610660(&rcx[4])
            
            *(rdi_1 + 0x40) = rbx_1[2]
            *(rdi_1 + 0x44) = rbx_1[3]
            void* rdi_2 = &rbx_1[-6]
            
            if (rbp_1 != rdi_2)
                sub_14059a8e0(rbp_1, *rbx_1)
                int32_t rax_5 = *rbx_1
                *(rbp_1 + 0x18) = rax_5
                
                if (rax_5 != 0)
                    void* rcx_5 = *(rbx_1 - 8)
                    void* r9 = *(rbp_1 + 0x10)
                    
                    if (rcx_5 != 0)
                        rdi_2 = rcx_5
                    
                    if (r9 != 0)
                        rbp_1 = r9
                    
                    memcpy(rbp_1, rdi_2, (zx.q(rax_5 + 0x1f) u>> 5 << 2).d)
            
            memcpy(*(rcx + 0x10), *(rbx_1 - 0x28), (rsi_1 << 4).d)
        
        rbx_1 = &rbx_1[0x12]
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
