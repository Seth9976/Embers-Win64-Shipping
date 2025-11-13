// 函数: sub_140ef5ad0
// 地址: 0x140ef5ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6e8
int64_t rax_1 = __security_cookie ^ &var_6e8
void* rsi = arg2
void* var_6b0 = arg2
*(arg1 + 0x2e0) = *(arg2 + 0x1c8)
*(arg1 + 0x2f0) = *(arg2 + 0x1d8)
sub_140692f90(arg1 + 0x2f8, arg2 + 0x1e0)
*(arg1 + 0x318) = *(rsi + 0x1f0)
*(arg1 + 0x320) = *(rsi + 0x1f8)
sub_140692f90(arg1 + 0x328, rsi + 0x200)
*(arg1 + 0x338) = *(rsi + 0x210)
*(arg1 + 0x33c) = *(rsi + 0x214)
sub_140692f90(arg1 + 0x340, rsi + 0x218)
*(arg1 + 0x350) = *(rsi + 0x228)
*(arg1 + 0x354) = *(rsi + 0x22c)
sub_140692f90(arg1 + 0x358, rsi + 0x230)
*(arg1 + 0x368) = *(rsi + 0x1b0)
*(arg1 + 0x370) = *(rsi + 0x1b8)
*(arg1 + 0x310) = *(rsi + 0x1c0)
*(arg1 + 0x30c) = 0xffffffff
int32_t rdx_4 = *(rsi + 0x1a8)

if (rdx_4 s> *(arg1 + 0x2d4))
    sub_140638c50(arg1 + 0x2c8, rdx_4)

int64_t* r14 = *(rsi + 0x1a0)
int64_t r12 = 0
uint64_t r13_1 = sx.q(*(rsi + 0x1a8)) << 3 u>> 3

if (r14 u> &r14[sx.q(*(rsi + 0x1a8))])
    r13_1 = 0

if (r13_1 != 0)
    do
        if (*(arg1 + 0x2d8) == 0)
            int64_t rsi_1 = sx.q(*(arg1 + 0x2d0))
            void* rdi_1 = *r14
            int32_t rax_13 = (rsi_1 + 1).d
            *(arg1 + 0x2d0) = rax_13
            
            if (rax_13 s> *(arg1 + 0x2d4))
                sub_140638870(arg1 + 0x2c8)
            
            *(*(arg1 + 0x2c8) + (rsi_1 << 3)) = rdi_1
            int64_t rax_15 = *(arg1 + 0x2c0)
            
            if (rax_15 != 0 && *(rdi_1 + 8) != rax_15)
                *(rdi_1 + 8) = rax_15
                sub_140de7bf0(rdi_1)
        
        r14 = &r14[1]
        r12 += 1
    while (r12 != r13_1)
    
    rsi = var_6b0

void*** rax_16 = j_sub_140a82f30(0x28)
void*** r12_1 = rax_16

if (rax_16 == 0)
    r12_1 = nullptr
else
    sub_140ddb700(rax_16)
    r12_1[4] = 0
    *r12_1 = &data_142edf510

int64_t* rcx_8 = *(arg1 + 0x368)
int64_t rax_18 = (*(*rcx_8 + 0x48))(rcx_8, *(arg1 + 0x370), ".Expand")
char var_620 = 1
int64_t var_628 = rax_18
int64_t var_618 = 0
int32_t var_610 = 0
void var_548
int64_t* rax_19 = sub_140e4fb70(&var_548)
rax_19[0x34] = rax_18
rax_19[0x35].b = 1
sub_140692f90(&rax_19[0x36], &var_618)
void*** rax_20 = sub_140e48c50()
void* var_640 = &rax_20[2]
sub_140918950(&var_640, &rax_20[2])
int64_t var_6c8 = 0x3a8
void var_6b8
void* var_630 = &var_6b8
void* var_5c0
void** rax_21 = sub_140e56930(&var_640, &var_5c0, rax_19, sub_140e23ed0(&rax_20[2], "SImage"))
int64_t* rdi_3 = rax_21[1]
void* r13_2 = *rax_21

if (rdi_3 != 0)
    rdi_3[1].d += 1

