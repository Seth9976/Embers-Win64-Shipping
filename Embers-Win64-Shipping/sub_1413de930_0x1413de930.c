// 函数: sub_1413de930
// 地址: 0x1413de930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = *arg1

if (rax != 0)
    int32_t temp0_1 = *rax
    *rax -= 1
    
    if (temp0_1 == 1)
        int64_t* rsi = arg1[1]
        int64_t* rcx = rsi[1]
        
        if (rcx != 0 && *rsi != 0)
            (*(*rcx + 0x10))(rcx, rsi)
            rsi[1] = 0
        
        sub_14081c9d0(rsi)
        int64_t rax_2 = j_sub_140a74f90(arg1[1])
        arg1[1] = 0
        *arg1 = 0
        return rax_2

*arg1 = 0
arg1[1] = 0
return rax
