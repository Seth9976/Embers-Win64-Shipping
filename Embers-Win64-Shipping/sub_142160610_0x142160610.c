// 函数: sub_142160610
// 地址: 0x142160610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = *(arg1 + 0x140)
uint32_t result = (*(*arg2 + 0x168))(arg2, &arg_10)
int64_t* rbx = *(arg1 + 0x138)
uint64_t rsi = sx.q(*(arg1 + 0x140))
void* rbp_2 = &rbx[rsi * 2]

if (rbx != rbp_2)
    do
        (*(*arg2 + 8))(arg2, sx.q(rbx[1].d), sx.q(*(rbx + 0xc)))
        uint32_t result_2 = 0
        
        if ((arg2[5].b & 1) == 0)
            result_2 = rbx[1].d
        
        int64_t* rcx_2 = arg2[1]
        uint32_t result_1 = result_2
        uint32_t* rdx_2 = *rcx_2
        
        if (&rdx_2[1] u> rcx_2[1])
            uint32_t* rdx_3 = &result_1
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                result = sub_140b54070(arg2, rdx_3, arg3)
            else
                result = (*(*arg2 + 0x150))(arg2, rdx_3, 4)
        else
            result = *rdx_2
            result_1 = result
            *rcx_2 += 4
        
        uint32_t result_3 = result_1
        
        if (result_3 != 0)
            result = zx.d(*(arg2 + 0x29))
            
            if ((result.b & 1) != 0 || result_3 s<= 0
                    || ((*(arg2 + 0x2b) & 8) != 0 && result_3 s> 0x1000000))
                result.b |= 1
                *(arg2 + 0x29) = result.b
            else
                rbx[1].d = result_3
                
                if ((arg2[5].b & 1) != 0)
                    sub_1405da9e0(rbx, result_3, *(rbx + 0xc))
                    result_3 = rbx[1].d
                
                result = (*(*arg2 + 0x150))(arg2, *rbx, sx.q(result_3))
        else if ((arg2[5].b & 1) != 0)
            rbx[1].d = 0
            
            if (*(rbx + 0xc) != 0)
                result = sub_1405c5510(rbx, 0)
        
        rbx = &rbx[2]
    while (rbx != rbp_2)
    
    rsi = zx.q(*(arg1 + 0x140))

int64_t* rbx_1 = *(arg1 + 0x138)

if (rsi.d != 0)
    int32_t i
    
    do
        int64_t rcx_7 = *rbx_1
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
        
        rbx_1 = &rbx_1[2]
        i = rsi.d
        rsi = zx.q(rsi.d - 1)
    while (i != 1)

*(arg1 + 0x140) = 0

if (*(arg1 + 0x144) == 0)
    return result

return sub_1405a5410(arg1 + 0x138, 0)
