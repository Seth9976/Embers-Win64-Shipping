// 函数: sub_141cf8ef0
// 地址: 0x141cf8ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t rsi_1 = sx.q(arg2[1].d)
    void* rdi_1 = *arg2
    
    if ((rdi_1.b & 1) != 0)
        rdi_1 = (rdi_1 s>> 1) + arg2
    
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = rsi_1.d
    
    if (rsi_1.d == 0 && r8_1 == 0)
        *(arg1 + 0xc) = rsi_1.d
        return arg1
    
    sub_14085a140(arg1, rsi_1.d, r8_1)
    void* rcx = *arg1
    
    if ((rcx.b & 1) != 0)
        rcx = (rcx s>> 1) + arg1
    
    memcpy(rcx, rdi_1, (rsi_1 << 4).d)

return arg1
