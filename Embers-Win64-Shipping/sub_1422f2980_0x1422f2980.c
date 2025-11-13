// 函数: sub_1422f2980
// 地址: 0x1422f2980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_68
int128_t zmm6 = sub_1422d89c0(&var_68)
int64_t* rcx_1 = data_143f553c0
var_68 = *arg1
int32_t rax_1 = (*(*rcx_1 + 0x90))(rcx_1)
int32_t rcx_2 = arg1[1]
int32_t rdi = 0
int32_t rax_2 = rax_1 - 1
int32_t var_64

if (rcx_2 s>= 0)
    if (rcx_2 s< rax_2)
        rax_2 = rcx_2
    
    var_64 = rax_2
else
    var_64 = 0

int64_t* rcx_3 = data_143f553d8
int32_t rax_4 = (*(*rcx_3 + 0x90))(rcx_3)
int32_t rcx_4 = arg1[2]
int32_t rax_5 = rax_4 - 1
int32_t var_60

if (rcx_4 s>= 0)
    if (rcx_4 s< rax_5)
        rax_5 = rcx_4
    
    var_60 = rax_5
else
    var_60 = 0

int64_t* rcx_5 = data_143f553f0
int32_t rax_7 = (*(*rcx_5 + 0x90))(rcx_5)
int32_t rcx_6 = arg1[3]
int32_t rax_8 = rax_7 - 1
int32_t var_5c

if (rcx_6 s>= 0)
    if (rcx_6 s< rax_8)
        rax_8 = rcx_6
    
    var_5c = rax_8
else
    var_5c = 0

int64_t* rcx_7 = data_143f55408
int32_t rax_10 = (*(*rcx_7 + 0x90))(rcx_7)
int32_t rcx_8 = arg1[4]
int32_t rax_11 = rax_10 - 1
int32_t var_58

if (rcx_8 s>= 0)
    if (rcx_8 s< rax_11)
        rax_11 = rcx_8
    
    var_58 = rax_11
else
    var_58 = 0

int64_t* rcx_9 = data_143f55420
int32_t rax_13 = (*(*rcx_9 + 0x90))(rcx_9)
int32_t rcx_10 = arg1[5]
int32_t rax_14 = rax_13 - 1
int32_t var_54

if (rcx_10 s>= 0)
    if (rcx_10 s< rax_14)
        rax_14 = rcx_10
    
    var_54 = rax_14
else
    var_54 = 0

int64_t* rcx_11 = data_143f55438
int32_t rax_16 = (*(*rcx_11 + 0x90))(rcx_11)
int32_t rcx_12 = arg1[6]
int32_t rax_17 = rax_16 - 1
int32_t var_50

if (rcx_12 s>= 0)
    if (rcx_12 s< rax_17)
        rax_17 = rcx_12
    
    var_50 = rax_17
else
    var_50 = 0

int64_t* rcx_13 = data_143f55450
int32_t rax_19 = (*(*rcx_13 + 0x90))(rcx_13)
int32_t rcx_14 = arg1[7]
int32_t rax_20 = rax_19 - 1
int32_t var_4c

if (rcx_14 s>= 0)
    if (rcx_14 s< rax_20)
        rax_20 = rcx_14
    
    var_4c = rax_20
else
    var_4c = 0

int64_t* rcx_15 = data_143f55468
int32_t rcx_16 = (*(*rcx_15 + 0x90))(rcx_15) - 1
int32_t rax_23 = arg1[8]

if (rax_23 s< 0)
    rcx_16 = 0
else if (rax_23 s< rcx_16)
    rcx_16 = rax_23

int64_t var_38
int64_t var_28

if (data_143f56366 != 0)
    if (arg2 != 0)
        goto label_1422f2b99
    
    float zmm0 = var_68
    data_143f55494 = var_64
    data_143f55498 = var_60
    data_143f5549c = var_5c
    data_143f554a0 = var_58
    data_143f554a4 = var_54
    data_143f55490 = zmm0
    data_143f554a8 = var_50
    data_143f554b0 = rcx_16
    data_143f554ac = var_4c
    float var_44
    data_143f554b4 = var_44
    float var_40
    data_143f554b8 = var_40
    sub_140627690(&data_143f554c0, &var_38)
    sub_140627690(&data_143f554d0, &var_28)
