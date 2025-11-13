// 函数: sub_141ffea40
// 地址: 0x141ffea40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
uint128_t zmm6

if (*(arg1 + 0xe10) == 0)
    zmm6 = sub_141fff080(arg1, arg2)

int64_t* rdi = *(arg1 + 0xe18)
void* (* r13)(void* arg1) = *(arg1 + 0xe10)

if (rdi != 0)
    rdi[1].d += 1

int64_t* rsi = *(arg1 + 0xdf8)
void* r14 = nullptr

if (rsi != 0)
    int32_t rax_1 = rsi[1].d
    
    if (rax_1 == 0)
        rsi = nullptr
    else
        rsi[1].d = rax_1 + 1
        r14 = *(arg1 + 0xdf0)

int32_t var_60 = 0
void*** var_78 = nullptr
void* (* var_68)(void* arg1) = sub_14200afa0
void*** rax_3 = sub_140a84c80(0, 0x30, 0)
var_78 = rax_3
int32_t var_70 = 3

if (rax_3 != 0)
    *rax_3 = &data_142fd1390
    sub_140d3a3a0(&rax_3[1], arg1)
    *(rax_3 + 0x10) = var_68.o
    rax_3[5] = sub_140a387b0()
    *rax_3 = &data_142fd13e8

sub_140e24c60(r14, &var_78)
void*** rax_6

if (var_70 == 0)
    rax_6 = var_78
label_141ffeb6c:
    
    if (rax_6 != 0)
        sub_140a74f90(rax_6)
else
    void*** rcx_2 = var_78
    
    if (rcx_2 != 0)
        (*rcx_2)[7](rcx_2, 0)
        rax_6 = var_78
        
        if (rax_6 != 0)
            rax_6 = sub_140a84c80(rax_6, 0, 0)
            var_78 = rax_6
        
        var_70 = 0
        goto label_141ffeb6c
sub_140af2b60()
int32_t arg_8

if (sub_140b2ab20(&data_143dbb3f0, u"SAVEWINPOS=", &arg_8) != 0 && arg_8 s> 0)
    int64_t* rax_8 = sub_1423dd380(arg1)
    int64_t r8_1 = *rax_8
    int32_t arg_18
    (*(r8_1 + 0x2b8))(rax_8, &arg_18, r8_1)
    
    if (arg_18 s>= 0 && arg3 s>= 0)
        uint128_t var_58_1 = zmm6
        int64_t* rax_9 = sub_1423dd380(arg1)
        int64_t r8_2 = *rax_9
        void arg_20
        int32_t rbx_1 = *(*(r8_2 + 0x2b8))(rax_9, &arg_20, r8_2)
        int64_t* rax_11 = sub_1423dd380(arg1)
        zmm6 = _mm_cvtepi32_ps(zx.o(rbx_1))
        int64_t r8_3 = *rax_11
        sub_140e1c780(r14, 
            _mm_unpacklo_ps(zmm6, 
                _mm_cvtepi32_ps(zx.o(*((*(r8_3 + 0x2b8))(rax_11, &arg_20, r8_3) + 4))).q).q)
    
    var_68 = sub_14200b040
    var_60 = 0
    var_78 = nullptr
    void*** rax_13 = sub_140a84c80(0, 0x30, 0)
    var_78 = rax_13
    var_70 = 3
    
    if (rax_13 != 0)
        *rax_13 = &data_142fd1390
        sub_140d3a3a0(&rax_13[1], arg1)
        *(rax_13 + 0x10) = var_68.o
        rax_13[5] = sub_140a387b0()
        *rax_13 = &data_142fd13e8
    
    sub_140e24c70(r14, &var_78)
    void*** rax_16
    
    if (var_70 == 0)
        rax_16 = var_78
    label_141ffecd7:
        
        if (rax_16 != 0)
            sub_140a74f90(rax_16)
    else
        void*** rcx_14 = var_78
        
        if (rcx_14 != 0)
            (*rcx_14)[7](rcx_14, 0)
            rax_16 = var_78
            
            if (rax_16 != 0)
                rax_16 = sub_140a84c80(rax_16, 0, 0)
                var_78 = rax_16
            
            var_70 = 0
            goto label_141ffecd7

void*** rax_17 = j_sub_140a82f30(0x310)
void*** r14_1

if (rax_17 == 0)
    r14_1 = nullptr
else
    var_68 = r13
    void* rdx_8 = arg2 + 0x28
    var_60.q = rdi
    
    if (arg2 == 0)
        rdx_8 = nullptr
    
    if (rdi != 0)
        rdi[1].d += 1
    
    r14_1 = sub_142329f50(rax_17, rdx_8, &var_68)

