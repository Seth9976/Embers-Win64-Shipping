// 函数: sub_141f20b40
// 地址: 0x141f20b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((*(arg1 + 8) u>> 0xf).b & 1) == 0)
    int32_t rax_2 = *(arg1 + 0xc)
    void* const rax_9
    
    if (rax_2 s>= data_143e1d9b4)
        rax_9 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_2)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_4 = temp1_1 + rdx_2
        rax_9 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_2) * 0x18
    
    if (((*(rax_9 + 8) u>> 0x1c).b & 1) == 0)
        void* rax_12 = *(arg1 + 0xa8)
        
        if (rax_12 != 0)
        label_141f20bad:
            int64_t* rcx_5 = *(rax_12 + 0x1b0)
            
            if (rcx_5 != 0)
                (*(*rcx_5 + 0x10))(rcx_5, arg1)
        else
            rax_12 = sub_141ee69e0(arg1)
            
            if (rax_12 != 0)
                goto label_141f20bad

int64_t result = sub_141f43b40(arg1)

if ((*(arg1 + 0x208) & 0x10) != 0)
    void*** rax_14 = sub_141f88540()
    void** r8_1 = *rax_14
    result = r8_1[0xd](rax_14, arg1, r8_1)

if ((*(arg1 + 0x8a) & 8) == 0)
    return result

return sub_141dee7d0(arg1) __tailcall
