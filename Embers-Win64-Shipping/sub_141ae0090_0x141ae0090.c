// 函数: sub_141ae0090
// 地址: 0x141ae0090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r12 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x68
    int32_t i
    
    do
        void* r14_1 = r12
        void* rbp_1 = r12
        r12 += 0x140
        *(r14_1 + 8) = *(rbx_1 - 0x60)
        *(r14_1 + 0x10) = *(rbx_1 - 0x58)
        *(r14_1 + 0x18) = rbx_1[-0x14].b
        *(r14_1 + 0x19) = *(rbx_1 - 0x4f)
        *(r14_1 + 0x1c) = *(rbx_1 - 0x4c)
        *(r14_1 + 0x24) = *(rbx_1 - 0x44)
        *(r14_1 + 0x2c) = *(rbx_1 - 0x3c)
        *(r14_1 + 0x34) = *(rbx_1 - 0x34)
        
        if (r14_1 + 0x40 != &rbx_1[-0xa])
            int64_t rsi_1 = sx.q(rbx_1[8])
            void* rdi_1 = r14_1 + 0x78
            sub_1405a4aa0(rdi_1, 0, rsi_1.d, 4)
            void* rcx_1 = *(rdi_1 + 8)
            void* rdx = &rbx_1[4]
            void* rax_8 = *(rbx_1 + 0x18)
            
            if (rax_8 != 0)
                rdx = rax_8
            
            if (rcx_1 != 0)
                rdi_1 = rcx_1
            
            memcpy(rdi_1, rdx, (rsi_1 << 2).d)
            *(r14_1 + 0x88) = rsi_1.d
            int64_t rsi_2 = sx.q(rbx_1[-8])
            *(r14_1 + 0x48) = 0
            
            if (*(r14_1 + 0x4c) != rsi_2.d)
                sub_1405a5410(r14_1 + 0x40, rsi_2.d)
            
            *(r14_1 + 0x74) = 0
            void* rdi_2 = r14_1 + 0x50
            *(r14_1 + 0x70) = 0xffffffff
            sub_14059a8e0(rdi_2, rsi_2.d)
            int32_t rax_9 = *(r14_1 + 0x48) + rsi_2.d
            *(r14_1 + 0x48) = rax_9
            
            if (rax_9 s> *(r14_1 + 0x4c))
                sub_140610660(r14_1 + 0x40)
            
            *(r14_1 + 0x70) = rbx_1[2]
            *(r14_1 + 0x74) = rbx_1[3]
            void* r14_2 = &rbx_1[-6]
            
            if (rdi_2 != r14_2)
                sub_14059a8e0(rdi_2, *rbx_1)
                int32_t rax_12 = *rbx_1
                *(rdi_2 + 0x18) = rax_12
                
                if (rax_12 != 0)
                    void* rcx_7 = *(rbx_1 - 8)
                    void* r9 = *(rdi_2 + 0x10)
                    
                    if (rcx_7 != 0)
                        r14_2 = rcx_7
                    
                    if (r9 != 0)
                        rdi_2 = r9
                    
                    memcpy(rdi_2, r14_2, (zx.q(rax_12 + 0x1f) u>> 5 << 2).d)
            
            memcpy(*(r14_1 + 0x40), *(rbx_1 - 0x28), (rsi_2 << 4).d)
        
        sub_1405cd980(rbp_1 + 0x90, &rbx_1[0xa])
        sub_140780b40(rbp_1 + 0xe0, &rbx_1[0x1e])
        sub_1405cd980(rbp_1 + 0xf0, &rbx_1[0x22])
        rbx_1 = &rbx_1[0x50]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* const* result
result.b = 1
return result
