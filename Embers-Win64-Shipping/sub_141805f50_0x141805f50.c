// 函数: sub_141805f50
// 地址: 0x141805f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143ef9d10)
void* rcx = data_143ddb400
int64_t arg_8 = -0x4010000000000000
int512_t zmm1
double zmm6[0x2]
int128_t zmm7
zmm1, zmm6, zmm7 = sub_140af3a30(rcx, u"HTTP", u"MaxFlushTimeSeconds", &arg_8, &data_143de5780)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
uint128_t zmm9 = 0x4170000000000000
int64_t zmm8 = float.d(performanceCount) f* data_143d796f8 f+ zmm9.q

if (arg1[4].d s> 0)
    double var_18_1[0x2] = zmm6
    int128_t var_28_1 = zmm7
    
    do
        QueryPerformanceCounter(&performanceCount)
        int64_t rax_1 = *arg1
        zmm6 = zx.o(0)
        zmm6[0] = float.d(performanceCount)
        zmm6[0] = zmm6[0] f* data_143d796f8
        zmm6[0] = zmm6[0] f+ zmm9.q
        zmm6[0] = zmm6[0] f- zmm8
        zmm1.o = _mm_cvtpd_ps(zmm6)
        (*(rax_1 + 8))(arg1, zmm1)
        zmm8 = zmm6[0]
        
        if (arg1[4].d s<= 0)
            break
        
        char rax_2
        rax_2, zmm1 = sub_140a54810()
        
        if (rax_2 == 0)
            void* rcx_4 = arg1[5]
            
            if (rcx_4 != 0)
                (*(*(rcx_4 + 8) + 8))(rcx_4 + 8)
        else
            sub_140b73230(0x3f000000)
    while (arg1[4].d s> 0)

LeaveCriticalSection(&data_143ef9d10)
void* rbx_1 = arg1[5]
int64_t* rcx_6 = *(rbx_1 + 0x80)

if (rcx_6 != 0)
    int64_t rdx
    rdx.b = 1
    (*(*rcx_6 + 0x10))(rcx_6, rdx)
    int64_t* rcx_7 = *(rbx_1 + 0x80)
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x20))(rcx_7, 1)
    
    *(rbx_1 + 0x80) = 0

return sub_141809540() __tailcall
