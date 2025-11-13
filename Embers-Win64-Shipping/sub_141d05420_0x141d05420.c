// 函数: sub_141d05420
// 地址: 0x141d05420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t r14 = 0
void* const var_108 = arg1
int128_t var_b8 = data_14321e0d0
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x1c)
int64_t var_88
__builtin_memset(&var_88, 0, 0x1a)
int64_t r15 = 0
int32_t r12 = 0
void* var_f8
__builtin_memset(&var_f8, 0, 0x14)
EnterCriticalSection(arg1 + 0x38)
int64_t r13_1 = sx.q(*(arg1 + 0x18))
int32_t temp0 = r13_1.d
int64_t var_f0

if (temp0 != 0)
    int32_t var_e8
    
    if (temp0 s> 0)
        sub_1405a5410(&var_f0, r13_1.d)
        r12 = var_e8
        r15 = var_f0
    
    memcpy((sx.q(r12) << 4) + r15, *(var_108 + 0x10), (r13_1 << 4).d)
    var_e8 = r12 + r13_1.d

if (arg1 != -0x38)
    LeaveCriticalSection(arg1 + 0x38)

char rax_2 = sub_141d02340(&var_f0, arg3, &var_f8, &var_b8)

if (r15 != 0)
    sub_140a74f90(r15)

if (rax_2 == 0)
    void* const r15_1 = var_108
    
    if (sub_141cff460(r15_1, arg3) == 0)
        char var_c0
        char var_c0_1 = var_c0 & 0xf8
        int32_t rcx_13 = 0
        int128_t zmm7 = data_14321e0f0
        var_108 = nullptr
        int32_t var_100_1 = 0
        int32_t var_fc_1 = 0
        
        if (arg3 != 0 && *arg3 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (arg3[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_108, rbx_2.d + 1)
                rcx_13 = var_fc_1
                r14 = var_100_1
            
            int32_t rax_8 = r14 + rbx_2.d + 1
            int32_t var_100_2 = rax_8
            
            if (rax_8 s> rcx_13)
                sub_140594770(&var_108)
            
            UnDecorator::getReferenceType(var_108, arg3, (rbx_2.d + 1) * 2)
        
        char rax_9
        int128_t zmm6_1
        rax_9, zmm6_1 = sub_141d06c80(r15_1, &var_108)
        void* const rcx_18 = var_108
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        int64_t zmm0_1
        
        if (rax_9 == 0)
            zmm0_1 = var_c0_1.q
        else
            int64_t* rcx_19 = *(r15_1 + 8)
            void var_e0
            int128_t* rax_11 = (*(*rcx_19 + 0xf0))(rcx_19, &var_e0, arg3)
            zmm6_1 = *rax_11
            zmm7 = rax_11[1]
            zmm0_1 = rax_11[2].q
        
        *arg2 = zmm6_1
        arg2[1] = zmm7
        arg2[2].q = zmm0_1
        sub_140a1d5c0(&var_88)
    else
        int64_t rax_7 = *(var_f8 + 0x138)
        arg2[2].b |= 7
        *arg2 = rax_7
        *(arg2 + 8) = rax_7
        arg2[1].q = rax_7
        *(arg2 + 0x18) = -1
        sub_140a1d5c0(&var_88)
else
    int64_t rcx_8 = var_b8:8.q
    int64_t var_78
    
    if (var_78:4.d != 0)
        rcx_8 = var_a8
    
    int64_t rax_4 = *(var_f8 + 0x138)
    *(arg2 + 0x18) = rcx_8
    char rcx_9 = arg2[2].b & 0xfe
    *arg2 = rax_4
    *(arg2 + 8) = rax_4
    arg2[2].b = rcx_9 | 6
    arg2[1].q = rax_4
    sub_140a1d5c0(&var_88)

__security_check_cookie(rax_1 ^ &var_128)
return arg2
