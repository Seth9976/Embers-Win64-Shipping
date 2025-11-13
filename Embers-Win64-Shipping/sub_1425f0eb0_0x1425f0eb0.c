// 函数: sub_1425f0eb0
// 地址: 0x1425f0eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg2
int64_t r14 = 0
uint128_t zmm6 = 0x416312d000000000

while (true)
    while (**(arg1 + 0x1c8) != 0)
        int64_t* rcx_2
        
        if (**(arg1 + 0x1c8) != 0)
            rcx_2 = **(arg1 + 0x1c8) + 8
        else
            rcx_2 = nullptr
        
        void* rcx_4 = *rcx_2
        int32_t rax_4 = 0
        
        if (0 == *(rcx_4 + 4))
            *(rcx_4 + 4) = 0
        else
            rax_4 = *(rcx_4 + 4)
        
        if (rax_4 != 3)
            break
        
        void* rdx_1 = **(arg1 + 0x1c8)
        
        if (rdx_1 != 0)
            r13 = *(rdx_1 + 8)
            int64_t rcx_5 = *(arg1 + 0x1c8)
            *(arg1 + 0x1c8) = rdx_1
            *(rdx_1 + 8) = 0
            j_sub_140a74f90(rcx_5)
        
        int64_t var_90
        __builtin_memset(&var_90, 0, 0x24)
        int32_t var_b8 = 1
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        double zmm0[0x2] = zx.o(0)
        zmm0[0] = float.d(performanceCount)
        zmm0[0] = zmm0[0] f* data_143d796f8
        zmm0[0] = zmm0[0] f* zmm6.q
        zmm0[0] = zmm0[0] f+ 0x42e312d000000010
        int64_t rcx_7 = int.q(zmm0[0])
        
        if (rcx_7 != -0x8000000000000000 && not(float.d(rcx_7) f== zmm0[0]))
            uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
            zmm0 = zx.o(0)
            zmm0[0] = float.d(rcx_7 - (zx.q(temp0_2) & 1))
        
        int64_t rcx_9 = int.q(zmm0[0])
        int64_t var_b0_1 = r13[2]
        int64_t var_a8_1 = r13[3]
        int64_t var_a0_1 = r13[0xa]
        r13[0xb] = rcx_9
        int64_t* rbx_1 = r13[6]
        int64_t var_98_1 = rcx_9
        int64_t* arg_20 = rbx_1
        r13[6] = 0
        EnterCriticalSection(arg1 + 8)
        int64_t* rsi_1 = *(arg1 + 0x30)
        uint64_t r12_2 = sx.q(*(arg1 + 0x38)) << 3 u>> 3
        
        if (rsi_1 u> &rsi_1[sx.q(*(arg1 + 0x38))])
            r12_2 = 0
        
        if (r12_2 != 0)
            do
                int64_t* rcx_11 = *rsi_1
                (**rcx_11)(rcx_11, &var_b8, rbx_1)
                r14 += 1
                rsi_1 = &rsi_1[1]
            while (r14 != r12_2)
        
        if (arg1 != -8)
            LeaveCriticalSection(arg1 + 8)
        
        if (rbx_1 != 0)
            (**rbx_1)(rbx_1, 1)
        
        r14 = 0
        *(r13 + 4)
        *(r13 + 4) = 0
        int64_t rcx_14 = var_90
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
    
    int64_t* rcx_16 = *(arg1 + 0x60)
    arg2 = nullptr
    int32_t result = (*(*rcx_16 + 0xb8))(rcx_16, &arg2)
    
    if (result != 0)
        int64_t* rcx_22 = arg2
        
        if (result != 0x18)
            if (rcx_22 != 0)
                (*(*rcx_22 + 8))(rcx_22)
            
            result.b = 0
            return result
        
        if (rcx_22 != 0)
            (*(*rcx_22 + 8))(rcx_22)
        
        result.b = 1
        return result
    
    if (arg2 == 0)
        result.b = 0
        return result
    
    void* rdx_5 = **(arg1 + 0x1c8)
    void* rdi_2
    
    if (rdx_5 == 0)
        rdi_2 = arg3
    else
        rdi_2 = *(rdx_5 + 8)
        int64_t rcx_17 = *(arg1 + 0x1c8)
        *(arg1 + 0x1c8) = rdx_5
        *(rdx_5 + 8) = 0
        arg3 = rdi_2
        j_sub_140a74f90(rcx_17)
    
    int64_t* rax_19 = arg2
    int64_t* rbx_2 = *(rdi_2 + 0x28)
    
    if (rbx_2 != rax_19)
        *(rdi_2 + 0x28) = rax_19
        
        if (rax_19 != 0)
            int64_t* rcx_18 = arg2
            (**rcx_18)(rcx_18)
        
        if (rbx_2 != 0)
            (*(*rbx_2 + 8))(rbx_2)
    
    zmm6 = sub_1425ef220(arg1, rdi_2)
    int64_t* rcx_21 = arg2
    
    if (rcx_21 != 0)
        (*(*rcx_21 + 8))(rcx_21)
