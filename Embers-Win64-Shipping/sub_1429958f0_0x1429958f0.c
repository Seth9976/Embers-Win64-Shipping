// 函数: sub_1429958f0
// 地址: 0x1429958f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
int64_t i_1 = arg2
void* rax = nullptr
__builtin_memset(arg1, 0, 0x18)

if (arg2 != 0)
    if (arg2 u> 0x3fffffffffffffff)
        sub_140610c20()
        noreturn
    
    int64_t rsi_1 = arg2 << 2
    
    if (rsi_1 u>= 0x1000)
        int64_t rcx = rsi_1 + 0x27
        
        if (rcx u<= rsi_1)
            rcx = -1
        
        int64_t rax_1 = j_sub_140a82f30(rcx)
        
        if (rax_1 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rax = (rax_1 + 0x27) & 0xffffffffffffffe0
        *(rax - 8) = rax_1
    else if (rsi_1 != 0)
        rax = j_sub_140a82f30(rsi_1)
    
    *arg1 = rax
    arg1[1] = rax
    int32_t* rax_3 = *arg1
    arg1[2] = &rax_3[arg2]
    int32_t* rcx_4 = rax_3
    
    if (i_1 != 0)
        int64_t i
        
        do
            *rcx_4 = *arg3
            rcx_4 = &rcx_4[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    arg1[1] = rcx_4

return arg1
