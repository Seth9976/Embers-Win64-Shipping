// 函数: sub_140e957b0
// 地址: 0x140e957b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_848
int64_t rax_1 = __security_cookie ^ &var_848
sub_140d91fa0(arg1)
*arg1 = &data_142edac98
arg1[8] = *arg2
void* rax_3 = arg2[1]
arg1[9] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg1[0xa] = arg3
arg1[0xb] = *arg4
void* rax_5 = arg4[1]
arg1[0xc] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

arg1[0xd] = 0
arg1[0xe] = 0
int64_t var_810
void* var_800
int64_t* rax_7 = sub_140ebf3d0(*sub_140f02160(*arg2, &var_810), &var_800)
arg1[0xf] = *rax_7
void* rcx_3 = rax_7[1]
arg1[0x10] = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 0xc) += 1

int64_t* var_7f8

if (var_7f8 != 0)
    var_7f8[1].d -= 1
    
    if (var_7f8[1].d == 1)
        (**var_7f8)(var_7f8)
        int32_t temp2_1 = *(var_7f8 + 0xc)
        *(var_7f8 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_7f8 + 8))(var_7f8, 1)

int64_t* var_808

if (var_808 != 0)
    var_808[1].d -= 1
    
    if (var_808[1].d == 1)
        (**var_808)(var_808)
        int32_t temp3_1 = *(var_808 + 0xc)
        *(var_808 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_808 + 8))(var_808, 1)

__builtin_memset(&arg1[0x11], 0, 0x24)
arg1[0x16] = *arg5
int64_t* rbx_3 = data_143e29f28
int64_t rdi = *rbx_3
int128_t var_7f0
int64_t** rax_13
int512_t zmm1
rax_13, zmm1 = sub_140e1bd30(&var_7f0)
int64_t* rax_14 = (*(rdi + 0x10))(rbx_3, &var_800, rax_13, 0)
int64_t* rbx_4 = rax_14[1]

if (rbx_4 != 0)
    rbx_4[1].d += 1

void var_780

if (&arg1[4] == &var_780)
label_140e9597a:
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp6_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
else
    arg1[4] = *rax_14
    int64_t* rdi_1 = arg1[5]
    
    if (rbx_4 == rdi_1)
        goto label_140e9597a
    
    arg1[5] = rbx_4
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp9_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if (var_7f8 != 0)
    var_7f8[1].d -= 1
    
    if (var_7f8[1].d == 1)
        (**var_7f8)(var_7f8)
        int32_t temp8_1 = *(var_7f8 + 0xc)
        *(var_7f8 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_7f8 + 8))(var_7f8, 1)

sub_140e24eb0(arg1[4], 0)
zmm1.o = 0x3ee66666
sub_140e24c80(arg1[4], zmm1)
int64_t* rbx_6 = data_143e243c8
void var_750
int64_t rax_21 = (*(*rbx_6 + 0x48))(rbx_6, *sub_140b58170(&var_750, "Docking.Background", 1), 0)
char var_768 = 1
int64_t var_770 = rax_21
int64_t var_760 = 0
int32_t var_758 = 0
void**** var_7e0 = sub_140ec5860(&var_7f0)
void*** rax_23 = sub_140e91bb0()
void* var_7a8 = &rax_23[2]
sub_140918950(&var_7a8, &rax_23[2])
int64_t var_828 = 0x4d0
void***** var_798 = &var_7e0
sub_140e23ed0(&rax_23[2], "SDockingTabStack")

if (rax_23 != 0)
    rax_23[1].d += 1

if (&arg1[0xd] == &var_810)
label_140e95ac7:
    
    if (rax_23 != 0)
        rax_23[1].d -= 1
        
        if (rax_23[1].d == 1)
            (**rax_23)(rax_23)
            int32_t temp11_1 = *(rax_23 + 0xc)
            *(rax_23 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*rax_23)[1](rax_23, 1)
