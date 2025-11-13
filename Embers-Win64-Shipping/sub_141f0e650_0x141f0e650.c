// 函数: sub_141f0e650
// 地址: 0x141f0e650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1
zmm1.o = zx.o(0)

if (not(0f f!= arg1[0x40].d))
    int32_t zmm0 = *(arg1 + 0x1fc)
    
    if (not(zmm0 f<= 0f))
        if ((arg1[0x41].b & 4) != 0 || arg1[0x80] != 0)
            zmm0 = (zx.o(0)).d
        
        arg1[0x40].d = zmm0

sub_141ede5c0(arg1)
(*(*arg1 + 0x498))(arg1, zmm1)

if (sub_141f4ac00(arg1) != 0 && (sub_141f4ac80(arg1) != 0 || (*(arg1 + 0x20c) & 0x20) != 0))
    if (arg2 == 0)
        void* rax_5 = arg1[0x15]
        
        if (rax_5 == 0)
            rax_5 = sub_141ee69e0(arg1)
        
        int64_t* rcx_5 = *(rax_5 + 0x1b0)
        (**rcx_5)(rcx_5, arg1)
    else
        int64_t rsi_1 = sx.q(*(arg2 + 0x10))
        int32_t rax_3 = (rsi_1 + 1).d
        *(arg2 + 0x10) = rax_3
        
        if (rax_3 s> *(arg2 + 0x14))
            sub_1405a4d70(arg2 + 8)
        
        *(*(arg2 + 8) + (rsi_1 << 3)) = arg1

uint64_t result = zx.q(arg1[0x41].b)

if ((result.b & 0x40) == 0)
    if (*(arg1 + 0x14f) != 0 || (result.b & 0x20) != 0)
    label_141f0e760:
        result = sub_141f8ca20()
        
        if (result != 0)
            jump(*(*result + 0x78))
    else if ((result.b & 8) == 0)
        void* rcx_6 = arg1[0x14]
        
        if (rcx_6 != 0)
            result = sub_141dc9840(rcx_6)
            
            if (result != 0 && (*(result + 0x1f4) & 0x10) != 0)
                goto label_141f0e760

return result
