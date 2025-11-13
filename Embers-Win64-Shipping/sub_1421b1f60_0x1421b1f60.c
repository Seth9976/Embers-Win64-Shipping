// 函数: sub_1421b1f60
// 地址: 0x1421b1f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg2 + 0x28)
void* rdx = *(*(arg2 + 0x10) + 0x1b0)
int32_t rbx_1

if (rdx == 0)
    void* rax_1 = *(rcx + 0x30)
    rbx_1 = *(rax_1 + 0xb4) * *(rax_1 + 0xb0)
else
    rbx_1 = *(rdx + 0x34) * *(rdx + 0x30)

uint128_t zmm1 = *arg6
uint64_t result
uint128_t zmm0
bool cond:1_1

if (arg5 - 1 u<= 1)
    void* rsi_1 = *(arg2 + 0x18)
    
    if ((*(arg1 + 0x68) & 1) != 0)
        void* rbx_3 = *(rsi_1 + 0xa8)
        
        if (rbx_3 != 0)
        label_1421b20b6:
            
            if (sub_142437e30(rbx_3, 0, 1) == 0)
                zmm1 = *(arg4 + 0xc)
                rsi_1 = *(arg2 + 0x18)
            else
                int64_t* rax_11
                int32_t zmm0_1
                rax_11, zmm0_1 = sub_142437e30(rbx_3, 0, 1)
                rsi_1 = *(arg2 + 0x18)
                int64_t rdx_2 = *rax_11
                (*(rdx_2 + 0x638))(rax_11, rdx_2)
                zmm1.d = 1f f/ zmm0_1
                zmm1.d = zmm1.d f* *(arg4 + 0xc)
        else
            void* rax_9 = sub_141ee69e0(rsi_1)
            rbx_3 = rax_9
            
            if (rax_9 != 0)
                goto label_1421b20b6
            
            zmm1 = *(arg4 + 0xc)
            rsi_1 = *(arg2 + 0x18)
    else
        zmm1 = *(arg4 + 0xc)
    
    zmm0, result = sub_141fe5610(arg1 + 0x38, zmm1, rsi_1, nullptr)
    cond:1_1 = arg5 != 1
label_1421b210c:
    
    if (not(cond:1_1))
        return truncf(zmm0.d)
else
    result = zx.q(arg5 - 3)
    
    if (result.d u<= 1)
        result = *(rcx + 0x30)
        int32_t zmm3 = *(result + 0xb8)
        float zmm2
        
        if (not(zmm3 f== 0f))
            zmm2 = *(arg6 + 4)
            zmm0.d = (*(arg4 + 0xc)).d f- zmm2
        
        if (zmm3 f== 0f || zmm0.d f> zmm3 || not(zmm2 != 0f))
            void* rax_3 = sub_1421b7cc0(arg2, arg1)
            void* rcx_2 = rax_3
            
            if (rax_3 == 0)
                rcx_2 = *(arg2 + 0x18) + 0x610
            
            int32_t rax_8
            
            if (rbx_1 s<= 0)
                rax_8 = 0
            else
                int32_t rax_4 = *(rcx_2 + 4) * 0xbb38435
                zmm0 = _mm_cvtepi32_ps(zx.o(rbx_1))
                *(rcx_2 + 4) = rax_4 + 0x3619636b
                rax_8 = int.d((((rax_4 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) f* zmm0.d)
            
            result = zx.q(*(arg4 + 0xc))
            zmm1 = _mm_cvtepi32_ps(zx.o(rax_8))
            *(arg6 + 4) = result.d
        
        zmm0 = zmm1
        cond:1_1 = arg5 != 3
        goto label_1421b210c
return result
