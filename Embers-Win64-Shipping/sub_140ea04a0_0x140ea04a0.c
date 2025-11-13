// 函数: sub_140ea04a0
// 地址: 0x140ea04a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f98
int64_t rax_1 = __security_cookie ^ &var_f98
char rax_5

if (data_143e2a050 == 0)
    rax_5 = data_143e2a040
else
    int64_t* rcx = data_143e2a048
    
    if (rcx == 0)
        rax_5 = data_143e2a040
    else if ((*(*rcx + 0x28))(rcx) == 0)
        rax_5 = data_143e2a040
    else
        int64_t* rcx_1 = nullptr
        
        if (data_143e2a050 != 0)
            rcx_1 = data_143e2a048
        
        rax_5 = (*(*rcx_1 + 0x48))(rcx_1)
        data_143e2a040 = rax_5

char var_f68_1
int32_t rcx_2

if (rax_5 != 0)
    int64_t rbx_1 = arg2[0x10]
    var_f68_1 = 1
    rcx_2.b = sub_140b5b8a0(rbx_1.d, 0) == 0
    rcx_2.b |= (rbx_1 u>> 0x20).d != 0

if (rax_5 == 0 || rcx_2.b == 0)
    var_f68_1 = 0

int64_t* rbx_3 = *(arg1 + 0x10)
int64_t rcx_3 = 0

if (rbx_3 != 0)
    int32_t rax_7 = rbx_3[1].d
    
    if (rax_7 != 0)
        rbx_3[1].d = rax_7 + 1
        rax_7.b = 1
    
    if (rax_7.b == 0)
        rbx_3 = nullptr
    
    if (rbx_3 != 0)
        rcx_3 = *(arg1 + 8)

int64_t var_de0 = rcx_3
int64_t* var_dd8 = rbx_3

if (rbx_3 != 0)
    int32_t rax_8 = rbx_3[1].d
    rbx_3[1].d = rax_8
    
    if (rax_8 == 0)
        (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

char var_f78 = arg6
void var_cb8
int64_t* rcx_7 = *sub_140ec4910(arg2, &var_cb8, &var_de0, arg5, var_f78)
int64_t var_f30
(*(*rcx_7 + 8))(rcx_7, &var_f30)
int64_t* var_cb0

if (var_cb0 != 0)
    var_cb0[1].d -= 1
    
    if (var_cb0[1].d == 1)
        (**var_cb0)(var_cb0)
        int32_t temp3_1 = *(var_cb0 + 0xc)
        *(var_cb0 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_cb0 + 8))(var_cb0, 1)

int64_t* var_f28

if (var_f28 != 0)
    *(var_f28 + 0xc) += 1

int64_t* r15 = arg2[2]

if (r15 != 0)
    int32_t rax_16 = r15[1].d
    
    if (rax_16 != 0)
        r15[1].d = rax_16 + 1
        rax_16.b = 1
    
    if (rax_16.b == 0)
        r15 = nullptr
    
    if (r15 != 0)
        *(r15 + 0xc) += 1
        r15[1].d -= 1
        
        if (r15[1].d == 1)
            (**r15)(r15)
            int32_t temp5_1 = *(r15 + 0xc)
            *(r15 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*r15 + 8))(r15, 1)

void* rax_19 = *(arg1 + 0x3a0)
int64_t* r12 = *(rax_19 + 0x60)
int64_t var_f38
int64_t* rsi_1
int64_t rdi_1

if (*(rax_19 + 0x20) == 0)
label_140ea07c7:
    rdi_1 = var_f30
    var_f38 = rdi_1
    
    if (var_f28 != 0)
        var_f28[1].d += 1
    
    rsi_1 = nullptr
    
    if (var_f28 != 0)
        rsi_1 = var_f28
