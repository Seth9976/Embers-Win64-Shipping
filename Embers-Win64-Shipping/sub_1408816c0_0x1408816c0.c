// 函数: sub_1408816c0
// 地址: 0x1408816c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* rbp = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x100
    int32_t i
    
    do
        void* rdi_1 = rbp
        rbp += 0x108
        sub_14081d9c0(rdi_1, &rbx_1[-0x40])
        
        if (rdi_1 + 0xb8 != &rbx_1[-0x12])
            int64_t rsi_1 = sx.q(*rbx_1)
            void* rdi_2 = rdi_1 + 0xf0
            sub_1405a4aa0(rdi_2, 0, rsi_1.d, 4)
            void* rax = *(rbx_1 - 8)
            void* rdx_1 = &rbx_1[-4]
            void* r9 = *(rdi_2 + 8)
            
            if (rax != 0)
                rdx_1 = rax
            
            if (r9 != 0)
                rdi_2 = r9
            
            memcpy(rdi_2, rdx_1, (rsi_1 << 2).d)
            *(rdi_1 + 0x100) = rsi_1.d
            sub_1408813a0(rdi_1 + 0xb8, &rbx_1[-0x12])
        
        rbx_1 = &rbx_1[0x42]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
