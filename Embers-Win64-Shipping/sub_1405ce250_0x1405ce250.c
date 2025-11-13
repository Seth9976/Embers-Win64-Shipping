// 函数: sub_1405ce250
// 地址: 0x1405ce250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r15 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x78
    int32_t i
    
    do
        int64_t* rbp_1 = r15
        r15 = &r15[0x14]
        sub_1405cd980(rbp_1, &rbx_1[-0x1e])
        
        if (&rbp_1[0xa] != &rbx_1[-0xa])
            int64_t rsi_1 = sx.q(rbx_1[8])
            void* rdi_2 = &rbp_1[0x11]
            sub_1405a4aa0(rdi_2, 0, rsi_1.d, 4)
            void* rcx_2 = *(rdi_2 + 8)
            void* rdx_1 = &rbx_1[4]
            void* rax = *(rbx_1 + 0x18)
            
            if (rax != 0)
                rdx_1 = rax
            
            if (rcx_2 != 0)
                rdi_2 = rcx_2
            
            memcpy(rdi_2, rdx_1, (rsi_1 << 2).d)
            rbp_1[0x13].d = rsi_1.d
            int64_t rsi_2 = sx.q(rbx_1[-8])
            rbp_1[0xb].d = 0
            
            if (*(rbp_1 + 0x5c) != rsi_2.d)
                sub_1405a51b0(&rbp_1[0xa], rsi_2.d)
            
            *(rbp_1 + 0x84) = 0
            void* rdi_3 = &rbp_1[0xc]
            rbp_1[0x10].d = 0xffffffff
            sub_14059a8e0(rdi_3, rsi_2.d)
            int32_t rax_1 = rbp_1[0xb].d + rsi_2.d
            rbp_1[0xb].d = rax_1
            
            if (rax_1 s> *(rbp_1 + 0x5c))
                sub_1405c4e40(&rbp_1[0xa])
            
            rbp_1[0x10].d = rbx_1[2]
            *(rbp_1 + 0x84) = rbx_1[3]
            void* rbp_2 = &rbx_1[-6]
            
            if (rdi_3 != rbp_2)
                sub_14059a8e0(rdi_3, *rbx_1)
                int32_t rax_4 = *rbx_1
                *(rdi_3 + 0x18) = rax_4
                
                if (rax_4 != 0)
                    void* rcx_8 = *(rbx_1 - 8)
                    void* r9 = *(rdi_3 + 0x10)
                    
                    if (rcx_8 != 0)
                        rbp_2 = rcx_8
                    
                    if (r9 != 0)
                        rdi_3 = r9
                    
                    memcpy(rdi_3, rbp_2, (zx.q(rax_4 + 0x1f) u>> 5 << 2).d)
            
            memcpy(rbp_1[0xa], *(rbx_1 - 0x28), (rsi_2 << 5).d)
        
        rbx_1 = &rbx_1[0x28]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
