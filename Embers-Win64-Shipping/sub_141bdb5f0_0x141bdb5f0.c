// 函数: sub_141bdb5f0
// 地址: 0x141bdb5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 1
int64_t* rbx = *(arg2 + 0x20)
uint64_t result = *(arg2 + 0x18)

if (rbx != 0)
    rbx[1].d += 1

if (result != 0)
    uint64_t result_1 = result
    
    if (rbx != 0)
        rbx[1].d += 1
    
    result = sub_140f5b620(*(arg1 + 0x400), &result_1)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            result = (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rbx + 8))(rbx, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx + 8))

return result
