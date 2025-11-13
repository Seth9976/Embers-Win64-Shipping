// 函数: sub_141bcf9d0
// 地址: 0x141bcf9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6a8
int64_t rax_1 = __security_cookie ^ &var_6a8
uint32_t rax_2 = zx.d(*(arg1 + 0x41a))
char rax_3 = *(arg1 + 0x419)
char var_580 = rax_3
char rax_4 = *(arg1 + 0x418)
char var_598 = rax_4
uint64_t rax_5 = zx.q(*(arg1 + 0x416))
char var_66c = 1
int64_t var_668 = 0
int32_t var_660 = 0
char var_57f = 1
int64_t var_578 = 0
int32_t var_570 = 0
char var_597 = 1
int64_t var_590 = 0
int32_t var_588 = 0
int32_t rbx

if (rax_5.d u> 5)
    rbx = 0
else
    switch (rax_5)
        case 0
            rbx = 0
        case 1
            rbx = 1
        case 2
            rbx = 2
        case 3
            rbx = 3
        case 4
            rbx = 4
        case 5
            rbx = 5

char rax_6 = *(arg1 + 0x413)
char r12 = *(arg1 + 0x414)
char var_5e0 = rax_6
char rax_7 = *(arg1 + 0x412)
char var_5f8 = rax_7
char rax_8 = *(arg1 + 0x411)
char var_610 = rax_8
char rax_9 = *(arg1 + 0x410)
char var_628 = rax_9
int32_t var_640 = (*(arg1 + 0x40c)).d
int32_t var_5b0 = rbx
char var_5ac = 1
int64_t var_5a8 = 0
int32_t var_5a0 = 0
char var_5c8 = r12
char var_5c7 = 1
int64_t var_5c0 = 0
int32_t var_5b8 = 0
char var_5df = 1
int64_t var_5d8 = 0
int32_t var_5d0 = 0
char var_5f7 = 1
int64_t var_5f0 = 0
int32_t var_5e8 = 0
char var_60f = 1
int64_t var_608 = 0
int32_t var_600 = 0
char var_627 = 1
int64_t var_620 = 0
int32_t var_618 = 0
char var_63c = 1
int64_t var_638 = 0
int32_t var_630 = 0
void*** rax_10 = sub_140a84c80(0, 0x30, 0)

if (rax_10 != 0)
    *rax_10 = &data_143083ba0
    sub_140d3a3a0(&rax_10[1], arg1)
    rax_10[2] = sub_141bb4ec0
    rax_10[4] = sub_140a387b0()
    *rax_10 = &data_143083bf8

int64_t* rax_12 = sub_140a84c80(0, 0x30, 0)

if (rax_12 != 0)
    *rax_12 = &data_142dc0378
    sub_140d3a3a0(&rax_12[1], arg1)
    rax_12[2] = sub_141bb4cb0
    rax_12[4] = sub_140a387b0()
    *rax_12 = &data_142dc03d0

void var_548
int64_t* rax_14
int32_t zmm6_1
rax_14, zmm6_1 = sub_14068cff0(&var_548)
rax_14[0x46] = arg1 + 0x158
rax_14[0x88].d = zmm6_1
*(rax_14 + 0x444) = 1
sub_140692f90(&rax_14[0x89], &var_638)
rax_14[0x6e].b = rax_9
*(rax_14 + 0x371) = 1
sub_140692f90(&rax_14[0x6f], &var_620)
rax_14[0x71].b = rax_8
*(rax_14 + 0x389) = 1
sub_140692f90(&rax_14[0x72], &var_608)
rax_14[0x74].b = rax_7
*(rax_14 + 0x3a1) = 1
sub_140692f90(&rax_14[0x75], &var_5f0)
rax_14[0x77].b = rax_6
*(rax_14 + 0x3b9) = 1
sub_140692f90(&rax_14[0x78], &var_5d8)
rax_14[0x8b].b = r12
*(rax_14 + 0x459) = 1
sub_140692f90(&rax_14[0x8c], &var_5c0)
void var_568

if (&var_568 != &rax_14[0x84])
    if (rax_12 != 0)
        (*(*rax_12 + 0x40))(rax_12, &rax_14[0x84])
    else if (rax_14[0x85].d != 0)
        int64_t* rcx_12 = rax_14[0x84]
        
        if (rcx_12 != 0)
            (*(*rcx_12 + 0x38))(rcx_12, 0)
            int64_t rcx_13 = rax_14[0x84]
            
            if (rcx_13 != 0)
                rax_14[0x84] = sub_140a84c80(rcx_13, 0, 0)
            
            rax_14[0x85].d = 0

