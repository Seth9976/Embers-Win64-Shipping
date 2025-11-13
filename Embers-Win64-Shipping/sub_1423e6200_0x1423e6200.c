// 函数: sub_1423e6200
// 地址: 0x1423e6200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
uint64_t result = __security_cookie ^ &var_128
uint64_t result_1 = result
int64_t r10 = *arg2
int128_t zmm6 = arg4

if (r10 != 0)
    uint64_t r9_2 = zx.q(r10.d) & 0xffffff
    
    if (r9_2.d s< *(arg1 + 0x10))
        void* rax_1 = *(arg1 + 0x28)
        void* r8 = arg1 + 0x18
        
        if (rax_1 != 0)
            r8 = rax_1
        
        result = zx.q(*(r8 + (zx.q(r9_2.d) u>> 5 << 2)))
        
        if (test_bit(result.d, r9_2.d & 0x1f))
            void* rcx_4 = r9_2 * 0x90 + *(arg1 + 8)
            
            if (*(rcx_4 + 0x70) == r10 && *(rcx_4 + 1) != 4)
                result = sub_1423e60e0(arg1, r10)

if (zmm6.d f<= 0f)
    *arg2 = 0
else
    char var_e8 = var_e8 & 0xfc
    char var_e7_1 = 1
    int32_t var_e4_1
    __builtin_memset(&var_e4_1, 0, 0x18)
    int64_t var_c8
    sub_140d3a3a0(&var_c8, nullptr)
    int64_t var_c0_1 = 0
    int64_t var_b8 = 0
    int128_t* var_a8_1 = nullptr
    int64_t var_78_1 = 0
    char var_68_1 = 0
    int64_t* var_d8
    sub_1407473e0(&var_d8, arg3)
    var_c8 = arg3[2]
    int64_t rax_3 = arg3[3]
    int128_t var_98
    int128_t zmm0_1
    int128_t zmm1_1
    
    if (&var_b8 != &arg3[4])
        arg4 = var_a8_1.o
        int128_t zmm4_1 = var_98
        var_b8.o = *(arg3 + 0x20)
        zmm0_1 = *(arg3 + 0x40)
        var_a8_1.o = *(arg3 + 0x30)
        zmm1_1 = *(arg3 + 0x50)
        *(arg3 + 0x20) = var_b8.o
        *(arg3 + 0x30) = arg4
        *(arg3 + 0x40) = zmm4_1
        var_98 = zmm0_1
        int128_t var_88_1 = zmm1_1
        int128_t var_88
        *(arg3 + 0x50) = var_88
    
    int32_t var_e4_2 = zmm6.d
    var_e8 = (var_e8 & 0xfe) | arg5
    int32_t var_d0
    int32_t rcx_9
    
    if (var_d0 == 0)
    label_1423e6394:
        rcx_9.b = sub_140b5b8a0(rax_3.d, 0) == 0
        
        if ((rax_3:4.d != 0 | rcx_9.b) == 0)
        label_1423e63c3:
            
            if (var_b8 != 0)
                rcx_9.b = 2
            else
                rcx_9.b = 0
        else
            void* rax_9
            rax_9, rcx_9 = sub_140d3c6e0(&var_c8)
            
            if (rax_9 == 0)
                goto label_1423e63c3
            
            int64_t rax_10
            rax_10, rcx_9 = sub_140d1fd20(rax_9, rax_3)
            
            if (rax_10 != 0 || var_b8 != 0)
                rcx_9.b = 2
            else
                rcx_9.b = 0
    else
        int64_t* rcx_8 = var_d8
        
        if (rcx_8 == 0)
            goto label_1423e6394
        
        char rax_7
        rax_7, rcx_9 = (*(*rcx_8 + 0x28))(rcx_8)
        
        if (rax_7 == 0)
            goto label_1423e6394
        
        rcx_9.b = 2
    
    void* rcx_12 = *(arg1 + 0x158)
    var_e8 = (var_e8 & 0xfd) | rcx_9.b
    
    if (rcx_12 != 0)
        void* rax_12 = sub_14202bfe0(rcx_12)
        
        if (rax_12 != 0 && sub_1424359b0(rax_12) != 0)
            char var_68_2 = *sub_1424359b0(rax_12)
    
    zmm0_1 = arg6
    
    if (not(zmm0_1.d f>= 0f))
        zmm0_1 = zmm6
    
    char* r8_1 = &var_e8
    int64_t var_108
    int64_t* rdx_5 = &var_108
    zmm1_1.q = fconvert.d(zmm0_1.d)
    int64_t rbx_2
    
    if (*(arg1 + 0x150) != data_143de5458)
        int64_t var_e0_2 = zmm1_1.q
        char var_e7_3 = 0
        rbx_2 = *sub_1423d2100(arg1, rdx_5, r8_1)
        var_108 = rbx_2
        void var_100
        sub_1423ccbd0(arg1 + 0xa0, &var_100, &var_108, nullptr)
    else
        zmm1_1.q = zmm1_1.q f+ *(arg1 + 0x140)
        char var_e7_2 = 1
        int64_t var_e0_1 = zmm1_1.q
        int64_t* rax_16 = sub_1423d2100(arg1, rdx_5, r8_1)
        void* var_f8 = arg1 + 8
        rbx_2 = *rax_16
        int32_t var_f0_1 = *(arg1 + 0x10) - *(arg1 + 0x3c)
        var_108 = rbx_2
        sub_1423cd1b0(arg1 + 0x40, &var_108, &var_f8)
    
    bool cond:1_1 = var_b8 == 0
    *arg2 = rbx_2
    
    if (not(cond:1_1))
        int128_t* rcx_20 = &var_98
        
        if (var_a8_1 != 0)
            rcx_20 = var_a8_1
        
        (*(*rcx_20 + 0x10))(rcx_20)
    
    result = sub_140745b20(&var_d8)

__security_check_cookie(result_1 ^ &var_128)
return result
