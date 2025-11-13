// 函数: sub_141f3e200
// 地址: 0x141f3e200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0x16]
void* rsi = nullptr
void* const rdi_1

if (rdi == 0)
    rdi_1 = nullptr
else
    rdi_1 = *(rdi + 0xa0)

if ((*(*arg1 + 0x510))() != 0 && rdi_1 != 0)
    int32_t rax_2 = *(rdi_1 + 0xc)
    void* const rax_9
    
    if (rax_2 s>= data_143e1d9b4)
        rax_9 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_2)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_4 = temp1_1 + rdx_1
        rax_9 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_1) * 0x18
    
    if (((*(rax_9 + 8) u>> 0x1d).b & 1) == 0)
        (*(*arg1 + 0x458))(arg1, arg2, arg3, arg4, arg5)
        int32_t rax_13 = *(rdi_1 + 0xc)
        
        if (rax_13 s< data_143e1d9b4)
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rax_13)
            uint32_t rdx_5 = zx.d(temp2_1)
            int32_t rax_15 = temp3_1 + rdx_5
            rsi = *(data_143e1d9a0 + (sx.q(rax_15 s>> 0x10) << 3))
                + sx.q(zx.d(rax_15.w) - rdx_5) * 0x18
        
        if (((*(rsi + 8) u>> 0x1d).b & 1) == 0 && arg1[0x16] != 0 && (*(arg1 + 0x8a) & 1) != 0
                && (*arg2 & 2) == 0)
            *arg6 = (1f f- *(arg2 + 8)) f* arg3.d
            return 0

return 2
