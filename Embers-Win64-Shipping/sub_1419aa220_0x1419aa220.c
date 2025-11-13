// 函数: sub_1419aa220
// 地址: 0x1419aa220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x1c].b != 0)
    return 1

arg1[0x11].d -= 1
int32_t rsi = arg1[0x11].d

if (arg1[0x11].d == 1)
    sub_1419ab440(&arg1[1])
    (**arg1)(arg1, 1)
    return zx.q(rsi)

if (rsi == 1 && arg1[0x1d] != 0 && (arg1[0x18].d u>> 0x1f).b != 0)
    void* rdi_1 = arg1[1]
    
    if (rdi_1 != 0 && *(rdi_1 + 0x11) != 0)
        if (data_143f0f1c7 != 0)
            int64_t* rcx_2 = data_143f0f180
            int64_t r8_1 = *rcx_2
            (*(r8_1 + 0x638))(rcx_2, rdi_1, r8_1)
        
        *(rdi_1 + 0x11) = 0
    
    arg1[0x1e].d = data_14399fa54

return zx.q(rsi)