if (&var_568 != &rax_14[0x86])
    if (rax_10 != 0)
        (*rax_10)[8](rax_10, &rax_14[0x86])
    else if (rax_14[0x87].d != 0)
        int64_t* rcx_15 = rax_14[0x86]
        
        if (rcx_15 != 0)
            (*(*rcx_15 + 0x38))(rcx_15, 0)
            int64_t rcx_16 = rax_14[0x86]
            
            if (rcx_16 != 0)
                rax_14[0x86] = sub_140a84c80(rcx_16, 0, 0)
            
            rax_14[0x87].d = 0

rax_14[0x94].d = rbx
*(rax_14 + 0x4a4) = 1
sub_1407473e0(&rax_14[0x95], &var_5a8)
rax_14[0x97].b = *(arg1 + 0x417)
rax_14[0x98].b = rax_4
*(rax_14 + 0x4c1) = 1
sub_1407473e0(&rax_14[0x99], &var_590)
rax_14[0x9b].b = rax_3
*(rax_14 + 0x4d9) = 1
sub_1407473e0(&rax_14[0x9c], &var_578)
rax_14[0x7a].d = rax_2
*(rax_14 + 0x3d4) = 1
sub_140692f90(&rax_14[0x7b], &var_668)
void*** rax_30 = j_sub_140a82f30(0x558)
void*** r12_3 = rax_30

if (rax_30 == 0)
    r12_3 = nullptr
else
    rax_30[1].d = 1
    *(rax_30 + 0xc) = 1
    *r12_3 = &data_142d8c5b0
    
    if (r12_3 != -0x10)
        sub_140ee3400(&r12_3[2])

void* var_658 = &r12_3[2]
sub_14065fa30(&var_658, &r12_3[2])
int64_t var_688 = 0x548
void var_672
void* var_648 = &var_672
void* var_558
void** rax_31 = sub_140696520(&var_658, &var_558, rax_14, sub_140e23ed0(&r12_3[2], "SEditableText"))
int64_t* rcx_25 = rax_31[1]

if (rcx_25 != 0)
    rcx_25[1].d += 1

if (arg1 + 0x440 == &var_568)
label_141bcfef8:
    
    if (rcx_25 != 0)
        rcx_25[1].d -= 1
        
        if (rcx_25[1].d == 1)
            (**rcx_25)(rcx_25)
            int32_t temp2_1 = *(rcx_25 + 0xc)
            *(rcx_25 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_25 + 8))(rcx_25, 1)
else
    *(arg1 + 0x440) = *rax_31
    int64_t* rbx_2 = *(arg1 + 0x448)
    
    if (rcx_25 == rbx_2)
        goto label_141bcfef8
    
    *(arg1 + 0x448) = rcx_25
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp6_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* var_550

if (var_550 != 0)
    var_550[1].d -= 1
    
    if (var_550[1].d == 1)
        (**var_550)(var_550)
        int32_t temp5_1 = *(var_550 + 0xc)
        *(var_550 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_550 + 8))(var_550, 1)

if (r12_3 != 0)
    r12_3[1].d -= 1
    
    if (r12_3[1].d == 1)
        (**r12_3)(r12_3)
        int32_t temp7_1 = *(r12_3 + 0xc)
        *(r12_3 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*r12_3)[1](r12_3, 1)

sub_140690950(&var_548)

if (rax_12 != 0)
    (*(*rax_12 + 0x38))(rax_12, 0)
    int64_t rax_40 = sub_140a84c80(rax_12, 0, 0)
    
    if (rax_40 != 0)
        sub_140a74f90(rax_40)

if (rax_10 != 0)
    (*rax_10)[7](rax_10, 0)
    int64_t rax_42 = sub_140a84c80(rax_10, 0, 0)
    
    if (rax_42 != 0)
        sub_140a74f90(rax_42)

sub_140745b20(&var_638)
sub_140745b20(&var_620)
sub_140745b20(&var_608)
sub_140745b20(&var_5f0)
sub_140745b20(&var_5d8)
sub_140745b20(&var_5c0)
sub_140745b20(&var_5a8)
sub_140745b20(&var_590)
sub_140745b20(&var_578)
sub_140745b20(&var_668)
int64_t* rbx_5 = *(arg1 + 0x448)

if (rbx_5 != 0)
    rbx_5[1].d += 1

*arg2 = *(arg1 + 0x440)
arg2[1] = rbx_5

if (rbx_5 != 0)
    rbx_5[1].d += 1
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp9_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp9_1 == 1)
                int64_t r8_3 = *rbx_5
                (*(r8_3 + 8))(rbx_5, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_6a8)
return arg2
