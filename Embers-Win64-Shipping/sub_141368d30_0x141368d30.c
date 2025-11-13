// 函数: sub_141368d30
// 地址: 0x141368d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*arg1)
uint128_t zmm1 = zx.o(arg2[2])
arg2[3].d
uint64_t var_58 = *arg2
uint128_t zmm0 = *arg2
int32_t rdx

if (rbx.d u> 0x30)
    rdx = *(rbx * 0x14 + 0x143f025f8)
else
    switch (rbx)
        case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
            rdx = 3
        case 1, 3, 5, 7, 8, 9, 0xa, 0x13, 0x17, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
                0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
            rdx = *(rbx * 0x14 + 0x143f025f8)
        case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
            rdx = 1

int64_t rcx_3 = zmm0.q
uint128_t var_28
uint64_t var_18

if ((rcx_3 u>> 8).b == 0)
    uint128_t var_48
    
    if ((rcx_3 u>> 0x10).b != 0 || (rcx_3 u>> 0x28).b != 0)
        var_48:0xc.b = 1
    
    uint64_t var_38
    var_38.b = (zmm1.q u>> 0x20).d - 8 u> 1
    
    if (rdx s<= 1)
        int32_t rax_10 = var_38:4.d
        
        if (rax_10 != 8)
            rax_10 = 0
        
        var_38:4.d = rax_10
    
    var_48:8.b = zmm0:8.b
    zmm1.q = 1
    var_18 = var_38
    var_28 = zmm1
else
    var_18 = zmm1.q
    var_28 = *arg2

uint64_t result

if (var_28.b != *arg2)
    result.b = 0
else
    int32_t rcx_5 = var_28.d
    
    if ((zx.q(rcx_5) u>> 8).b != *(arg2 + 1) || (zx.q(rcx_5) u>> 0x10).b != *(arg2 + 2)
            || (zx.q(rcx_5) u>> 0x18).b != *(arg2 + 3))
        result.b = 0
    else
        int64_t rcx_6 = var_28.q
        
        if ((rcx_6 u>> 0x20).b != *(arg2 + 4) || (rcx_6 u>> 0x28).b != *(arg2 + 5)
                || (rcx_6 u>> 0x30).b != *(arg2 + 6) || (rcx_6 u>> 0x38).b != *(arg2 + 7)
                || (var_28:8.q u>> 0x20).b != *(arg2 + 0xc) || var_18.b != arg2[2].b
                || (var_18 u>> 0x20).d != *(arg2 + 0x14))
            result.b = 0
        else if ((var_58 u>> 0x30).b == 0)
        label_141368f17:
            uint8_t rdx_2 = (var_58 u>> 0x38).b
            int64_t rcx_9
            
            if (rdx_2 != 0 && rbx.d != 0xb && rbx.d != 0x1e)
                rcx_9 = rbx * 5
            
            if (rdx_2 != 0 && rbx.d != 0xb && rbx.d != 0x1e && (
                    *((rcx_9 << 2) + &data_143f025f0) != data_143f025b8
                    || (*((rcx_9 << 2) + &data_143f025fc) & 1) == 0))
                result.b = 0
            else
                uint8_t rcx_11 = (var_58 u>> 8).b
                
                if (rcx_11 == 0 || (var_58.b == 0 && (var_58 u>> 0x10).b == 0
                        && (var_58 u>> 0x18).b == 0 && (var_58 u>> 0x20).b == 0
                        && (var_58 u>> 0x28).b == 0 && rdx_2 == 0
                        && (rcx_11 == 0 || (*(arg2 + 0xc) == rdx_2 && arg2[2].b == rdx_2))))
                    result.b = 1
                else
                    result.b = 0
        else
            if (sub_14128e090(rbx.d).b != 0)
                goto label_141368f17
            
            result.b = 0

return result