int32_t var_588 = 1
int64_t var_578 = 0
int32_t var_570 = 0
char var_584 = 1
char var_580 = 1
void var_5b0
int64_t* rax_22 = _vfprintf_p_l(&var_5b0, u"Click to expand toolbar", u"Slate")
int64_t var_688 = *rax_22
int64_t* rcx_16 = rax_22[1]

if (rcx_16 != 0)
    rcx_16[1].d += 1

int32_t var_678 = rax_22[2].d
int128_t var_608 = zx.o(0)
char var_670 = 1
int64_t var_668 = 0
int32_t var_660 = 0
char var_5f8 = 1
int64_t var_5f0 = 0
int32_t var_5e8 = 0
void var_330
int64_t* rax_24 = sub_140e936b0(&var_330)
*(rax_24 + 0x201) = 0
int64_t* rax_25
int128_t zmm6
rax_25, zmm6 = sub_140e1ad30(&var_6b0, *(arg1 + 0x370), ".Button")
int64_t* rcx_19 = *(arg1 + 0x368)
int64_t r8_2 = *rax_25
int64_t r9_2 = *rcx_19
int64_t var_5e0 = r8_2
int64_t var_5d8 = r8_2
int64_t rax_26 = (*(r9_2 + 0x88))(rcx_19, data_143e243e8, r8_2, r9_2, var_6c8)

if (rax_26 == 0)
    rax_26, zmm6 = sub_140e13010()

rax_24[0x35] = rax_26
rax_24[0x53].b = 1
*(rax_24 + 0x288) = zmm6
sub_140692f90(&rax_24[0x54], &var_5f0)
sub_14065da90(rax_24, &var_688)
rax_24[3].b = var_670
sub_140692f90(&rax_24[4], &var_668)
sub_1407473e0(&rax_24[0x3a], rsi + 0x240)

if (&var_588 != &rax_24[8])
    rax_24[8].d = 1
    *(rax_24 + 0x44) = 1

rax_24[9].b = 1

if (&var_578 != &rax_24[0xa] && rax_24[0xb].d != 0)
    int64_t* rcx_24 = rax_24[0xa]
    
    if (rcx_24 != 0)
        (*(*rcx_24 + 0x38))(rcx_24, 0)
        int64_t rcx_25 = rax_24[0xa]
        
        if (rcx_25 != 0)
            rax_24[0xa] = sub_140a84c80(rcx_25, 0, 0)
        
        rax_24[0xb].d = 0

void* var_6a8 = r13_2

if (rdi_3 != 0)
    rdi_3[1].d += 1

if (&var_6a8 != &rax_24[0x36])
    int128_t zmm1_1 = var_6a8.o
    int128_t var_568_1 = zmm1_1
    var_6a8.o = *(rax_24 + 0x1b0)
    *(rax_24 + 0x1b0) = zmm1_1

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp2_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

void*** rax_33 = sub_140e91840()
int64_t* var_658 = &rax_33[2]
sub_140918950(&var_658, &rax_33[2])
int64_t var_6c8_1 = 0x3f8
void var_6b7
void* var_648 = &var_6b7
int128_t zmm1_2 = sub_140e23ed0(&rax_33[2], "SComboButton")

if (rax_33 != 0)
    rax_33[1].d += 1

void var_598

if (arg1 + 0x2a8 == &var_598)
label_140ef603e:
    
    if (rax_33 != 0)
        rax_33[1].d -= 1
        
        if (rax_33[1].d == 1)
            (**rax_33)(rax_33)
            int32_t temp4_1 = *(rax_33 + 0xc)
            *(rax_33 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rax_33)[1](rax_33, 1)
else
    *(arg1 + 0x2a8) = &rax_33[2]
    void*** rsi_3 = *(arg1 + 0x2b0)
    
    if (rax_33 == rsi_3)
        goto label_140ef603e
    
    *(arg1 + 0x2b0) = rax_33
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            (**rsi_3)(rsi_3)
            int32_t temp6_1 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rsi_3)[1](rsi_3, 1)

int64_t* var_5d0
int64_t** rax_38 = sub_140e9b4e0(&var_658, &var_5d0, rax_24, zmm1_2)
int64_t* rbx_6 = rax_38[1]
int64_t* r14_2 = *rax_38

if (rbx_6 != 0)
    rbx_6[1].d += 1

int64_t* rsi_4 = r12_1[3]

