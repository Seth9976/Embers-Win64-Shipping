// 函数: sub_14283926c
// 地址: 0x14283926c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int128_t zmm6
int128_t var_18 = zmm6

if (*(arg1 + 0xd90) s> 0)
    do
        int64_t i_1 = sx.q(i)
        int32_t j = 0
        int64_t r14_1 = sx.q(sub_140a77ee0(arg1 + ((i_1 + ((i_1 + 0x79) << 1)) << 3)))
        zmm6 = zx.o(0)
        
        if (*(arg1 + 0xd90) s> 0)
            void* rsi_1 = arg1 + 0x790
            
            do
                if (zx.d(*rsi_1) == r14_1.d)
                    int64_t j_1 = sx.q(j)
                    int64_t zmm0
                    zmm0, zmm6 =
                        sub_142837e50(arg1 + ((j_1 + ((j_1 + 0x79) << 1)) << 3), *(arg1 + 8), arg1)
                    zmm6.d = zmm6.d f+ zmm0.d
                
                j += 1
                rsi_1 += 0x18
            while (j s< *(arg1 + 0xd90))
        
        *(((r14_1 + 1) << 5) + arg1) = fconvert.d(zmm6.d)
        sub_14283970c(arg1, r14_1.d)
        i += 1
    while (i s< *(arg1 + 0xd90))

return 0