else
    int64_t* rcx_12 = *(rax_19 + 0x18)
    
    if (rcx_12 == 0)
        goto label_140ea07c7
    
    if ((*(*rcx_12 + 0x28))(rcx_12) == 0)
        goto label_140ea07c7
    
    int64_t* rbx_5 = *(arg1 + 0x10)
    int64_t rcx_13 = 0
    
    if (rbx_5 != 0)
        int32_t rax_22 = rbx_5[1].d
        
        if (rax_22 != 0)
            rbx_5[1].d = rax_22 + 1
            rax_22.b = 1
        
        if (rax_22.b == 0)
            rbx_5 = nullptr
        
        if (rbx_5 != 0)
            rcx_13 = *(arg1 + 8)
    
    int64_t var_e50 = rcx_13
    
    if (rbx_5 != 0)
        int32_t rax_23 = rbx_5[1].d
        rbx_5[1].d = rax_23
        
        if (rax_23 == 0)
            (**rbx_5)(rbx_5)
            int32_t temp6_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    void* rax_26 = *(arg1 + 0x3a0)
    int64_t* rcx_16
    
    if (*(rax_26 + 0x20) == 0)
        rcx_16 = nullptr
    else
        rcx_16 = *(rax_26 + 0x18)
    
    var_f78.q = &var_f30
    int64_t var_e60
    (*(*rcx_16 + 0x48))(rcx_16, &var_e60, &var_e50, arg2, var_f78)
    int64_t* var_e58
    int64_t* rbx_6 = var_e58
    rdi_1 = var_e60
    int64_t* rax_28 = rbx_6
    var_f38 = rdi_1
    
    if (rbx_6 != 0)
        rbx_6[1].d += 1
        rbx_6 = var_e58
    
    rsi_1 = nullptr
    
    if (rax_28 != 0)
        rsi_1 = rax_28
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp11_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp12_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)

int64_t var_ec0 = arg2[0x10]
void var_c78
int64_t* rax_35 = sub_140aae2b0(&var_c78, &var_ec0)
int64_t var_f20 = *rax_35
int64_t* rcx_23 = rax_35[1]

if (rcx_23 != 0)
    rcx_23[1].d += 1

int64_t rbx_8 = *r12
int32_t var_f10 = rax_35[2].d
char var_f08 = 1
int64_t var_f00 = 0
int32_t var_ef8 = 0
void var_d00
int128_t* rax_38 = (*(rbx_8 + 0x30))(r12, *sub_140b58170(&var_d00, "MultiboxHookColor", 1), 0, 
    &data_1439ae6b8, var_f78)
char rbx_9 = data_1439ae51d
char var_d70 = 0
int128_t zmm0 = *rax_38

if (var_f68_1 != 0)
    rbx_9 = data_1439ae51c

char var_d58 = 1
char var_e78 = rbx_9
int64_t var_d50 = 0
int32_t var_d48 = 0
char var_e77 = 1
int64_t var_e70 = 0
int32_t var_e68 = 0
int64_t var_dd0 = rdi_1
int64_t* var_dc8 = rsi_1
int128_t var_d80 = zmm0
int128_t var_d68 = zx.o(0)

if (rsi_1 != 0)
    rsi_1[1].d += 1

void*** rax_40 = j_sub_140a82f30(0x88)
void*** r14_1 = rax_40

if (rax_40 == 0)
    r14_1 = nullptr
else
    sub_14068e490(rax_40)
    *r14_1 = &data_142d8add0

sub_140693600(r14_1, &var_dd0)

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t temp9_1 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rsi_1 + 8))(rsi_1, 1)

void var_8e8
int64_t* rax_43 = sub_14068d9d0(&var_8e8)
rax_43[0xf].b = rbx_9
*(rax_43 + 0x79) = 1
sub_1407473e0(&rax_43[0x10], &var_e70)
sub_140693390(&rax_43[0x4c], &var_d80)
rax_43[0x51].b = var_d58
sub_140692f90(&rax_43[0x52], &var_d50)
sub_14065da90(&rax_43[0x34], &var_f20)
rax_43[0x37].b = var_f08
sub_140692f90(&rax_43[0x38], &var_f00)
void*** rdi_2 = j_sub_140a82f30(0x7a8)