if (rsi_4 != 0)
    rsi_4[1].d += 1

sub_140e0dfc0(r12_1)
int64_t* var_698 = r14_2
int64_t* r14_3 = rbx_6

if (rbx_6 != 0)
    rbx_6[1].d += 1

if (&var_698 != &r12_1[2])
    int128_t zmm1_3 = var_698.o
    int128_t var_558_1 = zmm1_3
    var_698.o = *(r12_1 + 0x10)
    r14_3 = rbx_6
    *(r12_1 + 0x10) = zmm1_3

if (r14_3 != 0)
    r14_3[1].d -= 1
    
    if (r14_3[1].d == 1)
        (**r14_3)(r14_3)
        int32_t temp9_1 = *(r14_3 + 0xc)
        *(r14_3 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*r14_3 + 8))(r14_3, 1)

sub_140de7bf0(r12_1)

if (rsi_4 != 0)
    rsi_4[1].d -= 1
    
    if (rsi_4[1].d == 1)
        (**rsi_4)(rsi_4)
        int32_t temp11_1 = *(rsi_4 + 0xc)
        *(rsi_4 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rsi_4 + 8))(rsi_4, 1)

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp13_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

int64_t* var_5c8

if (var_5c8 != 0)
    var_5c8[1].d -= 1
    
    if (var_5c8[1].d == 1)
        (**var_5c8)(var_5c8)
        int32_t temp15_1 = *(var_5c8 + 0xc)
        *(var_5c8 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*var_5c8 + 8))(var_5c8, 1)

if (rax_33 != 0)
    rax_33[1].d -= 1
    
    if (rax_33[1].d == 1)
        (**rax_33)(rax_33)
        int32_t temp16_1 = *(rax_33 + 0xc)
        *(rax_33 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*rax_33)[1](rax_33, 1)

sub_140e979e0(&var_330)
sub_140745b20(&var_5f0)
sub_140745b20(&var_668)

if (rcx_16 != 0)
    rcx_16[1].d -= 1
    
    if (rcx_16[1].d == 1)
        (**rcx_16)(rcx_16)
        int32_t rax_51 = *(rcx_16 + 0xc)
        *(rcx_16 + 0xc) -= 1
        
        if (rax_51 == 1)
            (*(*rcx_16 + 8))(rcx_16, 1)

int64_t* var_5a8

if (var_5a8 != 0)
    var_5a8[1].d -= 1
    
    if (var_5a8[1].d == 1)
        (**var_5a8)(var_5a8)
        int32_t rsi_5 = *(var_5a8 + 0xc)
        *(var_5a8 + 0xc) -= 1
        
        if (rsi_5 == 1)
            (*(*var_5a8 + 8))(var_5a8, zx.q(rsi_5))

sub_140745b20(&var_578)

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp19_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

int64_t* var_5b8

if (var_5b8 != 0)
    var_5b8[1].d -= 1
    
    if (var_5b8[1].d == 1)
        (**var_5b8)(var_5b8)
        int32_t temp21_1 = *(var_5b8 + 0xc)
        *(var_5b8 + 0xc) -= 1
        
        if (temp21_1 == 1)
            (*(*var_5b8 + 8))(var_5b8, 1)

if (rax_20 != 0)
    rax_20[1].d -= 1
    
    if (rax_20[1].d == 1)
        (**rax_20)(rax_20)
        int32_t temp23_1 = *(rax_20 + 0xc)
        *(rax_20 + 0xc) -= 1
        
        if (temp23_1 == 1)
            (*rax_20)[1](rax_20, 1)

void var_340
sub_140745b20(&var_340)
void var_358
sub_140745b20(&var_358)
int64_t* var_368

if (var_368 != 0)
    var_368[1].d -= 1
    
    if (var_368[1].d == 1)
        (**var_368)(var_368)
        int32_t temp24_1 = *(var_368 + 0xc)
        *(var_368 + 0xc) -= 1
        
        if (temp24_1 == 1)
            (*(*var_368 + 8))(var_368, 1)

void var_398
sub_140745b20(&var_398)
sub_140ddea30(&var_548)
sub_140745b20(&var_618)
uint64_t result = sub_140de6520(arg1 + 0x2b8, r12_1)
__security_check_cookie(rax_1 ^ &var_6e8)
return result
