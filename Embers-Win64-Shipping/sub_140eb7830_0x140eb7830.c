// 函数: sub_140eb7830
// 地址: 0x140eb7830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_38 = zmm6
void var_8f8
int64_t rax_1 = __security_cookie ^ &var_8f8
float var_8c0
sub_140e15940(*(arg1 + 0x20), &var_8c0)
float var_8bc
float zmm0_1 = sub_140d7ade0(var_8c0, var_8bc, zmm6)
void* var_7d0
sub_140f03670(*(arg1 + 0x40), &var_7d0)
int64_t var_848
sub_140ebf4f0(*(var_7d0 + 0xd8), &var_848)
sub_140ebd660()
void* rcx_4 = data_143e2a070
int64_t var_898 = *(rcx_4 + 0x1a0)
int64_t* rax_3 = *(rcx_4 + 0x1a8)

if (rax_3 != 0)
    rax_3[1].d += 1

void* const r15 = nullptr
void* rdi = *(arg1 + 0x20)
int128_t zmm7
zmm7.d = 1f / zmm0_1
int32_t var_888 = *(rcx_4 + 0x1b0)
char var_880 = 1
int64_t var_878 = 0
int32_t var_870 = 0
zmm7.d = zmm7.d f* var_8bc
void var_2c8
int64_t* rax_5
int32_t zmm6_2
rax_5, zmm6_2 = sub_140dd5ed0(&var_2c8)
sub_14065da90(&rax_5[0x36], &var_898)
rax_5[0x39].b = var_880
sub_140692f90(&rax_5[0x3a], &var_878)
*(rax_5 + 0x1e4) = zmm6_2
rax_5[0x3d].d = zmm7.d
*(rax_5 + 0x1e1) = 0
void* var_8b8
void var_678
int32_t* rax_7 = sub_140de9830(&var_678, *sub_140e173b0(rdi, &var_8b8))
int32_t zmm1_1 = rax_7[1]
*(rax_5 + 0x1ec) = *rax_7
rax_5[0x3e].d = zmm1_1
*(rax_5 + 0x234) = 0
void*** rax_8 = j_sub_140a82f30(0xa88)
void*** rdi_1 = rax_8

if (rax_8 == 0)
    rdi_1 = nullptr
else
    rax_8[1].d = 1
    *(rax_8 + 0xc) = 1
    *rdi_1 = &data_142ecd2f8
    
    if (rdi_1 != -0x10)
        sub_140dde300(&rdi_1[2])

int64_t* var_818 = &rdi_1[2]
sub_140918950(&var_818, &rdi_1[2])
int64_t var_8d8 = 0xa78
void var_8c8
void* var_808 = &var_8c8
uint128_t var_668
sub_140de51f0(&var_818, &var_668, rax_5, sub_140e23ed0(&rdi_1[2], "SWindow"))

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp2_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*rdi_1)[1](rdi_1, 1)

sub_140ddefc0(&var_2c8)
sub_140745b20(&var_878)

if (rax_3 != 0)
    rax_3[1].d -= 1
    
    if (rax_3[1].d == 1)
        (**rax_3)(rax_3)
        int32_t rax_13 = *(rax_3 + 0xc)
        *(rax_3 + 0xc) -= 1
        
        if (rax_13 == 1)
            (*(*rax_3 + 8))(rax_3, 1)

if (sub_140f03770(*(arg1 + 0x40)) == 2)
    sub_140ebd660()
    int64_t var_860 = data_143e2a070
    int64_t* rcx_23 = data_143e2a078
    
    if (rcx_23 != 0)
        rcx_23[1].d += 1
    
    sub_140f168d0(*(arg1 + 0x40), &var_860)
    
    if (rcx_23 != 0)
        rcx_23[1].d -= 1
        
        if (rcx_23[1].d == 1)
            (**rcx_23)(rcx_23)
            int32_t temp4_1 = *(rcx_23 + 0xc)
            *(rcx_23 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rcx_23 + 8))(rcx_23, 1)

void*** var_758
void**** var_868 = sub_140ec5860(&var_758)
void*** rax_19 = sub_140e91bb0()
var_8b8 = &rax_19[2]
void* var_7e8 = &rax_19[2]
sub_140918950(&var_7e8, &rax_19[2])
int64_t var_8d8_1 = 0x4d0
void***** var_7d8 = &var_868
sub_140e23ed0(&rax_19[2], "SDockingTabStack")

