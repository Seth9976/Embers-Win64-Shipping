// 函数: sub_1425d5b70
// 地址: 0x1425d5b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r15 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x78
    int32_t i
    
    do
        int64_t* rbp_1 = r15
        r15 = &r15[0x1f]
        sub_140780bc0(rbp_1, &rbx_1[-0x1e])
        sub_140780bc0(&rbp_1[2], &rbx_1[-0x1a])
        sub_14086c240(&rbp_1[4], &rbx_1[-0x16])
        
        if (&rbp_1[6] != &rbx_1[-0x12])
            int64_t rsi_1 = sx.q(*rbx_1)
            void* rdi_1 = &rbp_1[0xd]
            sub_1405a4aa0(rdi_1, 0, rsi_1.d, 4)
            void* rax = *(rbx_1 - 8)
            void* rdx_3 = &rbx_1[-4]
            void* r9 = *(rdi_1 + 8)
            
            if (rax != 0)
                rdx_3 = rax
            
            if (r9 != 0)
                rdi_1 = r9
            
            memcpy(rdi_1, rdx_3, (rsi_1 << 2).d)
            rbp_1[0xf].d = rsi_1.d
            sub_1425d54b0(&rbp_1[6], &rbx_1[-0x12])
        
        sub_140627690(&rbp_1[0x10], &rbx_1[2])
        
        if (&rbp_1[0x12] != &rbx_1[6])
            int32_t rsi_2 = rbx_1[8]
            int64_t r14_2 = *(rbx_1 + 0x18)
            int32_t r8_3 = *(rbp_1 + 0x9c)
            rbp_1[0x13].d = rsi_2
            
            if (rsi_2 != 0 || r8_3 != 0)
                sub_140a05dc0(&rbp_1[0x12], rsi_2, r8_3)
                memcpy(rbp_1[0x12], r14_2, rsi_2 * 0x4c)
            else
                *(rbp_1 + 0x9c) = rsi_2
        
        rbp_1[0x14].d = rbx_1[0xa]
        *(rbp_1 + 0xa4) = rbx_1[0xb]
        sub_14086c240(&rbp_1[0x15], &rbx_1[0xc])
        sub_140627690(&rbp_1[0x17], &rbx_1[0x10])
        sub_140627690(&rbp_1[0x19], &rbx_1[0x14])
        sub_140627690(&rbp_1[0x1b], &rbx_1[0x18])
        sub_140627690(&rbp_1[0x1d], &rbx_1[0x1c])
        rbx_1 = &rbx_1[0x3e]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
