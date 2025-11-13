// 函数: sub_141e01fe0
// 地址: 0x141e01fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[4]
int128_t zmm6

if (rdi != 0)
    void* rax_1 = sub_142591550()
    void* r8_1 = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(r8_1 + 0x38) && *(*(r8_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        uint32_t rax_4
        
        if (data_143de5480 != 0)
            rax_4, r8_1 = GetCurrentThreadId()
            rax_4.b = rax_4 == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            r8_1.b = 1
            zmm6 = sub_141f3e990(arg1[4], 1, r8_1.b)

void* rcx_3 = arg1[0x48]

if (rcx_3 == 0)
    void* rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6
    rcx_3 = rax_6

int128_t var_18 = zmm6
int64_t* rax_7
int128_t zmm0
rax_7, zmm0 = sub_141df1d70(rcx_3, arg2)

if (rax_7 != 0)
    int64_t rdx_1 = *rax_7
    (*(rdx_1 + 0xf8))(rax_7, rdx_1)
    
    if (not(zmm0.d f<= 0f))
        int64_t rdx_2 = *rax_7
        (*(rdx_2 + 0x108))(rax_7, rdx_2)
        int128_t result
        result.d = zmm0.d f- zmm0.d
        result.d = result.d f/ zmm0.d
        return result

return 0x3f800000
