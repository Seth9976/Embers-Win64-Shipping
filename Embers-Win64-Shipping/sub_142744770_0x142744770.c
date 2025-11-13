// 函数: sub_142744770
// 地址: 0x142744770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg1 + 0x680)
int64_t rsi
rsi.b = 1

if (r14 == 0)
    return 1

int128_t var_28 = *(arg1 + 0x1c0)
int32_t rbx = 0
var_28.q = 0
var_28:8.q = 8
sub_1405a4d70(&var_28)
void* arg_18 = nullptr
int32_t i_1 = 0
char rax_2 = (*(*r14 + 0xc0))(r14, &arg_18, &i_1, 7, var_28)

if (rax_2 != 0)
    int32_t i
    
    for (i = i_1; i != 0; i = i_1)
        i_1 = i - 1
        int64_t** rax_4 = arg_18
        int64_t* rcx_2 = *rax_4
        arg_18 = &rax_4[1]
        rbx += sub_142744da0(rcx_2, &var_28, arg2)
    
    int64_t* rcx_3 = *(arg1 + 0x680)
    i_1 = i - 1
    (*(*rcx_3 + 0xc8))(rcx_3)
    rsi.b = rbx == 0

if (rax_2 == 0 || rbx == 0)
    int64_t* rcx_4 = *(arg1 + 0x680)
    
    if ((*(*rcx_4 + 0xa0))(rcx_4) == 1)
        int64_t* rcx_5 = *(arg1 + 0x680)
        
        if (*(*(*rcx_5 + 0xa8))(rcx_5) == 0)
            int64_t* rcx_6 = *(arg1 + 0x680)
            rsi.b = sub_142744da0((*(*rcx_6 + 0xd0))(rcx_6, 0), &var_28, arg2) == 0

int64_t rcx_8 = var_28.q

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return zx.q(rsi.b)
