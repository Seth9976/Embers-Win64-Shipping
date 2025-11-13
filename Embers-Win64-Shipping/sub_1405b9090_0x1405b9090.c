// 函数: sub_1405b9090
// 地址: 0x1405b9090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12
int64_t* var_10 = r12
sub_1405bc050(arg1)
sub_1405b5390(arg1, arg2)
sub_1405bc3d0(arg1)
int64_t r14

if (((arg1[0x5c].d u>> 1).b & 1) != 0)
    void* const rax_4
    
    if (*data_143cd5f28 != 0)
        rax_4 = 0x430
    
    if (*data_143cd5f28 == 0 || (arg1[1].b & 0x30) != 0)
        rax_4 = 0x260
    
    int64_t rax_5 = sub_1405a8d50(rax_4 + arg1, &arg1[0x8b])
    r14 = rax_5
    
    if (rax_5 == 0)
        void* r14_1 = arg1[0x48]
        
        if (r14_1 == 0)
            r14 = 0
        else
            r14 = *(r14_1 + 0xb8)
else
    r14 = sub_1405c9790(arg1, arg2)

int32_t zmm0 = *(arg1 + 0x32c)
int64_t var_58
void var_48
int64_t arg_8

if (zmm0 f>= 1f || r14 == 0)
    int64_t* rcx_16 = arg1[0x8a]
    
    if (rcx_16 != 0)
        sub_1405c97e0(rcx_16)
        arg1[0x8a] = 0
else
    void* rax_6 = arg1[0x8a]
    int32_t var_98
    
    if (rax_6 == 0)
        int32_t rbx_1 = arg1[1].d
        int32_t rdi_2 = rbx_1 & 0x69
        int64_t* rax_7 = sub_1405c70d0()
        arg_8 = 0
        int32_t r15_2 = rdi_2 | 0x20
        rbx_1.b &= 0x30
        
        if (rbx_1.b == 0)
            r15_2 = rdi_2
        
        if ((1 & sub_140b5b8a0(0, 0)) != 0)
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        var_98 = 0
        rax_6 = sub_140d2dfc0(rax_7, arg1, 0, r15_2, 0, 0, 0, 0, 0)
        zmm0 = *(arg1 + 0x32c)
        arg1[0x8a] = rax_6
    
    *(rax_6 + 0x70) = zmm0
    uint32_t rdi_3 = zx.d(*(arg1 + 0x2ac))
    void* rcx_6
    
    if (arg1[0x54].d != 1)
        rcx_6 = arg1[0x62]
    
    if (arg1[0x54].d == 1 || rcx_6 == 0)
        arg_8 = *(arg1 + 0x2a4)
    else
        sub_1405be000(rcx_6, &arg_8)
    
    int64_t* rax_10 = sub_1405be050(arg1)
    int64_t rbx_2 = arg_8
    var_58 = *rax_10
    int64_t* rcx_9 = rax_10[1]
    
    if (rcx_9 != 0)
        *(rcx_9 + 0xc) += 1
    
    sub_140d3a3a0(&var_48, arg1)
    int32_t var_40_1 = 2
    int64_t var_3c_1 = rbx_2
    uint32_t var_34_1 = rdi_3
    int64_t* var_90_1 = &var_58
    var_98.q = sub_1405bb370(arg1)
    int64_t rax_12 = sub_1405b3ec0(arg1[0x8a], r14, &arg1[0x8b], arg1[0x49], var_98)
    
    if (rax_12 != 0 && rax_12 != r14)
        r14 = rax_12
        sub_1405c6c80(arg1, rax_12)
        pdb_internal::Map<unsigned long,struct ClsData,class pdb_internal::HashClass<unsigned long,0>,void,class CriticalSectionNop>::grow(
            arg1)
    
    if (rcx_9 != 0)
        int32_t temp3_1 = *(rcx_9 + 0xc)
        *(rcx_9 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rcx_9 + 8))(rcx_9, 1)

sub_1405c6c80(arg1, r14)
r12.b = 0
*(arg1 + 0x2dc) += 1
int32_t rax_14 = arg1[0x5a].d
int32_t rcx_18 = *(arg1 + 0x2dc)
int64_t rdi_4 = sx.q(rax_14 - 1)

if (rax_14 - 1 s>= 0)
    int64_t rbx_4 = rdi_4 << 4
    int64_t temp1_1
    
    do
        int64_t rcx_19 = arg1[0x59]
        
        if (*(rbx_4 + rcx_19 + 8) == 0)
            r12.b = 1
        else
            int64_t* rcx_20 = *(rbx_4 + rcx_19)
            
            if (rcx_20 == 0)
                r12.b = 1
            else if ((*(*rcx_20 + 0x50))(rcx_20, arg1, r14) == 0)
                r12.b = 1
        
        rbx_4 -= 0x10
        temp1_1 = rdi_4
        rdi_4 -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_18 = *(arg1 + 0x2dc)

*(arg1 + 0x2dc) = rcx_18 - 1

if (r12.b != 0)
    sub_140599630(&arg1[0x59], 0)

int64_t* var_68 = arg1
int64_t var_60 = r14
sub_1405a9f90(&arg1[0x5f], &var_68)
uint32_t rdi_5 = zx.d(*(arg1 + 0x2ac))
void* rcx_23

if (arg1[0x54].d != 1)
    rcx_23 = arg1[0x62]

if (arg1[0x54].d == 1 || rcx_23 == 0)
    arg_8 = *(arg1 + 0x2a4)
else
    sub_1405be000(rcx_23, &arg_8)

int64_t* rax_20 = sub_1405be050(arg1)
int64_t rbx_5 = arg_8
var_58 = *rax_20
int64_t* rcx_26 = rax_20[1]

if (rcx_26 != 0)
    *(rcx_26 + 0xc) += 1

sub_140d3a3a0(&var_48, arg1)
int32_t var_40_2 = 4
int64_t var_3c_2 = rbx_5
uint32_t var_34_2 = rdi_5
sub_1405c22d0(arg1, &var_58)

if (rcx_26 != 0)
    int32_t temp2_1 = *(rcx_26 + 0xc)
    *(rcx_26 + 0xc) -= 1
    
    if (temp2_1 == 1)
        (*(*rcx_26 + 8))(rcx_26, 1)

return sub_1405b8f30(arg1) __tailcall
