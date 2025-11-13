// 函数: sub_140eeb470
// 地址: 0x140eeb470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr

if (*(arg1 + 0x1a0) != 0)
    int64_t* rcx = *(arg1 + 0x198)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x1a0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x198)
        
        *(arg1 + 0x190) = (*(*rcx_1 + 0x48))(rcx_1)

if (*(arg1 + 0x190) == 0)
    *arg2 = nullptr
    arg2[1] = 0
    return arg2

if (*(arg1 + 0x1b0) != 0)
    int64_t* rcx_2 = *(arg1 + 0x1a8)
    
    if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
        if (*(arg1 + 0x1b0) != 0)
            rsi = *(arg1 + 0x1a8)
        
        (*(*rsi + 0x48))(rsi, arg2)
        return arg2

void* var_18
void** rax_10 = sub_140f6a920(*(arg1 + 0x18), &var_18, arg1 + 0x200)
*arg2 = *rax_10
void* rcx_6 = rax_10[1]
arg2[1] = rcx_6

if (rcx_6 != 0)
    *(rcx_6 + 8) += 1

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return arg2