if (rax_19 != 0)
    rax_19[1].d += 1

void*** r12 = nullptr

if (rax_19 != 0)
    r12 = rax_19

void var_470
int64_t* rax_20
int128_t zmm1_3
rax_20, zmm1_3 = sub_140e94090(&var_470)
void var_768
int64_t* rax_21 = sub_140e9c640(&var_7e8, &var_768, rax_20, zmm1_3)
int64_t var_7b0 = *rax_21
void* rcx_33 = rax_21[1]
void* var_7a8 = rcx_33

if (rcx_33 != 0)
    *(rcx_33 + 8) += 1

uint128_t zmm6_3 = var_668
uint128_t var_658 = zmm6_3
int64_t* rsi_1 = _mm_bsrli_si128(zmm6_3, 8).q

if (rsi_1 != 0)
    rsi_1[1].d += 1

void* rbx_5 = *(arg1 + 0x40)
void*** var_778
void**** rax_22 = sub_140ec55c0(&var_778)
void var_648
int64_t* var_7c0 = sub_140f03670(rbx_5, &var_648)
void**** var_7b8 = rax_22
void*** rax_24 = sub_140e919a0()
void* var_800 = &rax_24[2]
sub_140918950(&var_800, &rax_24[2])
int64_t var_8d8_2 = 0x400
int64_t** var_7f0 = &var_7c0
sub_140e23ed0(&rax_24[2], "SDockingArea")
void var_638
int64_t* rax_25
int128_t zmm1_4
rax_25, zmm1_4 = sub_140e93de0(&var_638)
void* rax_26
int128_t zmm1_5
rax_26, zmm1_5 = sub_140e99c30(rax_25, &var_658, zmm1_4)
void* rax_27
int128_t zmm1_6
rax_27, zmm1_6 = sub_140ec0970(rax_26, &var_7b0, zmm1_5)
uint128_t var_8a8
int128_t zmm6_4 = sub_140e9bd90(&var_800, &var_8a8, rax_27, zmm1_6)

if (rax_24 != 0)
    rax_24[1].d -= 1
    
    if (rax_24[1].d == 1)
        (**rax_24)(rax_24)
        int32_t temp7_1 = *(rax_24 + 0xc)
        *(rax_24 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rax_24)[1](rax_24, 1)

int64_t* var_640

if (var_640 != 0)
    var_640[1].d -= 1
    
    if (var_640[1].d == 1)
        (**var_640)(var_640)
        int32_t temp9_1 = *(var_640 + 0xc)
        *(var_640 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_640 + 8))(var_640, 1)

int64_t* var_770

if (var_770 != 0)
    var_770[1].d -= 1
    
    if (var_770[1].d == 1)
        (**var_770)(var_770)
        int32_t temp11_1 = *(var_770 + 0xc)
        *(var_770 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*var_770 + 8))(var_770, 1)

int64_t* var_478

if (var_478 != 0)
    var_478[1].d -= 1
    
    if (var_478[1].d == 1)
        (**var_478)(var_478)
        int32_t temp13_1 = *(var_478 + 0xc)
        *(var_478 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*var_478 + 8))(var_478, 1)

int64_t* var_490

if (var_490 != 0)
    var_490[1].d -= 1
    
    if (var_490[1].d == 1)
        (**var_490)(var_490)
        int32_t temp15_1 = *(var_490 + 0xc)
        *(var_490 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*var_490 + 8))(var_490, 1)

sub_140ddea30(&var_638)
int64_t* var_760

if (var_760 != 0)
    var_760[1].d -= 1
    
    if (var_760[1].d == 1)
        (**var_760)(var_760)
        int32_t temp17_1 = *(var_760 + 0xc)
        *(var_760 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*var_760 + 8))(var_760, 1)

if (rax_19 != 0)
    rax_19[1].d -= 1
    
    if (rax_19[1].d == 1)
        (**rax_19)(rax_19)
        int32_t temp19_1 = *(rax_19 + 0xc)
        *(rax_19 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*rax_19)[1](rax_19, 1)

int64_t* var_750

if (var_750 != 0)
    var_750[1].d -= 1
    
    if (var_750[1].d == 1)
        (**var_750)(var_750)
        int32_t temp20_1 = *(var_750 + 0xc)
        *(var_750 + 0xc) -= 1
        
        if (temp20_1 == 1)
            (*(*var_750 + 8))(var_750, 1)

sub_140ddea30(&var_470)
char rax_44 = sub_140f03770(*(arg1 + 0x40))
char rax_45

