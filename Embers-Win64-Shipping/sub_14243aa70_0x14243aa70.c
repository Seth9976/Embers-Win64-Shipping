// 函数: sub_14243aa70
// 地址: 0x14243aa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x500))
int32_t rdi = 0
void var_48
int128_t zmm6 = *((*(*arg2 + 0x18))(arg2, &var_48) + 8)
void* result

if (rbx.d s> 0)
    int64_t rbx_1 = 0
    
    do
        int64_t* rsi_1 = *(*(arg1 + 0x4f8) + (rbx_1 << 3))
        result = (*(*rsi_1 + 0x18))(rsi_1, &var_48)
        
        if (zmm6.d f< *(result + 8))
            break
        
        if (rsi_1 == arg2)
            return result
        
        rdi += 1
        rbx_1 += 1
    while (rbx_1 s< rbx)

int32_t rbp_1 = *(arg1 + 0x500)
*(arg1 + 0x500) = rbp_1 + 1

if (rbp_1 + 1 s> *(arg1 + 0x504))
    sub_1405a4d70(arg1 + 0x4f8)

int64_t rbx_2 = sx.q(rdi)
int64_t rdx_3 = *(arg1 + 0x4f8) + (rbx_2 << 3)
memmove(rdx_3 + 8, rdx_3, (rbp_1 - rdi) << 3)
result = *(arg1 + 0x4f8)
*(result + (rbx_2 << 3)) = arg2
return result
