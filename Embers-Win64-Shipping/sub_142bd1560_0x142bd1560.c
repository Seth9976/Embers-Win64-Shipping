// 函数: sub_142bd1560
// 地址: 0x142bd1560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi_1 = arg1[2] * arg2
int32_t arg_8 = 0

if (arg2 u<= divu.dp.q(0x7fffffff, arg1[2]))
    int64_t rax_2 = sub_142b99a90(*arg1, 1, arg1[6].d, rsi_1.d, arg1[7], &arg_8)
    bool cond:0_1 = arg_8 != 0
    arg1[7] = rax_2
    
    if (not(cond:0_1))
        arg1[3] = arg2
        arg1[6] = rsi_1
        
        if (arg1[5] u<= arg2)
            rax_2.b = 1
            return rax_2
        
        int32_t* rax_3 = arg1[1]
        
        if (rax_3 != 0 && *rax_3 == 0)
            *rax_3 = 0x82
        
        arg1[5] = arg2
        rax_3.b = 0
        return rax_3

int32_t* rax_4 = arg1[1]

if (rax_4 != 0 && *rax_4 == 0)
    *rax_4 = 0x40

rax_4.b = 0
return rax_4
