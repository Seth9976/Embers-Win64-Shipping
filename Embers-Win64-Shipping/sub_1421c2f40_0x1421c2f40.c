// 函数: sub_1421c2f40
// 地址: 0x1421c2f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int32_t i = 0
int64_t arg_8 = 0
void* result
int512_t zmm3
result, zmm3 = sub_140d2dfc0(sub_1424a03a0(), arg1, 0, 0, 0, 0, 0, 0, 0)
*(arg1 + 0x60) = result
void* result_2 = result

if (result != 0)
    void* rax_1 = sub_1424a03a0()
    void* rdx_1 = *(result_2 + 0x10)
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s<= *(rdx_1 + 0x38))
        void* result_1 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_1 + 0x30)
            do
                zmm3.o = zx.o(0)
                result = (*(*(result_2 + 0x28) + 0x70))(result_2 + 0x28, 0, 
                    zx.q((*(*(result_2 + 0x28) + 0x58))(result_2 + 0x28, 
                        _mm_cvtepi32_ps(zx.o(i)))), 
                    zmm3)
                i += 1
            while (i s< 2)
            
            *(result_2 + 0x30) |= 2

return result