else
    arg1[0xd] = &rax_23[2]
    void*** rdi_4 = arg1[0xe]
    
    if (rax_23 == rdi_4)
        goto label_140e95ac7
    
    arg1[0xe] = rax_23
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t temp13_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*rdi_4)[1](rdi_4, 1)

void var_540
int64_t* rax_27
int128_t zmm1_1
rax_27, zmm1_1 = sub_140e94090(&var_540)
int64_t* rax_28 = sub_140e9c640(&var_7a8, &var_780, rax_27, zmm1_1)
var_810 = *rax_28
void* rcx_29 = rax_28[1]
void* var_808_1 = rcx_29

if (rcx_29 != 0)
    *(rcx_29 + 8) += 1

void* rbx_8 = arg1[8]
void*** var_718
void**** rax_29 = sub_140ec55c0(&var_718)
void var_728
int64_t* var_790 = sub_140f03670(rbx_8, &var_728)
void**** var_788 = rax_29
void*** rax_31 = sub_140e919a0()
void* var_7c0 = &rax_31[2]
sub_140918950(&var_7c0, &rax_31[2])
int64_t var_828_1 = 0x400
int64_t** var_7b0 = &var_790
sub_140e23ed0(&rax_31[2], "SDockingArea")
void var_708
int64_t* rax_32
int128_t zmm1_2
rax_32, zmm1_2 = sub_140e93de0(&var_708)
void* rax_33
int128_t zmm1_3
rax_33, zmm1_3 = sub_140ec0970(rax_32, &var_810, zmm1_2)
void var_738
int64_t* rax_34 = sub_140e9bd90(&var_7c0, &var_738, rax_33, zmm1_3)
var_810 = *rax_34
void* rcx_38 = rax_34[1]
void* var_808_2 = rcx_38

if (rcx_38 != 0)
    *(rcx_38 + 8) += 1

void var_398
int64_t* rax_35 = sub_14068c640(&var_398)
rax_35[0x44] = rax_21
rax_35[0x45].b = 1
sub_140692f90(&rax_35[0x46], &var_760)
void*** rax_36 = j_sub_140a82f30(0x4c8)
void*** rdi_6 = rax_36

if (rax_36 == 0)
    rdi_6 = nullptr
else
    rax_36[1].d = 1
    *(rax_36 + 0xc) = 1
    *rdi_6 = &data_142d8c5a0
    
    if (rdi_6 != -0x10)
        sub_140f20640(&rdi_6[2])

void* var_7d8 = &rdi_6[2]
sub_14065fa30(&var_7d8, &rdi_6[2])
int64_t var_828_2 = 0x4b8
void var_818
void* var_7c8 = &var_818
void* rax_37
int128_t zmm1_5
rax_37, zmm1_5 = sub_1406936e0(rax_35, &var_810, sub_140e23ed0(&rdi_6[2], "SBorder"))
void* var_748
void** rax_38 = sub_140695920(&var_7d8, &var_748, rax_37, zmm1_5)
var_800 = *rax_38
void* rcx_46 = rax_38[1]
void* var_7f8_1 = rcx_46

if (rcx_46 != 0)
    *(rcx_46 + 8) += 1

sub_140e23de0(arg1[4], &var_800)
int64_t* var_740

if (var_740 != 0)
    var_740[1].d -= 1
    
    if (var_740[1].d == 1)
        (**var_740)(var_740)
        int32_t temp16_1 = *(var_740 + 0xc)
        *(var_740 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*var_740 + 8))(var_740, 1)

if (rdi_6 != 0)
    rdi_6[1].d -= 1
    
    if (rdi_6[1].d == 1)
        (**rdi_6)(rdi_6)
        int32_t temp18_1 = *(rdi_6 + 0xc)
        *(rdi_6 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*rdi_6)[1](rdi_6, 1)

sub_14068fed0(&var_398)
int64_t* var_730

if (var_730 != 0)
    var_730[1].d -= 1
    
    if (var_730[1].d == 1)
        (**var_730)(var_730)
        int32_t temp20_1 = *(var_730 + 0xc)
        *(var_730 + 0xc) -= 1
        
        if (temp20_1 == 1)
            (*(*var_730 + 8))(var_730, 1)

