// 函数: sub_140f63650
// 地址: 0x140f63650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = sub_140f466a0(arg1 + 0x4c8)
int32_t* result

if (rax[1].b != 0)
    result = sub_140f466a0(arg1 + 0x4e8)

if (rax[1].b == 0 || result[1].b == 0)
    result = sub_140f466a0(arg1 + 0x508)
    
    if (result[1].b == 0)
        *(arg1 + 0x418) = 1
        return result
    
    result = sub_140f466a0(arg1 + 0x528)
    
    if (result[1].b == 0)
        *(arg1 + 0x418) = 1
        return result

*(arg1 + 0x418) = 0
return result
