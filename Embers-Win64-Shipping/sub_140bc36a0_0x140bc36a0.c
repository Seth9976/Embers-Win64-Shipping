// 函数: sub_140bc36a0
// 地址: 0x140bc36a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0xf8))() == 0)
    return 0

int64_t* rbx_1 = arg1[4]
uint8_t i = 1

if (rbx_1 != 0)
    while (i != 0)
        if (((rbx_1[1].d u>> 0xc).b & 1) != 0)
            i = (*(*rbx_1 + 0xf8))(rbx_1)
        
        if (((rbx_1[1].d u>> 0xc).b & 1) == 0 || i != 0)
            i = 1
        
        rbx_1 = rbx_1[4]
        
        if (rbx_1 == 0)
            return i

return i
