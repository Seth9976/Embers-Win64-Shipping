// 函数: sub_142811570
// 地址: 0x142811570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
uint64_t result = zx.q(*(arg2 + 0x48))
int64_t rsi = arg3
void* r10 = arg1

if (result.d != 0)
    int128_t* r9 = nullptr
    int128_t* var_48_1 = nullptr
    uint64_t var_40_1 = result
    uint64_t i
    
    do
        int64_t rbx_1 = *(arg2 + 0x40)
        int32_t rcx = *(r9 + rbx_1 + 0x20)
        
        if ((rcx.b & 0x11) == 0)
            int32_t rdi_2 = arg5 + *(r9 + rbx_1 + 0x10)
            int64_t (* var_30)(void* arg1, int32_t* arg2, void* arg3)
            int64_t var_28
            int32_t var_20
            int64_t rcx_2
            
            if (not(test_bit(rcx, 8)))
                if ((rcx.b & 8) != 0)
                    var_20 = 0
                    int64_t rcx_3 = sx.q(*arg4) * 9
                    *(rsi + (rcx_3 << 3)) = *(r9 + rbx_1)
                    *(rsi + (rcx_3 << 3) + 0x10) = *(r9 + rbx_1 + 0x10)
                    *(rsi + (rcx_3 << 3) + 0x20) = *(r9 + rbx_1 + 0x20)
                    rcx_2 = sx.q(*arg4) * 9
                    var_30 = sub_142817060
                    goto label_142811662
                
                result = sub_142815b60(r10, *(r9 + rbx_1), arg6)
                r9 = var_48_1
                uint64_t result_2 = result
                uint64_t result_1 = result
                
                if (*result == 0)
                    int32_t j = 0
                    
                    if (*(r9 + rbx_1 + 0x18) s> 0)
                        do
                            sub_142811570(arg1, result_2, arg3, arg4, rdi_2, arg6, var_48_1, 
                                var_40_1, result_1, var_30, var_28, var_20)
                            r9 = var_48_1
                            j += 1
                            result_2 = result_1
                            *(r9 + rbx_1 + 0x18)
                            result =
                                zx.q(divs.dp.d(sx.q(*(r9 + rbx_1 + 0x14)), *(r9 + rbx_1 + 0x18)))
                            rdi_2 += result.d
                        while (j s< *(r9 + rbx_1 + 0x18))
                    
                    rsi = arg3
                else
                    int64_t rdx_1 = sx.q(*arg4) * 9
                    *(rsi + (rdx_1 << 3)) = *(r9 + rbx_1)
                    *(rsi + (rdx_1 << 3) + 0x10) = *(r9 + rbx_1 + 0x10)
                    *(rsi + (rdx_1 << 3) + 0x20) = *(r9 + rbx_1 + 0x20)
                    *(rsi + sx.q(*arg4) * 0x48 + 0x28) = rdi_2
                    result = sx.q(*arg4)
                    uint64_t rcx_8 = result * 9
                    *(rsi + (rcx_8 << 3) + 0x30) = *result_2
                    *(rsi + (rcx_8 << 3) + 0x40) = *(result_2 + 0x10)
                    *arg4 += 1
                
                r10 = arg1
                arg2 = arg_10
            else
                var_30 = nullptr
                var_20 = 0xffffffff
                int64_t rcx_1 = sx.q(*arg4) * 9
                *(rsi + (rcx_1 << 3)) = *(r9 + rbx_1)
                *(rsi + (rcx_1 << 3) + 0x10) = *(r9 + rbx_1 + 0x10)
                *(rsi + (rcx_1 << 3) + 0x20) = *(r9 + rbx_1 + 0x20)
                rcx_2 = sx.q(*arg4) * 9
            label_142811662:
                *(rsi + (rcx_2 << 3) + 0x28) = rdi_2
                result = sx.q(*arg4)
                var_28 = 0
                uint64_t rcx_4 = result * 9
                *(rsi + (rcx_4 << 3) + 0x30) = var_30.o
                *(rsi + (rcx_4 << 3) + 0x40) = var_20.q
                *arg4 += 1
        
        r9 += 0x28
        i = var_40_1
        var_40_1 -= 1
        var_48_1 = r9
    while (i != 1)

return result
