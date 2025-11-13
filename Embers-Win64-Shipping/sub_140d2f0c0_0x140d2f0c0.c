// 函数: sub_140d2f0c0
// 地址: 0x140d2f0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = arg4.b
uint32_t rax_1

if (data_143e1d7b4 == 0)
    if (data_143de5480 != 0)
        rax_1, arg4 = GetCurrentThreadId()
        rax_1.b = rax_1 == data_143de5470
    
    bool z_1
    
    if (data_143de5480 == 0 || rax_1.b != 0)
        if (0 == data_143e1adfc)
            data_143e1adfc = 0
            z_1 = true
        else
            data_143e1adfc
            z_1 = false
    
    if ((data_143de5480 != 0 && rax_1.b == 0) || z_1)
        rax_1.b = 0
    else
        rax_1.b = 1

if (data_143e1d7b4 != 0 || rax_1.b != 0)
    sub_140af98a0("Unknown", 0x123, 
        Illegal call to StaticFindObjectFast() while serializing object data or garbage collecting!", 
        arg4)
    sub_140afbb40()

int32_t rcx = 0x8000000

if (data_14399ea98() != 0)
    rcx = 0

arg6 |= rcx
return sub_140d3f470(arg1, arg2, arg3, zx.q(rdi)) __tailcall
