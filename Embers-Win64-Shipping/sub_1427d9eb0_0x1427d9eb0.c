// 函数: sub_1427d9eb0
// 地址: 0x1427d9eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg4
sub_1427e5da0(arg1, *arg3)
int32_t* rax = arg1[5]
int32_t arg_20
int32_t* r15 = &arg_20
arg_20 = 0x1b5

if (rax != 0)
    r15 = rax

void* i = *rsi

if (i != 0)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    
    do
        sub_1427e5da0(arg1, i)
        void var_88
        int128_t* rax_1 = arg3[3](&var_88, arg1[2], zx.q(rsi[1].d))
        void* rdx_3 = *arg1
        bool cond:1_1 = *(rdx_3 + 0x10) == 0
        zmm6 = rax_1[1].d
        zmm7 = *(rax_1 + 0x14)
        zmm8 = *(rax_1 + 0x18)
        int128_t var_128 = *rax_1
        int32_t var_118_1 = zmm6.d
        int32_t var_114_1 = zmm7.d
        int32_t var_110_1 = zmm8.d
        char const* const r14_1
        
        if (cond:1_1)
            r14_1 = "bad__repx__name"
        else
            r14_1 = *(*(rdx_3 + 8) + zx.q(*(rdx_3 + 0x10) - 1) * 0x10)
        
        int64_t* rbx_1 = arg1[3]
        int64_t* r12_1 = arg1[1]
        zmm6 = sub_1427e38e0(rbx_1, &var_128)
        (**rbx_1)(rbx_1, &data_1434cf410, 1)
        char var_108[0x80]
        memset(&var_108, 0, 0x80)
        _mm_cvtps_pd(zmm6.q)
        physx::shdfnd::snprintf(&var_108, 0x80, "%g")
        
        if (var_108[0] != 0)
            int64_t r8_1 = -1
            
            do
                r8_1 += 1
            while (var_108[r8_1] != 0)
            
            (**rbx_1)(rbx_1, &var_108, r8_1)
        
        (**rbx_1)(rbx_1, &data_1434cf410, 1)
        memset(&var_108, 0, 0x80)
        physx::shdfnd::snprintf(&var_108, 0x80, "%g")
        
        if (var_108[0] != 0)
            int64_t r8_2 = -1
            
            do
                r8_2 += 1
            while (var_108[r8_2] != 0)
            
            (**rbx_1)(rbx_1, &var_108, r8_2)
        
        (**rbx_1)(rbx_1, &data_1434cf410, 1)
        memset(&var_108, 0, 0x80)
        physx::shdfnd::snprintf(&var_108, 0x80, "%g")
        
        if (var_108[0] != 0)
            int64_t r8_3 = -1
            
            do
                r8_3 += 1
            while (var_108[r8_3] != 0)
            
            (**rbx_1)(rbx_1, &var_108, r8_3)
        
        int64_t rax_9 = *rbx_1
        char arg_8 = 0
        (*rax_9)(rbx_1, &arg_8, 1)
        (*(*r12_1 + 0x10))(r12_1, r14_1, rbx_1[4])
        rbx_1[3] = 0
        void* rdx_10 = *arg1
        
        if (*(rdx_10 + 0x10) != 0)
            if (*(*(rdx_10 + 8) + zx.q(*(rdx_10 + 0x10) - 1) * 0x10 + 8) != 0)
                int64_t* rcx_23 = arg1[1]
                (*(*rcx_23 + 0x20))(rcx_23, rdx_10)
            
            void* rax_13 = *arg1
            *(rax_13 + 0x10) -= 1
        
        *r15 += 1
        rsi = &rsi[2]
        i = *rsi
    while (i != 0)

void* rdx_11 = *arg1

if (*(rdx_11 + 0x10) != 0)
    if (*(*(rdx_11 + 8) + zx.q(*(rdx_11 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_27 = arg1[1]
        (*(*rcx_27 + 0x20))(rcx_27, rdx_11)
    
    i = *arg1
    *(i + 0x10) -= 1

return i
