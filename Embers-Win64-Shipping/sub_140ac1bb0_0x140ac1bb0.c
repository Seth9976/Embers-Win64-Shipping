// 函数: sub_140ac1bb0
// 地址: 0x140ac1bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 8)
(*(*rbx + 8))(rbx, sx.q(arg2[1].d), sx.q(*(arg2 + 0xc)))
uint32_t result_2

if ((rbx[5].b & 1) == 0)
    result_2 = arg2[1].d
else
    result_2 = 0

int64_t* rcx_1 = rbx[1]
uint32_t result_1 = result_2
int32_t* rdx_1 = *rcx_1
uint32_t result

if (&rdx_1[1] u> rcx_1[1])
    uint32_t* rdx_2 = &result_1
    
    if ((*(rbx + 0x29) & 0x20) != 0)
        result = sub_140b54070(rbx, rdx_2, arg3)
    else
        result = (*(*rbx + 0x150))(rbx, rdx_2, 4)
else
    result = *rdx_1
    result_1 = result
    *rcx_1 += 4

uint32_t result_3 = result_1

if (result_3 != 0)
    result = zx.d(*(rbx + 0x29))
    
    if ((result.b & 1) == 0 && result_3 s> 0
            && ((*(rbx + 0x2b) & 8) == 0 || result_3 s<= 0x1000000))
        arg2[1].d = result_3
        
        if ((rbx[5].b & 1) != 0)
            sub_1405da9e0(arg2, result_3, *(arg2 + 0xc))
            result_3 = arg2[1].d
        
        return (*(*rbx + 0x150))(rbx, *arg2, sx.q(result_3))
    
    result.b |= 1
    *(rbx + 0x29) = result.b
else if ((rbx[5].b & 1) != 0)
    arg2[1].d = result_3
    
    if (*(arg2 + 0xc) != result_3)
        return sub_1405c5510(arg2, 0)

return result