void*** rax_19 = j_sub_140a82f30(0x18)
void*** rbx_3 = rax_19

if (rax_19 == 0)
    rbx_3 = nullptr
else
    rax_19[1].d = 1
    *(rax_19 + 0xc) = 1
    *rbx_3 = &data_143084930
    rbx_3[2] = r14_1

var_78 = r14_1
var_70.q = rbx_3

if (arg1 + 0xe00 == &var_78)
label_141ffedd0:
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp1_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx_3)[1](rbx_3, 1)
else
    *(arg1 + 0xe00) = r14_1
    int64_t* r14_2 = *(arg1 + 0xe08)
    var_78 = nullptr
    
    if (rbx_3 == r14_2)
        goto label_141ffedd0
    
    var_70.q = 0
    *(arg1 + 0xe08) = rbx_3
    
    if (r14_2 != 0)
        r14_2[1].d -= 1
        
        if (r14_2[1].d == 1)
            (**r14_2)(r14_2)
            int32_t temp3_1 = *(r14_2 + 0xc)
            *(r14_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*r14_2 + 8))(r14_2, 1)
        
        rbx_3 = var_70.q
        goto label_141ffedd0

void*** rax_24 = *(arg1 + 0xe00)
void* rcx_22 = &rax_24[1]

if (rax_24 == 0)
    rcx_22 = nullptr

*(arg_10 + 0xb8) = rcx_22
int64_t* rbx_4 = *(arg1 + 0xe08)
void*** rcx_23 = *(arg1 + 0xe00)

if (rbx_4 != 0)
    rbx_4[1].d += 1

void* rax_26 = &rcx_23[0x1a]

if (rcx_23 == 0)
    rax_26 = nullptr

if (rbx_4 != 0)
    rbx_4[1].d += 1

*(r13 + 0x390) = rax_26
int64_t* rcx_24 = *(r13 + 0x398)

if (rbx_4 != rcx_24)
    if (rbx_4 != 0)
        *(rbx_4 + 0xc) += 1
        rcx_24 = *(r13 + 0x398)
    
    if (rcx_24 != 0)
        int32_t temp6_1 = *(rcx_24 + 0xc)
        *(rcx_24 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rcx_24 + 8))(rcx_24, 1)
    
    *(r13 + 0x398) = rbx_4

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp5_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp8_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* rcx_29 = *(arg1 + 0x788)
void*** r14_3 = *(arg1 + 0xe00)
(*(*rcx_29 + 0x2b8))(rcx_29, r14_3)
void* rdx_10 = *(arg1 + 0x788)
int64_t* rbx_5 = *(rdx_10 + 0xf0)

if (rbx_5 != 0)
    int32_t rax_33 = rbx_5[1].d
    
    if (rax_33 != 0)
        rbx_5[1].d = rax_33 + 1
        rax_33.b = 1
    
    if (rax_33.b == 0)
        rbx_5 = nullptr

int64_t* rcx_30 = nullptr

if (rbx_5 != 0)
    rcx_30 = *(rdx_10 + 0xe8)

(**rcx_30)(rcx_30, r14_3)

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp10_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

int32_t var_60_1 = 0
var_68 = sub_14200b0a0
void** result = sub_140a84c80(0, 0x30, 0)
void** result_1 = result

if (result != 0)
    *result_1 = &data_143084528
    sub_140d3a3a0(&result_1[1], arg1)
    *(result_1 + 0x10) = var_68.o
    result_1[5] = sub_140a387b0()
    result = &data_143084580
    *result_1 = &data_143084580

if (result_1 != 0)
    sub_140599630(&data_143a302e8, 1)
    (*(*result_1 + 0x30))(result_1, &arg_10)
    int64_t r14_4 = sx.q(data_143a302f0)
    int32_t rax_39 = (r14_4 + 1).d
    bool cond:5_1 = rax_39 s<= data_143a302f4
    data_143a302f0 = rax_39
    
    if (not(cond:5_1))
        sub_1405a4f90(&data_143a302e8)
    
    result = (r14_4 << 4) + data_143a302e8
    *result = result_1
    result[1].d = 3

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        result = (**rsi)(rsi)
        int32_t temp13_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp13_1 == 1)
            result = (*(*rsi + 8))(rsi, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        result = (**rdi)(rdi)
        int32_t temp14_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp14_1 == 1)
            return (*(*rdi + 8))(rdi, 1)

return result
