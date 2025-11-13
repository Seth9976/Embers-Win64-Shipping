// 函数: sub_141eea460
// 地址: 0x141eea460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x14]
int32_t rdi
int128_t zmm6
int128_t zmm7
float zmm8[0x4]

if (rcx == 0)
    rdi = 0
else
    int32_t rax_1
    rax_1, arg2, zmm6, zmm7, zmm8 = sub_141dcdc50(rcx)
    rdi = rax_1

char rax_2 = *(arg1 + 0x389)

if ((rax_2 & 0x10) != 0 && rdi == 3)
    *(arg1 + 0x389) = rax_2 & 0xef

sub_141f205e0(arg1, arg2, zmm6, zmm7, zmm8)
void* const result = sub_1405be820(arg1)
void* const result_1 = result

if (result != 0)
    result = sub_14243ae40(result)
    
    if (result.b != 0)
        void* rcx_4 = *(result_1 + 0xf0)
        
        if (rcx_4 != 0)
            result.b = 3
        
        if (rcx_4 == 0 || *(rcx_4 + 0xbe4) u>= 0xe)
            result.b = 1
        
        if (rcx_4 == 0 || *(rcx_4 + 0xbe4) u< 0xd)
            rcx_4.b = 0
        else
            rcx_4.b = 1
        
        if (data_143f3a918 != 1)
            result = 3
            
            if (rcx_4.b != 0)
                result = 1
        
        *(arg1 + 0x16a) = result.b
        return result

if (rdi == 2 && *(arg1 + 0x16a) == 1)
    *(arg1 + 0x16a) = rdi.b

return result
