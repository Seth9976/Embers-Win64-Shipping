// 函数: sub_141feb000
// 地址: 0x141feb000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_2 = arg2
sub_141fe8dd0(arg1)
sub_1409d7d20(arg1 + 0xc0, &i_2)
int32_t rax
int512_t zmm0
rax, zmm0 = sub_1409d7d20(arg1 + 0xe0, &i_2)
int64_t* i = i_2

if (rax s> 0)
    void* rcx_2 = *i
    *(arg1 + 0xfc) -= *(rcx_2 + 0x20) * *(rcx_2 + 0x1c) * *(rcx_2 + 0x18)

int64_t* result = *(arg1 + 0xd0)
void* rdx_2 = &result[sx.q(*(arg1 + 0xd8))]

if (result != rdx_2)
    while (*result != i)
        result = &result[1]
        
        if (result == rdx_2)
            return result
    
    zmm0.o = zx.o(*(i + 0x14))
    int64_t var_58_1 = (zmm0.o).q
    int32_t rdx_3 = var_58_1.d
    uint32_t r8_2 = (var_58_1 u>> 0x20).d
    int64_t arg_8 = (zmm0.o).q
    zmm0.o = zx.o(i[1])
    int64_t var_58_2 = (zmm0.o).q
    int32_t r15_1 = *(i + 0x1c)
    int32_t arg_18 = r15_1
    int32_t result_1 = r8_2 * r15_1 * rdx_3
    sub_14122f7d0(arg1 + 0x28, var_58_2.d, (var_58_2 u>> 0x20).d, i[2].d, zmm0, rdx_3, r8_2, r15_1)
    result = sub_1409d7d20(arg1 + 0xd0, &i_2)
    *(arg1 + 0xf8) -= result_1
    int32_t i_1 = 0
    
    if (*(arg1 + 0xe8) s> 0)
        int32_t rcx_6 = arg_8.d
        int64_t* rsi_3 = nullptr
        int32_t rbp_1 = 1
        int32_t r13_1 = arg_8:4.d
        arg_8.d = rcx_6
        
        do
            int64_t* rax_7 = *(rsi_3 + *(arg1 + 0xe0))
            void* rax_8 = *rax_7
            int32_t r8_4 = *(rax_8 + 0x18)
            int32_t rdx_6 = *(rax_8 + 0x1c)
            result = zx.q(*(rax_8 + 0x20))
            
            if (r8_4 s<= rcx_6 && rdx_6 s<= r13_1 && result.d s<= r15_1)
                int64_t r15_2 = sx.q(*(arg1 + 0xc8))
                int32_t rax_9 = (r15_2 + 1).d
                *(arg1 + 0xc8) = rax_9
                
                if (rax_9 s> *(arg1 + 0xcc))
                    sub_1405a4d70(arg1 + 0xc0)
                
                *(*(arg1 + 0xc0) + (r15_2 << 3)) = rax_7
                int32_t rcx_8 = *(arg1 + 0xe8)
                int32_t rax_12 = rcx_8 - i_1
                
                if (rax_12 != 1)
                    int64_t rcx_9 = *(arg1 + 0xe0)
                    memmove(rcx_9 + (sx.q(i_1) << 3), rcx_9 + (sx.q(rbp_1) << 3), (rax_12 - 1) << 3)
                    rcx_8 = *(arg1 + 0xe8)
                
                *(arg1 + 0xe8) = rcx_8 - 1
                sub_1405c53d0(arg1 + 0xe0)
                i_1 -= 1
                rbp_1 -= 1
                rcx_6 = arg_8.d - r8_4
                rsi_3 -= 8
                r15_1 = arg_18 - result.d
                result = zx.q(result_1)
                *(arg1 + 0xfc) -= result.d
                r13_1 -= rdx_6
                arg_8.d = rcx_6
                arg_18 = r15_1
                
                if (rcx_6 s< 4)
                    break
                
                if (r13_1 s< 4)
                    break
                
                if (r15_1 s< 4)
                    break
            
            i_1 += 1
            rbp_1 += 1
            rsi_3 = &rsi_3[1]
        while (i_1 s< *(arg1 + 0xe8))

return result
