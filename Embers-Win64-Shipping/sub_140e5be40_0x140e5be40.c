// 函数: sub_140e5be40
// 地址: 0x140e5be40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_9d8
int64_t rax_1 = __security_cookie ^ &var_9d8
*(arg1 + 0x2e) &= 0xfb

if (sub_140db3510(&arg1[3]) != 0)
    sub_140dc03a0(&arg1[3], *(arg1 + 0x2e))

arg1[0x73] = *arg3
void* rbx_1 = arg3[1]
int64_t* rcx_2 = arg1[0x74]

if (rbx_1 != rcx_2)
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
        rcx_2 = arg1[0x74]
    
    if (rcx_2 != 0)
        int32_t temp1_1 = *(rcx_2 + 0xc)
        *(rcx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_2 + 8))(rcx_2, 1)
    
    arg1[0x74] = rbx_1

arg1[0x75] = *(arg2 + 0x1a0)
arg1[0x8a].b = *(arg2 + 0x1a8)
sub_14065da90(&arg1[0x8b], arg2 + 0x1b0)
arg1[0x8e].b = *(arg2 + 0x1c8)
sub_140692f90(&arg1[0x8f], arg2 + 0x1d0)
int64_t* var_998
int64_t* (* var_988)(void* arg1, int64_t* arg2)
int32_t var_980
char* (* var_968)(void* arg1, char* arg2, double arg3 @ zmm0)

if (arg1[0x8e].b == 0)
    if (arg1[0x90].d == 0)
    label_140e5bf74:
        var_980 = 0
        var_988 = sub_140e69e20
        var_968.o = var_988.o
        int64_t* rax_11 = sub_140e46010(&var_998, arg1, &var_968)
        int64_t var_920
        sub_140a96170(&var_920)
        char var_908_1 = 1
        int64_t var_900 = 0
        int32_t var_8f8_1 = 0
        sub_140692f90(&var_900, rax_11)
        int64_t rdx_5 = arg1[0x8b]
        arg1[0x8b] = var_920
        var_920 = rdx_5
        int64_t* rdx_6 = arg1[0x8c]
        int64_t var_918
        arg1[0x8c] = var_918
        int32_t var_910
        arg1[0x8d].d = var_910
        arg1[0x8e].b = var_908_1
        sub_1407473e0(&arg1[0x8f], &var_900)
        sub_140745b20(&var_900)
        
        if (rdx_6 != 0)
            rdx_6[1].d -= 1
            
            if (rdx_6[1].d == 1)
                (**rdx_6)(rdx_6)
                int32_t rdi_2 = *(rdx_6 + 0xc)
                *(rdx_6 + 0xc) -= 1
                
                if (rdi_2 == 1)
                    (*(*rdx_6 + 8))(rdx_6, zx.q(rdi_2))
        
        int32_t var_990
        int64_t* rax_20
        
        if (var_990 == 0)
            rax_20 = var_998
        label_140e5c078:
            
            if (rax_20 != 0)
                sub_140a74f90(rax_20)
        else
            int64_t* rcx_13 = var_998
            
            if (rcx_13 != 0)
                (*(*rcx_13 + 0x38))(rcx_13, 0)
                rax_20 = var_998
                
                if (rax_20 != 0)
                    rax_20 = sub_140a84c80(rax_20, 0, 0)
                    var_998 = rax_20
                
                int32_t var_990_1 = 0
                goto label_140e5c078
    else
        int64_t* rcx_5 = arg1[0x8f]
        
        if (rcx_5 == 0)
            goto label_140e5bf74
        
        if ((*(*rcx_5 + 0x28))(rcx_5) == 0)
            goto label_140e5bf74

int64_t rbx_5 = arg1[0x75]
var_998 = sub_140e69a90
int32_t var_990_2 = 0
int128_t zmm0_1 = var_998.o
var_968 = sub_140e69a50
int128_t var_7c8 = zmm0_1
int64_t var_828 = rbx_5 + 0xd60
char var_820 = 1
int64_t var_818 = 0
int32_t var_810 = 0
int32_t var_960 = 0
void var_768
int64_t* rax_21 = sub_140e4fb70(&var_768)
int128_t var_7d8 = var_968.o
int64_t* var_958
int64_t* rax_22 = sub_140e45cb0(&var_958, arg1, &var_7d8)
int16_t var_938 = 0x119
int64_t var_930 = 0
int32_t var_928 = 0
sub_1407473e0(&var_930, rax_22)
rax_21[0xf].b = var_938.b
*(rax_21 + 0x79) = var_938:1.b
sub_1407473e0(&rax_21[0x10], &var_930)
sub_140745b20(&var_930)
int32_t var_950
int64_t* rax_26

