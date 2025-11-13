// 函数: sub_142c0fe00
// 地址: 0x142c0fe00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg6)
int32_t* r9 = arg2

if (result.d != 0)
    uint64_t i_1 = zx.q(result.d)
    void* r14_1 = arg1 + 6
    int32_t* r15_1 = arg5
    int128_t zmm6
    int128_t var_38_1 = zmm6
    uint64_t result_1 = result
    uint64_t i
    
    do
        uint32_t rdx_2 = (zx.d(*r14_1) << 8) + zx.d(*(r14_1 + 1))
        result = zx.q(arg4[3])
        
        if (rdx_2 u< (zx.d(arg4[2]) << 8) + result.d)
            uint64_t rbx_1 = 0
            zmm6 = 0x3f800000
            uint32_t j = (zx.d(*arg4) << 8) + zx.d(arg4[1])
            result = zx.q(j * rdx_2)
            void* r13_1 = &arg4[result * 6]
            
            if (j != 0)
                int32_t* rdi_1 = r9
                
                do
                    int32_t rdx_3
                    
                    if (rbx_1.d u>= arg3)
                        rdx_3 = 0
                    else
                        rdx_3 = *rdi_1
                    
                    float zmm0_1
                    zmm0_1, result =
                        sub_142bfd760(((rbx_1 + ((rbx_1 + 1) << 1)) << 1) + r13_1, rdx_3)
                    zmm0_1 - 0f
                    
                    if (not(is_unordered.d(zmm0_1, 0f)) && zmm0_1 == 0f)
                        zmm6 = zx.o(0)
                        break
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                    zmm6.d = zmm6.d f* zmm0_1
                    rdi_1 = &rdi_1[1]
                while (rbx_1.d u< j)
                
                i_1 = result_1
        else
            zmm6 = zx.o(0)
        
        r9 = arg2
        r14_1 += 2
        *r15_1 = zmm6.d
        r15_1 = &r15_1[1]
        i = i_1
        i_1 -= 1
        result_1 = i_1
    while (i != 1)

return result
