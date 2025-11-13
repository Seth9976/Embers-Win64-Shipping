// 函数: sub_1419358e0
// 地址: 0x1419358e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = data_143eff758
int64_t rdx

if (data_143de5480 == 0)
    rdx = 0
else
    rdx.b = GetCurrentThreadId() != data_143de5470

if (rbx[rdx] == 0)
    return sub_141935a40(arg1, arg2) __tailcall

int128_t* rsi = nullptr
bool cond:1 = arg2[1].d u<= 4
int128_t* var_28 = nullptr
int32_t var_1c = 0

if (cond:1)
    rbx.b = 0
else
    rbx = *arg2
    int32_t r14_1 = *rbx
    int32_t rax_2 = r14_1
    
    if (r14_1 s> 0)
        sub_1405daba0(&var_28)
        rax_2 = *rbx
        rsi = var_28
    
    char rax_5
    
    if (rax_2 != 0)
        int32_t var_38_1 = 0
        int32_t arg_24 = 0
        void arg_18
        rax_5 = sub_140b02330((*sub_140b5e500(&arg_18, 0x101)).q, rsi, r14_1, *arg2 + 4, 
            arg2[1].d - 4, 0)
    
    if (rax_2 != 0 && rax_5 != 0)
        rbx = zx.q(sub_141935a40(arg1, &var_28))
        
        if (rsi != 0)
            sub_140a74f90(rsi)
    else if (rsi == 0)
        rbx.b = 0
    else
        sub_140a74f90(rsi)
        rbx.b = 0

return zx.q(rbx.b)
