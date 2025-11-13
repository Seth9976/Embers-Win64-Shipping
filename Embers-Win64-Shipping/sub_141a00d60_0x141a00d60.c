// 函数: sub_141a00d60
// 地址: 0x141a00d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
void* rsi = nullptr
int64_t rbx = *arg2
void* var_18 = nullptr
int32_t var_10 = rdi.d

if (rdi.d != 0)
    sub_1419d6d70(&var_18, rdi.d, 0)
    void* rcx_1
    
    if ((var_18.b & 1) == 0)
        rcx_1 = var_18
    else
        rcx_1 = &var_18 + (var_18 s>> 1)
    
    memcpy(rcx_1, rbx, (rdi << 2).d)
    rdi = zx.q(var_10)
    rsi = var_18
else
    int32_t var_c_1 = 0

if (arg1 + 0x28 != &var_18)
    void var_38
    
    if ((var_18.b & 1) != 0)
        rsi = &var_38 + (rsi s>> 1) + 0x20
    int32_t r8_3 = *(arg1 + 0x34)
    *(arg1 + 0x30) = rdi.d
    
    if (rdi.d != 0 || r8_3 != 0)
        sub_1419d6d70(arg1 + 0x28, rdi.d, r8_3)
        void* rcx_3 = *(arg1 + 0x28)
        
        if ((rcx_3.b & 1) != 0)
            rcx_3 = (rcx_3 s>> 1) + arg1 + 0x28
        
        memcpy(rcx_3, rsi, rdi.d << 2)
    else
        *(arg1 + 0x34) = rdi.d

sub_140a1d5c0(&var_18)
int32_t result = *(arg1 + 0x30)
*(arg1 + 0x40) = result
return result
