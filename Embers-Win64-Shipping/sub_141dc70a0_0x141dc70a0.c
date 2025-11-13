// 函数: sub_141dc70a0
// 地址: 0x141dc70a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_20 = arg4
char arg_10 = 0
void* rsi = nullptr
*arg2 = 0
char* var_50 = &arg_20
*arg3 = 0
int32_t* var_40 = arg3
void* rax = sub_142577430()

if (rax != 0)
    void* rax_1 = sub_142459c10()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rax + 0x38) && *(*(rax + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            rsi = rax

int64_t rax_4 = sub_142459c10()
int128_t var_38
int128_t* r8 = &var_38
var_38 = (&arg_10).o
int128_t var_28 = arg2.o

if (rsi != rax_4)
    if (arg5 == 0)
        return sub_141db5100(arg1, rax, r8)
    
    return sub_141db45c0(arg1, rax, r8)

if (arg5 == 0)
    return sub_141db3fc0(arg1, rax, r8)

return UnDecorator::getTemplateName(arg1, rax, r8)
