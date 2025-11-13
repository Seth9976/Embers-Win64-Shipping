// 函数: sub_140ee4d40
// 地址: 0x140ee4d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = arg1[3]
void* result

if (rax[1] - *rax s> 0)
    result = arg1[2]

if (rax[1] - *rax s<= 0 || not(0f f>= *(result + 4)))
    void* rbx_1 = arg1[1]
    int32_t* rdi_1 = arg1[2]
    int64_t rcx_2
    int64_t rsi_1
    
    if (*(*arg1 + 0xc) s>= 0)
        rsi_1 = sx.q(*(rbx_1 + 0x28))
        int32_t rax_3 = (rsi_1 + 1).d
        *(rbx_1 + 0x28) = rax_3
        
        if (rax_3 s> *(rbx_1 + 0x2c))
            sub_1405a4df0(rbx_1 + 0x20)
        
        rcx_2 = *(rbx_1 + 0x20)
    else
        rsi_1 = sx.q(*(rbx_1 + 0x18))
        int32_t rax_2 = (rsi_1 + 1).d
        *(rbx_1 + 0x18) = rax_2
        
        if (rax_2 s> *(rbx_1 + 0x1c))
            sub_1405a4df0(rbx_1 + 0x10)
        
        rcx_2 = *(rbx_1 + 0x10)
    
    int64_t rdx_4 = rsi_1 * 3
    *(rcx_2 + (rdx_4 << 3)) = *rdi_1
    *(rcx_2 + (rdx_4 << 3) + 4) = rdi_1[1]
    *(rcx_2 + (rdx_4 << 3) + 8) = *(rdi_1 + 8)
    result = *(rdi_1 + 0x10)
    *(rcx_2 + (rdx_4 << 3) + 0x10) = result
    
    if (result != 0)
        *(result + 8) += 1

return result
