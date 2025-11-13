// 函数: sub_141a72090
// 地址: 0x141a72090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* r15 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x30
    int32_t i
    
    do
        int32_t* rbp_1 = r15
        int32_t* r12_1 = r15
        r15 = &r15[0x2a]
        *rbp_1 = rbx_1[-0xc]
        
        if (&rbp_1[2] != &rbx_1[-0xa])
            int64_t rsi_1 = sx.q(rbx_1[8])
            void* rdi_1 = &rbp_1[0x10]
            sub_1405a4aa0(rdi_1, 0, rsi_1.d, 4)
            void* rcx_1 = *(rdi_1 + 8)
            void* rdx = &rbx_1[4]
            void* rax_1 = *(rbx_1 + 0x18)
            
            if (rax_1 != 0)
                rdx = rax_1
            
            if (rcx_1 != 0)
                rdi_1 = rcx_1
            
            memcpy(rdi_1, rdx, (rsi_1 << 2).d)
            rbp_1[0x14] = rsi_1.d
            int64_t rsi_2 = sx.q(rbx_1[-8])
            rbp_1[4] = 0
            
            if (rbp_1[5] != rsi_2.d)
                sub_1406106e0(&rbp_1[2], rsi_2.d)
            
            rbp_1[0xf] = 0
            void* rdi_2 = &rbp_1[6]
            rbp_1[0xe] = 0xffffffff
            sub_14059a8e0(rdi_2, rsi_2.d)
            int32_t rax_2 = rbp_1[4] + rsi_2.d
            rbp_1[4] = rax_2
            
            if (rax_2 s> rbp_1[5])
                sub_14061cbc0(&rbp_1[2])
            
            rbp_1[0xe] = rbx_1[2]
            rbp_1[0xf] = rbx_1[3]
            void* rbp_2 = &rbx_1[-6]
            
            if (rdi_2 != rbp_2)
                sub_14059a8e0(rdi_2, *rbx_1)
                int32_t rax_5 = *rbx_1
                *(rdi_2 + 0x18) = rax_5
                
                if (rax_5 != 0)
                    void* r9 = *(rbx_1 - 8)
                    void* r10_1 = *(rdi_2 + 0x10)
                    
                    if (r9 != 0)
                        rbp_2 = r9
                    
                    if (r10_1 != 0)
                        rdi_2 = r10_1
                    
                    memcpy(rdi_2, rbp_2, (zx.q(rax_5 + 0x1f) u>> 5 << 2).d)
            
            memcpy(*(rbp_1 + 8), *(rbx_1 - 0x28), rsi_2.d * 0x1c)
        
        sub_141a6f280(&r12_1[0x16], &rbx_1[0xa])
        rbx_1 = &rbx_1[0x2a]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* const* result
result.b = 1
return result
