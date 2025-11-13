// 函数: sub_14208c560
// 地址: 0x14208c560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x78))
int32_t* rsi = arg4
uint32_t zmm4 = arg2[0]

if (result.d == 0)
    return result

uint32_t zmm2 = 0x7f7fc99e
arg4.b = 0
int32_t i = 0
int32_t zmm3 = (zx.o(0)).d

if (result.d s> 0)
    int32_t* rbx_1 = *arg3
    int64_t r8 = 0
    int64_t rdi_1 = sx.q(arg3[1].d)
    
    do
        void* rdx_1 = &rbx_1[rdi_1]
        int32_t* rax = rbx_1
        
        if (rbx_1 == rdx_1)
        label_14208c5d1:
            arg2 = *(*(arg1 + 0x70) + (r8 << 3))
            arg2[0] = arg2[0] f- zmm4
            uint32_t temp0_1[0x4] = _mm_and_ps(arg2, 0x7fffffff)
            
            if (not(temp0_1[0] f>= zmm2))
                zmm3 = arg2[0]
                zmm2 = temp0_1[0]
                arg4.b = 1
        else
            while (*rax != i)
                rax = &rax[1]
                
                if (rax == rdx_1)
                    goto label_14208c5d1
        
        i += 1
        r8 += 1
    while (r8 s< result)

*rsi = zmm3
return zx.q(arg4.b)
