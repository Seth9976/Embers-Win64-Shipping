// 函数: sub_1407e63e0
// 地址: 0x1407e63e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int64_t arg_10 = arg2
EnterCriticalSection(arg1 + 0x260)
int32_t rdi = 0
void* const rcx_4

if (*(arg1 + 0x210) == *(arg1 + 0x23c))
label_1407e6480:
    rcx_4 = nullptr
else
    int64_t r10_1 = arg_10
    void* r9_1 = arg1 + 0x240
    void* r8 = *(r9_1 + 8)
    
    if (r8 != 0)
        r9_1 = r8
    
    int32_t rax_5 =
        *(r9_1 + ((sx.q((r10_1 u>> 0x20).d * 0x17 + r10_1.d) & (sx.q(*(arg1 + 0x250)) - 1)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_1407e6480_1:
        rcx_4 = nullptr
    else
        int64_t r8_1 = *(arg1 + 0x208)
        
        while (true)
            int64_t rdx_2 = sx.q(rax_5) * 3
            rcx_4 = r8_1 + (rdx_2 << 3)
            
            if (*(r8_1 + (rdx_2 << 3)) == r10_1)
                break
            
            rax_5 = *(rcx_4 + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_1407e6480_2
        
        if (rax_5 == 0xffffffff)
        label_1407e6480_2:
            rcx_4 = nullptr

void* rdx_3 = rcx_4 + 8

if (rcx_4 == 0)
    rdx_3 = nullptr

if (rdx_3 == 0 || *rdx_3 s< arg_18)
    int64_t* var_38 = &arg_10
    int32_t* var_30_1 = &arg_18
    int32_t arg_8
    sub_1407d15a0(arg1 + 0x208, &arg_8, &var_38, nullptr)
    *(arg1 + 0x258) = 1
    
    if (*(arg1 + 0x210) - *(arg1 + 0x23c) s> 0xa)
        var_38 = nullptr
        int32_t var_30_2 = 0
        sub_1407d2e60(arg1 + 0x208, &var_38)
        
        if (var_30_2 s> 0)
            int32_t rax_9 = rand()
            rdi = var_30_2 - 1
            uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(var_30_2))
            uint128_t zmm2_1
            zmm2_1.d = _mm_cvtepi32_ps(zx.o(rax_9)).d f* 3.05185094e-05f
            zmm2_1.d = zmm2_1.d f* zmm0_1.d
            int32_t rax_10 = int.d(zmm2_1.d)
            
            if (rax_10 s<= rdi)
                rdi = rax_10
        
        int64_t* rdi_1 = var_38
        sub_1407c23d0(arg1 + 0x208, rdi_1[sx.q(rdi)])
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)

int32_t rdi_3 = *(arg1 + 0x210) - *(arg1 + 0x23c)

if (arg1 != -0x260)
    LeaveCriticalSection(arg1 + 0x260)

return zx.q(rdi_3)
