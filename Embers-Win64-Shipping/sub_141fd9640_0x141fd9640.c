// 函数: sub_141fd9640
// 地址: 0x141fd9640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[1]
*arg1 = &data_143296868

if (sub_140a80f40() == 0)
    if (data_143f138f4 == 0)
        if (data_143de5480 == 0)
            goto label_141fd9674
        
        uint32_t rax_1
        rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_1.b != 0)
            goto label_141fd9674
    
    void var_28
    void** rax_2 = sub_141fddcd0(&var_28, nullptr, 0xff)
    *(*rax_2 + 0x10) = rbx
    void* rcx_7 = *rax_2
    int64_t* rsi_1 = *(rcx_7 + 0x20)
    
    if (rsi_1 != 0)
        rsi_1[9].d += 1
    
    sub_1407c9450(rcx_7, rax_2[1], rax_2[2].d, 1)
    
    if (rsi_1 != 0)
        rsi_1[9].d -= 1
        
        if (rsi_1[9].d == 1)
            sub_140a2f6e0(rsi_1)
else
label_141fd9674:
    sub_141fe0620(rbx)
    
    if (rbx != 0)
        sub_141fd7850(&rbx[7])
        sub_1405d1550(&rbx[6])
        int64_t rcx_3 = *rbx
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        j_sub_140a74f90(rbx)

*arg1 = &data_142fe1158

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
