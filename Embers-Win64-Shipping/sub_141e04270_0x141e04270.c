// 函数: sub_141e04270
// 地址: 0x141e04270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[4]

if (rdi != 0)
    void* rax_1 = sub_142591550()
    void* r9_1 = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(r9_1 + 0x38) && *(*(r9_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        uint32_t rax_4
        
        if (data_143de5480 != 0)
            rax_4.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            sub_141f3e990(arg1[4], 1, 1)

void* rcx_3 = arg1[0x48]

if (rcx_3 == 0)
    void* rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6
    rcx_3 = rax_6

int64_t* result
int512_t zmm0
result, zmm0 = sub_141e04760(rcx_3, arg2, arg3)
int64_t* result_1 = result

if (result != 0)
    int64_t rdx_1 = *result
    result = (*(rdx_1 + 0xe8))(result, rdx_1)
    
    if (result != 0)
        int64_t rdx_2 = *result_1
        return (*(rdx_2 + 0xf8))(result_1, rdx_2)

zmm0.o = zx.o(0)
return result
