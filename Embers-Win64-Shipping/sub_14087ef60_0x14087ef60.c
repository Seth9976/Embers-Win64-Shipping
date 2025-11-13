// 函数: sub_14087ef60
// 地址: 0x14087ef60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rbp = arg2

if (arg4 != 0)
    int32_t* rsi_1 = arg3 + 0x10
    int32_t i
    
    do
        int64_t* r14_1 = rbp
        rbp -= -0x80
        *r14_1 = *(rsi_1 - 0x10)
        
        if (&r14_1[1] != &rsi_1[-2])
            int64_t rdi_1 = sx.q(*rsi_1)
            int64_t r15_1 = *(rsi_1 - 8)
            int32_t r8 = *(r14_1 + 0x14)
            r14_1[2].d = rdi_1.d
            
            if (rdi_1.d != 0 || r8 != 0)
                sub_1405c4a00(&r14_1[1], rdi_1.d, r8)
                memcpy(r14_1[1], r15_1, (rdi_1 << 3).d)
            else
                *(r14_1 + 0x14) = rdi_1.d
        
        sub_14087e2c0(&r14_1[3], &rsi_1[2])
        
        if (&r14_1[5] != &rsi_1[6])
            int64_t rdi_2 = sx.q(rsi_1[0x18])
            void* rbx_2 = &r14_1[0xc]
            sub_1405a4aa0(rbx_2, 0, rdi_2.d, 4)
            void* rax_3 = *(rsi_1 + 0x58)
            void* rdx_3 = &rsi_1[0x14]
            void* r9 = *(rbx_2 + 8)
            
            if (rax_3 != 0)
                rdx_3 = rax_3
            
            if (r9 != 0)
                rbx_2 = r9
            
            memcpy(rbx_2, rdx_3, (rdi_2 << 2).d)
            r14_1[0xe].d = rdi_2.d
            sub_14087e490(&r14_1[5], &rsi_1[6])
        
        char rax = rsi_1[0x1a].b
        rsi_1 -= -0x80
        r14_1[0xf].b = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
