// 函数: sub_14268f3d0
// 地址: 0x14268f3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_9a8
uint64_t var_68 = __security_cookie ^ &var_9a8
bool cond:0 = arg1[1] != 0
uint32_t zmm7[0x4] = arg6
int128_t zmm6 = arg5
int128_t* var_968 = arg4
int128_t* var_960 = arg2
uint64_t result

if (cond:0)
    int64_t* rcx = *arg1
    int64_t r14
    r14.b = 0
    void* rax_2 = (*(*rcx + 0x150))(rcx)
    int32_t i = 0
    void* const rbx_1
    
    if (rax_2 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = *(rax_2 + 0x120)
        
        if (rbx_1 == 0)
            rbx_1 = nullptr
        else
            void* rax_3 = sub_14269bba0()
            void* rdx = *(rbx_1 + 0x10)
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                rbx_1 = nullptr
    
    void* const var_918_1 = rbx_1
    void** const var_920 = &data_143459760
    void var_910
    sub_140d3a3a0(&var_910, arg8)
    int64_t var_908_1 = 0
    void var_8f8
    sub_1426022c0(&var_8f8)
    uint32_t rax_6
    void* r15_1
    
    if (data_143de5480 != 0)
        r15_1 = &var_8f8
        rax_6.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_6.b != 0)
        r15_1 = &arg1[0xc]
    
    sub_142611af0(r15_1, arg1[1], *(arg7 + 0x20), &var_920)
    void* rax_7 = *(arg7 + 0x10)
    
    if (rax_7 != 0 && rax_7 != -8)
        int128_t* rax_8 = var_960
        int32_t var_978_1 = 0x100
        float zmm1_1 = zmm7[0] f+ zmm6.d
        zmm7[0] = zmm7[0] f- zmm6.d
        int128_t zmm2 = *rax_8 ^ 0x80000000
        int128_t* rax_9 = var_968
        int128_t zmm3 = *(rax_8 + 4) ^ 0x80000000
        var_968.d = 0
        zmm7[0] = zmm7[0] f* 0.5f
        float var_954_1 = zmm1_1 * 0.5f
        uint32_t temp0_1[0x4] = _mm_and_ps(*rax_9, 0x7fffffff)
        float var_958 = zmm2.d
        uint32_t var_948 = temp0_1[0]
        uint32_t temp0_2[0x4] = _mm_and_ps(zmm7, 0x7fffffff)
        int32_t* var_980_1 = &var_968
        uint32_t temp0_3[0x4] = _mm_and_ps(*(rax_9 + 4), 0x7fffffff)
        int32_t var_950_1 = zmm3.d
        uint32_t var_944_1 = temp0_2[0]
        uint32_t var_940_1 = temp0_3[0]
        void var_868
        
        if (((sub_142613e80(r15_1, &var_958, &var_948, rax_7 + 8, &var_868, var_980_1, var_978_1)
                u>> 0x1e).b & 1) != 0 && var_968.d s> 0)
            void* rbx_2 = &var_868
            
            do
                int32_t var_878
                
                if (((sub_1426137b0(r15_1, *rbx_2, &var_958, &var_878) u>> 0x1e).b & 1) != 0)
                    var_960.d = 0
                    int32_t rax_14
                    int128_t zmm6_1
                    rax_14, zmm6_1 = sub_142610360(r15_1, *rbx_2, &var_878, &var_960)
                    
                    if (((rax_14 u>> 0x1e).b & 1) != 0)
                        r14 = sx.q(arg3[1].d)
                        int64_t rax_16 = *rbx_2
                        int32_t rax_17 = (r14 + 1).d
                        int32_t var_870
                        int32_t var_934_1 = (var_870 ^ zmm6_1).d
                        int32_t var_938_1 = (var_878 ^ zmm6_1).d
                        int32_t var_930_1 = var_960.d.d
                        arg3[1].d = rax_17
                        
                        if (rax_17 s> *(arg3 + 0xc))
                            sub_1405a4df0(arg3)
                        
                        int64_t rax_18 = *arg3
                        int64_t rcx_9 = r14 * 3
                        r14.b = 1
                        *(rax_18 + (rcx_9 << 3)) = var_938_1.o
                        *(rax_18 + (rcx_9 << 3) + 0x10) = rax_16
                
                i += 1
                rbx_2 += 8
            while (i s< var_968.d)
    
    sub_142602500(&var_8f8)
    result = zx.q(r14.b)
else
    result.b = 0

__security_check_cookie(var_68 ^ &var_9a8)
return result
