// 函数: sub_142677590
// 地址: 0x142677590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** r13 = nullptr
int64_t** arg_10 = nullptr
int64_t* r8 = &arg1[0x11]
int64_t** var_48 = nullptr
int32_t i_5 = 0
int32_t var_3c = 0
__builtin_memset(&arg1[0x10], 0, 0x1c)
*(r8 + 0x1c) = 0x80
int64_t* rax = r8[2]

if (rax != 0)
    r8 = rax

*r8 = 0
r8[1] = 0
arg1[0x13].d = 0xffffffff
*(arg1 + 0x134) = 0
arg1[0x14].q = 0
*(arg1 + 0x148) = 0
arg1[0x15].q = arg2
*(arg1 + 0x158) ^= (*(arg2 + 0x474) ^ *(arg1 + 0x158)) & 1
int32_t i_7

if (&var_48 != arg2 + 0x398)
    i_5 = *(arg2 + 0x3a0)
    int64_t rsi_1 = *(arg2 + 0x398)
    i_7 = i_5
    
    if (i_5 != 0)
        sub_14083a1f0(&var_48, i_5, 0)
        r13 = var_48
        arg_10 = r13
        void* rsi_2 = rsi_1 - r13
        void* rbx_1 = &r13[3]
        int32_t i
        
        do
            sub_140596d10(rbx_1 - 0x18, rsi_2 - 0x18 + rbx_1)
            *(rbx_1 - 8) = *(rbx_1 + rsi_2 - 8)
            *rbx_1 = *(rbx_1 + rsi_2)
            rbx_1 += 0x20
            i = i_5
            i_5 -= 1
        while (i != 1)
        i_5 = i_7

memset(arg1, 0, 0x80)

if (i_5 s> 0)
    void* rbp_1 = &r13[2]
    void* r14_1 = rbp_1
    uint64_t i_6 = zx.q(i_5)
    uint64_t i_1
    
    do
        int64_t* rbx_2 = *(rbp_1 + 8)
        int64_t* arg_18 = rbx_2
        
        if (rbx_2 != 0)
            void* rsi_3 = rbx_2[0x23]
            
            if (rsi_3 != 0)
            label_1426776fd:
                i_7.q = r14_1
                var_48 = &arg_18
                void arg_8
                sub_140b2c6c0(&arg1[0x10], &arg_8, &var_48, nullptr)
                *(arg1 + (sx.q(*rbp_1) << 1)) = *(rsi_3 + 0x44)
            else
                (*(*rbx_2 + 0x390))(rbx_2)
                rsi_3 = rbx_2[0x23]
                
                if (rsi_3 != 0)
                    goto label_1426776fd
        
        r14_1 += 0x20
        rbp_1 += 0x20
        i_1 = i_6
        i_6 -= 1
    while (i_1 != 1)
    r13 = arg_10

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
void* rbx_3 = &arg1[8]
uint64_t rcx_7 = zx.q(data_14401b1a0)
*rbx_3 = *arg1
int64_t rcx_8 = *(ThreadLocalStoragePointer + (rcx_7 << 3))
*(rbx_3 + 0x10) = arg1[1]
*(rbx_3 + 0x20) = arg1[2]
*(rbx_3 + 0x30) = arg1[3]
*(rbx_3 + 0x40) = arg1[4]
*(rbx_3 + 0x50) = arg1[5]
*(rbx_3 + 0x60) = arg1[6]
*(rbx_3 + 0x70) = arg1[7]

if (data_143f7195c s> *(0x14 + rcx_8))
    _Init_thread_header(&data_143f7195c)
    
    if (data_143f7195c == 0xffffffff)
        data_143f71958 = data_143f717a0
        _Init_thread_footer(&data_143f7195c)

int16_t rax_9 = data_143f71958

if (rax_9 != 0)
    uint128_t zmm1 = zx.o(sx.d(rax_9))
    int64_t i_4 = 2
    zmm1 = _mm_shuffle_epi32(_mm_unpacklo_epi16(zmm1, zmm1.q), 0)
    int64_t i_2
    
    do
        int128_t zmm0 = *rbx_3
        rbx_3 += 0x40
        *(rbx_3 - 0x40) = zmm0 | zmm1
        *(rbx_3 - 0x30) |= zmm1
        *(rbx_3 - 0x20) |= zmm1
        *(rbx_3 - 0x10) |= zmm1
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

int64_t** rbx_4 = r13

if (i_5 != 0)
    int32_t i_3
    
    do
        int64_t* rcx_9 = *rbx_4
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rbx_4 = &rbx_4[4]
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)

if (r13 != 0)
    sub_140a74f90(r13)

return arg1
