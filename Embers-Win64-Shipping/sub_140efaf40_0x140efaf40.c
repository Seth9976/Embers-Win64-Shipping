// 函数: sub_140efaf40
// 地址: 0x140efaf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
void*** rax_2 = sub_140ee0ca0()
void* var_298 = &rax_2[2]
sub_140918950(&var_298, &rax_2[2])
int64_t var_2c8 = 0x430
void var_2b8
void* var_288 = &var_2b8
sub_140e23ed0(&rax_2[2], "SNotificationList")
void var_248
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_140ee15e0(&var_248)
sub_140ee5480(&var_298, arg2, rax_3, zmm1)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp2_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*rax_2)[1](rax_2, 1)

void var_50
sub_140745b20(&var_50)
int64_t* var_70

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        (**var_70)(var_70)
        int32_t temp3_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_70 + 8))(var_70, 1)

sub_140ddea30(&var_248)
int64_t* var_2a8
sub_140e1beb0(&var_2a8)
void* var_258 = *arg2
void* rax_9 = arg2[1]
void* var_250 = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

sub_140e23de0(var_2a8, &var_258)
void* rdi = *arg2
*(rdi + 0x3a0) = var_2a8
int64_t* var_2a0
int64_t* rbx_3 = var_2a0
int64_t* rcx_12 = *(rdi + 0x3a8)

if (rbx_3 != rcx_12)
    if (rbx_3 != 0)
        *(rbx_3 + 0xc) += 1
        rcx_12 = *(rdi + 0x3a8)
    
    if (rcx_12 != 0)
        int32_t temp4_1 = *(rcx_12 + 0xc)
        *(rcx_12 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rcx_12 + 8))(rcx_12, 1)
    
    *(rdi + 0x3a8) = rbx_3
    rbx_3 = var_2a0

void** var_278
void*** rbx_4

if (*arg1 == 0)
label_140efb15d:
    int64_t* rcx_15 = data_143e29f28
    var_298.o = var_2a8.o
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    int64_t r9_1
    r9_1.b = 1
    (*(*rcx_15 + 0x10))(rcx_15, &var_278, &var_298, r9_1, var_2c8)
    void*** var_270
    rbx_4 = var_270
else
    void* rcx_13 = arg1[1]
    
    if (rcx_13 == 0)
        goto label_140efb15d
    
    int32_t rax_12 = *(rcx_13 + 8)
    
    if (rax_12 s<= 0)
        goto label_140efb15d
    
    int64_t rdx_3 = 0
    char r8_2
    
    if (rax_12 != 0)
        r8_2 = 1
        *(rcx_13 + 8) = rax_12 + 1
        rbx_3 = var_2a0
    else
        r8_2 = 0
    
    void* const rax_14 = nullptr
    
    if (r8_2 != 0)
        rax_14 = rcx_13
    
    if (rax_14 != 0)
        rdx_3 = *arg1
    
    var_278.o = var_2a8.o
    var_258 = rdx_3
    void* const var_250_1 = rax_14
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    var_2c8.b = 1
    sub_140e595a0(data_143e29f28, &var_298, &var_278, &var_258, var_2c8.b)
    rbx_4 = rax_2

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp7_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rbx_4)[1](rbx_4, 1)

int64_t rdi_1 = *sub_140e65190(data_143e29f28, &var_298)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp8_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*rax_2)[1](rax_2, 1)

int64_t* rax_18

if (rdi_1 == 0)
    char rax_21 = sub_140e1a330(var_2a8)
    
    if (rax_21 == 0)
        rax_18 = sub_140e19540(var_2a8)
    
    if (rax_21 != 0 || rax_18.b != 0)
        sub_140de87e0(var_2a8, 0)

int64_t* rdi_2 = arg1[2]
rax_18.b = 0
void* r12_2 = &rdi_2[sx.q(arg1[3].d) * 4]

if (rdi_2 == r12_2)
label_140efb2d1:
    int32_t* rax_24 = sub_140e69d90(data_143e29f28, &var_298, arg3)
    var_278 = nullptr
    int32_t i_2 = 1
    int128_t zmm0_1 = *rax_24
    sub_1405a4f90(&var_278)
    void** rbx_7 = var_278
    *rbx_7 = *arg2
    void* rax_26 = arg2[1]
    rbx_7[1] = rax_26
    
    if (rax_26 != 0)
        *(rax_26 + 8) += 1
    
    int64_t rdi_3 = sx.q(arg1[3].d)
    int32_t rax_27 = (rdi_3 + 1).d
    arg1[3].d = rax_27
    
    if (rax_27 s> *(arg1 + 0x1c))
        sub_1405c4e40(&arg1[2])
    
    int32_t i_1 = i_2
    void*** rsi_4 = (rdi_3 << 5) + arg1[2]
    *rsi_4 = nullptr
    rsi_4[1].d = i_1
    
    if (i_1 != 0)
        sub_1405a4be0(rsi_4, i_1, 0)
        void** rcx_32 = *rsi_4
        int32_t i
        
        do
            *rcx_32 = *rbx_7
            void* rax_29 = rbx_7[1]
            rcx_32[1] = rax_29
            
            if (rax_29 != 0)
                *(rax_29 + 8) += 1
            
            rcx_32 = &rcx_32[2]
            rbx_7 = &rbx_7[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    else
        *(rsi_4 + 0xc) = 0
    
    *(rsi_4 + 0x10) = zmm0_1
    sub_140596d80(&var_278)
else
    int32_t* rbx_6 = rdi_2 + 0x14
    
    do
        if (not((*arg3).d f< rbx_6[-1]) && not((*(arg3 + 8)).d f> rbx_6[1])
                && not((*(arg3 + 4)).d f< *rbx_6) && not((*(arg3 + 0xc)).d f> rbx_6[2]))
            int64_t rsi_1 = sx.q(rbx_6[-3])
            int32_t rax_22 = (rsi_1 + 1).d
            rbx_6[-3] = rax_22
            
            if (rax_22 s> rbx_6[-2])
                sub_1405a4f90(rdi_2)
            
            void** rcx_27 = (rsi_1 << 4) + *rdi_2
            *rcx_27 = *arg2
            rax_18 = arg2[1]
            rcx_27[1] = rax_18
            
            if (rax_18 != 0)
                rax_18[1].d += 1
            
            rax_18.b = 1
        
        rdi_2 = &rdi_2[4]
        rbx_6 = &rbx_6[8]
    while (rdi_2 != r12_2)
    
    if (rax_18.b == 0)
        goto label_140efb2d1

if (var_2a0 != 0)
    var_2a0[1].d -= 1
    
    if (var_2a0[1].d == 1)
        (**var_2a0)(var_2a0)
        int32_t temp11_1 = *(var_2a0 + 0xc)
        *(var_2a0 + 0xc) -= 1
        
        if (temp11_1 == 1)
            int64_t r8_7 = *var_2a0
            (*(r8_7 + 8))(var_2a0, 1, r8_7)

__security_check_cookie(rax_1 ^ &var_2e8)
return arg2
