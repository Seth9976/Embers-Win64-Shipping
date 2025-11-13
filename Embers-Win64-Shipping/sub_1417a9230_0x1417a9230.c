// 函数: sub_1417a9230
// 地址: 0x1417a9230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b19e60()
int64_t var_98 = (zx.o(0)).q
int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
int64_t* result = &var_98
int64_t var_90 = float.d(performanceCount_1) f* data_143d796f8 f+ 16777216.0
int64_t performanceCount_2
int64_t rdx = QueryPerformanceCounter(&performanceCount_2)
int64_t r14
r14.b = *(arg1 + 0x298) s> 0x3e8
int64_t zmm0 = float.d(performanceCount_2) f* data_143d796f8 f+ 16777216.0

if (*(arg1 + 0x350) == 0)
    int64_t* rcx_2 = *(arg1 + 0x360)
    int64_t* var_80
    int64_t* rax_2 = (**rcx_2)(rcx_2, &var_80)
    
    if (arg1 + 0x268 != rax_2)
        int64_t* rcx_3 = *(arg1 + 0x268)
        *(arg1 + 0x268) = *rax_2
        *rax_2 = 0
        
        if (rcx_3 != 0)
            (**rcx_3)(rcx_3, 1, arg1 + 0x268)
    
    int64_t* rcx_4 = var_80
    
    if (rcx_4 != 0)
        (**rcx_4)(rcx_4, 1)
    
    int64_t* rcx_5 = *(arg1 + 0x360)
    int64_t* var_78
    int64_t* rax_6 = (**rcx_5)(rcx_5, &var_78)
    
    if (arg1 + 0x270 != rax_6)
        int64_t* rcx_6 = *(arg1 + 0x270)
        *(arg1 + 0x270) = *rax_6
        *rax_6 = 0
        
        if (rcx_6 != 0)
            (**rcx_6)(rcx_6, 1, arg1 + 0x270)
    
    int64_t* rcx_7 = var_78
    
    if (rcx_7 != 0)
        (**rcx_7)(rcx_7, 1)
    
    if (*(arg1 + 0x289) == 0)
        int64_t* rcx_8 = *(arg1 + 0x360)
        int64_t* var_70
        int64_t* rax_10 = (**rcx_8)(rcx_8, &var_70)
        
        if (arg1 + 0x280 != rax_10)
            int64_t* rcx_9 = *(arg1 + 0x280)
            *(arg1 + 0x280) = *rax_10
            *rax_10 = 0
            
            if (rcx_9 != 0)
                (**rcx_9)(rcx_9, 1, arg1 + 0x280)
        
        int64_t* rcx_10 = var_70
        
        if (rcx_10 != 0)
            (**rcx_10)(rcx_10, 1)
        
        int64_t* rcx_11 = *(arg1 + 0x360)
        int64_t* var_68
        int64_t* rax_14 = (**rcx_11)(rcx_11, &var_68)
        
        if (arg1 + 0x278 != rax_14)
            int64_t* rcx_12 = *(arg1 + 0x278)
            *(arg1 + 0x278) = *rax_14
            *rax_14 = 0
            
            if (rcx_12 != 0)
                (**rcx_12)(rcx_12, 1, arg1 + 0x278)
        
        int64_t* rcx_13 = var_68
        
        if (rcx_13 != 0)
            (**rcx_13)(rcx_13, 1)
    
    rdx = sub_1417afa70(arg1)
    
    if (*(arg1 + 0x289) == 0)
        rdx = sub_1417af880(arg1, *(arg1 + 0x280))
        *(arg1 + 0x288) = 1

if (arg2 != 0)
    rdx = sub_1417bcdc0(arg1)

int64_t rcx_17 = *(arg1 + 0x350)
int64_t rax_17

if (rcx_17 != 0)
    rax_17 = 0
    
    if (0 == *(rcx_17 + 8))
        *(rcx_17 + 8) = 0
    else
        rax_17 = *(rcx_17 + 8)

if (rcx_17 == 0 || ((rax_17 u>> 0x1a).b & 1) != 0)
    if (*(arg1 + 0x350) != 0 && *(*(arg1 + 0x270) + 0x11) != 0)
        sub_1417af1b0(arg1, rdx)
        sub_1417a0b20(arg1 + 0x268, arg1 + 0x270)
        
        if (*(arg1 + 0x289) == 0)
            sub_1417a0b20(arg1 + 0x280, arg1 + 0x278)
        
        *(arg1 + 0x288) = 1
    
    int64_t rbx_1 = *(arg1 + 0x360)
    void var_58
    void** rax_20 = sub_1417ab880(&var_58, nullptr, 0xff)
    char rdx_12 = *(arg1 + 0x289)
    void* r8_5 = *rax_20
    *(r8_5 + 0x18) = arg1 + 0x300
    *(r8_5 + 0x20) = arg1 + 0x270
    *(r8_5 + 0x28) = arg1 + 0x278
    *(r8_5 + 0x10) = rbx_1
    *(r8_5 + 0x30) = r14.b
    *(r8_5 + 0x31) = rdx_12
    void* rcx_26 = *rax_20
    int32_t r8_6 = rax_20[2].d
    int64_t* rdx_13 = rax_20[1]
    int64_t* rbx_2 = *(rcx_26 + 0x40)
    int64_t* arg_8 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[9].d += 1
    
    sub_1417b5880(rcx_26, rdx_13, r8_6, 1)
    
    if (arg1 + 0x350 != &arg_8)
        int64_t* rcx_27 = *(arg1 + 0x350)
        *(arg1 + 0x350) = rbx_2
        
        if (rcx_27 != 0)
            rcx_27[9].d -= 1
            
            if (rcx_27[9].d == 1)
                sub_140a2f6e0(rcx_27)
    else if (rbx_2 != 0)
        rbx_2[9].d -= 1
        
        if (rbx_2[9].d == 1)
            sub_140a2f6e0(arg_8)
else
    sub_1417afa70(arg1)

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t zmm1 = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
*result = zmm1 f- zmm0 f+ *result
int64_t r8_7 = data_143ef7288
int64_t var_90_2 = zmm1

if (r8_7 == 0)
    return result

int64_t rax_24 = sx.q(data_143ef7290)
int64_t var_b0_1 = (&data_1439b8da8)[rax_24]
double var_b8_1 = _mm_cvtps_pd(*((rax_24 << 2) + 0x142fc4b08)).q f* var_98
return sub_140b1f700(&data_1439a8bd0, u"%s - %s: %f%s", r8_7)
