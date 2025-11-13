// 函数: sub_1421fcac0
// 地址: 0x1421fcac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int32_t i_1 = 0
int64_t arg_8 = 0
void* rax_1
int512_t zmm3
rax_1, zmm3 = sub_140d2dfc0(sub_14249f2e0(), arg1, 0, 0, 0, 0, 0, 0, 0)
*(arg1 + 0x70) = rax_1

if (rax_1 != 0)
    void* rax_2 = sub_14249f2e0()
    void* rdx_1 = *(rax_1 + 0x10)
    int64_t rcx_1 = sx.q(*(rax_2 + 0x38))
    
    if (rcx_1.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rcx_1 << 3)) == rax_2 + 0x30)
        for (int32_t i = 0; i s< 2; i += 1)
            (*(*(rax_1 + 0x28) + 0x58))(rax_1 + 0x28, _mm_cvtepi32_ps(zx.o(i)))
            
            for (int32_t j = 0; j s< 3; j += 1)
                if (i != 0)
                    zmm3.o = zx.o(0)
                else
                    zmm3.o = 0x3f800000
                
                (*(*(rax_1 + 0x28) + 0x70))()
        
        *(rax_1 + 0x30) |= 2

sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8 = 0
void* result
int512_t zmm3_1
int128_t zmm6
result, zmm3_1, zmm6 = sub_140d2dfc0(sub_1424a03a0(), arg1, 0, 0, 0, 0, 0, 0, 0)
void* result_2 = result
*(arg1 + 0xa0) = result

if (result != 0)
    void* rax_6 = sub_1424a03a0()
    void* rdx_3 = *(result_2 + 0x10)
    result = sx.q(*(rax_6 + 0x38))
    
    if (result.d s<= *(rdx_3 + 0x38))
        void* result_1 = result
        result = *(rdx_3 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_6 + 0x30)
            do
                (*(*(result_2 + 0x28) + 0x58))(result_2 + 0x28, _mm_cvtepi32_ps(zx.o(i_1)))
                
                if (i_1 != 0)
                    zmm3_1.o = zx.o(0)
                else
                    zmm3_1.o = zmm6
                
                result = (*(*(result_2 + 0x28) + 0x70))()
                i_1 += 1
            while (i_1 s< 2)
            
            *(result_2 + 0x30) |= 2

return result
