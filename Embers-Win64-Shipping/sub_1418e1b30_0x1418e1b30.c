// 函数: sub_1418e1b30
// 地址: 0x1418e1b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = data_1439c7248
int64_t* rbp = arg4
void* r14 = arg3
int32_t rbx = 0
int32_t result

if (r15 s<= 0)
label_1418e1bf8:
    result = sub_1418db2e0(*arg1[1], arg2, r14, rbp, arg5)
    
    while (result.b == 0)
        float zmm3 = arg1[4].d
        float zmm2
        
        if (zmm3 <= 0f)
            zmm2 = (zx.o(0)).d
        else
            zmm2 = 2f
        
        void* rcx_3 = *arg1[1]
        uint128_t zmm1_1
        zmm1_1.d = _mm_cvtepi32_ps(zx.o(*(rcx_3 + 0x78) - *(rcx_3 + 0xa4))).d
            f/ float.s(zx.q(*(rcx_3 + 0x10)))
        zmm1_1.d = _mm_max_ss(zmm1_1.d, 0x3f000000).d f+ zmm3 * zmm2
        zmm1_1.d = zmm1_1.d f/ (zmm2 + 1f)
        arg1[4].d = zmm1_1.d
        sub_1418d9470(arg1)
        result = sub_1418db2e0(*arg1[1], arg2, r14, rbp, arg5)
else
    int32_t r12_1 = arg1[2].d
    int64_t* rdi_1 = nullptr
    
    while (true)
        if (rbx s< r12_1)
            void* r14_1 = *(rdi_1 + arg1[1])
            int32_t var_88
            sub_1418e0b70(r14_1 + 0x20, &var_88, arg2)
            int64_t rax_2 = sx.q(var_88)
            void* rax_4
            
            if (rax_2.d == 0xffffffff)
                rax_4 = nullptr
            else
                rax_4 = rax_2 * 0x68 + *(r14_1 + 0x20)
            
            void* const rdx_1 = rax_4 + 0x18
            
            if (rax_4 == 0)
                rdx_1 = nullptr
            
            if (rdx_1 != 0)
                memcpy(arg5, rdx_1, *(rdx_1 + 0x40) << 3)
                result = data_14399fa54
                *(r14_1 + 0xc0) = result
                break
            
            rbx += 1
            rdi_1 = &rdi_1[1]
            
            if (rbx s< r15)
                continue
        
        r14 = arg3
        rbp = arg4
        goto label_1418e1bf8

return result
