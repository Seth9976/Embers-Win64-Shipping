// 函数: sub_140fa9970
// 地址: 0x140fa9970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x572) = 0
*(arg1 + 0x4e0) = *(arg2 + 0x1a0)
*(arg1 + 0x4e8) = *(arg2 + 0x1a8)
int32_t var_120 = 0
int64_t (* var_128)(int64_t* arg1) = sub_140e9eb00
var_128.o = var_128.o
int64_t var_70 = 0
char var_68 = 1
char var_60
sub_140e8eb40(&var_60, arg1, &var_128)
int64_t rax_2 = var_70
int64_t var_108 = 0
int32_t var_100 = 0
sub_140692f90(&var_108, &var_60)
uint128_t zmm1 = data_14399f5c0
char var_78
char var_78_1 = var_78 & 0xfc
int128_t var_f0 = data_142e05200
void** var_f8 = &data_142d8ad18
int128_t var_c0
__builtin_memset(&var_c0, 0, 0x20)
int64_t var_e0 = 0
uint128_t var_d8 = zmm1
char var_c8 = 0
zmm1 = zx.o(data_143dbb1f0)
var_128 = zmm1.q
int128_t zmm0_1 = var_128:4.d
int32_t var_94 = zmm0_1.d
int32_t var_9c = zmm0_1.d
*(arg1 + 0x398) = rax_2
int128_t var_88 = zx.o(0)
int32_t var_98 = zmm1.d
int32_t var_a0 = zmm1.d
char var_90 = 0
int32_t var_8c = 3
*(arg1 + 0x3a0) = var_68
sub_1407473e0(arg1 + 0x3a8, &var_108)
*(arg1 + 0x3c0) = var_f0.d.d
*(arg1 + 0x3c4) = var_f0:4.d.d
*(arg1 + 0x3c8) = var_f0
sub_140693390(arg1 + 0x3d8, &var_d8)
int64_t var_b0
*(arg1 + 0x400) = var_b0
int64_t var_a8
*(arg1 + 0x408) = var_a8
*(arg1 + 0x410) = var_a0.o
*(arg1 + 0x420) = var_90.d
*(arg1 + 0x424) = var_8c.b
*(arg1 + 0x425) = var_8c:1.b
int64_t* rbx = var_88:8.q
*(arg1 + 0x426) = var_8c:2.b
*(arg1 + 0x427) = var_8c:3.b
var_128 = var_88.q
var_120.q = rbx

if (rbx != 0)
    rbx[1].d += 1

if (&var_128 != arg1 + 0x428)
    var_128.o = *(arg1 + 0x428)
    rbx = var_120.q
    *(arg1 + 0x428) = var_128.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

*(arg1 + 0x438) &= 0xfc
*(arg1 + 0x438) |= var_78_1 & 3
sub_140691a20(&var_f8)
sub_140745b20(&var_108)
sub_140745b20(&var_60)
var_128 = sub_140ebe990
int32_t var_120_1 = 0
__builtin_memcpy(&var_70, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 
    0x11)
var_128.o = var_128.o
int128_t var_58 = zx.o(0)
char var_48 = 1
void var_40
sub_140e8ec80(&var_40, arg1, &var_128)
sub_140693390(arg1 + 0x358, &var_70)
*(arg1 + 0x380) = var_48
sub_1407473e0(arg1 + 0x388, &var_40)
sub_140745b20(&var_40)
int64_t* rbx_1 = var_58:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (arg2 + 0x1b0 != arg1 + 0x4f0)
    int64_t* rcx_16
    
    if (*(arg2 + 0x1b8) != 0)
        rcx_16 = *(arg2 + 0x1b0)
    
    if (*(arg2 + 0x1b8) != 0 && rcx_16 != 0)
        (*(*rcx_16 + 0x40))(rcx_16, arg1 + 0x4f0)
    else if (*(arg1 + 0x4f8) != 0)
        int64_t* rcx_17 = *(arg1 + 0x4f0)
        
        if (rcx_17 != 0)
            (*(*rcx_17 + 0x38))(rcx_17, 0)
            int64_t rcx_18 = *(arg1 + 0x4f0)
            
            if (rcx_18 != 0)
                *(arg1 + 0x4f0) = sub_140a84c80(rcx_18, 0, 0)
            
            *(arg1 + 0x4f8) = 0

