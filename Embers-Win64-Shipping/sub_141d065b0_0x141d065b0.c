// 函数: sub_141d065b0
// 地址: 0x141d065b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_58)
*(arg1 + 8) = arg2
void arg_10
sub_140b58260(&arg_10, u"uasset", 1)
void arg_8
sub_1407d1800(arg1 + 0x60, &arg_8, &arg_10, nullptr)
sub_140b58260(&arg_10, u"umap", 1)
sub_1407d1800(arg1 + 0x60, &arg_8, &arg_10, nullptr)
sub_140b58260(&arg_10, u"ubulk", 1)
sub_1407d1800(arg1 + 0x60, &arg_8, &arg_10, nullptr)
sub_140b58260(&arg_10, u"uexp", 1)
sub_1407d1800(arg1 + 0x60, &arg_8, &arg_10, nullptr)
sub_140af4ce0()
char rax_1

if (data_143de5d00 == 0)
    rax_1 = 0
else
    int64_t* rcx_9 = data_143de5cf8
    
    if (rcx_9 == 0)
        rax_1 = 0
    else if ((*(*rcx_9 + 0x28))(rcx_9) == 0)
        rax_1 = 0
    else
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"fileopenlog") != 0)
            rax_1 = 0
        else
            rax_1 = 1

*(arg1 + 0x30) = rax_1
int32_t rbx_1 = (data_143f365d8.q).d
int16_t* r14 = nullptr
int64_t rdi = data_143f365d0
int16_t* var_68 = nullptr
int16_t* r15

if (rbx_1 != 0)
    sub_1405a4c70(&var_68, rbx_1, 0)
    r14 = var_68
    memcpy(r14, rdi, rbx_1 * 2)
    r15 = r14
else
    r15 = nullptr

var_68 = nullptr
int32_t i_2
i_2.q = 0
sub_140af2b60()
sub_141d042a0(&data_143dbb3f0, &var_68)
int64_t var_78 = 0
int16_t* const rdi_1 = &data_142d40450
int32_t rdx_8 = 0

if (rbx_1 != 0)
    rdi_1 = r15

int32_t var_70 = 0
int32_t rcx_12 = 0
int32_t var_6c = 0

if (rdi_1 != 0 && *rdi_1 != 0)
    int64_t rbx_2 = -1
    
    do
        rbx_2 += 1
    while (rdi_1[rbx_2] != 0)
    
    if (rbx_2.d + 1 s> 0)
        sub_1405947f0(&var_78, rbx_2.d + 1)
        rcx_12 = var_6c
        rdx_8 = var_70
    
    int32_t rax_3 = rbx_2.d + 1 + rdx_8
    int32_t var_70_1 = rax_3
    
    if (rax_3 s> rcx_12)
        sub_140594770(&var_78)
    
    UnDecorator::getReferenceType(var_78, rdi_1, (rbx_2.d + 1) * 2)

sub_141d0a140(arg1, &var_68, &var_78)
int64_t rcx_17 = var_78

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

void*** rax_4 = sub_140a84c80(0, 0x30, 0)

if (rax_4 != 0)
    rax_4[1] = arg1
    *rax_4 = &data_142d42fd0
    rax_4[2] = sub_141d0a0b0
    rax_4[4] = sub_140a387b0()
    void** r8_9 = *rax_4
    r8_9[8](rax_4, &data_143de5668, r8_9)
else if (data_143de5670 != 0)
    int64_t* rcx_19 = data_143de5668
    
    if (rcx_19 != 0)
        (*(*rcx_19 + 0x38))(rcx_19, 0)
        int64_t rcx_20 = data_143de5668
        
        if (rcx_20 != 0)
            data_143de5668 = sub_140a84c80(rcx_20, 0, 0)
        
        data_143de5670 = 0

if (rax_4 != 0)
    (*rax_4)[7](rax_4, 0)
    int64_t rax_9 = sub_140a84c80(rax_4, 0, 0)
    
    if (rax_9 != 0)
        sub_140a74f90(rax_9)

void*** rax_10 = sub_140a84c80(0, 0x30, 0)

if (rax_10 != 0)
    rax_10[1] = arg1
    *rax_10 = &data_142d42fd0
    rax_10[2] = sub_141d05c80
    rax_10[4] = sub_140a387b0()
    void** r8_10 = *rax_10
    r8_10[8](rax_10, &data_143de5678, r8_10)
