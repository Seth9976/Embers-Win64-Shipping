// 函数: sub_1405be8e0
// 地址: 0x1405be8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141d79720()
void* result_1 = result

if (result != 0)
    void* rax = sub_141d828c0()
    void* rcx = *(result_1 + 0x10)
    result = rax + 0x30
    int64_t r9 = sx.q(*(result + 8))
    
    if (r9.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (r9 << 3)) == result)
        if (*(result_1 + 0x50) == 2 || *((zx.q((data_143de5458).d) & 1) + result_1 + 0x51) == 1)
            result.b = 1
        else
            result.b = 0
        
        if (result.b != 0)
            int32_t rcx_2
            rcx_2.b = sub_140b5b8a0(arg4.d, 0).b == 0
            result.b = arg4:4.d != 0
            rcx_2.b |= result.b
            
            if (rcx_2.b != 0)
                return sub_1405ba070(arg1, arg2, arg3, arg4, arg5)

return result
