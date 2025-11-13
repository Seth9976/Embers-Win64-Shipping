// 函数: sub_1425cd0d0
// 地址: 0x1425cd0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r15 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0xe0
    int32_t i
    
    do
        int64_t* rbp_1 = r15
        r15 = &r15[0x28]
        sub_1406da2c0(rbp_1, &rbx_1[-0x1c])
        
        if (&rbp_1[0xa] != &rbx_1[-0x12])
            int64_t rsi_1 = sx.q(rbx_1[-9].d)
            void* rdi_1 = &rbp_1[0x11]
            sub_1405a4aa0(rdi_1, 0, rsi_1.d, 4)
            void* rax = rbx_1[-0xa]
            void* rdx_1 = &rbx_1[-0xb]
            void* r9 = *(rdi_1 + 8)
            
            if (rax != 0)
                rdx_1 = rax
            
            if (r9 != 0)
                rdi_1 = r9
            
            memcpy(rdi_1, rdx_1, (rsi_1 << 2).d)
            rbp_1[0x13].d = rsi_1.d
            sub_14094da60(&rbp_1[0xa], &rbx_1[-0x12])
        
        if (&rbp_1[0x14] != &rbx_1[-8])
            int64_t rsi_2 = sx.q(rbx_1[1].d)
            void* rdi_2 = &rbp_1[0x1b]
            sub_1405a4aa0(rdi_2, 0, rsi_2.d, 4)
            void* rax_1 = *rbx_1
            void* rdx_3 = &rbx_1[-1]
            void* r9_1 = *(rdi_2 + 8)
            
            if (rax_1 != 0)
                rdx_3 = rax_1
            
            if (r9_1 != 0)
                rdi_2 = r9_1
            
            memcpy(rdi_2, rdx_3, (rsi_2 << 2).d)
            rbp_1[0x1d].d = rsi_2.d
            sub_1425cc0a0(&rbp_1[0x14], &rbx_1[-8])
        
        if (&rbp_1[0x1e] != &rbx_1[2])
            int64_t rsi_3 = sx.q(rbx_1[0xb].d)
            void* rdi_3 = &rbp_1[0x25]
            sub_1405a4aa0(rdi_3, 0, rsi_3.d, 4)
            void* rax_2 = rbx_1[0xa]
            void* rdx_5 = &rbx_1[9]
            void* r9_2 = *(rdi_3 + 8)
            
            if (rax_2 != 0)
                rdx_5 = rax_2
            
            if (r9_2 != 0)
                rdi_3 = r9_2
            
            memcpy(rdi_3, rdx_5, (rsi_3 << 2).d)
            rbp_1[0x27].d = rsi_3.d
            sub_1425cbf20(&rbp_1[0x1e], &rbx_1[2])
        
        rbx_1 = &rbx_1[0x28]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
