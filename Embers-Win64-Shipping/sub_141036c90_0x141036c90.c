// 函数: sub_141036c90
// 地址: 0x141036c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x48)

if (result != 0)
    if (data_1439c7a34 u> 1)
        while (*(result + 0x30) != *(arg2 + 0x138))
            result = *(result + 0xe0)
            
            if (result == 0)
                break
    
    void* rbx_1 = *(result + 0x80)
    
    if (*(rbx_1 + 0xfc) != 0)
        sub_14105c1a0(rbx_1, arg2 + 0x1c0)
        void* rax = sub_141023fa0(arg2 + 0x1c0, rbx_1)
        int32_t rax_1 = sub_1410626f0(rax, 0)
        
        if (rax_1 != 0xffffffff)
            int32_t rdi_2 = 0x40
            int32_t r9_2 = rax_1 | 0x40
            result = zx.q(r9_2) & 0xac3
            
            if (result.d == r9_2)
                rdi_2 = r9_2
            
            if (rax_1 != rdi_2)
                sub_1410129f0(arg2 + 0x1c0, rbx_1, rax_1, rdi_2, 0)
                result = sub_141069360(rax, 0, rdi_2)
        else
            void* rbx_2 = *(arg2 + 0x1c8)
            int64_t var_30_1 = 0x40
            int64_t rdi_1 = sx.q(*(rbx_2 + 0xc0))
            int32_t rax_2 = (rdi_1 + 1).d
            *(rbx_2 + 0xc0) = rax_2
            
            if (rax_2 s> *(rbx_2 + 0xc4))
                sub_1405a4f90(rbx_2 + 0xb8)
            
            *(*(rbx_2 + 0xb8) + rdi_1 * 0x10) = rbx_1.o
            result = sub_141069360(rax, 0, 0x40)

void** i = *(arg1 + 0x30)

for (void* r15_2 = &i[sx.q(*(arg1 + 0x38)) * 4]; i != r15_2; i = &i[4])
    result = *i
    
    if (result != 0 && data_1439c7a34 u> 1)
        while (*(result + 0x28) != *(arg2 + 0x138))
            result = *(result + 0xd8)
            
            if (result == 0)
                break
    
    void* rbx_3 = *(result + 0x78)
    
    if (*(rbx_3 + 0xfc) != 0)
        sub_14105c1a0(rbx_3, arg2 + 0x1c0)
        void* rax_5 = sub_141023fa0(arg2 + 0x1c0, rbx_3)
        int32_t rax_6 = sub_1410626f0(rax_5, 0)
        
        if (rax_6 != 0xffffffff)
            int32_t rsi_2 = 0x40
            int32_t r9_5 = rax_6 | 0x40
            result = zx.q(r9_5) & 0xac3
            
            if (result.d == r9_5)
                rsi_2 = r9_5
            
            if (rax_6 != rsi_2)
                sub_1410129f0(arg2 + 0x1c0, rbx_3, rax_6, rsi_2, 0)
                result = sub_141069360(rax_5, 0, rsi_2)
        else
            void* rbx_4 = *(arg2 + 0x1c8)
            int64_t var_30_2 = 0x40
            int64_t rsi_1 = sx.q(*(rbx_4 + 0xc0))
            int32_t rax_7 = (rsi_1 + 1).d
            *(rbx_4 + 0xc0) = rax_7
            
            if (rax_7 s> *(rbx_4 + 0xc4))
                sub_1405a4f90(rbx_4 + 0xb8)
            
            *(*(rbx_4 + 0xb8) + rsi_1 * 0x10) = rbx_3.o
            result = sub_141069360(rax_5, 0, 0x40)

return result