else if (data_143de5680 != 0)
    int64_t* rcx_25 = data_143de5678
    
    if (rcx_25 != 0)
        (*(*rcx_25 + 0x38))(rcx_25, 0)
        int64_t rcx_26 = data_143de5678
        
        if (rcx_26 != 0)
            data_143de5678 = sub_140a84c80(rcx_26, 0, 0)
        
        data_143de5680 = 0

if (rax_10 != 0)
    (*rax_10)[7](rax_10, 0)
    int64_t rax_15 = sub_140a84c80(rax_10, 0, 0)
    
    if (rax_15 != 0)
        sub_140a74f90(rax_15)

int64_t* rax_16 = sub_140a84c80(0, 0x30, 0)

if (rax_16 != 0)
    rax_16[1] = arg1
    *rax_16 = &data_142d42fd0
    rax_16[2] = sub_141d05ec0
    rax_16[4] = sub_140a387b0()
    int64_t r8_11 = *rax_16
    (*(r8_11 + 0x40))(rax_16, &data_143de5688, r8_11)
else if (data_143de5690 != 0)
    int64_t* rcx_31 = data_143de5688
    
    if (rcx_31 != 0)
        (*(*rcx_31 + 0x38))(rcx_31, 0)
        int64_t rcx_32 = data_143de5688
        
        if (rcx_32 != 0)
            data_143de5688 = sub_140a84c80(rcx_32, 0, 0)
        
        data_143de5690 = 0

if (rax_16 != 0)
    (*(*rax_16 + 0x38))(rax_16, 0)
    int64_t rax_21 = sub_140a84c80(rax_16, 0, 0)
    
    if (rax_21 != 0)
        sub_140a74f90(rax_21)

void*** rax_22 = sub_140a84c80(0, 0x30, 0)

if (rax_22 != 0)
    *rax_22 = &data_142d3fe58
    rax_22[1] = arg1
    rax_22[2] = sub_141d0aff0
    rax_22[4] = sub_140a387b0()
    *rax_22 = &data_142d3feb0
    sub_1405964f0(rax_22, &data_143de5698)
else if (data_143de56a0 != 0)
    int64_t* rcx_37 = data_143de5698
    
    if (rcx_37 != 0)
        (*(*rcx_37 + 0x38))(rcx_37, 0)
        int64_t rcx_38 = data_143de5698
        
        if (rcx_38 != 0)
            data_143de5698 = sub_140a84c80(rcx_38, 0, 0)
        
        data_143de56a0 = 0

if (rax_22 != 0)
    (*rax_22)[7](rax_22, 0)
    int64_t rax_27 = sub_140a84c80(rax_22, 0, 0)
    
    if (rax_27 != 0)
        sub_140a74f90(rax_27)

void*** rax_28 = sub_140a84c80(0, 0x30, 0)

if (rax_28 != 0)
    *rax_28 = &data_142d3fe58
    rax_28[1] = arg1
    rax_28[2] = sub_141d0aff0
    rax_28[4] = sub_140a387b0()
    *rax_28 = &data_142d3feb0

if (rax_28 != 0)
    sub_140599630(&data_14399fcb8, 1)
    (*rax_28)[6](rax_28, &arg_8)
    int64_t rdi_2 = sx.q(data_14399fcc0)
    int32_t rax_31 = (rdi_2 + 1).d
    bool cond:2_1 = rax_31 s<= data_14399fcc4
    data_14399fcc0 = rax_31
    
    if (not(cond:2_1))
        sub_1405a4f90(&data_14399fcb8)
    
    void**** rax_34 = (rdi_2 << 4) + data_14399fcb8
    *rax_34 = rax_28
    rax_34[1].d = 3

bool cond:1 = *(arg1 + 8) != 0
int32_t i_1 = i_2
int16_t* rsi_1 = var_68
int16_t* rbx_9 = rsi_1

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_43 = *rbx_9
        
        if (rcx_43 != 0)
            sub_140a74f90(rcx_43)
        
        rbx_9 = &rbx_9[8]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

if (r14 != 0)
    sub_140a74f90(r14)

pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_58)
return zx.q(cond:1)