if (arg2 + 0x1c0 != arg1 + 0x500)
    int64_t* rcx_19
    
    if (*(arg2 + 0x1c8) != 0)
        rcx_19 = *(arg2 + 0x1c0)
    
    if (*(arg2 + 0x1c8) != 0 && rcx_19 != 0)
        (*(*rcx_19 + 0x40))(rcx_19, arg1 + 0x500)
    else if (*(arg1 + 0x508) != 0)
        int64_t* rcx_20 = *(arg1 + 0x500)
        
        if (rcx_20 != 0)
            (*(*rcx_20 + 0x38))(rcx_20, 0)
            int64_t rcx_21 = *(arg1 + 0x500)
            
            if (rcx_21 != 0)
                *(arg1 + 0x500) = sub_140a84c80(rcx_21, 0, 0)
            
            *(arg1 + 0x508) = 0

if (arg2 + 0x1d0 != arg1 + 0x518)
    int64_t* rcx_22
    
    if (*(arg2 + 0x1d8) != 0)
        rcx_22 = *(arg2 + 0x1d0)
    
    if (*(arg2 + 0x1d8) != 0 && rcx_22 != 0)
        (*(*rcx_22 + 0x40))(rcx_22, arg1 + 0x518)
    else if (*(arg1 + 0x520) != 0)
        int64_t* rcx_23 = *(arg1 + 0x518)
        
        if (rcx_23 != 0)
            (*(*rcx_23 + 0x38))(rcx_23, 0)
            int64_t rcx_24 = *(arg1 + 0x518)
            
            if (rcx_24 != 0)
                *(arg1 + 0x518) = sub_140a84c80(rcx_24, 0, 0)
            
            *(arg1 + 0x520) = 0

sub_1407473e0(arg1 + 0x528, arg2 + 0x1e0)
sub_1407473e0(arg1 + 0x538, arg2 + 0x1f0)

if (arg2 + 0x200 != arg1 + 0x548)
    int64_t* rcx_28
    
    if (*(arg2 + 0x208) != 0)
        rcx_28 = *(arg2 + 0x200)
    
    if (*(arg2 + 0x208) != 0 && rcx_28 != 0)
        (*(*rcx_28 + 0x40))(rcx_28, arg1 + 0x548)
    else if (*(arg1 + 0x550) != 0)
        int64_t* rcx_29 = *(arg1 + 0x548)
        
        if (rcx_29 != 0)
            (*(*rcx_29 + 0x38))(rcx_29, 0)
            int64_t rcx_30 = *(arg1 + 0x548)
            
            if (rcx_30 != 0)
                *(arg1 + 0x548) = sub_140a84c80(rcx_30, 0, 0)
            
            *(arg1 + 0x550) = 0

int64_t* rbx_6 = arg3[1]
int64_t rcx_31 = *arg3

if (rbx_6 != 0)
    rbx_6[1].d += 1
    
    if (rbx_6 != 0)
        rbx_6[1].d += 1

int64_t rax_35 = rcx_31 + 0x4e8

if (rcx_31 == 0)
    rax_35 = 0

*(arg1 + 0x4c0) = rax_35
int64_t* rcx_32 = *(arg1 + 0x4c8)

if (rbx_6 != rcx_32)
    if (rbx_6 != 0)
        *(rbx_6 + 0xc) += 1
        rcx_32 = *(arg1 + 0x4c8)
    
    if (rcx_32 != 0)
        int32_t temp6_1 = *(rcx_32 + 0xc)
        *(rcx_32 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rcx_32 + 8))(rcx_32, 1)
    
    *(arg1 + 0x4c8) = rbx_6

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp5_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp8_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)

*(arg1 + 0x4d4) = *(arg2 + 0x238)
int32_t result = *(arg2 + 0x23c)
*(arg1 + 0x4d8) = result
return result
