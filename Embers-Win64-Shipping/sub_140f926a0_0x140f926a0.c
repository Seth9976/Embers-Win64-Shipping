// 函数: sub_140f926a0
// 地址: 0x140f926a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rbp = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0xf0
    int32_t i
    
    do
        int64_t* r14_1 = rbp
        rbp = &rbp[0x3d]
        *r14_1 = *(rbx_1 - 0xf0)
        sub_1405cd980(&r14_1[1], &rbx_1[-0x3a])
        sub_1405cd980(&r14_1[0xb], &rbx_1[-0x26])
        
        if (&r14_1[0x15] != &rbx_1[-0x12])
            int64_t rsi_1 = sx.q(*rbx_1)
            void* rdi_1 = &r14_1[0x1c]
            sub_1405a4aa0(rdi_1, 0, rsi_1.d, 4)
            void* rax_1 = *(rbx_1 - 8)
            void* rdx_2 = &rbx_1[-4]
            void* r9 = *(rdi_1 + 8)
            
            if (rax_1 != 0)
                rdx_2 = rax_1
            
            if (r9 != 0)
                rdi_1 = r9
            
            memcpy(rdi_1, rdx_2, (rsi_1 << 2).d)
            r14_1[0x1e].d = rsi_1.d
            sub_14098dde0(&r14_1[0x15], &rbx_1[-0x12])
        
        sub_140780c40(&r14_1[0x1f], &rbx_1[2])
        sub_140f91fb0(&r14_1[0x21], &rbx_1[6])
        rbx_1 = &rbx_1[0x7a]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