if (rax_44 != 0)
    rax_45 = sub_140f03770(*(arg1 + 0x40))

int64_t* var_840
int64_t* rbx_15

if (rax_44 == 0 || rax_45 == 2)
    sub_140ebd660()
    void* rcx_68 = data_143e2a070
    int64_t* rdi_5 = *(rcx_68 + 0x1c0)
    int64_t* r15_1
    uint128_t zmm0_5
    
    if (rdi_5 == 0)
    label_140eb801a:
        zmm0_5 = var_8a8
        int64_t* rcx_71 = data_143e29f28
        uint128_t var_698 = zmm0_5
        rbx_15 = _mm_bsrli_si128(zmm0_5, 8).q
        
        if (rbx_15 != 0)
            rbx_15[1].d += 1
        
        int128_t var_6a8 = zmm6_4
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        int64_t r9_5
        r9_5.b = 1
        void var_688
        sub_140e23de0(*(*(*rcx_71 + 0x10))(rcx_71, &var_688, &var_6a8, r9_5, var_8d8_2), &var_698)
        int64_t* var_680
        r15_1 = var_680
    else
        int32_t rax_51 = rdi_5[1].d
        
        if (rax_51 == 0)
            rdi_5 = nullptr
        else
            rdi_5[1].d = rax_51 + 1
        
        if (rdi_5 == 0)
            goto label_140eb801a
        
        int64_t rax_53 = *(rcx_68 + 0x1b8)
        
        if (rax_53 == 0)
            goto label_140eb801a
        
        zmm0_5 = var_8a8
        uint128_t var_6c8 = zmm0_5
        rbx_15 = _mm_bsrli_si128(zmm0_5, 8).q
        
        if (rbx_15 != 0)
            rbx_15[1].d += 1
        
        int64_t var_7a0 = rax_53
        int64_t* var_798_1 = rdi_5
        
        if (rdi_5 != 0)
            rdi_5[1].d += 1
        
        int128_t var_6d8 = zmm6_4
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        var_8d8_2.b = 1
        void var_6b8
        sub_140e23de0(*sub_140e595a0(data_143e29f28, &var_6b8, &var_6d8, &var_7a0, var_8d8_2.b), 
            &var_6c8)
        int64_t* var_6b0
        r15_1 = var_6b0
    
    if (r15_1 != 0)
        r15_1[1].d -= 1
        
        if (r15_1[1].d == 1)
            (**r15_1)(r15_1)
            int32_t temp23_1 = *(r15_1 + 0xc)
            *(r15_1 + 0xc) -= 1
            
            if (temp23_1 == 1)
                (*(*r15_1 + 8))(r15_1, 1)
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d == 1)
            (**rdi_5)(rdi_5)
            int32_t temp25_1 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (temp25_1 == 1)
                (*(*rdi_5 + 8))(rdi_5, 1)
    
    r15 = nullptr
else
    uint128_t zmm0_4 = var_8a8
    int64_t* rdi_4
    
    if (var_848 == 0)
        int64_t* rcx_64 = data_143e29f28
        uint128_t var_6f8 = zmm0_4
        rbx_15 = _mm_bsrli_si128(zmm0_4, 8).q
        
        if (rbx_15 != 0)
            rbx_15[1].d += 1
        
        int128_t var_708 = zmm6_4
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        int64_t r9_3
        r9_3.b = 1
        void var_6e8
        sub_140e23de0(*(*(*rcx_64 + 0x10))(rcx_64, &var_6e8, &var_708, r9_3, var_8d8_2), &var_6f8)
        int64_t* var_6e0
        rdi_4 = var_6e0
    else
        uint128_t var_728 = zmm0_4
        rbx_15 = _mm_bsrli_si128(zmm0_4, 8).q
        
        if (rbx_15 != 0)
            rbx_15[1].d += 1
        
        uint128_t var_748 = var_848.o
        
        if (var_840 != 0)
            var_840[1].d += 1
        
        int128_t var_738 = zmm6_4
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        var_8d8_2.b = 1
        void var_718
        sub_140e23de0(*sub_140e595a0(data_143e29f28, &var_718, &var_738, &var_748, var_8d8_2.b), 
            &var_728)
        int64_t* var_710
        rdi_4 = var_710
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t temp26_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp26_1 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)

int64_t var_838 = *(arg1 + 0x40)
int64_t* rax_62 = *(arg1 + 0x48)

