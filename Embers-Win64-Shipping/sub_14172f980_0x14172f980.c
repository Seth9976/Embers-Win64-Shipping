// 函数: sub_14172f980
// 地址: 0x14172f980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1
uint128_t zmm7 = arg2
uint64_t i_6 = zx.q(arg3)

if (rdi[0x11].b != 0)
    sub_14175a890(rdi, 0)

void* var_58 = &rdi[0x3c]
int64_t* var_50
__builtin_memset(&var_50, 0, 0x15)
int32_t var_38 = 0
sub_141750820(&var_58)
void* i_3
void* i = i_3
int32_t var_34
int32_t var_30
uint128_t zmm2

if (i != 0)
    int64_t* r8 = var_50
    
    do
        int32_t var_40_1
        int64_t rcx_2 = sx.q(var_40_1)
        
        if (*(rcx_2 + *(i + 0x398)) == 4)
            zmm2 = *(*(i + 0x2c0) + (rcx_2 << 2))
            int64_t rcx_3 = rcx_2 * 3
            int64_t rax_3 = *(i + 0x230)
            uint128_t zmm0_1
            zmm0_1.d = zmm2.d f* *(arg1 + 0x3c)
            arg2.d = arg1[8].d.d f* zmm2.d
            zmm0_1.d = zmm0_1.d f+ *(rax_3 + (rcx_3 << 2))
            arg2.d = arg2.d f+ *(rax_3 + (rcx_3 << 2) + 4)
            float zmm3 = *(arg1 + 0x44) f* zmm2.d f+ *(rax_3 + (rcx_3 << 2) + 8)
            *(rax_3 + (rcx_3 << 2)) = zmm0_1.d
            *(rax_3 + (rcx_3 << 2) + 4) = arg2.d
            *(rax_3 + (rcx_3 << 2) + 8) = zmm3
        
        if (r8 != 0)
            int32_t rax_10 = var_30 + 1
            var_30 = rax_10
            
            if (rax_10 s>= r8[1].d)
            label_14172fa7a:
                var_38 += 1
                sub_141750820(&var_58)
                r8 = var_50
                i = i_3
            else
                int64_t* rdx_1 = *(*r8 + (sx.q(rax_10) << 3))
                void* rcx_12 = *rdx_1
                int32_t var_70_2 = rdx_1[1].d
                
                if (rcx_12 == 0)
                    char var_6c_2 = 0
                    i_3.o = rcx_12.o
                else
                    char var_6c_1 = *(rcx_12 + 0x40)
                    i_3.o = rcx_12.o
                
                i = i_3
        else
            int32_t rax_5 = var_40_1 + 1
            var_40_1 = rax_5
            
            if (rax_5 s>= var_34)
                goto label_14172fa7a
    while (i != 0)

uint128_t zmm6
uint128_t var_18 = zmm6

if (i_6.d s> 0)
    zmm6 = 0x3f800000
    uint64_t i_5 = i_6
    uint64_t i_1
    
    do
        zmm2.d = zmm6.d f/ _mm_cvtepi32_ps(zx.o(i_6.d)).d
        zmm6, zmm7 = sub_14172fca0(arg1, zmm7)
        i_6 = zx.q(i_6.d - 1)
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

int64_t* rbx = *arg1

if (rbx[0x11].b != 0)
    sub_14175a890(rbx, 0)

int64_t* var_50_1
__builtin_memset(&var_50_1, 0, 0x15)
var_58 = &rbx[0x3c]
int32_t var_38_1 = 0
uint32_t result = sub_141750820(&var_58)
void* i_4
void* i_2 = i_4

if (i_2 != 0)
    int64_t* r9_1 = var_50_1
    zmm6 = zx.o(0)
    
    do
        uint32_t result_1
        int64_t result_2 = sx.q(result_1)
        
        if (*(result_2 + *(i_2 + 0x398)) == 4)
            int64_t rdx = result_2 * 3
            int32_t var_80_1 = 0
            int64_t rcx_8 = *(i_2 + 0x230)
            int32_t var_70_1 = 0
            *(rcx_8 + (rdx << 2)) = (_mm_unpacklo_ps(zmm6, zmm6.q)).q
            *(rcx_8 + (rdx << 2) + 8) = 0
            int64_t rcx_9 = *(i_2 + 0x248)
            *(rcx_9 + (rdx << 2)) = (_mm_unpacklo_ps(zmm6, zmm6.q)).q
            *(rcx_9 + (rdx << 2) + 8) = 0
        
        if (r9_1 != 0)
            int32_t rax_15 = var_30 + 1
            var_30 = rax_15
            
            if (rax_15 s>= r9_1[1].d)
            label_14172fbbb:
                var_38_1 += 1
                result = sub_141750820(&var_58)
                r9_1 = var_50_1
                i_2 = i_4
            else
                int64_t* rdx_2 = *(*r9_1 + (sx.q(rax_15) << 3))
                void* rcx_14 = *rdx_2
                int32_t var_60_1 = rdx_2[1].d
                
                if (rcx_14 == 0)
                    result = 0
                    char var_5c_2 = 0
                    i_4.o = rcx_14.o
                else
                    result = zx.d(*(rcx_14 + 0x40))
                    char var_5c_1 = result.b
                    i_4.o = rcx_14.o
                
                i_2 = i_4
        else
            result = result_1 + 1
            result_1 = result
            
            if (result s>= var_34)
                goto label_14172fbbb
    while (i_2 != 0)

return result
