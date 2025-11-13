// 函数: sub_1426635e0
// 地址: 0x1426635e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_2 = sub_14243ade0((*(*arg1 + 0x150))())
int64_t r8 = *arg1
(*(r8 + 0x338))(arg1, arg3, r8)
void* var_28 = &arg1[0x49]
void* var_20 = &arg1[0x6a]
sub_142662ef0(&var_28)
int32_t i = 0
arg1[0x17].d = 0

if (*(arg1 + 0xbc) s<= 0xffffffff)
    sub_1405a5220(&arg1[0x16], 0)

uint32_t result = *(arg1 + 0x364)
arg1[0x6c].d = 0

if (result s< 0 && result != 0)
    result = sub_1405a51b0(&arg1[0x6b], 0)

if (arg1[0x13].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rbx_2 = *(rsi_1 + arg1[0x12])
        
        if (rbx_2 != 0)
            if (arg2 != 0)
                result = rbx_2[0x55].d u>> 1
            
            if (arg2 == 0 || (result.b & 1) != 0)
                if (rax_2 != 0)
                    result = (*(*rbx_2 + 0x648))(rbx_2)
                
                if (rax_2 == 0 || result.b != 0)
                    result = (*(*rbx_2 + 0x698))(rbx_2)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< arg1[0x13].d)

return result
