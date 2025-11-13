// 函数: sub_14246b580
// 地址: 0x14246b580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* rbp = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x68
    int32_t i
    
    do
        int32_t* rdi_1 = rbp
        rbp = &rbp[0x1c]
        *rdi_1 = rbx_1[-0x1a]
        *(rdi_1 + 4) = *(rbx_1 - 0x64)
        sub_14246ab80(&rdi_1[4], &rbx_1[-0x16])
        
        if (&rdi_1[8] != &rbx_1[-0x12])
            int64_t rsi_1 = sx.q(*rbx_1)
            void* rdi_2 = &rdi_1[0x16]
            sub_1405a4aa0(rdi_2, 0, rsi_1.d, 4)
            void* rax_2 = *(rbx_1 - 8)
            void* rdx_1 = &rbx_1[-4]
            void* r9 = *(rdi_2 + 8)
            
            if (rax_2 != 0)
                rdx_1 = rax_2
            
            if (r9 != 0)
                rdi_2 = r9
            
            memcpy(rdi_2, rdx_1, (rsi_1 << 2).d)
            rdi_1[0x1a] = rsi_1.d
            sub_141ae46a0(&rdi_1[8], &rbx_1[-0x12])
        
        rbx_1 = &rbx_1[0x1c]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
