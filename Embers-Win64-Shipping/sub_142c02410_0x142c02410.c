// 函数: sub_142c02410
// 地址: 0x142c02410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[3] = 0
arg1[4] = 0
int32_t var_48 = 0
int128_t var_40
__builtin_memset(&var_40, 0, 0x15)
int32_t var_28 = 0
int64_t var_20 = 0
int32_t var_18 = sub_142bfb130(arg2)
char var_14 = 1
int32_t* result_1 = sub_142bfc7a0(&var_48, sub_142bfb150(arg2, 0x706f7374))
*arg1 = result_1
int128_t* const r8 = &data_14369a5d0
int32_t* result_4 = &data_14369a5d0
int128_t* const result_3 = &data_14369a5d0

if (result_1 != 0)
    result_3 = result_1

if (result_1 != 0)
    result_4 = result_1

uint64_t r10 = zx.q(*(result_3 + 0x18))
int128_t* const rdx_1

if (result_4[6] u>= 0x20)
    rdx_1 = *(result_4 + 0x10)
else
    rdx_1 = &data_14369a5d0

uint64_t result = zx.q(*(rdx_1 + 3))
int32_t rcx_9 =
    (((((zx.d(*rdx_1) << 8) + zx.d(*(rdx_1 + 1))) << 8) + zx.d(*(rdx_1 + 2))) << 8) + result.d
arg1[1].d = rcx_9

if (rcx_9 == 0x20000)
    int128_t* const result_2 = &data_14369a5d0
    int128_t* const rdx_2 = &data_14369a5d0
    
    if (result_1 != 0)
        result_2 = result_1
    
    if (*(result_2 + 0x18) u>= 0x20)
        rdx_2 = result_2[1].q
    
    arg1[2] = &rdx_2[2]
    result = &data_14369a5d0
    
    if (result_1 != 0)
        result = result_1
    
    void* rbx_4 = &rdx_2[2] + (((zx.q(rdx_2[2].b) << 8) + zx.q(*(rdx_2 + 0x21)) + 1) << 1)
    arg1[5] = rbx_4
    
    if (*(result + 0x18) u>= 0x20)
        r8 = *(result + 0x10)
    
    void* rsi_1 = r8 + r10
    
    if (arg1[3].d u< 0xffff)
        while (rbx_4 u< rsi_1)
            result = zx.q(*rbx_4) + rbx_4
            
            if (result u>= rsi_1)
                break
            
            *sub_142c040f0(&arg1[3]) = rbx_4.d - arg1[5].d
            result = zx.q(*rbx_4)
            rbx_4 = rbx_4 + 1 + result
            
            if (arg1[3].d u>= 0xffff)
                break

return result
