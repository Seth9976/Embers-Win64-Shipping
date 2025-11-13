// 函数: sub_14202bce0
// 地址: 0x14202bce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x520))()
int64_t var_18

if ((*(arg1 + 0x214) & 2) != 0)
    int64_t* rsi_1 = arg1[0x14]
    
    if (rsi_1 != 0)
        void* rax_1 = sub_14255d000()
        void* rcx = rsi_1[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            (*(*rsi_1 + 0x6c8))(rsi_1, &var_18)
            int32_t var_10
            char rax_5
            
            if (var_18.d.d f!= *arg2 || var_18:4.d.d f!= arg2[1] || var_10.d f!= arg2[2])
                rax_5 = 1
            else
                rax_5 = 0
            
            if (rax_5 != 0)
                *arg2 = var_18
                arg2[2] = var_10

if ((*(arg1 + 0x14c) & 8) != 0)
    return arg2

int32_t rax_7 = arg1[0x26].d
char rax_8 = (*(arg1 + 0x214)).b
var_18 = arg1[0x25]

if ((rax_8 & 4) == 0)
    *arg2 = var_18.d.d
    rax_8 = (*(arg1 + 0x214)).b

if ((rax_8 & 8) == 0)
    arg2[1] = var_18:4.d.d
    rax_8 = (*(arg1 + 0x214)).b

if ((rax_8 & 0x10) != 0)
    return arg2

arg2[2] = rax_7.d
return arg2
