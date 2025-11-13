// 函数: sub_140a7d340
// 地址: 0x140a7d340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = sub_142a46450(arg1 + 8)
int32_t rsi = 0
*arg2 = 0
arg2[1] = 0

if (rax != 0 && *rax != 0)
    char* rdi_1 = -ffffffffffffffff
    
    do
        rdi_1 = &rdi_1[1]
    while (*(rdi_1 + rax) != 0)
    
    int32_t rdx = 0
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(arg2, rdi_1.d + 1)
        rdx = arg2[1].d
    
    int32_t rax_1 = rdx + rdi_1.d + 1
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    sub_1405a7220(*arg2, rdi_1.d + 1, rax, rdi_1.d + 1, 0x3f)

int16_t* const rcx_4

if (arg2[1].d == 0)
    rcx_4 = &data_142d40450
else
    rcx_4 = *arg2

if (sub_140a54510(rcx_4, &data_142e62cf8) != 0)
    int64_t var_18
    sub_140597da0(arg2, sub_140a35930(arg2, &var_18))
    int64_t rdi_3 = var_18
    
    if (rdi_3 != 0)
        int64_t* rcx_9 = data_143ddb3f0
        
        if (rcx_9 == 0)
            sub_140a750a0()
            rcx_9 = data_143ddb3f0
        
        (*(*rcx_9 + 0x30))(rcx_9, rdi_3)
else if (*arg2 != &data_142e62d00)
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 4)
        sub_1405947f0(arg2, 4)
        rsi = arg2[1].d
    
    arg2[1].d = rsi + 4
    
    if (rsi + 4 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    **arg2 = 0x54004e0049

return arg2
