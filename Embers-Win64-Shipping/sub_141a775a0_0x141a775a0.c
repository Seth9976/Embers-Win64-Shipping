// 函数: sub_141a775a0
// 地址: 0x141a775a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x40
    int32_t i
    
    do
        int64_t* rbp_1 = r14
        r14 = &r14[0x14]
        
        if (rbp_1 != &rbx_1[-8])
            int64_t rsi_1 = sx.q(rbx_1[1].d)
            void* rdi_1 = &rbp_1[7]
            sub_1405a4aa0(rdi_1, 0, rsi_1.d, 4)
            void* rax = *rbx_1
            void* rdx = &rbx_1[-1]
            void* r9 = *(rdi_1 + 8)
            
            if (rax != 0)
                rdx = rax
            
            if (r9 != 0)
                rdi_1 = r9
            
            memcpy(rdi_1, rdx, (rsi_1 << 2).d)
            rbp_1[9].d = rsi_1.d
            sub_141a6f5a0(rbp_1, &rbx_1[-8])
        
        if (&rbp_1[0xa] != &rbx_1[2])
            int64_t rsi_2 = sx.q(rbx_1[0xb].d)
            void* rdi_2 = &rbp_1[0x11]
            sub_1405a4aa0(rdi_2, 0, rsi_2.d, 4)
            void* rax_1 = rbx_1[0xa]
            void* rdx_2 = &rbx_1[9]
            void* r9_1 = *(rdi_2 + 8)
            
            if (rax_1 != 0)
                rdx_2 = rax_1
            
            if (r9_1 != 0)
                rdi_2 = r9_1
            
            memcpy(rdi_2, rdx_2, (rsi_2 << 2).d)
            rbp_1[0x13].d = rsi_2.d
            sub_141a6f3d0(&rbp_1[0xa], &rbx_1[2])
        
        rbx_1 = &rbx_1[0x14]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
