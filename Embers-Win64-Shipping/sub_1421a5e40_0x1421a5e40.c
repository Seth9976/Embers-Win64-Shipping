// 函数: sub_1421a5e40
// 地址: 0x1421a5e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int64_t rbx = data_143f4df88
int64_t rcx

if (data_143de5480 == 0)
    rcx = 0
else
    arg3 = arg_18
    rcx.b = GetCurrentThreadId().d != data_143de5470

if (*(rbx + (rcx << 2)) == 0)
    return 

void* rax_3
int64_t rcx_1

if (*(data_143f4dd68 + 4) <= 0f || arg10 != 0)
    rax_3 = arg5
    rcx_1 = sx.q(*(rax_3 + 0xb0)) ^ 1
else
    rax_3 = arg5
    rcx_1 = sx.q(*(rax_3 + 0xb0))

int64_t rbx_1 = sx.q(arg3)
uint64_t var_70
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[rbx_1]), &var_70, &data_143f4e330, 0)
uint64_t rax_5 = var_70
void* var_60
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[rbx_1]), &var_60, &data_143f4f020, 0)
int64_t rax_7 = data_143a2ef38

if (arg_18 s<= 1)
    rax_7 = data_143a2ef50

void* rbp_1 = var_60
*arg2 = rax_7
int64_t rax_8 = 0
void* var_98_1 = rbp_1

if (rax_5 != 0)
    int64_t rdx_2 = sx.q(*(rax_5 + 0x10c))
    void* var_68
    int64_t* rbx_2 = *(var_68 + 0x10)
    int64_t rax_10 = rbx_2[3]
    
    if (*(rax_10 + (rdx_2 << 3)) == 0)
        sub_1419ccf30(rbx_2, rdx_2.d)
        rax_10 = rbx_2[3]
    
    rax_8 = *(rax_10 + (rdx_2 << 3))
    rbp_1 = var_98_1

arg2[1] = rax_8
int64_t rax_11 = 0