if (rdi_2 == 0)
    rdi_2 = nullptr
else
    rdi_2[1].d = 1
    *(rdi_2 + 0xc) = 1
    *rdi_2 = &data_142d8b060
    
    if (rdi_2 != -0x10)
        sub_140f66da0(&rdi_2[2])

void* var_e90 = &rdi_2[2]
sub_14065fa30(&var_e90, &rdi_2[2])
var_f78.q = 0x798
void var_f50
void* var_e80 = &var_f50
void* var_c98
void** rax_46 = sub_140697520(&var_e90, &var_c98, rax_43, sub_140e23ed0(&rdi_2[2], "STextBlock"))
int64_t* rbx_11 = rax_46[1]
void* var_da0 = *rax_46
int64_t* var_d98 = rbx_11

if (rbx_11 != 0)
    rbx_11[1].d += 1

void*** rax_47 = j_sub_140a82f30(0x88)
void*** rdi_3 = rax_47

if (rax_47 == 0)
    rdi_3 = nullptr
else
    sub_14068e490(rax_47)
    *rdi_3 = &data_142d8add0

rdi_3[4].b = 2
void* rax_48 = sub_140698b50(rdi_3)
sub_140693600(rax_48, &var_da0)

if (rbx_11 != 0)
    rbx_11[1].d -= 1
    
    if (rbx_11[1].d == 1)
        int64_t rdx_15 = *rbx_11
        (*rdx_15)(rbx_11, rdx_15)
        int32_t temp14_1 = *(rbx_11 + 0xc)
        *(rbx_11 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*rbx_11 + 8))(rbx_11, 1)

void var_c48
int64_t* rax_50 = sub_14068d420(&var_c48)
int64_t rdi_4 = sx.q(rax_50[0x35].d)
int32_t rcx_47 = (rdi_4 + 1).d
rax_50[0x35].d = rcx_47

if (rcx_47 s> *(rax_50 + 0x1ac))
    sub_140638870(&rax_50[0x34])

*(rax_50[0x34] + (rdi_4 << 3)) = rax_48
int64_t rdi_5 = sx.q(rax_50[0x35].d)
int32_t rax_52 = (rdi_5 + 1).d
rax_50[0x35].d = rax_52

if (rax_52 s> *(rax_50 + 0x1ac))
    sub_140638870(&rax_50[0x34])

*(rax_50[0x34] + (rdi_5 << 3)) = r14_1
void*** rax_54 = j_sub_140a82f30(0x2e8)
void*** rdi_6 = rax_54

if (rax_54 == 0)
    rdi_6 = nullptr
else
    rax_54[1].d = 1
    *(rax_54 + 0xc) = 1
    *rdi_6 = &data_142d8c590
    
    if (rdi_6 != -0x10)
        sub_14068e550(&rdi_6[2])

void* var_df8 = &rdi_6[2]
sub_14065fa30(&var_df8, &rdi_6[2])
var_f78.q = 0x2d8
void var_f4f
void* var_de8 = &var_f4f
void* var_ca8
void** rax_55 = sub_140696920(&var_df8, &var_ca8, rax_50, sub_140e23ed0(&rdi_6[2], "SVerticalBox"))
int64_t* r14_2 = rax_55[1]
void* var_f48 = *rax_55
int64_t* var_f40 = r14_2

if (r14_2 != 0)
    r14_2[1].d += 1

int64_t* var_ca0

if (var_ca0 != 0)
    var_ca0[1].d -= 1
    
    if (var_ca0[1].d == 1)
        (**var_ca0)(var_ca0)
        int32_t temp17_1 = *(var_ca0 + 0xc)
        *(var_ca0 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*var_ca0 + 8))(var_ca0, 1)

