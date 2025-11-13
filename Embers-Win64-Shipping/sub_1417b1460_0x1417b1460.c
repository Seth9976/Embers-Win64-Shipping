// 函数: sub_1417b1460
// 地址: 0x1417b1460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1

if (rsi == arg2)
    return 

int32_t i = 0
int32_t r15_1 = arg1[1].d

if (*(rsi + 0x10) s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        int64_t* rcx = *(rbx_1 + *(rsi + 8))
        
        if (rcx != 0)
            (*(*rcx + 0x20))(rcx, zx.q(r15_1), *(*(arg2 + 8) + rbx_1))
        
        i += 1
        rbx_1 = &rbx_1[1]
    while (i s< *(rsi + 0x10))

*(arg2 + 0x18) += 1
*(rsi + 0x18) -= 1
void* rax_3 = *arg1
int64_t rdx_1 = sx.q(arg1[1].d)

if (rdx_1.d u< *(rax_3 + 0x18))
    *(*(*(rax_3 + 0xc8) + (rdx_1 << 3)) + 8) = rdx_1.d

int32_t rax = *(arg2 + 0x18) - 1
*arg1 = arg2
arg1[1].d = rax
