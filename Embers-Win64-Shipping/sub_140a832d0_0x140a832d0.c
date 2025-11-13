// 函数: sub_140a832d0
// 地址: 0x140a832d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x10)
int64_t* r14 = nullptr

if (rdi != 0)
    int32_t rax_1 = rdi[1].d
    
    if (rax_1 != 0)
        rdi[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rdi = nullptr
    
    if (rdi != 0)
        r14 = *(arg1 + 8)

int64_t* rax_3 = (*(*r14 + 0x20))(r14)
int64_t* rcx_1 = data_143db7a88
int32_t rsi = *(arg1 + 0x18)
int64_t rdx = *rcx_1
int32_t rax_4 = (*(rdx + 0x90))(rcx_1, rdx)

if (rax_4 u> 1 || rax_4.b == 1)
    (*(*rax_3 + 0x78))(rax_3, zx.q(rsi))
    
    if ((*(*rax_3 + 0x88))(rax_3) - 0xac00 u<= 0x2ba3 && (*(*rax_3 + 0x30))(rax_3) != 0)
        char i
        
        do
            if ((*(*rax_3 + 0x98))(rax_3) - 0xac00 u> 0x2ba3)
                break
            
            rsi = *(rax_3 + 0xc)
            i = (*(*rax_3 + 0x30))(rax_3)
        while (i != 0)

int32_t result = (*(*r14 + 0x78))(r14, zx.q(rsi))
*(arg1 + 0x18) = result

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        int64_t rdx_3 = *rdi
        (*rdx_3)(rdi, rdx_3)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return result
