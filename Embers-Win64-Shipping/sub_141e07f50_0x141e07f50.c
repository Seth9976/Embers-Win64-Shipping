// 函数: sub_141e07f50
// 地址: 0x141e07f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[4]

if (rbx != 0)
    void* rax_1 = sub_142591550()
    void* r8_1 = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(r8_1 + 0x38) && *(*(r8_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        uint32_t rax_4
        
        if (data_143de5480 != 0)
            rax_4, r8_1 = GetCurrentThreadId()
            rax_4.b = rax_4 == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            r8_1.b = 1
            sub_141f3e990(arg1[4], 1, r8_1.b)

void* rbx_1 = arg1[0x48]

if (rbx_1 == 0)
    void* rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6
    rbx_1 = rax_6

uint64_t result

if (sub_140d3e110(rbx_1 + 0x4d0).b != 0 && *(rbx_1 + 0x4e8) != 0 && *(rbx_1 + 0x4a8) s> 0
        && sub_140d3c6e0(rbx_1 + 0x4d0) == arg2)
    result.b = 1
    return result

result.b = 0
return result
