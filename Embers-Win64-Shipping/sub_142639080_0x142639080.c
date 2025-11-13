// 函数: sub_142639080
// 地址: 0x142639080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* rbx = arg1

if (arg1 != 0 && *(arg1 + 9) != 0)
    result = (*(*arg1 + 0x20))(arg5, 2)

int64_t rbp = sx.q(arg7)
int128_t zmm7
zmm7.d = 1f f/ arg8[8]
int128_t zmm6
zmm6.d = 1f f/ arg8[9]

if (rbp s> 0)
    char* r14_1 = nullptr
    void* rsi_1 = arg4 + 4
    
    do
        result, zmm6, zmm7 = sub_142637350(arg2 + (sx.q(*(rsi_1 - 4) * 3) << 2), 
            arg2 + (sx.q(*rsi_1 * 3) << 2), arg2 + (sx.q(*(rsi_1 + 4) * 3) << 2), r14_1[arg6], 
            arg8, &arg8[2], &arg8[5], arg8[8], zmm7.d, zmm6.d, arg9, arg10)
        r14_1 = &r14_1[1]
        rsi_1 += 0xc
    while (r14_1 s< rbp)
    
    rbx = arg1

if (rbx != 0 && *(rbx + 9) != 0)
    return (*(*rbx + 0x28))(rbx, 2)

return result
