// 函数: sub_140ec9450
// 地址: 0x140ec9450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg4 + 0x70)
char rax_1

if (r14 != 0)
    int64_t rbx_1 = *r14
    sub_140ec01c0()
    rax_1 = (*(rbx_1 + 0x58))(r14, &data_143e29fc8)

int64_t* rbx_2
void* rsi

if (r14 == 0 || rax_1 == 0)
    rbx_2 = nullptr
    rsi.b = 0
else
    rbx_2 = *(arg4 + 0x78)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    if (*(arg4 + 0x70) == 0)
        rsi.b = 0
    else
        int64_t* rax_3 = sub_140d3c6e0(*(arg1 + 0x3a0) + 0x38)
        
        if (rax_3 == 0)
            rsi.b = 0
        else
            int64_t rdx = *rax_3
            
            if ((*(rdx + 0x260))(rax_3, rdx) == 0)
                rsi.b = 0
            else
                rsi.b = 1

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

if (rsi.b == 0)
    *arg2 = 0
else
    *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
