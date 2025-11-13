// 函数: sub_140b16600
// 地址: 0x140b16600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg4
char arg_8

if (data_14399fa64 != 0)
    arg_8 = 1
    arg4.b = sub_140b5b8a0(*arg3, 0) == 0

if (data_14399fa64 == 0 || (arg3[1] != 0 | arg4.b) == 0)
    arg_8 = 0

uint32_t arg_28
uint32_t rcx_1 = arg_28
*arg1 = 0
arg1[1] = 0
int16_t* var_88
int32_t var_80
int32_t var_7c
uint32_t var_78
uint32_t var_74
uint32_t var_70
uint32_t var_6c
uint32_t var_68
int64_t var_60
void var_50
int16_t* var_48
uint32_t performanceCount
int16_t* rcx_10
int16_t* const rdi_2

if (rcx_1 == 1)
    sub_140b74050(&var_78, &var_74, &var_50, &var_70, &var_6c, &var_68, &performanceCount, &arg_28)
    uint32_t* var_90_2
    var_90_2.d = arg_28
    uint32_t* var_98_2
    var_98_2.d = performanceCount
    uint32_t* var_a0_2
    var_a0_2.d = var_68
    uint32_t* var_a8_2
    var_a8_2.d = var_6c
    sub_140b0a2c0(&var_60, var_78, var_74, var_70, var_a8_2.d, var_a0_2.d, var_98_2.d, var_90_2.d)
    int64_t* rax_42 = sub_140b28970(&var_60, &var_48, u"%Y.%m.%d-%H.%M.%S:%s")
    
    if (rax_42[1].d == 0)
    label_140b16993:
        rdi_2 = &data_142d40450
        goto label_140b169b2
    
    rdi_2 = *rax_42
label_140b169b2:
    data_143de5458
    sub_140a2e390(&var_88, u"[%s][%3llu]", rdi_2)
    
    if (arg1 == &var_88)
        int16_t* rcx_23 = var_88
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
    else
        int64_t rcx_22 = *arg1
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        *arg1 = var_88
        arg1[1].d = var_80
        var_80.q = 0
        *(arg1 + 0xc) = var_7c
        var_88 = nullptr
    
    rcx_10 = var_48
    goto label_140b16a20

if (rcx_1 == 2)
    double zmm2 = arg5
    
    if (not(zmm2 != -1.0))
        QueryPerformanceCounter(&performanceCount)
        zmm2 = float.d(performanceCount.q) f* data_143d796f8 + 16777216.0 f- data_143de5880
    
    data_143de5458
    sub_140a2e390(&var_88, u"[%07.2f][%3llu]", zmm2)
    
    if (arg1 == &var_88)
    label_140b167c4:
        rcx_10 = var_88
    label_140b16a20:
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
    else
        int64_t rcx_17 = *arg1
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        *arg1 = var_88
        arg1[1].d = var_80
        *(arg1 + 0xc) = var_7c
else
    if (rcx_1 == 3)
        sub_140b734e0(&var_68, &var_6c, &var_50, &var_70, &var_74, &var_78, &performanceCount, 
            &arg_28)
        uint32_t* var_90_1
        var_90_1.d = arg_28
        uint32_t* var_98_1
        var_98_1.d = performanceCount
        uint32_t* var_a0_1
        var_a0_1.d = var_78
        uint32_t* var_a8_1
        var_a8_1.d = var_74
        sub_140b0a2c0(&var_60, var_68, var_6c, var_70, var_a8_1.d, var_a0_1.d, var_98_1.d, 
            var_90_1.d)
        int64_t* rax_27 = sub_140b28970(&var_60, &var_48, u"%Y.%m.%d-%H.%M.%S:%s")
        
        if (rax_27[1].d == 0)
            goto label_140b16993
        
        rdi_2 = *rax_27
        goto label_140b169b2
    
    if (rcx_1 == 4)
        int32_t* rax_2 = sub_140af61f0(&var_48)
        int16_t* const rdi_1 = &data_142d40450
        int32_t rax_3
        int16_t* const r8
        int32_t r9
        int32_t r10_1
        
        if (*rax_2 s< 0)
        label_140b166c0:
            rax_3 = rax_2[3]
            r8 = &data_142e74850
            r9 = rax_2[2]
            r10_1 = rax_2[1]
        else
            r10_1 = rax_2[1]
            
            if (r10_1 s< 0)
                goto label_140b166c0
            
            r9 = rax_2[2]
            
            if (r9 s< 0)
                goto label_140b166c0
            
            rax_3 = rax_2[3]
            
            if (rax_3 s< 0)
                goto label_140b166c0
            
            r8 = &data_142d40450
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rax_3)
        int32_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(r9)
        int64_t var_98
        var_98.d = (temp4_1 ^ temp3_1) - temp3_1
        int32_t temp7_1
        int32_t temp8_1
        temp7_1:temp8_1 = sx.q(r10_1)
        int64_t var_a0
        var_a0.d = (temp6_1 ^ temp5_1) - temp5_1
        *rax_2
        int64_t var_a8
        var_a8.d = (temp8_1 ^ temp7_1) - temp7_1
        wchar16* rdx_4 = u"%s%02d;%02d;%02d;%02d"
        
        if (rax_2[4].b == 0)
            rdx_4 = u"%s%02d:%02d:%02d:%02d"
        
        sub_140a2e390(&var_88, rdx_4, r8)
        
        if (var_80 != 0)
            rdi_1 = var_88
        
        data_143de5458
        sub_140a2e390(&var_60, u"[%s][%3llu]", rdi_1)
        
        if (arg1 == &var_60)
            int64_t rcx_11 = var_60
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            goto label_140b167c4
        
        int64_t rcx_9 = *arg1
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rcx_10 = var_88
        *arg1 = var_60
        int32_t var_58
        arg1[1].d = var_58
        int32_t var_54
        *(arg1 + 0xc) = var_54
        var_58.q = 0
        var_60 = 0
        goto label_140b16a20

int64_t rdi_3 = -1
int64_t rax_54
int64_t r8_9

if (arg_8 != 0)
    int64_t* rax_53 = sub_140b63b70(arg3, &var_48)
    int32_t rcx_25 = rax_53[1].d
    int32_t r8_8 = rcx_25 - 1
    
    if (rcx_25 == 0)
        r8_8 = 0
    
    sub_140a20ba0(arg1, *rax_53, r8_8)
    int16_t* rcx_27 = var_48
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    sub_140a20ba0(arg1, &data_142d85f5c, 2)
    
    if (data_14399fa65 != 0 && arg2 != 5)
        rax_54 = sub_140b2b1a0(arg2)
        r8_9 = -1
        
        do
            r8_9 += 1
        while (*(rax_54 + (r8_9 << 1)) != 0)
        
        sub_140a20ba0(arg1, rax_54, r8_9.d)
        sub_140a20ba0(arg1, &data_142d85f5c, 2)
else if (data_14399fa65 != 0 && arg2 != 5)
    rax_54 = sub_140b2b1a0(arg2)
    r8_9 = -1
    
    do
        r8_9 += 1
    while (*(rax_54 + (r8_9 << 1)) != 0)
    
    sub_140a20ba0(arg1, rax_54, r8_9.d)
    sub_140a20ba0(arg1, &data_142d85f5c, 2)

if (rsi != 0)
    do
        rdi_3 += 1
    while (*(rsi + (rdi_3 << 1)) != 0)
    
    sub_140a20ba0(arg1, rsi, rdi_3.d)

return arg1
