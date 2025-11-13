// 函数: sub_142031540
// 地址: 0x142031540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_1420315d0(arg1, arg2)

if (arg2 == 0)
    *(arg1 + 0x2d4) += 1
else
    void* rax = sub_14256a090()
    void* rdx = arg2[2]
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(rdx + 0x38))
        *(arg1 + 0x2d4) += 1
    else
        int64_t result_1 = result
        result = *(rdx + 0x30)
        
        if (*(result + (result_1 << 3)) != rax + 0x30)
            *(arg1 + 0x2d4) += 1
        else
            (*(*arg1 + 0x8e0))(arg1, arg2)
            result = sub_1424b2a30(arg1, arg2)
            
            if (result.b == 0)
                arg1[0x5a].d += 1
                *(arg1 + 0x2dc) -= 1

return result
