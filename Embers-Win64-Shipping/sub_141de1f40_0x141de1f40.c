// 函数: sub_141de1f40
// 地址: 0x141de1f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t* r14 = *arg3
int64_t rax_2 = sx.q(arg3[1].d)
int64_t performanceCount_1 = arg2
int64_t performanceCount = arg2
void* rbp = &r14[rax_2]

if (r14 != rbp)
    do
        int64_t rax_3 = sx.q(arg1[2].d)
        int32_t rdi_1 = 0
        int64_t rcx = 0
        
        if (rax_3.d s> 0)
            void* r9_1 = arg1[1]
            int32_t* rax_4 = r9_1 + 0x18
            
            do
                if (*rax_4 == *r14)
                    int64_t r15_2 = sx.q(rdi_1) << 5
                    sub_141de8d90(arg1, r15_2 + r9_1)
                    EnterCriticalSection(&arg1[3])
                    int32_t rdx_2 = arg1[2].d
                    int32_t rcx_5 = rdx_2 - rdi_1 - 1
                    
                    if (rcx_5 s>= 1)
                        rcx_5 = 1
                    
                    if (rcx_5 != 0)
                        void* rax_5 = arg1[1]
                        memcpy(rax_5 + r15_2, (sx.q(rdx_2 - rcx_5) << 5) + rax_5, rcx_5 << 5)
                        rdx_2 = arg1[2].d
                    
                    arg1[2].d = rdx_2 - 1
                    
                    if (arg1 != -0x18)
                        LeaveCriticalSection(&arg1[3])
                    
                    break
                
                rdi_1 += 1
                rcx += 1
                rax_4 = &rax_4[8]
            while (rcx s< rax_3)
        
        r14 = &r14[1]
    while (r14 != rbp)
    
    performanceCount_1 = performanceCount

int32_t* i = *performanceCount_1
int64_t result = sx.q(*(performanceCount_1 + 8))

for (void* r12 = &i[result]; i != r12; i = &i[1])
    int64_t r15_3 = sx.q(*i)
    void* rdi_4 = r15_3 * 0x30 + *(*arg1 + 0xb8)
    int64_t rbx_2 = *(rdi_4 + 8)
    int64_t r9_2
    result, r9_2 = sub_141de1190(arg1, r15_3.d, rbx_2)
    int64_t* result_1 = result
    
    if (rbx_2 == 0)
        bool z_1
        
        if (0 == *result_1)
            *result_1 = 0
            z_1 = true
        else
            *result_1
            z_1 = false
        
        if (not(z_1))
            sub_140af98a0("Unknown", 0xd4, 
                Existing compressed data for streaming animation chunk.", r9_2)
            r9_2 = sub_140afbb40()
        
        if (result_1[1] != 0)
            sub_140af98a0("Unknown", 0xd5, Streaming animation chunk already has IORequest.", r9_2)
            sub_140afbb40()
        
        int64_t rax_9
        int64_t zmm6_1
        rax_9, zmm6_1 = sub_140bc7f20(rdi_4 + 0x10)
        QueryPerformanceCounter(&performanceCount)
        int128_t zmm0_1
        zmm0_1.q = float.d(performanceCount)
        int32_t var_b8_1 = r15_3.d
        void** const var_78 = &data_142e345d8
        zmm0_1.q = zmm0_1.q f* data_143d796f8
        void*** var_88_1 = nullptr
        int64_t var_60_1 = rax_9
        void** (* var_98)(int64_t* arg1, char* arg2, int64_t* arg3, int512_t arg4 @ zmm1) =
            sub_141de5c60
        zmm0_1.q = zmm0_1.q f+ zmm6_1
        result_1[2] = zmm0_1.q
        int128_t var_70_1 = arg1.o
        result = sub_140bc48b0(rdi_4 + 0x10, 5, &var_98, 0)
        result_1[1] = result
        
        if (var_98 != 0)
            void** const* rcx_12 = &var_78
            
            if (var_88_1 != 0)
                rcx_12 = var_88_1
            
            result = (*rcx_12)[2](rcx_12)

__security_check_cookie(rax_1 ^ &var_e8)
return result
