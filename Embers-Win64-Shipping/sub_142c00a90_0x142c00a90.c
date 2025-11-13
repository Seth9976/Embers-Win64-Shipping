// 函数: sub_142c00a90
// 地址: 0x142c00a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg4
int128_t* result = sub_142c001a0(arg2 + 0x20)
int128_t* result_1 = result

if (arg3 != 0)
    void* r14_1 = arg6
    uint64_t i_1 = zx.q(arg3)
    uint64_t i
    
    do
        int16_t rax = sub_142bfdd70(result_1, *rsi, arg1)
        void* rcx_2 = *(arg1 + 0x18)
        int64_t rdi_1 = sx.q(*(arg1 + 0x24))
        uint32_t r8_1 = *(rcx_2 + 0x2c)
        
        if (r8_1 == 0)
            r8_1 = sub_142bf7870(rcx_2)
        
        int64_t rcx_4 = rdi_1 * sx.q(neg.w(rax))
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r8_1)
        int32_t rax_6 = (temp3_1 - temp2_1) s>> 1
        
        if (rcx_4 s< 0)
            rax_6 = neg.d(rax_6)
        
        rsi += zx.q(arg5)
        *r14_1 = (divs.dp.q(sx.o(sx.q(rax_6) + rcx_4), sx.q(r8_1))).d
        result = zx.q(arg7)
        r14_1 += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