else if (arg2 == 0)
    sub_1422f2300(data_143f552e8, var_68, 0x1000000)
    int64_t* rbx_2 = data_143f55300
    int16_t* var_78
    sub_140a2e390(&var_78, u"%d", zx.q(var_64))
    int16_t* const rsi_1 = &data_142d40450
    int16_t* const rdx_10 = &data_142d40450
    int32_t var_70
    
    if (var_70 != 0)
        rdx_10 = var_78
    
    (*(*rbx_2 + 0x80))(rbx_2, rdx_10, 0x1000000)
    int16_t* rcx_30 = var_78
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    int64_t* rbx_3 = data_143f55318
    sub_140a2e390(&var_78, u"%d", zx.q(var_60))
    int16_t* const rdx_11 = &data_142d40450
    
    if (var_70 != 0)
        rdx_11 = var_78
    
    (*(*rbx_3 + 0x80))(rbx_3, rdx_11, 0x1000000)
    int16_t* rcx_33 = var_78
    
    if (rcx_33 != 0)
        sub_140a74f90(rcx_33)
    
    int64_t* rbx_4 = data_143f55330
    sub_140a2e390(&var_78, u"%d", zx.q(var_5c))
    int16_t* const rdx_12 = &data_142d40450
    
    if (var_70 != 0)
        rdx_12 = var_78
    
    (*(*rbx_4 + 0x80))(rbx_4, rdx_12, 0x1000000)
    int16_t* rcx_36 = var_78
    
    if (rcx_36 != 0)
        sub_140a74f90(rcx_36)
    
    int64_t* rbx_5 = data_143f55348
    sub_140a2e390(&var_78, u"%d", zx.q(var_58))
    int16_t* const rdx_13 = &data_142d40450
    
    if (var_70 != 0)
        rdx_13 = var_78
    
    (*(*rbx_5 + 0x80))(rbx_5, rdx_13, 0x1000000)
    int16_t* rcx_39 = var_78
    
    if (rcx_39 != 0)
        sub_140a74f90(rcx_39)
    
    int64_t* rbx_6 = data_143f55360
    sub_140a2e390(&var_78, u"%d", zx.q(var_54))
    int16_t* const rdx_14 = &data_142d40450
    
    if (var_70 != 0)
        rdx_14 = var_78
    
    (*(*rbx_6 + 0x80))(rbx_6, rdx_14, 0x1000000)
    int16_t* rcx_42 = var_78
    
    if (rcx_42 != 0)
        sub_140a74f90(rcx_42)
    
    int64_t* rbx_7 = data_143f55378
    sub_140a2e390(&var_78, u"%d", zx.q(var_50))
    int16_t* rdx_15 = &data_142d40450
    
    if (var_70 != 0)
        rdx_15 = var_78
    
    (*(*rbx_7 + 0x80))(rbx_7, rdx_15, 0x1000000)
    int16_t* rcx_45 = var_78
    
    if (rcx_45 != 0)
        sub_140a74f90(rcx_45)
    
    int64_t* rbx_8 = data_143f55390
    sub_140a2e390(&var_78, u"%d", zx.q(var_4c))
    int16_t* rdx_16 = &data_142d40450
    
    if (var_70 != 0)
        rdx_16 = var_78
    
    (*(*rbx_8 + 0x80))(rbx_8, rdx_16, 0x1000000)
    int16_t* rcx_48 = var_78
    
    if (rcx_48 != 0)
        sub_140a74f90(rcx_48)
    
    int64_t* rbx_9 = data_143f553a8
    sub_140a2e390(&var_78, u"%d", zx.q(rcx_16))
    
    if (var_70 != 0)
        rsi_1 = var_78
    
    (*(*rbx_9 + 0x80))(rbx_9, rsi_1, 0x1000000)
    int16_t* rcx_51 = var_78
    
    if (rcx_51 != 0)
        sub_140a74f90(rcx_51)
else
label_1422f2b99:
    int64_t* rbx_1 = data_143f552e8
    int128_t var_18_1 = zmm6
    sub_1422f2300(rbx_1, var_68.d, (*(*rbx_1 + 0x18))(rbx_1) & 0xff000000)
    sub_141903150(data_143f55300, var_64)
    sub_141903150(data_143f55318, var_60)
    sub_141903150(data_143f55330, var_5c)
    sub_141903150(data_143f55348, var_58)
    sub_141903150(data_143f55360, var_54)
    sub_141903150(data_143f55378, var_50)
    sub_141903150(data_143f55390, var_4c)
    sub_141903150(data_143f553a8, rcx_16)

int64_t r14
r14.b = 0
int32_t rdx_18 = data_143a2fe28
int32_t rcx_53 = data_143a2fe34 + 1
data_143a2fe34 = rcx_53
int32_t result = rdx_18 - 1
int64_t result_1 = sx.q(result)

if (result s>= 0)
    int64_t rbx_11 = result_1 << 4
    int64_t result_2
    
    do
        int64_t rcx_54 = data_143a2fe20
        
        if (*(rbx_11 + rcx_54 + 8) == 0)
            r14.b = 1
        else
            int64_t* rcx_55 = *(rbx_11 + rcx_54)
            
            if (rcx_55 == 0)
                r14.b = 1
            else
                result = (*(*rcx_55 + 0x50))(rcx_55, &var_68)
                
                if (result.b == 0)
                    r14.b = 1
        
        rbx_11 -= 0x10
        result_2 = result_1
        result_1 -= 1
    while (result_2 - 1 s>= 0)
    rcx_53 = data_143a2fe34
    rdx_18 = data_143a2fe28

data_143a2fe34 = rcx_53 - 1

if (r14.b != 0 && rcx_53 - 1 s<= 0)
    int32_t rsi_2 = rdx_18
    
    if (rdx_18 s> 0)
        int64_t* rbx_12 = nullptr
        
        do
            int64_t rcx_57 = data_143a2fe20
            
            if (*(rbx_12 + rcx_57 + 8) == 0)
                sub_1405a4880(&data_143a2fe20, rdi, 1, 1)
            else
                int64_t* rcx_58 = *(rbx_12 + rcx_57)
                
                if (rcx_58 == 0)
                    sub_1405a4880(&data_143a2fe20, rdi, 1, 1)
                else if ((*(*rcx_58 + 0x20))(rcx_58) != 0)
                    sub_1405a4880(&data_143a2fe20, rdi, 1, 1)
                else
                    rdi += 1
                    rbx_12 = &rbx_12[2]
            
            rdx_18 = data_143a2fe28
        while (rdi s< rdx_18)
    
    result = rdx_18 * 2
    
    if (result s<= 2)
        result = 2
    
    data_143a2fe30 = result
    
    if (rsi_2 s> result && data_143a2fe2c != rdx_18)
        result = sub_1405a5410(&data_143a2fe20, rdx_18)

int64_t rcx_59 = var_28

if (rcx_59 != 0)
    result = sub_140a74f90(rcx_59)

int64_t rcx_60 = var_38

if (rcx_60 == 0)
    return result

return sub_140a74f90(rcx_60)