if (rbp_1 != 0)
    int64_t rdx_3 = sx.q(*(rbp_1 + 0x10c))
    void* var_58
    int64_t* rbx_3 = *(var_58 + 0x10)
    int64_t rax_13 = rbx_3[3]
    
    if (*(rax_13 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rbx_3, rdx_3.d)
        rax_13 = rbx_3[3]
    
    rax_11 = *(rax_13 + (rdx_3 << 3))
    rbp_1 = var_98_1

arg2[4] = rax_11
arg2[0xb].d = 0
sub_1419870b0(arg1, arg2, 2)
int64_t var_b0_1 = arg9
int64_t var_b8_1 = arg8
uint64_t rax
int128_t zmm6_1
rax, zmm6_1 =
    sub_1421c0cd0(rbp_1, arg1, rcx_1 * 0x38 + rax_3, rax_3 + 0x90, rax_3 + 0x70, arg6, arg_18, arg7)
int64_t* rcx_12 = arg4
int64_t i_3 = sx.q(rcx_12[1].d)
int64_t i_4 = i_3

if (i_3 s> 0)
    uint64_t rax_19 = zx.q(data_14401b1a0)
    int64_t* r15_2 = nullptr
    rax = rax_5
    int128_t var_48_1 = zmm6_1
    zmm6_1 = 0x40800000
    int16_t* r8_1 = rax + 0x11c
    int16_t* rdx_6 = rax + 0x122
    int16_t* var_88_1 = r8_1
    int64_t i
    
    do
        bool cond:4_1 = *(rax + 0x11a) u<= 0
        void* r12_2 = *rcx_12
        int64_t rsi_1 = *(arg1 + 0x188)
        int64_t var_a0 = rsi_1
        int64_t rbp_4 = *(r15_2 + r12_2)
        
        if (not(cond:4_1))
            uint32_t r14_3 = zx.d(*(rax + 0x118))
            void*** rcx_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_20 = &rcx_15[5]
            
            if (rax_20 u> *(arg1 + 0x38))
                zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                r8_1 = var_88_1
                rcx_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_20 = &rcx_15[5]
            
            *(arg1 + 0x30) = rax_20
            void**** rax_21 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_21 = rcx_15
            *(arg1 + 8) = &rcx_15[1]
            rcx_15[1] = 0
            rcx_15[3].d = r14_3
            i_3 = i_4
            *rcx_15 = &data_142d5ebf8
            rcx_15[2] = rsi_1
            rcx_15[4] = rbp_4
        
        void* var_d8_1
        var_d8_1.d = 0
        i_4.d = zmm6_1.d f/ _mm_cvtepi32_ps(zx.o(data_143a2ee34)).d
        var_d8_1.d = 0
        i_4.d =
            sub_1405eb490(arg1, &var_a0, r8_1, &i_4, 0) f/ _mm_cvtepi32_ps(zx.o(data_143a2ee38)).d
        sub_1405eb490(arg1, &var_a0, rdx_6, &i_4, 0)
        int32_t r8_3 = 0
        rbp_1 = var_98_1
        int64_t rdx_9 = 0
        int64_t rsi_2 = *(r15_2 + r12_2 + 0x10)
        var_a0 = *(arg1 + 0x1a0)
        int64_t rbx_4 = sx.q(*(rbp_1 + 0xe0))
        
        if (rbx_4 s> 0)
            while (true)
                void* rcx_22 = *(rbp_1 + 0xd8)
                
                if ((*(rbp_1 + 0xd8) & 1) != 0)
                    rcx_22 = (rcx_22 s>> 1) + rbp_1 + 0xd8
                
                if (*(rcx_22 + (rdx_9 << 3)) == data_143f4e210)
                    break
                
                r8_3 += 1
                rdx_9 += 1
                
                if (rdx_9 s>= rbx_4)
                    goto label_1421a6266
        
        void* r8_4
        
        if (rbx_4 s<= 0 || r8_3 == 0xffffffff)
        label_1421a6266:
            TEB* gsbase
            
            if (data_143ce8564 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rax_19 << 3))))
                _Init_thread_header(&data_143ce8564)
                
                if (data_143ce8564 == 0xffffffff)
                    data_143ce8560 = 0xffff
                    _Init_thread_footer(&data_143ce8564)
            
            r8_4 = &data_143ce8560
        else
            void* rcx_27 = *(rbp_1 + 0xe8)
            
            if ((rcx_27.b & 1) != 0)
                rcx_27 = (rcx_27 s>> 1) + rbp_1 + 0xe8
            
            r8_4 = rcx_27 + (sx.q(r8_3) << 1)
        
        sub_141083500(arg1, &var_a0, r8_4, rsi_2)
        var_d8_1.b = arg10
        sub_1421a7fc0(rbp_1 + 0x160, arg1, &var_a0, r12_2 + 0x20 + r15_2, 0)
        sub_1421c3020(rbp_1, arg1, r12_2 + 0x60 + r15_2, r12_2 + 0x78 + r15_2)
        int32_t rdx_14 = *(r15_2 + r12_2 + 0x98)
        
        if (arg_18 s> 1)
            zmm6_1 = sub_1421b2280(arg1, (rdx_14 + 7) & 0xfffffff8)
        else
            zmm6_1 = sub_1421b23d0(arg1, *(r15_2 + r12_2 + 8), rdx_14)
        
        rax = rax_5
        r15_2 = &r15_2[0x14]
        rcx_12 = arg4
        i = i_3
        i_3 -= 1
        i_4 = i_3
        r8_1 = rax + 0x11c
    while (i != 1)

int64_t r15_3 = *(arg1 + 0x1a0)
void* rsi_3 = rbp_1 + 0x140
int64_t i_2 = 4
int64_t i_1

do
    if (*(rsi_3 + 2) u> 0)
        uint32_t r14_4 = zx.d(*rsi_3)
        void*** rcx_31 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_31 = &rcx_31[5]
        
        if (rax_31 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_31 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_31 = &rcx_31[5]
        
        *(arg1 + 0x30) = rax_31
        void**** rax_32 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_32 = rcx_31
        *(arg1 + 8) = &rcx_31[1]
        rcx_31[1] = 0
        *rcx_31 = &data_142d5ebf8
        rcx_31[2] = r15_3
        rcx_31[3].d = r14_4
        rcx_31[4] = 0
    
    rsi_3 += 4
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
