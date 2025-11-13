// 函数: sub_142170270
// 地址: 0x142170270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
int64_t rbx = 0
int32_t arg_8 = *sub_140b5e500(&arg_8, 0x11a)
int32_t arg_c = 0
*(arg1 + 0x190) = arg_8.q
uint8_t result = (*(arg1 + 8) u>> 4).b

if ((result & 1) != 0)
    return result

sub_14214bce0(arg1 + 0x718, 0x400)
*(arg1 + 0x180) = sub_1408f7ec0(sub_142452380(), *sub_140b58260(&arg_8, u"Role", 1))
*(arg1 + 0x188) = sub_1408f7ec0(sub_142452380(), *sub_140b58260(&arg_8, u"RemoteRole", 1))
int64_t* rax_9 = j_sub_140a82f30(0x3b0)
int64_t* rdi_3

if (rax_9 == 0)
    rdi_3 = nullptr
else
    rdi_3 = sub_14215c1b0(rax_9, arg1)

int64_t* var_38 = rdi_3
void*** rax_11 = j_sub_140a82f30(0x18)

if (rax_11 == 0)
    rax_11 = nullptr
else
    rax_11[1].d = 1
    *rax_11 = &data_1432e2960
    *(rax_11 + 0xc) = 1
    rax_11[2] = rdi_3

void*** var_30_1 = rax_11
void*** rdi_4

if (arg1 + 0x150 == &var_38)
label_1421703f7:
    rdi_4 = var_30_1
label_1421703fb:
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t temp2_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*rdi_4)[1](rdi_4, 1)
else
    rdi_4 = var_30_1
    *(arg1 + 0x150) = var_38
    int64_t* r14_1 = *(arg1 + 0x158)
    var_38 = nullptr
    
    if (rdi_4 == r14_1)
        goto label_1421703fb
    
    var_30_1 = nullptr
    *(arg1 + 0x158) = rdi_4
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t temp3_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*r14_1 + 8))(r14_1, 1)
        
        goto label_1421703f7
char* rax_17 = j_sub_140a82f30(0x58)
int64_t* rdi_5 = rax_17

if (rax_17 == 0)
    rdi_5 = nullptr
else
    *rax_17 = 0
    void* rcx_12 = &rax_17[0x18]
    __builtin_memset(&rax_17[4], 0, 0x14)
    *(rcx_12 + 0x10) = 0
    *(rcx_12 + 0x18) = 0
    *(rcx_12 + 0x1c) = 0x80
    void* rax_18 = *(rcx_12 + 0x10)
    
    if (rax_18 != 0)
        rcx_12 = rax_18
    
    *rcx_12 = 0
    *(rcx_12 + 8) = 0
    rdi_5[7].d = 0xffffffff
    *(rdi_5 + 0x3c) = 0
    rdi_5[9] = 0
    rdi_5[0xa].d = 0

var_38 = rdi_5
void*** rax_19 = j_sub_140a82f30(0x18)

if (rax_19 == 0)
    rax_19 = nullptr
else
    rax_19[1].d = 1
    *rax_19 = &data_1432e2970
    *(rax_19 + 0xc) = 1
    rax_19[2] = rdi_5

void*** var_30_2 = rax_19
void*** rdi_6

if (arg1 + 0x160 == &var_38)
label_14217051b:
    rdi_6 = var_30_2
label_14217051f:
    
    if (rdi_6 != 0)
        rdi_6[1].d -= 1
        
        if (rdi_6[1].d == 1)
            (**rdi_6)(rdi_6)
            int32_t temp6_1 = *(rdi_6 + 0xc)
            *(rdi_6 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rdi_6)[1](rdi_6, 1)
