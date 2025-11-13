// 函数: sub_140f3f7d0
// 地址: 0x140f3f7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x572) = 0
*(arg1 + 0x4e0) = *(arg2 + 0x1a0)
*(arg1 + 0x4e8) = *(arg2 + 0x1a8)
int32_t var_110 = 0
int64_t (* var_118)(int64_t* arg1) = sub_140e9eb00
var_118.o = var_118.o
int64_t var_108 = 0
char var_100 = 1
char var_f8
sub_140e8eb40(&var_f8, arg1, &var_118)
int64_t rax_2 = var_108
int64_t var_b8 = 0
int32_t var_b0 = 0
sub_140692f90(&var_b8, &var_f8)
uint128_t zmm1 = data_14399f5c0
char var_28
char var_28_1 = var_28 & 0xfc
int128_t var_a0 = data_142e05200
void** var_a8 = &data_142d8ad18
int128_t var_70
__builtin_memset(&var_70, 0, 0x20)
int64_t var_90 = 0
uint128_t var_88 = zmm1
char var_78 = 0
zmm1 = zx.o(data_143dbb1f0)
int128_t zmm0_1 = zmm1.q:4.d
int32_t var_44 = zmm0_1.d
int32_t var_4c = zmm0_1.d
*(arg1 + 0x398) = rax_2
int128_t var_38 = zx.o(0)
int32_t var_48 = zmm1.d
int32_t var_50 = zmm1.d
char var_40 = 0
int32_t var_3c = 3
*(arg1 + 0x3a0) = var_100
sub_1407473e0(arg1 + 0x3a8, &var_b8)
sub_140693270(arg1 + 0x3b8, &var_a8)
sub_140691a20(&var_a8)
sub_140745b20(&var_b8)
sub_140745b20(&var_f8)
var_118 = sub_140ebe990
int32_t var_110_1 = 0
__builtin_memcpy(&var_108, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 
    0x11)
var_118.o = var_118.o
int128_t var_f0 = zx.o(0)
char var_e0 = 1
void var_d8
sub_140e8ec80(&var_d8, arg1, &var_118)
sub_140693390(arg1 + 0x358, &var_108)
*(arg1 + 0x380) = var_e0
sub_1407473e0(arg1 + 0x388, &var_d8)
sub_140745b20(&var_d8)
int64_t* rbx = var_f0:8.q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (arg2 + 0x1b0 != arg1 + 0x4f0)
    int64_t* rcx_13
    
    if (*(arg2 + 0x1b8) != 0)
        rcx_13 = *(arg2 + 0x1b0)
    
    if (*(arg2 + 0x1b8) != 0 && rcx_13 != 0)
        (*(*rcx_13 + 0x40))(rcx_13, arg1 + 0x4f0)
    else if (*(arg1 + 0x4f8) != 0)
        int64_t* rcx_14 = *(arg1 + 0x4f0)
        
        if (rcx_14 != 0)
            (*(*rcx_14 + 0x38))(rcx_14, 0)
            int64_t rcx_15 = *(arg1 + 0x4f0)
            
            if (rcx_15 != 0)
                *(arg1 + 0x4f0) = sub_140a84c80(rcx_15, 0, 0)
            
            *(arg1 + 0x4f8) = 0

if (arg2 + 0x1c0 != arg1 + 0x500)
    int64_t* rcx_16
    
    if (*(arg2 + 0x1c8) != 0)
        rcx_16 = *(arg2 + 0x1c0)
    
    if (*(arg2 + 0x1c8) != 0 && rcx_16 != 0)
        (*(*rcx_16 + 0x40))(rcx_16, arg1 + 0x500)
    else if (*(arg1 + 0x508) != 0)
        int64_t* rcx_17 = *(arg1 + 0x500)
        
        if (rcx_17 != 0)
            (*(*rcx_17 + 0x38))(rcx_17, 0)
            int64_t rcx_18 = *(arg1 + 0x500)
            
            if (rcx_18 != 0)
                *(arg1 + 0x500) = sub_140a84c80(rcx_18, 0, 0)
            
            *(arg1 + 0x508) = 0

sub_1407473e0(arg1 + 0x518, arg2 + 0x1d0)
sub_1407473e0(arg1 + 0x528, arg2 + 0x1e0)
sub_1407473e0(arg1 + 0x538, arg2 + 0x1f0)

if (arg2 + 0x200 != arg1 + 0x548)
    int64_t* rcx_23
    
    if (*(arg2 + 0x208) != 0)
        rcx_23 = *(arg2 + 0x200)
    
    if (*(arg2 + 0x208) != 0 && rcx_23 != 0)
        (*(*rcx_23 + 0x40))(rcx_23, arg1 + 0x548)
    else if (*(arg1 + 0x550) != 0)
        int64_t* rcx_24 = *(arg1 + 0x548)
        
        if (rcx_24 != 0)
            (*(*rcx_24 + 0x38))(rcx_24, 0)
            int64_t rcx_25 = *(arg1 + 0x548)
            
            if (rcx_25 != 0)
                *(arg1 + 0x548) = sub_140a84c80(rcx_25, 0, 0)
            
            *(arg1 + 0x550) = 0

int64_t* rbx_4 = arg3[1]
int64_t rcx_26 = *arg3

if (rbx_4 != 0)
    rbx_4[1].d += 1
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1

int64_t rax_20 = rcx_26 + 0x4e8

if (rcx_26 == 0)
    rax_20 = 0

*(arg1 + 0x4c0) = rax_20
int64_t* rcx_27 = *(arg1 + 0x4c8)

if (rbx_4 != rcx_27)
    if (rbx_4 != 0)
        *(rbx_4 + 0xc) += 1
        rcx_27 = *(arg1 + 0x4c8)
    
    if (rcx_27 != 0)
        int32_t temp4_1 = *(rcx_27 + 0xc)
        *(rcx_27 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rcx_27 + 8))(rcx_27, 1)
    
    *(arg1 + 0x4c8) = rbx_4

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp3_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp6_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)

*(arg1 + 0x4d4) = *(arg2 + 0x238)
int32_t result = *(arg2 + 0x23c)
*(arg1 + 0x4d8) = result
return result
