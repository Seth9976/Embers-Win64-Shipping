// 函数: sub_141e04530
// 地址: 0x141e04530
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

int64_t* rax_7
int128_t zmm0
int128_t result
rax_7, zmm0, result = sub_141e04760(rcx_3, arg2, arg3)

if (rax_7 != 0)
    int64_t rdx_1 = *rax_7
    
    if ((*(rdx_1 + 0xe8))(rax_7, rdx_1) != 0)
        int64_t rdx_2 = *rax_7
        int128_t result_1 = result
        (*(rdx_2 + 0xf8))(rax_7, rdx_2)
        (*(*rax_7 + 0x108))(rax_7)
        result.d = zmm0.d f- zmm0.d
        return result

return 0x7f7fffff
