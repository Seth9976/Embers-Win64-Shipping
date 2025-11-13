// 函数: sub_142ab2760
// 地址: 0x142ab2760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_1405f8990(*(arg1 + 8))
int32_t temp0
int32_t result_2
temp0:result_2 = muls.dp.d(0x51eb851f, *(arg1 + 0x20) * *(arg1 + 0x18))
uint64_t result = zx.q(result_2)
int32_t rdx_1 = temp0 s>> 5
int32_t rdx_2 = rdx_1 + (rdx_1 u>> 0x1f)

if (rdx_2 s< *(arg1 + 0x1c))
    rdx_2 = *(arg1 + 0x1c)

int32_t r15 = 0
int32_t r9_2 = rax - rdx_2 - *(arg1 + 0x18)

if (r9_2 s> 0)
    r15 = r9_2

if (r15 s> 0)
    for (int32_t i = 0; i s< 0xa; i += 1)
        result = sub_142a86e70(*(arg1 + 8), arg1 + 0x10)
        uint64_t result_1 = result
        
        if (result == 0)
            int64_t* rcx_6 = *(arg1 + 8)
            *(arg1 + 0x10) = 0xffffffff
            result = sub_142a86e70(rcx_6, arg1 + 0x10)
            result_1 = result
        
        if (result_1 == 0)
            break
        
        void* rcx_7 = *(result_1 + 8)
        result = *(result_1 + 0x10)
        
        if (rcx_7 != *(arg1 + 0x30) || *(result + 8) != 0)
            if (*(result + 0xc) == 0)
            label_142ab2831:
                int64_t* rsi_1 = *(result_1 + 8)
                result = sub_142a87020(*(arg1 + 8), result_1)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    *(arg1 + 0x14) -= 1
                    result = sub_1408e52d0(rsi_1)
                    
                    if (result.d != 0)
                        rsi_1[2] = 0
                    else
                        result = (**rsi_1)(rsi_1, 1)
                
                *(arg1 + 0x28) += 1
                int32_t temp3_1 = r15
                r15 -= 1
                
                if (temp3_1 == 1)
                    break
            else if (*(rcx_7 + 8) == 1)
                result = sub_1408e52d0(rcx_7)
                
                if (result.d == 0)
                    goto label_142ab2831

return result