if (rdi_6 != 0)
    rdi_6[1].d -= 1
    
    if (rdi_6[1].d == 1)
        (**rdi_6)(rdi_6)
        int32_t temp18_1 = *(rdi_6 + 0xc)
        *(rdi_6 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*rdi_6)[1](rdi_6, 1)

int64_t var_aa8

if (var_aa8 != 0)
    sub_140a74f90(var_aa8)

sub_140660250(&var_c48)
int64_t* var_c90

if (var_c90 != 0)
    var_c90[1].d -= 1
    
    if (var_c90[1].d == 1)
        (**var_c90)(var_c90)
        int32_t temp21_1 = *(var_c90 + 0xc)
        *(var_c90 + 0xc) -= 1
        
        if (temp21_1 == 1)
            (*(*var_c90 + 8))(var_c90, 1)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp23_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp23_1 == 1)
            (*rdi_2)[1](rdi_2, 1)

sub_1406913d0(&var_8e8)
sub_140745b20(&var_e70)
sub_140745b20(&var_d50)
int64_t* rbx_18 = var_d68:8.q

if (rbx_18 != 0)
    rbx_18[1].d -= 1
    
    if (rbx_18[1].d == 1)
        (**rbx_18)(rbx_18)
        int32_t temp24_1 = *(rbx_18 + 0xc)
        *(rbx_18 + 0xc) -= 1
        
        if (temp24_1 == 1)
            (*(*rbx_18 + 8))(rbx_18, 1)

sub_140745b20(&var_f00)

if (rcx_23 != 0)
    rcx_23[1].d -= 1
    
    if (rcx_23[1].d == 1)
        (**rcx_23)(rcx_23)
        int32_t rax_68 = *(rcx_23 + 0xc)
        *(rcx_23 + 0xc) -= 1
        
        if (rax_68 == 1)
            (*(*rcx_23 + 8))(rcx_23, 1)
    
    r14_2 = var_f40

int64_t* var_c70

if (var_c70 != 0)
    var_c70[1].d -= 1
    
    if (var_c70[1].d == 1)
        (**var_c70)(var_c70)
        int32_t rax_72 = *(var_c70 + 0xc)
        *(var_c70 + 0xc) -= 1
        
        if (rax_72 == 1)
            (*(*var_c70 + 8))(var_c70, 1)
    
    r14_2 = var_f40

int64_t* result = *(arg1 + 0x3a0)
uint64_t rcx_76 = zx.q(result[0xe].b)
int64_t* rdi_7
int64_t* r12_2
void* rcx_83

if (rcx_76.d u> 6)
    rdi_7 = arg4
    r12_2 = arg3