if (rax_62 != 0)
    rax_62[1].d += 1

uint128_t zmm6_5 = sub_140ed1540(var_8b8, &var_838, 0xffffffff)

if (rax_62 != 0)
    rax_62[1].d -= 1
    
    if (rax_62[1].d == 1)
        (**rax_62)(rax_62)
        int32_t temp28_1 = *(rax_62 + 0xc)
        *(rax_62 + 0xc) -= 1
        
        if (temp28_1 == 1)
            (*(*rax_62 + 8))(rax_62, 1)

uint128_t var_788 = zmm6_5

if (rsi_1 != 0)
    rsi_1[1].d += 1

int64_t var_828 = *(arg1 + 0x40)
int64_t* rax_66 = *(arg1 + 0x48)

if (rax_66 != 0)
    rax_66[1].d += 1

void* rcx_80 = *(arg1 + 0x58)
int64_t* rdi_7 = *(rcx_80 + 0x3f0)

if (rdi_7 != 0)
    int32_t rax_67 = rdi_7[1].d
    
    if (rax_67 != 0)
        rdi_7[1].d = rax_67 + 1
        rax_67.b = 1
    
    if (rax_67.b == 0)
        rdi_7 = nullptr
    
    if (rdi_7 != 0)
        r15 = *(rcx_80 + 0x3e8)

int64_t* rcx_81 = **(r15 + 0xd8)
int64_t result = (*(*rcx_81 + 0x28))(rcx_81, &var_828, &var_788)

if (rdi_7 != 0)
    rdi_7[1].d -= 1
    
    if (rdi_7[1].d == 1)
        result = (**rdi_7)(rdi_7)
        int32_t temp31_1 = *(rdi_7 + 0xc)
        *(rdi_7 + 0xc) -= 1
        
        if (temp31_1 == 1)
            result = (*(*rdi_7 + 8))(rdi_7, 1)

if (rax_66 != 0)
    rax_66[1].d -= 1
    
    if (rax_66[1].d == 1)
        result = (**rax_66)(rax_66)
        int32_t temp33_1 = *(rax_66 + 0xc)
        *(rax_66 + 0xc) -= 1
        
        if (temp33_1 == 1)
            result = (*(*rax_66 + 8))(rax_66, 1)

int64_t* rdi_9 = var_788:8.q

if (rdi_9 != 0)
    rdi_9[1].d -= 1
    
    if (rdi_9[1].d == 1)
        result = (**rdi_9)(rdi_9)
        int32_t temp35_1 = *(rdi_9 + 0xc)
        *(rdi_9 + 0xc) -= 1
        
        if (temp35_1 == 1)
            result = (*(*rdi_9 + 8))(rdi_9, 1)

if (rbx_15 != 0)
    rbx_15[1].d -= 1
    
    if (rbx_15[1].d == 1)
        result = (**rbx_15)(rbx_15)
        int32_t temp37_1 = *(rbx_15 + 0xc)
        *(rbx_15 + 0xc) -= 1
        
        if (temp37_1 == 1)
            result = (*(*rbx_15 + 8))(rbx_15, 1)

if (r12 != 0)
    r12[1].d -= 1
    
    if (r12[1].d == 1)
        result = (**r12)(r12)
        int32_t temp39_1 = *(r12 + 0xc)
        *(r12 + 0xc) -= 1
        
        if (temp39_1 == 1)
            result = (*r12)[1](r12, 1)

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        result = (**rsi_1)(rsi_1)
        int32_t temp41_1 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (temp41_1 == 1)
            result = (*(*rsi_1 + 8))(rsi_1, 1)

if (var_840 != 0)
    var_840[1].d -= 1
    
    if (var_840[1].d == 1)
        result = (**var_840)(var_840)
        int32_t temp43_1 = *(var_840 + 0xc)
        *(var_840 + 0xc) -= 1
        
        if (temp43_1 == 1)
            result = (*(*var_840 + 8))(var_840, 1)

int64_t* var_7c8

if (var_7c8 != 0)
    var_7c8[1].d -= 1
    
    if (var_7c8[1].d == 1)
        result = (**var_7c8)(var_7c8)
        int32_t temp44_1 = *(var_7c8 + 0xc)
        *(var_7c8 + 0xc) -= 1
        
        if (temp44_1 == 1)
            result = (*(*var_7c8 + 8))(var_7c8, 1)

__security_check_cookie(rax_1 ^ &var_8f8)
return result
