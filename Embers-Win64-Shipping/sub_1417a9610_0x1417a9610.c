// 函数: sub_1417a9610
// 地址: 0x1417a9610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1417b4c90(arg1)
int64_t* i = *(arg2 + 0x40)
int64_t result = sx.q(*(arg2 + 0x48))

for (void* r15 = &i[result]; i != r15; i = &i[1])
    int32_t* rcx = *i
    int32_t* arg_20 = rcx
    int32_t rax = rcx[4]
    void* rdx_1
    
    if (rax != 1)
        int64_t rax_3 = sx.q(*rcx)
        
        if (rax != 2)
            rdx_1 = rax_3 * 0x140 + *(*(rcx + 8) + 0x30)
        else
            rdx_1 = rax_3 * 0xe0 + *(*(rcx + 8) + 0x20)
    else
        rdx_1 = sx.q(*rcx) * 0xe0 + *(*(rcx + 8) + 0x10)
    
    uint128_t zmm0 = zx.o(*(rdx_1 + 0x70))
    result = zx.q(*(rdx_1 + 0x78))
    uint128_t zmm2 = zmm0
    zmm0 = zmm0.d
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    zmm0.d = zmm0.d f* zmm0.d
    float var_60_1 = result.d
    zmm2.d = zmm2.d f* zmm2.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ var_60_1 * var_60_1
    
    if (not(_mm_sqrt_ss(0, zmm2.d).d f< data_1439b8e98))
        int32_t r9_1 = rcx[4]
        int64_t r8_1 = *(rcx + 8)
        int64_t rdx_5 = sx.q(*rcx)
        int64_t* arg_18 = &arg_20
        void* rax_7
        
        if (r9_1 == 1)
            rax_7 = rdx_5 * 0xe0 + *(r8_1 + 0x10)
        else if (r9_1 != 2)
            rax_7 = rdx_5 * 0x140 + *(r8_1 + 0x30)
        else
            rax_7 = rdx_5 * 0xe0 + *(r8_1 + 0x20)
        
        void* rax_13
        
        if (r9_1 == 1)
            rax_13 = rdx_5 * 0xe0 + *(r8_1 + 0x10)
        else if (r9_1 != 2)
            rax_13 = rdx_5 * 0x140 + *(r8_1 + 0x30)
        else
            rax_13 = rdx_5 * 0xe0 + *(r8_1 + 0x20)
        
        int64_t var_50_1 = *(rax_13 + 0x68)
        zmm0 = (*(rax_7 + 0x60)).o
        int64_t* r8_2 = nullptr
        int64_t* rbx_1 = zmm0.q
        char rsi_1 = *(rbx_1 + 0xc)
        
        if (rsi_1 u>= 2)
            r8_2 = rbx_1
        
        int32_t arg_8
        sub_1405ba560(&arg1[0x2e], &arg_8, r8_2)
        int64_t rax_18 = sx.q(arg_8)
        int64_t rcx_4
        
        if (rax_18.d == 0xffffffff)
            rcx_4 = 0
        else
            rcx_4 = (rax_18 << 5) + arg1[0x2e]
        
        int64_t r8_3 = rcx_4 + 8
        
        if (rcx_4 == 0)
            r8_3 = 0
        
        if (r8_3 != 0)
            int64_t* rdx_7 = nullptr
            
            if (rsi_1 u>= 3)
                rdx_7 = rbx_1
            
            sub_1417a4870(&arg_18, rdx_7)
        
        int64_t* rbx_2 = zmm0:8.q
        int64_t* r8_4 = nullptr
        char rsi_2 = *(rbx_2 + 0xc)
        
        if (rsi_2 u>= 2)
            r8_4 = rbx_2
        
        int32_t result_1
        sub_1405ba560(&arg1[0x2e], &result_1, r8_4)
        result = sx.q(result_1)
        int64_t rcx_9
        
        if (result.d == 0xffffffff)
            rcx_9 = 0
        else
            rcx_9 = (result << 5) + arg1[0x2e]
        
        int64_t r8_5 = rcx_9 + 8
        
        if (rcx_9 == 0)
            r8_5 = 0
        
        if (r8_5 != 0)
            int64_t* rdx_9 = nullptr
            
            if (rsi_2 u>= 3)
                rdx_9 = rbx_2
            
            result = sub_1417a4870(&arg_18, rdx_9)
        
        arg1[0x42].b = 1

return result