if (var_950 == 0)
    rax_26 = var_958
label_140e5c189:
    
    if (rax_26 != 0)
        sub_140a74f90(rax_26)
else
    int64_t* rcx_21 = var_958
    
    if (rcx_21 != 0)
        (*(*rcx_21 + 0x38))(rcx_21, 0)
        rax_26 = var_958
        
        if (rax_26 != 0)
            rax_26 = sub_140a84c80(rax_26, 0, 0)
            var_958 = rax_26
        
        int32_t var_950_1 = 0
        goto label_140e5c189
rax_21[0x34] = rbx_5 + 0xd60
rax_21[0x35].b = 1
sub_140692f90(&rax_21[0x36], &var_818)
void*** rax_27 = sub_140e48c50()
void* var_870 = &rax_27[2]
sub_140918950(&var_870, &rax_27[2])
int64_t var_9b8 = 0x3a8
void var_9a8
void* var_860 = &var_9a8
sub_140e23ed0(&rax_27[2], "SImage")
void* rax_28
int128_t zmm1
rax_28, zmm1 = sub_140e45660(rax_21, arg1, &var_7c8)
void* var_778
void** rax_29 = sub_140e56930(&var_870, &var_778, rax_28, zmm1)
int64_t* r15 = rax_29[1]
void* var_858 = *rax_29
int64_t* var_850 = r15

if (r15 != 0)
    r15[1].d += 1

char rbx_8 = data_1439ae520
var_968 = sub_140e69bc0
int64_t var_848 = *arg4
void* rax_31 = arg4[1]
char var_888 = rbx_8
char var_887 = 1
int64_t var_880 = 0
int32_t var_878 = 0
int32_t var_960_1 = 0
char var_8a0 = rbx_8
char var_89f = 1
int64_t var_898 = 0
int32_t var_890 = 0
char var_7f8 = 1
int64_t var_7f0 = 0
int32_t var_7e8 = 0
void* var_840 = rax_31
int128_t var_808 = zx.o(0)

if (rax_31 != 0)
    *(rax_31 + 8) += 1

void*** rax_32 = j_sub_140a82f30(0x50)
void*** r14 = rax_32

if (rax_32 == 0)
    r14 = nullptr
else
    sub_140ddb700(rax_32)
    *r14 = &data_142ec8fc8
    r14[4].d = 0
    *(r14 + 0x24) = 0
    r14[5] = 0
    r14[6] = 0
    r14[7].b = 1
    r14[8] = 0
    r14[9].d = 0

void*** rax_33 = j_sub_140a82f30(0x50)
void*** rdi_4 = rax_33

if (rax_33 == 0)
    rdi_4 = nullptr
else
    sub_140ddb700(rax_33)
    *rdi_4 = &data_142ec8fc8
    rdi_4[4].d = 0
    *(rdi_4 + 0x24) = 0
    rdi_4[5] = 0
    rdi_4[6] = 0
    rdi_4[7].b = 1
    rdi_4[8] = 0
    rdi_4[9].d = 0

void var_550
int64_t* rax_34 = sub_140dd5d30(&var_550)
rax_34[0xf].b = rbx_8
*(rax_34 + 0x79) = 1
sub_1407473e0(&rax_34[0x10], &var_880)
var_998 = sub_140de1aa0(rdi_4, &var_858)
int64_t r12_1 = sx.q(rax_34[0x35].d)
int32_t rcx_35 = (r12_1 + 1).d
rax_34[0x35].d = rcx_35

if (rcx_35 s> *(rax_34 + 0x1ac))
    sub_1405a4d70(&rax_34[0x34])

*(rax_34[0x34] + (r12_1 << 3)) = var_998
void* var_788
void* rax_38 = sub_140de1aa0(r14, sub_140e6dd60(arg1, &var_788, &var_848, arg5))
int64_t r14_1 = sx.q(rax_34[0x35].d)
int32_t rcx_39 = (r14_1 + 1).d
rax_34[0x35].d = rcx_39

