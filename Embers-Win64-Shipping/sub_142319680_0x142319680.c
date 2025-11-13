// 函数: sub_142319680
// 地址: 0x142319680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[0x101].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* rcx = *(rsi_1 + arg1[0x100])
        
        if (rcx != 0)
            sub_142227570(rcx)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< arg1[0x101].d)

if (arg1[0x7d] != 0)
    int32_t rax_3 = (*(*arg1 + 0x4c8))(arg1)
    sub_1422ac2a0(arg1[0x7d], rax_3 != 0)

return sub_1422a7820(arg1, arg2) __tailcall
