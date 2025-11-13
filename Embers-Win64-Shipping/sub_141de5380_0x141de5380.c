// 函数: sub_141de5380
// 地址: 0x141de5380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm8
int128_t var_38 = zmm8
uint128_t zmm9
uint128_t var_48 = zmm9

if (arg2.d f!= 0f)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    void* i = *(arg1 + 8)
    zmm8.q = float.d(performanceCount)
    void* rdi_6 = (sx.q(*(arg1 + 0x10)) << 5) + i
    zmm9 = 0x4170000000000000
    zmm8.q = zmm8.q f* data_143d796f8
    zmm8.q = zmm8.q f+ zmm9.q
    zmm8.q = zmm8.q f+ fconvert.d(arg2.d)
    
    for (; i != rdi_6; i += 0x20)
        if (*(i + 8) != 0)
            QueryPerformanceCounter(&performanceCount)
            arg2.q = float.d(performanceCount)
            arg2.q = arg2.q f* data_143d796f8
            arg2.q = arg2.q f+ zmm9.q
            arg2.d = fconvert.s(zmm8.q f- arg2.q)
            char rax
            
            if (not(arg2.d f< 0.00100000005f))
                int64_t* rcx_4 = *(i + 8)
                rax = (*(*rcx_4 + 0x10))(rcx_4, arg2)
            
            if (arg2.d f< 0.00100000005f || rax == 0)
                return 0
            
            int64_t* rcx_5 = *(i + 8)
            
            if (rcx_5 != 0)
                (*(*rcx_5 + 0x10))(rcx_5, zx.o(0))
                int64_t* rcx_6 = *(i + 8)
                
                if (rcx_6 != 0)
                    (**rcx_6)(rcx_6, 1)
                
                *(i + 8) = 0
else
    void* i_1 = *(arg1 + 8)
    
    for (void* rdi_3 = (sx.q(*(arg1 + 0x10)) << 5) + i_1; i_1 != rdi_3; i_1 += 0x20)
        int64_t* rcx = *(i_1 + 8)
        
        if (rcx != 0)
            (*(*rcx + 0x10))(rcx, zx.o(0))
            int64_t* rcx_1 = *(i_1 + 8)
            
            if (rcx_1 != 0)
                (**rcx_1)(rcx_1, 1)
            
            *(i_1 + 8) = 0

return 1
