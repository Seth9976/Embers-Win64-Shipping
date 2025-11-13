// 函数: sub_1421fccb0
// 地址: 0x1421fccb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
void* result
int512_t zmm3
int128_t zmm6
result, zmm3, zmm6 = sub_140d2dfc0(sub_14249f2e0(), arg1, 0, 0, 0, 0, 0, 0, 0)
*(arg1 + 0x70) = result
void* result_1 = result

if (result != 0)
    result = sub_14249f2e0()
    void* rdx_1 = *(result_1 + 0x10)
    int64_t rcx_1 = sx.q(*(result + 0x38))
    void* r8_1 = result + 0x30
    
    if (rcx_1.d s<= *(rdx_1 + 0x38))
        result = *(rdx_1 + 0x30)
        
        if (*(result + (rcx_1 << 3)) == r8_1)
            int32_t i = 0
            int128_t var_28_1 = zmm6
            
            do
                int32_t rax_2 =
                    (*(*(result_1 + 0x28) + 0x58))(result_1 + 0x28, _mm_cvtepi32_ps(zx.o(i)))
                
                for (int32_t j = 0; j s< 3; j += 1)
                    zmm3.o = 0x3f800000
                    result =
                        (*(*(result_1 + 0x28) + 0x70))(result_1 + 0x28, zx.q(j), zx.q(rax_2), zmm3)
                
                i += 1
            while (i s< 2)
            
            *(result_1 + 0x30) |= 2

return result
