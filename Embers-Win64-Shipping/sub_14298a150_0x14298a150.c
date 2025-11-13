// 函数: sub_14298a150
// 地址: 0x14298a150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = arg1 + 0xd
int32_t rsi = 0
int64_t result_1 = sx.q(result)

if (result_1 s> 0xd)
    void* rdi_1 = arg3 - arg2
    int16_t* rbx_1 = arg2 + 0x14
    int64_t i_1 = result_1 - 0xd
    int64_t i
    
    do
        uint16_t rdx_5
        
        if ((rsi.b & 1) == 0)
            *(rdi_1 + rbx_1 - 0x14) = rbx_1[0x2a]
            rdx_5 = rbx_1[0x2c]
        else
            float zmm1 = *((zx.q(rbx_1[-0xa]) << 2) + &data_1436bbc50) * 0.00212799991f
                - *((zx.q(rbx_1[-2]) << 2) + &data_1436bbc50) * 0.00754000014f
                + *((zx.q(rbx_1[6]) << 2) + &data_1436bbc50) * 0.0195969995f
            zmm1 = zmm1 - *((zx.q(rbx_1[0xe]) << 2) + &data_1436bbc50) * 0.0431590006f
                + *((zx.q(rbx_1[0x16]) << 2) + &data_1436bbc50) * 0.0879290029f
                - *((zx.q(rbx_1[0x1e]) << 2) + &data_1436bbc50) * 0.186076999f
                + *((zx.q(rbx_1[0x26]) << 2) + &data_1436bbc50) * 0.627122998f
            zmm1 = zmm1 + *((zx.q(rbx_1[0x2e]) << 2) + &data_1436bbc50) * 0.627122998f
                - *((zx.q(rbx_1[0x36]) << 2) + &data_1436bbc50) * 0.186076999f
                + *((zx.q(rbx_1[0x3e]) << 2) + &data_1436bbc50) * 0.0879290029f
                - *((zx.q(rbx_1[0x46]) << 2) + &data_1436bbc50) * 0.0431590006f
            zmm1 = zmm1 + *((zx.q(rbx_1[0x4e]) << 2) + &data_1436bbc50) * 0.0195969995f
                - *((zx.q(rbx_1[0x56]) << 2) + &data_1436bbc50) * 0.00754000014f
                + *((zx.q(rbx_1[0x5e]) << 2) + &data_1436bbc50) * 0.00212799991f
            zmm1 - 0f
            uint16_t rdx_1
            
            if (is_unordered.d(zmm1, 0f) || zmm1 != 0f)
                int16_t r8 = *((zx.q(zmm1) u>> 0x17 << 1) + &data_1436fbc50)
                
                if (r8 == 0)
                    rdx_1 = sub_142c998f0(zmm1)
                else
                    int32_t rcx_1 = zmm1 & 0x7fffff
                    rdx_1 = ((rcx_1 + 0xfff + (rcx_1 u>> 0xd & 1)) u>> 0xd).w + r8
            else
                rdx_1 = (zmm1 u>> 0x10).w
            
            *(rdi_1 + rbx_1 - 0x14) = rdx_1
            zmm1 = *((zx.q(rbx_1[-8]) << 2) + &data_1436bbc50) * 0.00212799991f
                - *((zx.q(*rbx_1) << 2) + &data_1436bbc50) * 0.00754000014f
                + *((zx.q(rbx_1[8]) << 2) + &data_1436bbc50) * 0.0195969995f
            zmm1 = zmm1 - *((zx.q(rbx_1[0x10]) << 2) + &data_1436bbc50) * 0.0431590006f
                + *((zx.q(rbx_1[0x18]) << 2) + &data_1436bbc50) * 0.0879290029f
                - *((zx.q(rbx_1[0x20]) << 2) + &data_1436bbc50) * 0.186076999f
                + *((zx.q(rbx_1[0x28]) << 2) + &data_1436bbc50) * 0.627122998f
            zmm1 = zmm1 + *((zx.q(rbx_1[0x30]) << 2) + &data_1436bbc50) * 0.627122998f
                - *((zx.q(rbx_1[0x38]) << 2) + &data_1436bbc50) * 0.186076999f
                + *((zx.q(rbx_1[0x40]) << 2) + &data_1436bbc50) * 0.0879290029f
                - *((zx.q(rbx_1[0x48]) << 2) + &data_1436bbc50) * 0.0431590006f
            zmm1 = zmm1 + *((zx.q(rbx_1[0x50]) << 2) + &data_1436bbc50) * 0.0195969995f
                - *((zx.q(rbx_1[0x58]) << 2) + &data_1436bbc50) * 0.00754000014f
                + *((zx.q(rbx_1[0x60]) << 2) + &data_1436bbc50) * 0.00212799991f
            zmm1 - 0f
            
            if (is_unordered.d(zmm1, 0f) || zmm1 != 0f)
                int16_t r8_1 = *((zx.q(zmm1) u>> 0x17 << 1) + &data_1436fbc50)
                
                if (r8_1 == 0)
                    rdx_5 = sub_142c998f0(zmm1)
                else
                    int32_t rcx_3 = zmm1 & 0x7fffff
                    rdx_5 = ((rcx_3 + 0xfff + (rcx_3 u>> 0xd & 1)) u>> 0xd).w + r8_1
            else
                rdx_5 = (zmm1 u>> 0x10).w
        
        *(rdi_1 + rbx_1 - 0x10) = rdx_5
        rsi += 1
        *(rdi_1 + rbx_1 - 0x12) = rbx_1[0x2b]
        result = zx.d(rbx_1[0x2d])
        *(rdi_1 + rbx_1 - 0xe) = result.w
        rbx_1 = &rbx_1[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
