// 函数: sub_140e245f0
// 地址: 0x140e245f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
char rax = sub_140dd5370(arg2, arg1, arg3, 1)

if (arg1[3].d != 0)
    int64_t* rcx_1 = arg1[2]
    
    if (rcx_1 != 0)
        int64_t rdx_1 = *rcx_1
        
        if ((*(rdx_1 + 0x28))(rcx_1, rdx_1) != 0)
            int64_t* rcx_2
            
            if (arg1[3].d == 0)
                rcx_2 = nullptr
            else
                rcx_2 = arg1[2]
            
            *arg1 = (*(*rcx_2 + 0x48))(rcx_2)

void* rdx_2 = *arg1
void** var_1d8
int128_t var_1a0
int128_t var_168
void** var_b8
void*** rax_4
int32_t rsi

if (rdx_2 == 0)
    uint128_t zmm1_1 = data_14399f5c0
    rax_4 = &var_1d8
    char var_158
    char var_158_1 = var_158 & 0xfc
    rsi = 2
    int128_t var_1d0_1 = data_142e05200
    var_1d8 = &data_142d8ad18
    int64_t var_1c0_1 = 0
    __builtin_memset(&var_1a0, 0, 0x20)
    char var_1a8_1 = 0
    uint128_t var_1b8_1 = zmm1_1
    zmm1_1 = zx.o(data_143dbb1f0)
    arg_8.q = zmm1_1.q
    int128_t zmm0_1 = arg4
    int32_t var_174_1 = zmm0_1.d
    int32_t var_17c_1 = zmm0_1.d
    var_168 = zx.o(0)
    int32_t var_178_1 = zmm1_1.d
    int32_t var_180_1 = zmm1_1.d
    char var_170_1 = 0
    int32_t var_16c_1 = 3
else
    rax_4 = sub_14068e310(&var_b8, rdx_2)
    rsi = 1

void** var_148
sub_14068e310(&var_148, rax_4)

if ((rsi.b & 2) != 0)
    int64_t* rdi_1 = var_168:8.q
    rsi &= 0xfffffffd
    var_1d8 = &data_142d8ad18
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* rdi_2 = var_1a0:8.q
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp7_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

if ((rsi.b & 1) != 0)
    var_b8 = &data_142d8ad18
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp6_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_40 + 8))(var_40, 1)
    
    int64_t* var_78
    
    if (var_78 != 0)
        var_78[1].d -= 1
        
        if (var_78[1].d == 1)
            (**var_78)(var_78)
            int32_t temp10_1 = *(var_78 + 0xc)
            *(var_78 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*var_78 + 8))(var_78, 1)

int32_t var_140
int32_t var_13c
int32_t var_138
int32_t var_134
int32_t var_130
int32_t var_12c
char var_dc

if (rax == 0)
    int32_t* rdx_3
    void var_128
    int64_t var_100
    int64_t var_f8
    int32_t var_f0
    int32_t var_ec
    int32_t var_e8
    int32_t var_e4
    char var_db
    char var_da
    char var_c8
    
    if (var_140 f!= arg1[5].d || var_13c f!= *(arg1 + 0x2c) || *(arg1 + 0x8c) != var_dc
            || var_138 f!= arg1[6].d || var_130 f!= arg1[7].d || var_134 f!= *(arg1 + 0x34)
            || var_12c f!= *(arg1 + 0x3c))
        rdx_3.b = 1
        sub_140e19ef0(arg2, rdx_3.b)
    else if (sub_140de1a50(&arg1[8], &var_128) == 0 || *(arg1 + 0x8d) != var_db
            || *(arg1 + 0x8e) != var_da || arg1[0xd] != var_100 || arg1[0xe] != var_f8
            || ((arg1[0x14].b ^ var_c8) & 1) != 0 || var_f0 f!= arg1[0xf].d
            || var_ec f!= *(arg1 + 0x7c) || var_e8 f!= arg1[0x10].d
            || not(var_e4 f== *(arg1 + 0x84)))
        rdx_3.b = 1
        sub_140e19ef0(arg2, rdx_3.b)
void* result = sub_140693270(&arg1[4], &var_148)
var_148 = &data_142d8ad18
int64_t* var_d0

if (var_d0 != 0)
    var_d0[1].d -= 1
    
    if (var_d0[1].d == 1)
        result = (**var_d0)(var_d0)
        int32_t temp9_1 = *(var_d0 + 0xc)
        *(var_d0 + 0xc) -= 1
        
        if (temp9_1 == 1)
            result = (*(*var_d0 + 8))(var_d0, 1)

int64_t* var_108

if (var_108 != 0)
    var_108[1].d -= 1
    
    if (var_108[1].d == 1)
        result = (**var_108)(var_108)
        int32_t temp11_1 = *(var_108 + 0xc)
        *(var_108 + 0xc) -= 1
        
        if (temp11_1 == 1)
            return (*(*var_108 + 8))(var_108, 1)

return result
