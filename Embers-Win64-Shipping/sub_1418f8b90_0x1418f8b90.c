// 函数: sub_1418f8b90
// 地址: 0x1418f8b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_38 = arg1
void* rcx = arg2[2]
int32_t i = 4

if (rcx == 0)
    rcx = &arg2[4]

int32_t rax_2 = (*arg2)((*(*rcx + 8))(rcx), &var_38)
int32_t rbx = rax_2

if (rax_2 s< 0)
    while (i s> 0)
        int64_t rsi_1 = *(arg1 + 0x1a0)
        EnterCriticalSection(arg1 + 0x150)
        int128_t var_30 = zx.o(0)
        sub_1418f8350(arg1, &var_30)
        *(arg1 + 0x1a0) = rsi_1
        sub_1418f7610(arg1, &var_30)
        
        if (arg1 != -0x150)
            LeaveCriticalSection(arg1 + 0x150)
        
        sub_1418c8680(*(arg1 + 0x18))
        sub_1418c2e90(*(arg1 + 0x18))
        void* rax_3 = arg2[2]
        void* rcx_8 = &arg2[4]
        var_38 = arg1
        
        if (rax_3 != 0)
            rcx_8 = rax_3
        
        int32_t rax_6 = (*arg2)((*(*rcx_8 + 8))(rcx_8), &var_38)
        i -= 1
        rbx = rax_6
        
        if (rax_6 s>= 0)
            break

if (*arg2 != 0)
    void* rax_7 = arg2[2]
    void* rcx_10 = &arg2[4]
    
    if (rax_7 != 0)
        rcx_10 = rax_7
    
    (*(*rcx_10 + 0x10))(rcx_10)

return zx.q((rbx u>> 0x1f).b) ^ 1
