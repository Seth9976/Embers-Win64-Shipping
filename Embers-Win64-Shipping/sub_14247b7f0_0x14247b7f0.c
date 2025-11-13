// 函数: sub_14247b7f0
// 地址: 0x14247b7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r15 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x18
    int32_t i
    
    do
        int64_t* r14_1 = r15
        r15 -= -0x80
        *r14_1 = *(rbx_1 - 0x18)
        r14_1[1].b = rbx_1[-4].b
        *(r14_1 + 9) = *(rbx_1 - 0xf)
        *(r14_1 + 0xa) = *(rbx_1 - 0xe)
        
        if (&r14_1[2] != &rbx_1[-2])
            int64_t rsi_1 = sx.q(*rbx_1)
            int64_t rbp_1 = *(rbx_1 - 8)
            int32_t r8 = *(r14_1 + 0x1c)
            r14_1[3].d = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1405c4a00(&r14_1[2], rsi_1.d, r8)
                memcpy(r14_1[2], rbp_1, (rsi_1 << 3).d)
            else
                *(r14_1 + 0x1c) = rsi_1.d
        
        if (&r14_1[4] != &rbx_1[2])
            int64_t rsi_2 = sx.q(rbx_1[0x14])
            void* rdi_2 = &r14_1[0xb]
            sub_1405a4aa0(rdi_2, 0, rsi_2.d, 4)
            void* rax_5 = *(rbx_1 + 0x48)
            void* rdx_2 = &rbx_1[0x10]
            void* r9 = *(rdi_2 + 8)
            
            if (rax_5 != 0)
                rdx_2 = rax_5
            
            if (r9 != 0)
                rdi_2 = r9
            
            memcpy(rdi_2, rdx_2, (rsi_2 << 2).d)
            r14_1[0xd].d = rsi_2.d
            sub_1407474e0(&r14_1[4], &rbx_1[2])
        
        sub_140597970(&r14_1[0xe], &rbx_1[0x16])
        rbx_1 -= -0x80
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