else
    switch (rcx_76)
        case 0, 1, 6
            int128_t var_c88 = var_f48.o
            
            if (r14_2 != 0)
                r14_2[1].d += 1
            
            r12_2 = arg3
            result = sub_140693860(sub_14069ced0(sub_140698b50(sub_140ea2880(*r12_2)), zx.o(0)), 
                &var_c88)
            rdi_7 = arg4
        case 2
            rcx_83 = *(arg1 + 0x3d0)
            
            if (rcx_83 != 0)
                goto label_140ea0e31
            
            int128_t var_ce8 = var_f48.o
            
            if (r14_2 != 0)
                r14_2[1].d += 1
            
            rdi_7 = arg4
            var_f78.d = 0x3f800000
            result = sub_140693860(
                sub_14069cf40(sub_140698b50(sub_140698a90(*rdi_7)), zx.o(0), 0x3f800000, 
                    (zx.o(0)).d, var_f78), 
                &var_ce8)
            r12_2 = arg3
        case 3
            rcx_83 = *(arg1 + 0x3d0)
        label_140ea0e31:
            result = sub_140e99b50(sub_140ee8880(rcx_83), &var_f48)
            rdi_7 = arg4
            r12_2 = arg3
        case 4
            int64_t var_ea8 = arg2[0x10]
            void var_c60
            int64_t* rax_100 = sub_140aae2b0(&var_c60, &var_ea8)
            int64_t var_ef0 = *rax_100
            int64_t* rcx_109 = rax_100[1]
            
            if (rcx_109 != 0)
                rcx_109[1].d += 1
                r14_2 = var_f40
            
            int32_t var_ee0_1 = rax_100[2].d
            char var_ed8_1 = 1
            int64_t var_ed0 = 0
            int32_t var_ec8_1 = 0
            void var_cf8
            int128_t* rax_103 = (*(*r12 + 0x30))(r12, 
                *sub_140b58170(&var_cf8, "MultiboxHookColor", 1), 0, &data_1439ae6b8, var_f78)
            char rbx_26 = data_1439ae51d
            int128_t zmm0_2 = *rax_103
            
            if (var_f68_1 != 0)
                rbx_26 = data_1439ae51c
            
            char var_d30_1 = 0
            char var_e28_1 = rbx_26
            char var_d18_1 = 1
            int64_t var_d10 = 0
            int32_t var_d08_1 = 0
            char var_e27_1 = 1
            int64_t var_e20 = 0
            int32_t var_e18_1 = 0
            int64_t var_db0 = var_f38
            int64_t* var_da8_1 = rsi_1
            int128_t var_d40 = zmm0_2
            int128_t var_d28_1 = zx.o(0)
            
            if (rsi_1 != 0)
                rsi_1[1].d += 1
            
            void var_4a0
            int64_t* rax_105 = sub_14068d9d0(&var_4a0)
            rax_105[0xf].b = rbx_26
            *(rax_105 + 0x79) = 1
            sub_1407473e0(&rax_105[0x10], &var_e20)
            sub_140693390(&rax_105[0x4c], &var_d40)
            rax_105[0x51].b = var_d18_1
            sub_140692f90(&rax_105[0x52], &var_d10)
            sub_14065da90(&rax_105[0x34], &var_ef0)
            rax_105[0x37].b = var_ed8_1
            sub_140692f90(&rax_105[0x38], &var_ed0)
            void*** rax_107 = j_sub_140a82f30(0x7a8)
            void*** rdi_10 = rax_107
            
            if (rax_107 == 0)
                rdi_10 = nullptr
            else
                rax_107[1].d = 1
                *(rax_107 + 0xc) = 1
                *rdi_10 = &data_142d8b060
                
                if (rdi_10 != -0x10)
                    sub_140f66da0(&rdi_10[2])
            
            void* var_e40 = &rdi_10[2]
            sub_14065fa30(&var_e40, &rdi_10[2])
            var_f78.q = 0x798
            void var_f4e
            void* var_e30_1 = &var_f4e
            void* var_cc8
            void** rax_108 =
                sub_140697520(&var_e40, &var_cc8, rax_105, sub_140e23ed0(&rdi_10[2], "STextBlock"))
            void* rdx_34 = rax_108[1]
            void* var_d90 = *rax_108
            void* var_d88_1 = rdx_34
            
            if (rdx_34 != 0)
                *(rdx_34 + 8) += 1
            
            void* rax_110 = sub_140698b50(sub_1406a4fe0())
            *(rax_110 + 0x21) = 2
            void*** rax_111 = j_sub_140a82f30(0x2e8)
            void*** rdi_11 = rax_111
            
            if (rax_111 == 0)
                rdi_11 = nullptr
            else
                rax_111[1].d = 1
                *(rax_111 + 0xc) = 1
                *rdi_11 = &data_142d8c590
                
                if (rdi_11 != -0x10)
                    sub_14068e500(&rdi_11[2])
            
            void* var_e10 = &rdi_11[2]
            sub_14065fa30(&var_e10, &rdi_11[2])
            var_f78.q = 0x2d8
            void var_f4d
            void* var_e00_1 = &var_f4d
            sub_140e23ed0(&rdi_11[2], "SHorizontalBox")
            void* rax_113 = sub_140693860(sub_1406a4fe0(), &var_db0)
            void* rax_114 = sub_140693860(rax_110, &var_d90)
            void var_a98
            int64_t* rax_115
            int128_t zmm1_5
            rax_115, zmm1_5 = sub_14068d420(&var_a98)
            void* var_cd8
            void** rax_118 = sub_140696920(&var_e10, &var_cd8, 
                sub_1406938c0(sub_1406938c0(rax_115, rax_114), rax_113), zmm1_5)
            void* var_dc0 = *rax_118
            void* rcx_135 = rax_118[1]
            void* var_db8_1 = rcx_135
            
            if (rcx_135 != 0)
                *(rcx_135 + 8) += 1
            
            rdi_7 = arg4
            var_f78.d = 0
            sub_140693860(
                sub_14069cf40(sub_140698b50(sub_140698a90(*rdi_7)), 0x3f800000, (zx.o(0)).d, 
                    0x3f800000, var_f78), 
                &var_dc0)
            int64_t* var_cd0
            
            if (var_cd0 != 0)
                var_cd0[1].d -= 1
                
                if (var_cd0[1].d == 1)
                    (**var_cd0)(var_cd0)
                    int32_t temp41_1 = *(var_cd0 + 0xc)
                    *(var_cd0 + 0xc) -= 1
                    
                    if (temp41_1 == 1)
                        (*(*var_cd0 + 8))(var_cd0, 1)
            
            if (rdi_11 != 0)
                rdi_11[1].d -= 1
                
                if (rdi_11[1].d == 1)
                    (**rdi_11)(rdi_11)
                    int32_t temp42_1 = *(rdi_11 + 0xc)
                    *(rdi_11 + 0xc) -= 1
                    
                    if (temp42_1 == 1)
                        (*rdi_11)[1](rdi_11, 1)
            
            int64_t var_8f8
            
            if (var_8f8 != 0)
                sub_140a74f90(var_8f8)
            
            sub_140660250(&var_a98)
            int64_t* var_cc0
            
            if (var_cc0 != 0)
                var_cc0[1].d -= 1
                
                if (var_cc0[1].d == 1)
                    (**var_cc0)(var_cc0)
                    int32_t temp45_1 = *(var_cc0 + 0xc)
                    *(var_cc0 + 0xc) -= 1
                    
                    if (temp45_1 == 1)
                        (*(*var_cc0 + 8))(var_cc0, 1)
            
            if (rdi_10 != 0)
                rdi_10[1].d -= 1
                
                if (rdi_10[1].d == 1)
                    (**rdi_10)(rdi_10)
                    int32_t temp47_1 = *(rdi_10 + 0xc)
                    *(rdi_10 + 0xc) -= 1
                    
                    if (temp47_1 == 1)
                        (*rdi_10)[1](rdi_10, 1)
            
            sub_1406913d0(&var_4a0)
            sub_140745b20(&var_e20)
            sub_140745b20(&var_d10)
            int64_t* rbx_34 = var_d28_1:8.q
            
            if (rbx_34 != 0)
                rbx_34[1].d -= 1
                
                if (rbx_34[1].d == 1)
                    (**rbx_34)(rbx_34)
                    int32_t temp48_1 = *(rbx_34 + 0xc)
                    *(rbx_34 + 0xc) -= 1
                    
                    if (temp48_1 == 1)
                        (*(*rbx_34 + 8))(rbx_34, 1)
            
            result = sub_140745b20(&var_ed0)
            
            if (rcx_109 != 0)
                result = zx.q(rcx_109[1].d)
                rcx_109[1].d -= 1
                
                if (result.d == 1)
                    (**rcx_109)(rcx_109)
                    result = zx.q(*(rcx_109 + 0xc))
                    *(rcx_109 + 0xc) -= 1
                    
                    if (result.d == 1)
                        result = (*(*rcx_109 + 8))(rcx_109, 1)
                
                r14_2 = var_f40
            
            int64_t* var_c58
            
            if (var_c58 != 0)
                result = zx.q(var_c58[1].d)
                var_c58[1].d -= 1
                
                if (result.d == 1)
                    result = (**var_c58)(var_c58)
                    int32_t r12_3 = *(var_c58 + 0xc)
                    *(var_c58 + 0xc) -= 1
                    
                    if (r12_3 == 1)
                        result = (*(*var_c58 + 8))(var_c58, zx.q(r12_3))
                
                r14_2 = var_f40
            
            r12_2 = arg3
        case 5
            if (rsi_1 != 0)
                rsi_1[1].d += 2
            
            int64_t rdi_8 = sx.q(*(arg1 + 0x3b8))
            int32_t rax_93 = (rdi_8 + 1).d
            *(arg1 + 0x3b8) = rax_93
            
            if (rax_93 s> *(arg1 + 0x3bc))
                sub_1405a4f90(arg1 + 0x3b0)
            
            result = (rdi_8 << 4) + *(arg1 + 0x3b0)
            *result = var_f38
            result[1] = rsi_1
            
            if (rsi_1 != 0)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    result = (**rsi_1)(rsi_1)
                    int32_t temp31_1 = *(rsi_1 + 0xc)
                    *(rsi_1 + 0xc) -= 1
                    
                    if (temp31_1 == 1)
                        result = (*(*rsi_1 + 8))(rsi_1, 1)
            
            rdi_7 = arg4
            r12_2 = arg3