if (rcx_39 s> *(rax_34 + 0x1ac))
    sub_1405a4d70(&rax_34[0x34])

*(rax_34[0x34] + (r14_1 << 3)) = rax_38
void*** rax_40 = j_sub_140a82f30(0x2e0)
void*** r14_2 = rax_40

if (rax_40 == 0)
    r14_2 = nullptr
else
    rax_40[1].d = 1
    *(rax_40 + 0xc) = 1
    *r14_2 = &data_142ecd308
    
    if (r14_2 != -0x10)
        sub_140dde040(&r14_2[2])

void* var_8b8 = &r14_2[2]
sub_140918950(&var_8b8, &r14_2[2])
int64_t var_9b8_1 = 0x2d0
void var_9a7
void* var_8a8 = &var_9a7
void* var_798
int64_t* (** rax_41)(void* arg1, int64_t* arg2) =
    sub_140de49c0(&var_8b8, &var_798, rax_34, sub_140e23ed0(&r14_2[2], "SOverlay"))
int64_t* rdi_7 = rax_41[1]
int64_t* (* r12_3)(void* arg1, int64_t* arg2) = *rax_41

if (rdi_7 != 0)
    rdi_7[1].d += 1

void var_3a0
int64_t* rax_42
int128_t zmm6
rax_42, zmm6 = sub_14068c640(&var_3a0)
rax_42[0x39].b = 1
*(rax_42 + 0x1b8) = zmm6
sub_140692f90(&rax_42[0x3a], &var_7f0)
rax_42[0xf].b = rbx_8
*(rax_42 + 0x79) = 1
sub_1407473e0(&rax_42[0x10], &var_898)
int128_t var_7b8 = var_968.o
int64_t* var_948
int64_t* rax_43 = sub_140e45b90(&var_948, arg1, &var_7b8)
char var_8e8 = 1
int64_t var_8f0 = 0
int64_t var_8e0 = 0
int32_t var_8d8 = 0
sub_140692f90(&var_8e0, rax_43)
rax_42[0x44] = var_8f0
rax_42[0x45].b = var_8e8
sub_1407473e0(&rax_42[0x46], &var_8e0)
sub_140745b20(&var_8e0)
int32_t var_940
int64_t* rax_47

if (var_940 == 0)
    rax_47 = var_948
label_140e5c58a:
    
    if (rax_47 != 0)
        sub_140a74f90(rax_47)
else
    int64_t* rcx_52 = var_948
    
    if (rcx_52 != 0)
        (*(*rcx_52 + 0x38))(rcx_52, 0)
        rax_47 = var_948
        
        if (rax_47 != 0)
            rax_47 = sub_140a84c80(rax_47, 0, 0)
            var_948 = rax_47
        
        int32_t var_940_1 = 0
        goto label_140e5c58a
var_988 = r12_3
int64_t* rbx_9 = rdi_7
var_980.q = rbx_9

if (rdi_7 != 0)
    rdi_7[1].d += 1

if (&var_988 != &rax_42[0x34])
    var_988.o = *(rax_42 + 0x1a0)
    rbx_9 = var_980.q
    *(rax_42 + 0x1a0) = var_988.o

if (rbx_9 != 0)
    rbx_9[1].d -= 1
    
    if (rbx_9[1].d == 1)
        (**rbx_9)(rbx_9)
        int32_t temp4_1 = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_9 + 8))(rbx_9, 1)

if (rdi_7 != 0)
    rdi_7[1].d -= 1
    
    if (rdi_7[1].d == 1)
        (**rdi_7)(rdi_7)
        int32_t temp5_1 = *(rdi_7 + 0xc)
        *(rdi_7 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi_7 + 8))(rdi_7, 1)

void*** rax_53 = j_sub_140a82f30(0x4c8)
void*** rdi_8 = rax_53

if (rax_53 == 0)
    rdi_8 = nullptr
else
    rax_53[1].d = 1
    *(rax_53 + 0xc) = 1
    *rdi_8 = &data_142d8c5a0
    
    if (rdi_8 != -0x10)
        sub_140f20640(&rdi_8[2])

