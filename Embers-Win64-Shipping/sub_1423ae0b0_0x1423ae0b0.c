// 函数: sub_1423ae0b0
// 地址: 0x1423ae0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_142389810(arg1[1])
void* rsi = arg1[1]
int32_t i = 0

if (*(rsi + 0x200) s> 0)
    int64_t rdi_1 = 0
    
    do
        void* rax_1 = *(rsi + 0x1f8)
        void* rcx_1 = rsi + 0x188
        
        if (rax_1 != 0)
            rcx_1 = rax_1
        
        int64_t* rcx_2 = *(rcx_1 + rdi_1)
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x28))(rcx_2)
        
        i += 1
        rdi_1 += 8
    while (i s< *(rsi + 0x200))
    
    rsi = arg1[1]

int64_t result = sub_142389c30(rsi, rax)

if (arg1 == 0)
    return result

jump(*(*arg1 + 0x10))