if (r14_2 != 0)
    r14_2[1].d -= 1
    
    if (r14_2[1].d == 1)
        result = (**r14_2)(r14_2)
        int32_t temp27_1 = *(r14_2 + 0xc)
        *(r14_2 + 0xc) -= 1
        
        if (temp27_1 == 1)
            result = (*(*r14_2 + 8))(r14_2, 1)

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        result = (**rsi_1)(rsi_1)
        int32_t temp30_1 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (temp30_1 == 1)
            result = (*(*rsi_1 + 8))(rsi_1, 1)

if (r15 != 0)
    int32_t temp29_1 = *(r15 + 0xc)
    *(r15 + 0xc) -= 1
    
    if (temp29_1 == 1)
        result = (*(*r15 + 8))(r15, 1)

if (var_f28 != 0)
    int32_t temp32_1 = *(var_f28 + 0xc)
    *(var_f28 + 0xc) -= 1
    
    if (temp32_1 == 1)
        result = (*(*var_f28 + 8))(var_f28, 1)

if (var_f28 != 0)
    var_f28[1].d -= 1
    
    if (var_f28[1].d == 1)
        result = (**var_f28)(var_f28)
        int32_t temp35_1 = *(var_f28 + 0xc)
        *(var_f28 + 0xc) -= 1
        
        if (temp35_1 == 1)
            result = (*(*var_f28 + 8))(var_f28, 1)

int64_t* rbx_23 = r12_2[1]

if (rbx_23 != 0)
    rbx_23[1].d -= 1
    
    if (rbx_23[1].d == 1)
        result = (**rbx_23)(rbx_23)
        int32_t temp37_1 = *(rbx_23 + 0xc)
        *(rbx_23 + 0xc) -= 1
        
        if (temp37_1 == 1)
            result = (*(*rbx_23 + 8))(rbx_23, 1)

int64_t* rbx_24 = rdi_7[1]

if (rbx_24 != 0)
    rbx_24[1].d -= 1
    
    if (rbx_24[1].d == 1)
        result = (**rbx_24)(rbx_24)
        int32_t temp38_1 = *(rbx_24 + 0xc)
        *(rbx_24 + 0xc) -= 1
        
        if (temp38_1 == 1)
            result = (*(*rbx_24 + 8))(rbx_24, 1)

__security_check_cookie(rax_1 ^ &var_f98)
return result
