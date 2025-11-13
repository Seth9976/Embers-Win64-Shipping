// 函数: sub_141a71c30
// 地址: 0x141a71c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r12 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x110
    int32_t i
    
    do
        int64_t* rbp_1 = r12
        r12 = &r12[0x5e]
        sub_141a6f1f0(rbp_1, &rbx_1[-0x22])
        sub_141a6f1f0(&rbp_1[0xa], &rbx_1[-0x18])
        sub_141a6fc00(&rbp_1[0x14], &rbx_1[-0xe])
        
        if (&rbp_1[0x1a] != &rbx_1[-8])
            int64_t rsi_1 = sx.q(rbx_1[1].d)
            void* rdi_1 = &rbp_1[0x21]
            sub_1405a4aa0(rdi_1, 0, rsi_1.d, 4)
            void* rax = *rbx_1
            void* rdx_3 = &rbx_1[-1]
            void* r9 = *(rdi_1 + 8)
            
            if (rax != 0)
                rdx_3 = rax
            
            if (r9 != 0)
                rdi_1 = r9
            
            memcpy(rdi_1, rdx_3, (rsi_1 << 2).d)
            rbp_1[0x23].d = rsi_1.d
            sub_141a6f5a0(&rbp_1[0x1a], &rbx_1[-8])
        
        if (&rbp_1[0x24] != &rbx_1[2])
            int64_t rsi_2 = sx.q(rbx_1[0xb].d)
            void* rdi_2 = &rbp_1[0x2b]
            sub_1405a4aa0(rdi_2, 0, rsi_2.d, 4)
            void* rax_1 = rbx_1[0xa]
            void* rdx_5 = &rbx_1[9]
            void* r9_1 = *(rdi_2 + 8)
            
            if (rax_1 != 0)
                rdx_5 = rax_1
            
            if (r9_1 != 0)
                rdi_2 = r9_1
            
            memcpy(rdi_2, rdx_5, (rsi_2 << 2).d)
            rbp_1[0x2d].d = rsi_2.d
            sub_141a6f3d0(&rbp_1[0x24], &rbx_1[2])
        
        *(rbp_1 + 0x170) = *(rbx_1 + 0x60)
        sub_141a6fe40(&rbp_1[0x31], &rbx_1[0xf])
        sub_141a6ffa0(&rbp_1[0x46], &rbx_1[0x24])
        sub_141a6fd70(&rbp_1[0x52], &rbx_1[0x30])
        rbx_1 = &rbx_1[0x5e]
        i = i_1
        i_1 -= 1
    while (i != 1)

int128_t* result
result.b = 1
return result