if (rax_31 != 0)
    rax_31[1].d -= 1
    
    if (rax_31[1].d == 1)
        (**rax_31)(rax_31)
        int32_t temp22_1 = *(rax_31 + 0xc)
        *(rax_31 + 0xc) -= 1
        
        if (temp22_1 == 1)
            (*rax_31)[1](rax_31, 1)

int64_t* var_720

if (var_720 != 0)
    var_720[1].d -= 1
    
    if (var_720[1].d == 1)
        (**var_720)(var_720)
        int32_t temp24_1 = *(var_720 + 0xc)
        *(var_720 + 0xc) -= 1
        
        if (temp24_1 == 1)
            (*(*var_720 + 8))(var_720, 1)

int64_t* var_710

if (var_710 != 0)
    var_710[1].d -= 1
    
    if (var_710[1].d == 1)
        (**var_710)(var_710)
        int32_t temp26_1 = *(var_710 + 0xc)
        *(var_710 + 0xc) -= 1
        
        if (temp26_1 == 1)
            (*(*var_710 + 8))(var_710, 1)

int64_t* var_548

if (var_548 != 0)
    var_548[1].d -= 1
    
    if (var_548[1].d == 1)
        (**var_548)(var_548)
        int32_t temp28_1 = *(var_548 + 0xc)
        *(var_548 + 0xc) -= 1
        
        if (temp28_1 == 1)
            (*(*var_548 + 8))(var_548, 1)

int64_t* var_560

if (var_560 != 0)
    var_560[1].d -= 1
    
    if (var_560[1].d == 1)
        (**var_560)(var_560)
        int32_t temp30_1 = *(var_560 + 0xc)
        *(var_560 + 0xc) -= 1
        
        if (temp30_1 == 1)
            (*(*var_560 + 8))(var_560, 1)

sub_140ddea30(&var_708)
int64_t* var_778

if (var_778 != 0)
    var_778[1].d -= 1
    
    if (var_778[1].d == 1)
        (**var_778)(var_778)
        int32_t temp32_1 = *(var_778 + 0xc)
        *(var_778 + 0xc) -= 1
        
        if (temp32_1 == 1)
            (*(*var_778 + 8))(var_778, 1)

if (rax_23 != 0)
    rax_23[1].d -= 1
    
    if (rax_23[1].d == 1)
        (**rax_23)(rax_23)
        int32_t temp34_1 = *(rax_23 + 0xc)
        *(rax_23 + 0xc) -= 1
        
        if (temp34_1 == 1)
            (*rax_23)[1](rax_23, 1)

int64_t* var_7e8

if (var_7e8 != 0)
    var_7e8[1].d -= 1
    
    if (var_7e8[1].d == 1)
        (**var_7e8)(var_7e8)
        int32_t temp35_1 = *(var_7e8 + 0xc)
        *(var_7e8 + 0xc) -= 1
        
        if (temp35_1 == 1)
            (*(*var_7e8 + 8))(var_7e8, 1)

sub_140ddea30(&var_540)
sub_140745b20(&var_760)

if (sub_140f07210(arg1[8]) != 0)
    var_7f0 = zx.o(0)
    int64_t zmm0_1 = sub_140ebd660()
    sub_140ed9ca0(data_143e2a070, &var_7f0, zmm0_1)

int64_t* rbx_22 = arg4[1]

if (rbx_22 != 0)
    rbx_22[1].d -= 1
    
    if (rbx_22[1].d == 1)
        (**rbx_22)(rbx_22)
        int32_t temp37_1 = *(rbx_22 + 0xc)
        *(rbx_22 + 0xc) -= 1
        
        if (temp37_1 == 1)
            int64_t r8_8 = *rbx_22
            (*(r8_8 + 8))(rbx_22, 1, r8_8)

__security_check_cookie(rax_1 ^ &var_848)
return arg1
