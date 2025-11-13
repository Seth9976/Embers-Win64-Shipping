// 函数: sub_14208c820
// 地址: 0x14208c820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x78))
uint32_t zmm4 = arg2[0]

if (result.d == 0)
    return result

uint32_t zmm2 = 0x7f7fc99e
char r10 = 0
int32_t j = 0
int32_t zmm3 = (zx.o(0)).d
int64_t r9 = result

if (result.d s> 0)
    int32_t* rbx_1 = *arg3
    int64_t rdi_1 = sx.q(arg3[1].d)
    int128_t* r8 = nullptr
    int64_t i
    
    do
        void* rdx_1 = &rbx_1[rdi_1]
        int32_t* rax = rbx_1
        
        if (rbx_1 == rdx_1)
        label_14208c891:
            arg2 = *(r8 + *(arg1 + 0x70))
            arg2[0] = arg2[0] f- zmm4
            uint32_t temp0_1[0x4] = _mm_and_ps(arg2, 0x7fffffff)
            
            if (not(temp0_1[0] f>= zmm2))
                zmm3 = arg2[0]
                zmm2 = temp0_1[0]
                r10 = 1
        else
            while (*rax != j)
                rax = &rax[1]
                
                if (rax == rdx_1)
                    goto label_14208c891
        
        j += 1
        r8 += 0x2c
        i = r9
        r9 -= 1
    while (i != 1)

*arg4 = zmm3
return zx.q(r10)
