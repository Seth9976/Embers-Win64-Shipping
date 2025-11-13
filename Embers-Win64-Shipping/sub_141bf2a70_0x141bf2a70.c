// 函数: sub_141bf2a70
// 地址: 0x141bf2a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x38)
void* const rbx = arg1
int64_t* rsi = nullptr

if (rdi != 0)
    int32_t rax_1 = rdi[1].d
    
    if (rax_1 != 0)
        rdi[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rdi = nullptr
    
    if (rdi != 0)
        rsi = *(arg1 + 0x30)

int64_t* result = (*(*rsi + 0x68))(rsi, zx.q(*(arg1 + 0x40)))

if (result.b != 0)
    int64_t r8_1 = *rsi
    
    if (rbx == 0x3a8)
        rbx = nullptr
    
    result = (*(r8_1 + 0x48))(rsi, rbx, r8_1)
    
    if (result != 0)
        int64_t rbx_1 = *rsi
        char rax_4
        int64_t r8_2
        rax_4, r8_2 = (*(rbx_1 + 0x60))(rsi, result)
        r8_2.b = rax_4 == 0
        result = (*(rbx_1 + 0x50))(rsi, *result, r8_2)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        result = (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rdi + 8))

return result
