// 函数: sub_141bec5b0
// 地址: 0x141bec5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
sub_141beee70(arg1)
int32_t rcx
rcx.b = sub_140b5b8a0(arg1[0x2c].d, 0) == 0
int64_t* var_f0
int64_t var_d8
int64_t rcx_5
int64_t* rdx_3
int32_t r14

if ((*(arg1 + 0x164) != 0 | rcx.b) == 0)
label_141bec657:
    int64_t* rax_6 = arg1[0x29]
    rcx_5 = arg1[0x28]
    int64_t var_f8 = rcx_5
    var_f0 = rax_6
    
    if (rax_6 != 0)
        rax_6[1].d += 1
    
    rdx_3 = &var_f8
    int32_t var_e8_1 = arg1[0x2a].d
    r14 = 2
    char var_e0_1 = 1
    var_d8 = 0
    int32_t var_d0_1 = 0
else
    void* rax_1 = sub_140d3c6e0(&arg1[0x2b])
    
    if (rax_1 == 0)
        goto label_141bec657
    
    if (sub_140d1fd20(rax_1, arg1[0x2c]) == 0)
        goto label_141bec657
    
    arg_8.q = arg1[0x2c]
    void var_50
    int64_t* rax_5 = sub_141b70480(&var_50, sub_140d3c6e0(&arg1[0x2b]), &arg_8)
    rdx_3 = rax_5
    r14 = 1
    rcx_5 = *rax_5

int64_t var_b0 = rcx_5
int64_t* rax_8 = rdx_3[1]

if (rax_8 != 0)
    rax_8[1].d += 1

int32_t var_a0 = rdx_3[2].d
char var_98 = rdx_3[3].b
int64_t var_90 = 0
int32_t var_88 = 0
sub_1407473e0(&var_90, &rdx_3[4])

if ((r14.b & 2) != 0)
    r14 &= 0xfffffffd
    sub_140745b20(&var_d8)
    
    if (var_f0 != 0)
        var_f0[1].d -= 1
        
        if (var_f0[1].d == 1)
            (**var_f0)(var_f0)
            int32_t rax_13 = *(var_f0 + 0xc)
            *(var_f0 + 0xc) -= 1
            
            if (rax_13 == 1)
                (*(*var_f0 + 8))(var_f0, 1)

if ((r14.b & 1) != 0)
    void var_30
    sub_140745b20(&var_30)
    int64_t* var_48
    
    if (var_48 != 0)
        var_48[1].d -= 1
        
        if (var_48[1].d == 1)
            (**var_48)(var_48)
            int32_t rax_17 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (rax_17 == 1)
                (*(*var_48 + 8))(var_48, 1)

sub_140f61320(arg1[0x18e], &arg1[0x2d])
int64_t var_80 = arg1[0x25]
int64_t* rax_20 = arg1[0x26]

if (rax_20 != 0)
    rax_20[1].d += 1

void* rcx_15 = arg1[0x18e]
int32_t var_70 = arg1[0x27].d
char var_68 = 1
int64_t var_60 = 0
int32_t var_58 = 0
sub_140f61540(rcx_15, &var_80)
sub_140745b20(&var_60)

if (rax_20 != 0)
    rax_20[1].d -= 1
    
    if (rax_20[1].d == 1)
        (**rax_20)(rax_20)
        int32_t rax_24 = *(rax_20 + 0xc)
        *(rax_20 + 0xc) -= 1
        
        if (rax_24 == 1)
            (*(*rax_20 + 8))(rax_20, 1)

sub_140f5e5d0(arg1[0x18e], &var_b0)
void* rcx_20 = arg1[0x18e]
char var_128 = *(arg1 + 0xbc1)
char var_127 = 1
int64_t var_120 = 0
int32_t var_118 = 0
sub_140f5d160(rcx_20, &var_128)
sub_140745b20(&var_120)
void* rcx_22 = arg1[0x18e]
char var_110 = arg1[0x178].b
char var_10f = 1
int64_t var_108 = 0
int32_t var_100 = 0
sub_140f5fba0(rcx_22, &var_110)
sub_140745b20(&var_108)
void* rcx_24 = arg1[0x18e]
char var_c8 = *(arg1 + 0xbc3)
char var_c7 = 1
int64_t var_c0 = 0
int32_t var_b8 = 0
sub_140f617c0(rcx_24, &var_c8)
sub_141b78940(arg1, arg1[0x18e])
int32_t result = sub_140745b20(&var_90)

if (rax_8 != 0)
    result = rax_8[1].d
    rax_8[1].d -= 1
    
    if (result == 1)
        result = (**rax_8)(rax_8)
        int32_t rdi_1 = *(rax_8 + 0xc)
        *(rax_8 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rax_8 + 8))(rax_8, zx.q(rdi_1))

return result