void* var_8d0 = &rdi_8[2]
sub_14065fa30(&var_8d0, &rdi_8[2])
int64_t var_9b8_2 = 0x4b8
void var_9a6
void* var_8c0 = &var_9a6
void* var_7a8
void** rax_54 = sub_140695920(&var_8d0, &var_7a8, rax_42, sub_140e23ed0(&rdi_8[2], "SBorder"))
int64_t* rbx_11 = rax_54[1]
void* var_838 = *rax_54
int64_t* var_830 = rbx_11

if (rbx_11 != 0)
    rbx_11[1].d += 1

sub_140de1b90(&arg1[0x57], &var_838)

if (rbx_11 != 0)
    rbx_11[1].d -= 1
    
    if (rbx_11[1].d == 1)
        (**rbx_11)(rbx_11)
        int32_t temp8_1 = *(rbx_11 + 0xc)
        *(rbx_11 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rbx_11 + 8))(rbx_11, 1)

int64_t* var_7a0

if (var_7a0 != 0)
    var_7a0[1].d -= 1
    
    if (var_7a0[1].d == 1)
        (**var_7a0)(var_7a0)
        int32_t temp10_1 = *(var_7a0 + 0xc)
        *(var_7a0 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*var_7a0 + 8))(var_7a0, 1)

if (rdi_8 != 0)
    rdi_8[1].d -= 1
    
    if (rdi_8[1].d == 1)
        (**rdi_8)(rdi_8)
        int32_t temp12_1 = *(rdi_8 + 0xc)
        *(rdi_8 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*rdi_8)[1](rdi_8, 1)

sub_14068fed0(&var_3a0)
int64_t* var_790

if (var_790 != 0)
    var_790[1].d -= 1
    
    if (var_790[1].d == 1)
        (**var_790)(var_790)
        int32_t temp14_1 = *(var_790 + 0xc)
        *(var_790 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*var_790 + 8))(var_790, 1)

if (r14_2 != 0)
    r14_2[1].d -= 1
    
    if (r14_2[1].d == 1)
        (**r14_2)(r14_2)
        int32_t temp15_1 = *(r14_2 + 0xc)
        *(r14_2 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*r14_2)[1](r14_2, 1)

int64_t var_3b0

if (var_3b0 != 0)
    sub_140a74f90(var_3b0)

sub_140ddea30(&var_550)
int64_t* var_780

if (var_780 != 0)
    var_780[1].d -= 1
    
    if (var_780[1].d == 1)
        (**var_780)(var_780)
        int32_t temp18_1 = *(var_780 + 0xc)
        *(var_780 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*var_780 + 8))(var_780, 1)

sub_140745b20(&var_7f0)
sub_140745b20(&var_898)
sub_140745b20(&var_880)

if (r15 != 0)
    r15[1].d -= 1
    
    if (r15[1].d == 1)
        (**r15)(r15)
        int32_t temp20_1 = *(r15 + 0xc)
        *(r15 + 0xc) -= 1
        
        if (temp20_1 == 1)
            (*(*r15 + 8))(r15, 1)

int64_t* var_770

if (var_770 != 0)
    var_770[1].d -= 1
    
    if (var_770[1].d == 1)
        (**var_770)(var_770)
        int32_t temp22_1 = *(var_770 + 0xc)
        *(var_770 + 0xc) -= 1
        
        if (temp22_1 == 1)
            (*(*var_770 + 8))(var_770, 1)

if (rax_27 != 0)
    rax_27[1].d -= 1
    
    if (rax_27[1].d == 1)
        (**rax_27)(rax_27)
        int32_t temp24_1 = *(rax_27 + 0xc)
        *(rax_27 + 0xc) -= 1
        
        if (temp24_1 == 1)
            (*rax_27)[1](rax_27, 1)

void var_560
sub_140745b20(&var_560)
void var_578
sub_140745b20(&var_578)
int64_t* var_588

if (var_588 != 0)
    var_588[1].d -= 1
    
    if (var_588[1].d == 1)
        (**var_588)(var_588)
        int32_t temp25_1 = *(var_588 + 0xc)
        *(var_588 + 0xc) -= 1
        
        if (temp25_1 == 1)
            (*(*var_588 + 8))(var_588, 1)

void var_5b8
sub_140745b20(&var_5b8)
sub_140ddea30(&var_768)
uint64_t result = sub_140745b20(&var_818)
__security_check_cookie(rax_1 ^ &var_9d8)
return result
