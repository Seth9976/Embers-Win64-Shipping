// 函数: sub_1420d3860
// 地址: 0x1420d3860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void* rax_1 = *(arg1 + 0x10)
void* const i_3 = nullptr

if (arg2 != 0)
    void* var_28 = rax_1
    void* const i_2
    
    if (rax_1 == 0)
        i_2 = nullptr
    else
        i_2 = *(rax_1 + 0x50)
    
    int32_t var_18_1 = 0xffffffff
    int16_t var_14_1 = 0x101
    char var_12_1 = 0
    sub_1420c9110(&var_28)
    void* i_1
    
    for (void* const i = i_2; i != 0; i = i_1)
        int64_t rcx_1 = *(i + 0x28)
        int64_t arg_8 = rcx_1
        
        if (rcx_1 == arg2)
            i_3 = i
            break
        
        i_1 = *(i + 0x20)
        sub_1420c9110(&var_28)

void* rcx_4 = sx.q(*(i_3 + 0x4c)) + arg1
*rcx_4 = *arg3
*(rcx_4 + 8) = arg3[1].d
*(rcx_4 + 0x10) = arg3[2]
sub_140597df0(rcx_4 + 0x18, &arg3[3])
