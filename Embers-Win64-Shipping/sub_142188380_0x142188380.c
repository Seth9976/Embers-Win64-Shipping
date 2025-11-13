// 函数: sub_142188380
// 地址: 0x142188380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x50)
int128_t zmm6 = zx.o(0)
(*(*rcx + 0x360))(rcx)
int64_t* rcx_1 = *(arg1 + 0x50)
uint128_t zmm7 = arg2
int32_t i = 0
int32_t r14 = (*(*rcx_1 + 0x368))(rcx_1)

if (*(arg1 + 0x40) s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int64_t* rbx_1 = *(rdi_1 + *(arg1 + 0x38))
        
        if (rbx_1 != 0)
            void* rax_4
            rax_4, arg2 = sub_142554ca0()
            void* rcx_2 = rbx_1[2]
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
                (*(*rbx_1 + 0x348))(rbx_1, rax_5)
                zmm6.d = zmm6.d f+ arg2.d
        
        int64_t* rbx_2 = *(rdi_1 + *(arg1 + 0x38))
        
        if (rbx_2 != 0)
            void* rax_9
            rax_9, arg2 = sub_1425568c0()
            void* rcx_4 = rbx_2[2]
            int64_t rax_10 = sx.q(*(rax_9 + 0x38))
            
            if (rax_10.d s<= *(rcx_4 + 0x38) && *(*(rcx_4 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
                (*(*rbx_2 + 0x360))(rbx_2, rax_10)
                zmm7.d = zmm7.d f+ arg2.d
                r14 += (*(*rbx_2 + 0x368))(rbx_2)
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg1 + 0x40))

void* rax_15 = *(arg1 + 0x30)
int32_t zmm3 = (zx.o(0)).d
int32_t rcx_7

if (rax_15 != 0)
    rcx_7 = *(rax_15 + 0xe4)
    zmm3 = __maxss_xmmss_memss(*(rax_15 + 0xf4), *(rax_15 + 0x5c))
    arg2.d = _mm_cvtepi32_ps(zx.o(rcx_7)).d f* zmm3

int32_t result
uint128_t zmm1

if (rax_15 == 0 || arg2.d f== 0f)
    int32_t rax_29
    
    if (not(zmm6.d f>= zmm3))
        zmm6.d = zmm6.d f+ zmm6.d
        arg2.d = zmm7.d f+ zmm7.d
        zmm1.d = -0.5f f- arg2.d
        zmm1.d = _mm_cvtepi32_ps(zx.o(neg.d(int.d(zmm1.d) s>> 1))).d f* zmm6.d
        arg2.d = -0.5f f- zmm1.d
        rax_29 = neg.d(int.d(arg2.d) s>> 1)
    else if (zmm6.d f== 0f)
        arg2.d = zmm7.d f+ zmm7.d
        zmm1.d = -0.5f f- arg2.d
        rax_29 = neg.d(int.d(zmm1.d) s>> 1)
    else
        zmm1.d = zmm7.d f* zmm3
        zmm1.d = zmm1.d f+ zmm1.d
        arg2.d = -0.5f f- zmm1.d
        int32_t rax_28 = int.d(arg2.d) s>> 1
        
        if (zmm6.d f<= zmm3)
            rax_29 = neg.d(rax_28)
        else
            arg2.d = _mm_cvtepi32_ps(zx.o(rax_28)).d f* zmm6.d
            rax_29 = int.d((arg2 ^ data_142d3f780).d)
    
    zmm7.d = zmm7.d f* 0.064000003f
    int32_t rcx_13 = 2
    int32_t rdx_5 = neg.d(int.d(-0.5f f- zmm7.d) s>> 1)
    
    if (rdx_5 s>= 2)
        rcx_13 = rdx_5
    
    result = rax_29 + rcx_13 + r14
else
    if (rcx_7 == 1)
        if (zmm6.d f>= zmm3)
            zmm7.d = zmm7.d f+ zmm7.d
            zmm7.d = zmm7.d f* zmm3
            arg2.d = -0.5f f- zmm7.d
        else
            zmm6.d = zmm6.d f+ zmm6.d
            zmm6.d = zmm6.d f* zmm7.d
            arg2.d = -0.5f f- zmm6.d
        
        *(arg1 + 0xb4) = r14 - (int.d(arg2.d) s>> 1) + 1
        return r14 - (int.d(arg2.d) s>> 1) + 1
    
    float zmm2 = zmm6.d f+ zmm6.d
    int32_t rcx_8
    
    if (zmm6.d f>= zmm3)
        zmm7.d = zmm7.d f+ zmm7.d
        zmm7.d = zmm7.d f* zmm3
        arg2.d = -0.5f f- zmm7.d
        arg2.d = float.s(neg.d(int.d(arg2.d) s>> 1))
        arg2.d = arg2.d f* zmm2
        zmm1.d = -0.5f f- arg2.d
        rcx_8 = int.d(zmm1.d)
    else
        zmm7.d = zmm7.d f* zmm2
        arg2.d = -0.5f f- zmm7.d
        rcx_8 = int.d(arg2.d)
    
    result = r14 - (rcx_8 s>> 1) + 1
    
    if (not(zmm6.d f<= zmm3))
        zmm6.d = zmm6.d f- zmm3
        zmm6.d = zmm6.d f* 2f
        result -= (int.d(-0.5f f- zmm6.d) s>> 1) * r14
*(arg1 + 0xb4) = result
return result
