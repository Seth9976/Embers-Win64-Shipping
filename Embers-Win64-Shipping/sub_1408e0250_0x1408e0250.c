// 函数: sub_1408e0250
// 地址: 0x1408e0250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70f0)
void var_7118
int64_t rax_1 = __security_cookie ^ &var_7118
int32_t performanceCount
QueryPerformanceCounter(&performanceCount)
int128_t* rdx = arg2[0x13]
int128_t zmm0 = *(rdx + arg2[0x12])
arg2[0x13] = &rdx[1]
int32_t rbx = zmm0.d
int128_t var_58 = zmm0
uint32_t result

if (rbx - 0x7b u<= 1)
    sub_1408dc760(arg2, &arg3[0xc], arg4)
    sub_1408db5d0(arg2, &arg3[0xe], arg4)
    int64_t rsi_1 = 0
    uint64_t var_70e8 = 0
    int64_t var_70e0_1 = 0
    char var_70f8_1
    
    if (rbx != 0x7b)
        var_70f8_1 = 1
        (*(*arg2 + 8))(arg2, 0, 0)
        int32_t performanceCount_1 = var_70e0_1.d
        int64_t* rcx_4 = arg2[1]
        
        if ((arg2[5].b & 1) != 0)
            performanceCount_1 = 0
        
        performanceCount = performanceCount_1
        int32_t* rdx_3 = *rcx_4
        
        if (&rdx_3[1] u> rcx_4[1])
            int32_t* rdx_4 = &performanceCount
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_4, arg4)
            else
                (*(*arg2 + 0x150))(arg2, rdx_4, 4)
        else
            performanceCount = *rdx_3
            *rcx_4 += 4
        
        int32_t performanceCount_3 = performanceCount
        
        if (performanceCount_3 != 0)
            char rax_8 = *(arg2 + 0x29)
            
            if ((rax_8 & 1) != 0 || performanceCount_3 s<= 0
                    || ((*(arg2 + 0x2b) & 8) != 0 && performanceCount_3 s> 0x400000))
                *(arg2 + 0x29) = rax_8 | 1
            else
                var_70e0_1.d = performanceCount_3
                
                if ((arg2[5].b & 1) != 0)
                    sub_1405c4a90(&var_70e8, performanceCount_3, var_70e0_1:4.d)
                    performanceCount_3 = var_70e0_1.d
                
                (*(*arg2 + 0x150))(arg2, var_70e8, sx.q(performanceCount_3) << 2)
        else if ((arg2[5].b & 1) != 0 && var_70e0_1:4.d != 0)
            sub_1405dadb0(&var_70e8, 0)
        
        performanceCount = var_70e0_1.d
    else
        var_70f8_1 = 0
        performanceCount = 1
    
    void var_7068
    memset(&var_7068, 0, 0x7008)
    memcpy(arg1 + 8, &var_7068, 0x7008)
    uint64_t rbx_1 = zx.q(var_58:4.d)
    int64_t rcx_11 = 0
    *(arg1 + 8) = arg3
    int64_t var_70d8 = 0
    int32_t var_70cc_1 = 0
    int32_t rax_11 = (rbx_1 + 0x10).d
    
    if (rax_11 s> 0)
        sub_1405daba0(&var_70d8)
        rcx_11 = var_70d8
    
    memcpy(rcx_11, arg2[0x12] + arg2[0x13], rbx_1.d)
    int64_t rax_12 = var_70d8
    arg2[0x13] += rbx_1
    int64_t var_70c8 = rax_12
    uint64_t var_70c0_1 = zx.q(rax_11)
    int64_t var_70b8_1 = 0
    int64_t var_70b0_1 = 0
    sub_1408e6f20(arg1, &var_70c8)
    char* rbx_3 = *(arg1 + 8) + 0xa0
    
    if (rbx_3[7] == 0)
        sub_1408e5c90(arg1 + 0x10, &var_70c8)
    
    sub_1408e5c90(arg1 + 0x1010, &var_70c8)
    
    if (rbx_3[3] != 0)
        sub_1408e5c90(arg1 + 0x2010, &var_70c8)
    
    if (*rbx_3 != 0)
        sub_1408e5c90(arg1 + 0x3010, &var_70c8)
    
    if (rbx_3[1] != 0)
        sub_1408e5c90(arg1 + 0x4010, &var_70c8)
    
    if (rbx_3[2] != 0)
        sub_1408e5c90(arg1 + 0x5010, &var_70c8)
    
    if (rbx_3[4] != 0)
        sub_1408e5c90(arg1 + 0x6010, &var_70c8)
    
    int32_t r12_1 = var_58:8.d
    
    if (*(arg3 + 0xa7) == 0)
        int32_t rdx_19 = 0
        arg3[0x13].d = 0
        
        if (*(arg3 + 0x9c) != r12_1)
            sub_1405dadb0(&arg3[0x12], r12_1)
            rdx_19 = arg3[0x13].d
        
        int32_t rax_14 = rdx_19 + r12_1
        arg3[0x13].d = rax_14
        
        if (rax_14 s> *(arg3 + 0x9c))
            sub_1405a4cf0(&arg3[0x12])
    
    int64_t rbx_5 = sx.q(var_58:0xc.d)
    int32_t rdx_21 = 0
    arg3[1].d = 0
    
    if (*(arg3 + 0xc) != rbx_5.d)
        sub_140638cc0(arg3, rbx_5.d)
        rdx_21 = arg3[1].d
    
    int32_t rax_15 = rdx_21 + rbx_5.d
    arg3[1].d = rax_15
    
    if (rax_15 s> *(arg3 + 0xc))
        sub_140638a00(arg3)
    
    arg3[9].d = 0
    
    if (*(arg3 + 0x4c) != rbx_5.d)
        sub_140679c00(&arg3[8], rbx_5.d)
    
    if (*(arg3 + 0xa3) == 0)
        int64_t r15_1 = sx.q(arg3[9].d)
        int32_t rax_17 = (r15_1 + rbx_5).d
        arg3[9].d = rax_17
        
        if (rax_17 s> *(arg3 + 0x4c))
            sub_1406105e0(&arg3[8])
        
        memset(arg3[8] + (r15_1 << 2), 0, rbx_5 << 2)
    else
        int32_t rax_16 = arg3[9].d + rbx_5.d
        arg3[9].d = rax_16
        
        if (rax_16 s> *(arg3 + 0x4c))
            sub_1406105e0(&arg3[8])
    
    arg3[5].d = 0
    
    if (*(arg3 + 0x2c) != rbx_5.d)
        sub_1405dadb0(&arg3[4], rbx_5.d)
    
    if (arg3[0x14].b == 0)
        int64_t r15_2 = sx.q(arg3[5].d)
        int32_t rax_20 = (r15_2 + rbx_5).d
        arg3[5].d = rax_20
        
        if (rax_20 s> *(arg3 + 0x2c))
            sub_1405a4cf0(&arg3[4])
        
        memset(arg3[4] + (r15_2 << 2), 0, rbx_5 << 2)
    else
        int32_t rax_19 = arg3[5].d + rbx_5.d
        arg3[5].d = rax_19
        
        if (rax_19 s> *(arg3 + 0x2c))
            sub_1405a4cf0(&arg3[4])
    
    arg3[7].d = 0
    
    if (*(arg3 + 0x3c) != rbx_5.d)
        sub_1405dadb0(&arg3[6], rbx_5.d)
    
    if (*(arg3 + 0xa1) == 0)
        int64_t r15_3 = sx.q(arg3[7].d)
        int32_t rax_23 = (r15_3 + rbx_5).d
        arg3[7].d = rax_23
        
        if (rax_23 s> *(arg3 + 0x3c))
            sub_1405a4cf0(&arg3[6])
        
        memset(arg3[6] + (r15_3 << 2), 0, rbx_5 << 2)
    else
        int32_t rax_22 = arg3[7].d + rbx_5.d
        arg3[7].d = rax_22
        
        if (rax_22 s> *(arg3 + 0x3c))
            sub_1405a4cf0(&arg3[6])
    
    arg3[3].d = 0
    
    if (*(arg3 + 0x1c) != rbx_5.d)
        sub_1405c5570(&arg3[2], rbx_5.d)
    
    if (*(arg3 + 0xa2) == 0)
        int64_t r15_4 = sx.q(arg3[3].d)
        int32_t rax_26 = (r15_4 + rbx_5).d
        arg3[3].d = rax_26
        
        if (rax_26 s> *(arg3 + 0x1c))
            sub_1405a4d70(&arg3[2])
        
        memset(arg3[2] + (r15_4 << 3), 0, rbx_5 << 3)
    else
        int32_t rax_25 = arg3[3].d + rbx_5.d
        arg3[3].d = rax_25
        
        if (rax_25 s> *(arg3 + 0x1c))
            sub_1405a4d70(&arg3[2])
    
    arg3[0xb].d = 0
    
    if (*(arg3 + 0x5c) != rbx_5.d)
        sub_140638cc0(&arg3[0xa], rbx_5.d)
    
    if (*(arg3 + 0xa4) == 0)
        int64_t r15_5 = sx.q(arg3[0xb].d)
        int32_t rax_29 = (r15_5 + rbx_5).d
        arg3[0xb].d = rax_29
        
        if (rax_29 s> *(arg3 + 0x5c))
            sub_140638a00(&arg3[0xa])
        
        memset(arg3[0xa] + r15_5 * 0xc, 0, rbx_5 * 0xc)
    else
        int32_t rax_28 = arg3[0xb].d + rbx_5.d
        arg3[0xb].d = rax_28
        
        if (rax_28 s> *(arg3 + 0x5c))
            sub_140638a00(&arg3[0xa])
    
    int32_t performanceCount_2 = performanceCount
    char var_7094_1 = var_70f8_1
    int64_t* var_7090_1 = &var_70d8
    int64_t* var_7088_1 = &var_70c8
    uint64_t* var_7080_1 = &var_70e8
    var_58.q = sub_1408df320
    void* var_70a8
    var_58:8.q = &var_70a8
    var_70a8 = arg1
    int32_t performanceCount_4 = performanceCount_2
    int32_t var_709c_1 = r12_1
    int32_t var_7098_1 = rbx_5.d
    int64_t* var_7078_1 = arg3
    sub_14077b750(performanceCount_2, &var_58, 0)
    int64_t rbx_6 = data_143cebff0
    
    if (data_143de5480 != 0)
        rsi_1.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rbx_6 + (rsi_1 << 2)) == 1)
        QueryPerformanceCounter(&performanceCount)
    
    int64_t rcx_49 = var_70d8
    
    if (rcx_49 != 0)
        sub_140a74f90(rcx_49)
    
    uint64_t rcx_50 = var_70e8
    
    if (rcx_50 != 0)
        sub_140a74f90(rcx_50)
    
    result.b = 1
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_7118)
return result
