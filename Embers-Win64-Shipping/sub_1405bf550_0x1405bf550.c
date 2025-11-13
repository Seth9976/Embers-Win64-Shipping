// 函数: sub_1405bf550
// 地址: 0x1405bf550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (*(arg1 + 0x84) == arg1[0x10].d)
    result = sub_140d3e110(&arg1[0x15])

if (*(arg1 + 0x84) != arg1[0x10].d || result.b == 0)
    result = sub_1405bfa10(arg1, arg1[0x10].d)
    
    if (result.b != 0)
        void* rbx_1 = arg1[0xd]
        int64_t* rsi_1 = arg1[0x13]
        int64_t rax_1
        int64_t rbx_2
        
        if (rbx_1 != 0)
            rbx_2 = *(rbx_1 + 0x10)
            rax_1 = sub_1405c6e90()
        
        if (rbx_1 == 0 || rbx_2 != rax_1)
            rsi_1 = arg1[0x12]
        
        int64_t* rcx_2 = arg1[0x14]
        
        if (rcx_2 != 0)
            result = sub_141bb9010(rcx_2)
        
        if (rcx_2 == 0 || result != rsi_1)
            result = sub_142121cc0(rsi_1, arg1)
            arg1[0x14] = result

return result
