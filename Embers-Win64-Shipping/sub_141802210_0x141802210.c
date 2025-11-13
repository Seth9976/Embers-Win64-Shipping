// 函数: sub_141802210
// 地址: 0x141802210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143ef9d10)
void* rcx = data_143ddb400
int64_t arg_8 = -0x4010000000000000
int128_t zmm6
int128_t zmm8
zmm6, zmm8 = sub_140af3a30(rcx, u"HTTP", u"MaxFlushTimeSeconds", &arg_8, &data_143de5780)

if (arg2 != 0)
    for (int32_t i = 0; i s>= 0; i += 1)
        if (i s>= arg1[4].d)
            break
        
        int64_t* r14_3 = (sx.q(i) << 4) + arg1[3]
        int64_t* rcx_1 = *r14_3
        int64_t* rax_2 = (*(*rcx_1 + 0x90))(rcx_1)
        
        if (rax_2[1].d != 0)
            int64_t* rcx_2 = *rax_2
            
            if (rcx_2 != 0)
                int64_t r8_1 = *rcx_2
                (*(r8_1 + 0x38))(rcx_2, 0, r8_1)
                int64_t rcx_3 = *rax_2
                
                if (rcx_3 != 0)
                    *rax_2 = sub_140a84c80(rcx_3, 0, 0)
                
                rax_2[1].d = 0
        
        int64_t* rcx_4 = *r14_3
        int64_t* rax_5 = (*(*rcx_4 + 0x98))(rcx_4)
        
        if (rax_5[1].d != 0)
            int64_t* rcx_5 = *rax_5
            
            if (rcx_5 != 0)
                int64_t r8_2 = *rcx_5
                (*(r8_2 + 0x38))(rcx_5, 0, r8_2)
                int64_t rcx_6 = *rax_5
                
                if (rcx_6 != 0)
                    *rax_5 = sub_140a84c80(rcx_6, 0, 0)
                
                rax_5[1].d = 0
        
        int64_t* rcx_7 = *r14_3
        int64_t* rax_8 = (*(*rcx_7 + 0xa8))(rcx_7)
        
        if (rax_8[1].d != 0)
            int64_t* rcx_8 = *rax_8
            
            if (rcx_8 != 0)
                int64_t r8_3 = *rcx_8
                (*(r8_3 + 0x38))(rcx_8, 0, r8_3)
                int64_t rcx_9 = *rax_8
                
                if (rcx_9 != 0)
                    *rax_8 = sub_140a84c80(rcx_9, 0, 0)
                
                rax_8[1].d = 0

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
uint128_t zmm9 = 0x4170000000000000
int128_t zmm7
zmm7.q = float.d(performanceCount)
zmm7.q = zmm7.q f* data_143d796f8
zmm7.q = zmm7.q f+ zmm9.q
int128_t zmm10 = zmm7

if (arg1[4].d s> 0)
    int128_t var_38_1 = zmm6
    int128_t var_58_1 = zmm8
    
    do
        QueryPerformanceCounter(&performanceCount)
        zmm6.q = float.d(performanceCount)
        zmm6.q = zmm6.q f* data_143d796f8
        zmm6.q = zmm6.q f+ zmm9.q
        int128_t zmm0_1
        int64_t zmm1_1
        
        if (arg2 != 0)
            zmm1_1 = arg_8
            
            if (not(zmm1_1 f<= 0.0))
                zmm0_1.q = zmm6.q f- zmm7.q
                
                if (not(zmm0_1.q f<= zmm1_1))
                    for (int32_t i_1 = 0; i_1 s>= 0; i_1 += 1)
                        if (i_1 s>= arg1[4].d)
                            break
                        
                        int64_t* rcx_14 = *(arg1[3] + sx.q(i_1) * 0x10)
                        (*(*rcx_14 + 0xb0))(rcx_14)
        
        zmm0_1.q = zmm6.q f- zmm10.q
        zmm1_1.d = fconvert.s(zmm0_1.q)
        (*(*arg1 + 8))(arg1, zmm1_1)
        zmm10 = zmm6
        
        if (arg1[4].d s<= 0)
            break
        
        if (sub_140a54810() == 0)
            void* rcx_16 = arg1[5]
            
            if (rcx_16 != 0)
                (*(*(rcx_16 + 8) + 8))(rcx_16 + 8)
        else
            sub_140b73230(0x3f000000)
    while (arg1[4].d s> 0)

return LeaveCriticalSection(&data_143ef9d10)
