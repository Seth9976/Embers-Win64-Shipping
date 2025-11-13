// 函数: sub_1421af7f0
// 地址: 0x1421af7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = data_143f4df88
int64_t r15 = sx.q(arg3)
int64_t rcx

if (data_143de5480 == 0)
    rcx = 0
else
    rcx.b = GetCurrentThreadId() != data_143de5470

if (*(rbx + (rcx << 2)) == 0)
    return 

int64_t rax_1 = sub_14082fb80(&data_143a2f010)
int64_t rax_2 = sub_1405948b0(&data_143a2f010)
int64_t r12_1 = rax_2
void* var_60
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[r15]), &var_60, &data_143f4e330, 0)
void* r13_1 = var_60
void* const i_4
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[r15]), &i_4, &data_143f4e430, 0)
int64_t rax_5 = data_143a2ef38

if (r15.d s<= 1)
    rax_5 = data_143a2ef50

*arg2 = rax_5
int64_t rax_6 = 0

if (r13_1 != 0)
    int64_t rdx_2 = sx.q(*(r13_1 + 0x10c))
    void* var_58
    int64_t* rbx_1 = *(var_58 + 0x10)
    int64_t rax_8 = rbx_1[3]
    
    if (*(rax_8 + (rdx_2 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_2.d)
        rax_8 = rbx_1[3]
    
    rax_6 = *(rax_8 + (rdx_2 << 3))

arg2[1] = rax_6
int64_t rcx_6 = 0
void* const i_5 = i_4

if (i_5 != 0)
    int64_t rdx_3 = sx.q(*(i_5 + 0x10c))
    void* var_68
    int64_t* rbx_2 = *(var_68 + 0x10)
    int64_t rax_10 = rbx_2[3]
    
    if (*(rax_10 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rbx_2, rdx_3.d)
        rax_10 = rbx_2[3]
    
    rcx_6 = *(rax_10 + (rdx_3 << 3))

arg2[4] = rcx_6
arg2[0xb].d = 0
int128_t zmm6_1 = sub_1419870b0(arg1, arg2, 2)
float rsi_1 = 0f
int64_t* rdx_5 = arg4
int32_t i_2 = 0x2000
float var_98 = 0f
int32_t i = rdx_5[1].d

if (r15.d s> 1)
    i_2 = 0x2000

i_4 = 0x2000

if (i s<= 0)
    return 

int128_t var_48_1 = zmm6_1
zmm6_1 = 0x40800000

do
    int32_t i_1 = i_2
    
    if (i s<= i_2)
        i_1 = i
    
    uint64_t i_3 = zx.q(i_1)
    int64_t rdx_6 = *rdx_5 + (sx.q(rsi_1) << 2)
    int32_t var_a8
    int64_t var_90
    uint32_t rax
    
    if (r15.d s> 1)
        int32_t r15_3 = (i_1 + 7) & 0xfffffff8
        sub_1421aefc0(r12_1, rdx_6, i_3, zx.q(r15_3), var_a8)
        bool cond:2_1 = *(r13_1 + 0x11a) u<= 0
        int64_t r12_3 = *(arg1 + 0x188)
        int64_t var_80 = r12_3
        
        if (not(cond:2_1))
            var_90.d = zx.d(*(r13_1 + 0x118))
            void*** rcx_22 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_17 = &rcx_22[5]
            
            if (rax_17 u> *(arg1 + 0x38))
                zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_22 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_17 = &rcx_22[5]
            
            *(arg1 + 0x30) = rax_17
            int64_t* rax_18 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            rsi_1 = var_98
            *rax_18 = rcx_22
            *(arg1 + 8) = &rcx_22[1]
            rcx_22[1] = 0
            *rcx_22 = &data_142d5ebf8
            rcx_22[3].d = var_90.d
            rcx_22[4] = rax_1
            rcx_22[2] = r12_3
        
        var_90.d = zmm6_1.d f/ _mm_cvtepi32_ps(zx.o(data_143a2ee34)).d
        var_a8 = 0
        var_90.d = sub_1405eb490(arg1, &var_80, r13_1 + 0x11c, &var_90, 0)
            f/ _mm_cvtepi32_ps(zx.o(data_143a2ee38)).d
        sub_1405eb490(arg1, &var_80, r13_1 + 0x122, &var_90, 0)
        rax, zmm6_1 = sub_1421b2280(arg1, r15_3)
        r12_1 = rax_2
    else
        sub_1421aefc0(r12_1, rdx_6, i_3, zx.q(i_1), var_a8)
        bool cond:3_1 = *(r13_1 + 0x11a) u<= 0
        int64_t r15_1 = *(arg1 + 0x188)
        var_90 = r15_1
        
        if (not(cond:3_1))
            uint32_t r12_2 = zx.d(*(r13_1 + 0x118))
            void*** rcx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_12 = &rcx_13[5]
            
            if (rax_12 u> *(arg1 + 0x38))
                zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_12 = &rcx_13[5]
            
            *(arg1 + 0x30) = rax_12
            void**** rax_13 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            rsi_1 = var_98
            *rax_13 = rcx_13
            *(arg1 + 8) = &rcx_13[1]
            rcx_13[1] = 0
            *rcx_13 = &data_142d5ebf8
            rcx_13[3].d = r12_2
            r12_1 = rax_2
            rcx_13[4] = rax_1
            rcx_13[2] = r15_1
        
        var_98 = zmm6_1.d f/ _mm_cvtepi32_ps(zx.o(data_143a2ee34)).d
        var_a8 = 0
        var_98 = sub_1405eb490(arg1, &var_90, r13_1 + 0x11c, &var_98, 0)
            f/ _mm_cvtepi32_ps(zx.o(data_143a2ee38)).d
        sub_1405eb490(arg1, &var_90, r13_1 + 0x122, &var_98, 0)
        rax, zmm6_1 = sub_1421b23d0(arg1, r12_1, i_1)
    i_2 = i_4.d
    rsi_1 += i_1
    r15 = zx.q(arg3)
    i -= i_1
    rdx_5 = arg4
    var_98 = rsi_1
while (i s> 0)
