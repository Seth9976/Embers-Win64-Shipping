// 函数: sub_140fc3080
// 地址: 0x140fc3080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg4

if (*(arg1 + 0x490) != 0)
    int64_t* rcx = *(arg1 + 0x488)
    
    if (rcx != 0)
        int32_t rax
        rax, arg4 = (*(*rcx + 0x28))(rcx)
        
        if (rax.b != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0x490) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0x488)
            
            rax, arg4 = (*(*rcx_1 + 0x48))(rcx_1)
            *(arg1 + 0x480) = rax

if (*(arg1 + 0x480) == 0)
    return 

int64_t var_18 = *arg2
void* rax_4 = arg2[1]
void* var_10_1 = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

arg4.b = rsi != 3
(*(*(arg1 + 0x4e8) + 0x28))(arg1 + 0x4e8, &var_18, zx.q(arg3), arg4)
(*(*(arg1 + 0x4e8) + 0x40))(arg1 + 0x4e8, zx.q(rsi))