else
    rdi_6 = var_30_2
    *(arg1 + 0x160) = var_38
    int64_t* r14_2 = *(arg1 + 0x168)
    var_38 = nullptr
    
    if (rdi_6 == r14_2)
        goto label_14217051f
    
    var_30_2 = nullptr
    *(arg1 + 0x168) = rdi_6
    
    if (r14_2 != 0)
        r14_2[1].d -= 1
        
        if (r14_2[1].d == 1)
            (**r14_2)(r14_2)
            int32_t temp7_1 = *(r14_2 + 0xc)
            *(r14_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*r14_2 + 8))(r14_2, 1)
        
        goto label_14217051b
sub_140af2b60()
*(arg1 + 0x229) = sub_140b21a10(&data_143dbb3f0, u"profilestats")
var_30_2.d = 0
var_38 = sub_14215e700
void*** rax_26 = sub_140a84c80(0, 0x30, 0)

if (rax_26 != 0)
    *rax_26 = &data_143084628
    sub_140d3a3a0(&rax_26[1], arg1)
    *(rax_26 + 0x10) = var_38.o
    rax_26[5] = sub_140a387b0()
    *rax_26 = &data_143084680

int64_t rdi_7 = 0

if (rax_26 != 0)
    sub_140599630(&data_143a30728, 1)
    int64_t* rax_29 = (*rax_26)[6](rax_26, &arg_8)
    int64_t r15_1 = sx.q(data_143a30730)
    rdi_7 = *rax_29
    int32_t rax_30 = (r15_1 + 1).d
    bool cond:0_1 = rax_30 s<= data_143a30734
    data_143a30730 = rax_30
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_143a30728)
    
    void** rax_33 = (r15_1 << 4) + data_143a30728
    *rax_33 = rax_26
    rax_33[1].d = 3

*(arg1 + 0x6c0) = rdi_7
var_30_2.d = 0
var_38 = sub_14215e70c
void*** rax_34 = sub_140a84c80(0, 0x30, 0)

if (rax_34 != 0)
    *rax_34 = &data_143084628
    sub_140d3a3a0(&rax_34[1], arg1)
    *(rax_34 + 0x10) = var_38.o
    rax_34[5] = sub_140a387b0()
    *rax_34 = &data_143084680

int64_t rdi_8 = 0

if (rax_34 != 0)
    sub_140599630(&data_143a30710, 1)
    int64_t* rax_37 = (*rax_34)[6](rax_34, &arg_8)
    int64_t r15_2 = sx.q(data_143a30718)
    rdi_8 = *rax_37
    int32_t rax_38 = (r15_2 + 1).d
    bool cond:1_1 = rax_38 s<= data_143a3071c
    data_143a30718 = rax_38
    
    if (not(cond:1_1))
        sub_1405a4f90(&data_143a30710)
    
    void** rax_41 = (r15_2 << 4) + data_143a30710
    *rax_41 = rax_34
    rax_41[1].d = 3

*(arg1 + 0x6c8) = rdi_8
var_38 = sub_14216ff60
var_30_2.d = 0
sub_140d21f60()
void*** rax_42 = sub_140a84c80(0, 0x30, 0)

if (rax_42 != 0)
    *rax_42 = &data_142e33ea8
    sub_140d3a3a0(&rax_42[1], arg1)
    *(rax_42 + 0x10) = var_38.o
    rax_42[5] = sub_140a387b0()
    *rax_42 = &data_142e33f00

if (rax_42 != 0)
    sub_140599630(&data_1439aad48, 1)
    int64_t* rax_45 = (*rax_42)[6](rax_42, &arg_8)
    int64_t r15_3 = sx.q(data_1439aad50)
    rbx = *rax_45
    int32_t rax_46 = (r15_3 + 1).d
    data_1439aad50 = rax_46
    
    if (rax_46 s> data_1439aad54)
        sub_1405a4f90(&data_1439aad48)
    
    void**** rax_49 = (r15_3 << 4) + data_1439aad48
    *rax_49 = rax_42
    rax_49[1].d = 3

*(arg1 + 0x6e0) = rbx
return sub_14216d080(arg1)
