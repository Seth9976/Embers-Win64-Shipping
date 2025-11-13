// 函数: sub_140bb0cb0
// 地址: 0x140bb0cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_10
sub_140cad130(&arg_10)
char arg_8 = 0
char* var_60 = &arg_8
void*** (* var_68)() = sub_140884c50
void* r14 = *(sub_140a756e0(&var_68, &data_14397f5f0) + 0x48)
int64_t rdi = sx.q(*(r14 + 0x18))

if (rdi.d != 0)
    int32_t rax_1 = *(arg1 + 0x120)
    int32_t rdx_1 = rax_1 + rdi.d
    
    if (rdx_1 s> *(arg1 + 0x124))
        sub_1405c5570(arg1 + 0x118, rdx_1)
        rax_1 = *(arg1 + 0x120)
    
    memcpy(*(arg1 + 0x118) + (sx.q(rax_1) << 3), *(r14 + 0x10), (rdi << 3).d)
    *(arg1 + 0x120) += rdi.d

int32_t rbp = 0
*(r14 + 0x18) = 0

if (*(r14 + 0x1c) s<= 0xffffffff)
    sub_1405c5570(r14 + 0x10, 0)

if (*(arg1 + 0xa8) s< *(arg1 + 0x120))
    uint128_t zmm8 = 0x4170000000000000
    uint128_t zmm6
    uint128_t var_38_1 = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    
    do
        void* rcx_6 = *(arg1 + 0x1d8)
        bool z_1
        
        if (0 == *(rcx_6 + 0x84))
            *(rcx_6 + 0x84) = 0
            z_1 = true
        else
            *(rcx_6 + 0x84)
            z_1 = false
        
        if (not(z_1))
            break
        
        zmm7 = *(arg1 + 0xc4)
        zmm6 = zx.o(*(arg1 + 0xd0))
        
        if (*(arg1 + 0xc8) != 0)
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            double zmm2 = float.d(performanceCount)
            double zmm0_1 = _mm_cvtps_pd(zmm7.q)
            zmm2 = zmm2 f* data_143d796f8 f+ zmm8.q
            double zmm1_1 = zmm2 f- zmm6.q
            bool rax_5 = zmm1_1 > zmm0_1
            
            if (rax_5 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm6.q)
                    && not(zmm1_1 <= _mm_cvtps_pd(data_1439a9644)))
                zmm0_1.d = data_1439a9640.d f* zmm7.d
                
                if (not(zmm1_1 <= _mm_cvtps_pd(zmm0_1)))
                    data_1439a9888 = zmm6.q
            
            data_1439a9890 = zmm2
            
            if (rax_5 != 0)
                break
        
        void* rcx_8 = data_143e1adf0
        bool z_2
        
        if (0 == *(rcx_8 + 8))
            *(rcx_8 + 8) = 0
            z_2 = true
        else
            *(rcx_8 + 8)
            z_2 = false
        
        rcx_8.b = not(z_2)
        
        if (rcx_8.b != 0)
            break
        
        int64_t rcx_9 = sx.q(*(arg1 + 0xa8))
        *(arg1 + 0xa8) = (rcx_9 + 1).d
        uint64_t rdi_1 = *(*(arg1 + 0x118) + (rcx_9 << 3))
        
        if (rdi_1 != 0 && sub_140d3cb50(rdi_1) != 0)
            zmm8 = sub_140cc45a0(sub_140d3cb50(rdi_1) + 0x200, rdi_1)
            *(arg1 + 0xd8) = rdi_1
            *(arg1 + 0xe0) = u"preloading"
    while (*(arg1 + 0xa8) s< *(arg1 + 0x120))

int64_t rdi_2 = sx.q(*(r14 + 0x18))

if (rdi_2.d != 0)
    int32_t rax_12 = *(arg1 + 0x120)
    int32_t rdx_4 = rax_12 + rdi_2.d
    
    if (rdx_4 s> *(arg1 + 0x124))
        sub_1405c5570(arg1 + 0x118, rdx_4)
        rax_12 = *(arg1 + 0x120)
    
    memcpy(*(arg1 + 0x118) + (sx.q(rax_12) << 3), *(r14 + 0x10), (rdi_2 << 3).d)
    *(arg1 + 0x120) += rdi_2.d

int32_t rax_14 = *(r14 + 0x1c)
*(r14 + 0x18) = 0

if (rax_14 s< 0 && rax_14 != 0)
    sub_1405c5570(r14 + 0x10, 0)

if (*(arg1 + 0xa8) == *(arg1 + 0x120))
    rbp = 2

sub_140cad790()
return zx.q(rbp)
