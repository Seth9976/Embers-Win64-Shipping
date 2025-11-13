// 函数: sub_141fcd740
// 地址: 0x141fcd740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("DemoRecording")
data_143f3d168 = (zx.o(0)).q
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
void* r8 = arg1[0x28]
int128_t zmm9
zmm9.q = float.d(performanceCount)
zmm9.q = zmm9.q f* data_143d796f8
void* rcx_1
void* rdx_2
void* r9_1

if (r8 != 0)
    r9_1 = *(r8 + 0x158)
    rcx_1 = r9_1
    rdx_2 = sx.q(*(r8 + 0x160)) * 0x78 + r9_1

int32_t rdx_3

if (r8 == 0 || r9_1 == rdx_2)
label_141fcd7d3:
    rdx_3 = -1
else
    while (*(rcx_1 + 0x18) != arg1)
        rcx_1 += 0x78
        
        if (rcx_1 == rdx_2)
            goto label_141fcd7d3
    
    rdx_3 = ((rcx_1 - r9_1) s/ 0x78).d

void var_58
int512_t zmm2
uint128_t zmm6_2
int128_t zmm8
double zmm9_1
zmm2, zmm6_2, zmm8, zmm9_1 = sub_14217caf0(arg1, sub_142428200(&var_58, rdx_3, r8))

if (arg1[0x13].d s> 0)
    void* rcx_4 = *arg1[0x12]
    
    if (rcx_4 != 0 && *(rcx_4 + 0x134) != 1 && *(arg1 + 0x10c9) == 0)
        int64_t* rcx_5 = arg1[0xee]
        int32_t rax_4 = (*(*rcx_5 + 0x158))(rcx_5)
        
        if (rax_4 != 0)
            sub_141fca380(arg1)
        else if (*(arg1 + 0xc71) == rax_4.b)
            int64_t* rcx_6 = arg1[0xee]
            
            if ((*(*rcx_6 + 0x20))(rcx_6) == 0)
                sub_141fca380(arg1)
            else
                int128_t var_38_1 = zmm8
                QueryPerformanceCounter(&performanceCount)
                zmm8.q = float.d(performanceCount)
                zmm8.q = zmm8.q f* data_143d796f8
                zmm8.q = zmm8.q f+ 16777216.0
                
                if (arg1[0x13].d s> 0)
                    void* rcx_8 = *arg1[0x12]
                    
                    if (rcx_8 != 0 && *(rcx_8 + 0x134) != 1 && *(arg1 + 0xc71) == 0)
                        int32_t rbp_1 = data_143de7000
                        sub_140b34200("DemoRecordTime", rbp_1)
                        int64_t* rax_8
                        uint128_t zmm0_1
                        rax_8, zmm0_1 = sub_142437e30(arg1[0x28], 0, 1)
                        int64_t rdi_1 = *rax_8
                        (*(rdi_1 + 0x638))(rax_8)
                        zmm0_1.d = zmm0_1.d f* zmm6_2.d
                        zmm2.o = zmm6_2
                        (*(rdi_1 + 0x640))(rax_8, zmm0_1, zmm2)
                        zmm0_1.d = zmm0_1.d f+ arg1[0xea].d
                        arg1[0xea].d = zmm0_1.d
                        zmm0_1.d = zmm0_1.d f* 1000f
                        (*(*arg1[0xee] + 0x50))(zmm0_1, int.q(zmm0_1.d))
                        
                        if (arg1[0x1d3].d == 0)
                            zmm8, zmm9_1 = sub_141fcbba0(arg1, zmm6_2)
                            int64_t rbx_2 = data_143f3d390
                            int64_t rcx_15
                            
                            if (data_143de5480 == 0)
                                rcx_15 = 0
                            else
                                rcx_15.b = GetCurrentThreadId() != data_143de5470
                            
                            if (*(rbx_2 + (rcx_15 << 2)) == 1 && (*(*arg1 + 0x430))(arg1) != 0)
                                zmm8, zmm9_1 = sub_141fc5f00(arg1)
                        else
                            zmm8, zmm9_1 = sub_141fca870(arg1)
                        
                        sub_140b38680("DemoRecordTime", rbp_1)
                
                QueryPerformanceCounter(&performanceCount)
                uint128_t zmm7_1
                zmm7_1.q = float.d(performanceCount)
                zmm7_1.q = zmm7_1.q f* data_143d796f8
                zmm7_1.q = zmm7_1.q f+ 16777216.0
                zmm6_2.q = zmm7_1.q f- zmm8.q
                double zmm6_3 = sub_141fab5b0(sub_140b187d0(j_sub_140b17d00()), arg1[0xea].d)
                int32_t rax_18 = arg1[0xf3].d
                double temp0_1 = _mm_max_sd(arg1[0xf2], zmm6_3)
                zmm6_3 = zmm6_3 f+ arg1[0xf0]
                arg1[0xf3].d = rax_18 + 1
                arg1[0xf2] = temp0_1
                double zmm0_2 = zmm7_1.q f- arg1[0xf1]
                arg1[0xf0] = zmm6_3
                
                if (not(zmm0_2 <= 2.0) && rax_18 + 1 s> 0)
                    arg1[0xf1] = zmm7_1.q
                    arg1[0xf0] = 0
                    arg1[0xf2] = 0
                    arg1[0xf3].d = 0

sub_1424294e0(&var_58)
QueryPerformanceCounter(&performanceCount)
data_143f3d168 = data_143f3d168 f+ float.d(performanceCount) f* data_143d796f8 f- zmm9_1
return sub_140b37f60("DemoRecording")
