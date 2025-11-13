// 函数: sub_1425ee250
// 地址: 0x1425ee250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x14d0)
void var_14d8
int64_t rax_1 = __security_cookie ^ &var_14d8
int64_t* i_3 = j_sub_140a82f30(0x10)

if (i_3 == 0)
    i_3 = nullptr
else
    *i_3 = 0

int64_t* i_1 = i_3
int64_t* i_6 = i_3
uint64_t result = 0
bool z

if (0 == *(arg1 + 0x1770))
    *(arg1 + 0x1770) = 0
    z = true
else
    result = zx.q(*(arg1 + 0x1770))
    z = false

if (z)
    int64_t r14
    int64_t var_20_1 = r14
    uint128_t zmm6 = 0x416312d000000000
    uint128_t zmm7 = 0x42e312d000000010
    
    while (true)
        if (**(arg1 + 0x17b8) != 0)
            void* r15_1 = *(**(arg1 + 0x17b8) + 8)
            
            if (0 == *(r15_1 + 4))
                *(r15_1 + 4) = 0
            else
                *(r15_1 + 4)
            
            int64_t* rcx_2 = *(r15_1 + 0x50)
            
            if ((*(*rcx_2 + 0x18))(rcx_2) != 0)
                void* rdx_1 = **(arg1 + 0x17b8)
                
                if (rdx_1 != 0)
                    int64_t rcx_3 = *(arg1 + 0x17b8)
                    *(arg1 + 0x17b8) = rdx_1
                    *(rdx_1 + 8) = 0
                    j_sub_140a74f90(rcx_3)
                
                *(r15_1 + 4)
                *(r15_1 + 4) = 2
                int64_t performanceCount
                QueryPerformanceCounter(&performanceCount)
                double zmm0_1[0x2] = zx.o(0)
                zmm0_1[0] = float.d(performanceCount)
                zmm0_1[0] = zmm0_1[0] f* data_143d796f8
                zmm0_1[0] = zmm0_1[0] f* zmm6.q
                zmm0_1[0] = zmm0_1[0] f+ zmm7.q
                int64_t rcx_5 = int.q(zmm0_1[0])
                
                if (rcx_5 != -0x8000000000000000 && not(float.d(rcx_5) f== zmm0_1[0]))
                    uint32_t temp0_3 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1[0]))
                    zmm0_1 = zx.o(0)
                    zmm0_1[0] = float.d(rcx_5 - (zx.q(temp0_3) & 1))
                
                r14.b = 0
                *(r15_1 + 0x80) = int.q(zmm0_1[0])
                void* rax_12 = *(r15_1 + 0x28)
                int32_t rsi_1 = *(r15_1 + 8)
                int32_t rcx_7 = *(rax_12 + 0x64)
                int32_t r13_1 = *(rax_12 + 0x60)
                EnterCriticalSection(arg1 + 0x770)
                int32_t rcx_9 = *(arg1 + 0x7d4)
                
                if (rsi_1 == 0)
                    int32_t rax_13 = *(arg1 + 0x1788)
                    
                    if (rcx_9 != rax_13)
                        *(arg1 + 0x7d4) = rax_13
                        r14.b = 1
                else if (rcx_9 != rsi_1)
                    *(arg1 + 0x7d4) = rsi_1
                    *(arg1 + 0x1788) = rsi_1
                    r14.b = 1
                
                int32_t rax_14 = *(arg1 + 0x17a0)
                
                if (*(arg1 + 0x7f0) != rax_14)
                    *(arg1 + 0x7ec) = rax_14
                    r14.b = 1
                    *(arg1 + 0x7e8) = rax_14
                    *(arg1 + 0x7f0) = rax_14
                
                int32_t rcx_10 = *(arg1 + 0x17a4)
                int32_t rax_15
                
                if (rcx_10 == 0)
                    rax_15 = 0
                else if (rcx_10 == 1)
                    rax_15 = 1
                else
                    rax_15 = 2
                
                if (rax_15 != *(arg1 + 0x7c4))
                    *(arg1 + 0x7c4) = rax_15
                    r14.b = 1
                
                int32_t rax_16 = *(arg1 + 0x1780)
                
                if (*(arg1 + 0x94) != rax_16)
                    *(arg1 + 0x94) = rax_16
                    r14.b = 1
                
                int32_t rsi_2 = 0
                
                if (r13_1 != 0 && rcx_7 != 0
                        && (r13_1 != *(arg1 + 0x84) || rcx_7 != *(arg1 + 0x88)))
                    *(arg1 + 0x8c) = r13_1
                    r14.b = 1
                    *(arg1 + 0x84) = r13_1
                    rsi_2 = 1
                    *(arg1 + 0x90) = rcx_7
                    *(arg1 + 0x88) = rcx_7
                
                if (arg1 != -0x770)
                    LeaveCriticalSection(arg1 + 0x770)
                
                if (r14.b != 0)
                    void var_770
                    memcpy(&var_770, arg1 + 0x60, 0x710)
                    int32_t var_778 = 0xf1010008
                    int32_t var_60 = (rsi_2 * 2) | (var_60 & 0xfffffffd)
                    (*(*(arg1 + 0x50) + 0x108))(*(arg1 + 0x58), &var_778)
                
                *(r15_1 + 4)
                *(r15_1 + 4) = 3
                int64_t performanceCount_1[0x2]
                QueryPerformanceCounter(&performanceCount_1)
                zmm0_1 = zx.o(0)
                zmm0_1[0] = float.d(performanceCount_1[0])
                zmm0_1[0] = zmm0_1[0] f* data_143d796f8
                zmm0_1[0] = zmm0_1[0] f* zmm6.q
                zmm0_1[0] = zmm0_1[0] f+ zmm7.q
                int64_t rcx_18 = int.q(zmm0_1[0])
                
                if (rcx_18 != -0x8000000000000000 && not(float.d(rcx_18) f== zmm0_1[0]))
                    uint32_t temp0_6 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1[0]))
                    zmm0_1 = zx.o(0)
                    zmm0_1[0] = float.d(rcx_18 - (zx.q(temp0_6) & 1))
                
                *(r15_1 + 0x88) = int.q(zmm0_1[0])
                int64_t var_147c_1 = 0
                int32_t var_1474_1 = 0
                int64_t var_1468_1 = 0
                void var_1440
                memset(&var_1440, 0, 0xcc8)
                bool cond:0_1 = *(r15_1 + 0x38) == 0
                int64_t var_1460_1 = *(r15_1 + 0x18)
                int32_t var_1448_1 = *(r15_1 + 0x20)
                int32_t var_1484_1 = *(arg1 + 0x84)
                int32_t var_1480_1 = *(arg1 + 0x88)
                int64_t var_1458_1 = *(r15_1 + 0x58)
                int64_t var_1450_1 = *(r15_1 + 0x60)
                int64_t var_1470_1 = *(r15_1 + 0x70)
                int32_t var_1488 = 0xf1040008
                int32_t var_1444_1 = 1
                
                if (not(cond:0_1))
                    var_147c_1:4.d |= 2
                
                (*(*(arg1 + 0x50) + 0x88))(*(arg1 + 0x58), &var_1488)
                int64_t* i_7 = j_sub_140a82f30(0x10)
                
                if (i_7 == 0)
                    continue
                else
                    *i_7 = 0
                    i_7[1] = r15_1
                    int64_t* i_8 = i_6
                    i_6 = i_7
                    *i_8 = i_7
                    continue
        
        if (*i_1 != 0)
            int64_t* rax_35
            
            if (*i_1 != 0)
                rax_35 = *i_1 + 8
            else
                rax_35 = nullptr
            
            if (WaitForSingleObject(*(*rax_35 + 0x60), 2) == WAIT_OBJECT_0)
                void* const rbx_2 = nullptr
                int64_t* i_5 = *i_1
                
                if (i_5 != 0)
                    rbx_2 = i_5[1]
                    int64_t* i_4 = i_1
                    i_1 = i_5
                    i_5[1] = 0
                    j_sub_140a74f90(i_4)
                
                ResetEvent(*(rbx_2 + 0x60))
                sub_1425f0c70(arg1, rbx_2)
        
        result = 0
        bool z_1
        
        if (0 == *(arg1 + 0x1770))
            *(arg1 + 0x1770) = 0
            z_1 = true
        else
            result = zx.q(*(arg1 + 0x1770))
            z_1 = false
        
        if (not(z_1))
            break

int64_t* i_2

for (int64_t* i = i_1; i != 0; i = i_2)
    i_2 = *i
    result = j_sub_140a74f90(i)

__security_check_cookie(rax_1 ^ &var_14d8)
return result
