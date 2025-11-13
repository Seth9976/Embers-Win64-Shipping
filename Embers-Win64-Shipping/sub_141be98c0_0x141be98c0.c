// 函数: sub_141be98c0
// 地址: 0x141be98c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int128_t zmm6 = sub_141beee70(arg1)
int32_t rcx
rcx.b = sub_140b5b8a0(*(arg1 + 0x13c), 0) == 0
void*** var_418
int128_t var_3f0
char var_3e0
int64_t var_3d8
int32_t var_3d0
int128_t* rdx_3
int32_t rbx

if ((arg1[0x28].d != 0 | rcx.b) == 0)
label_141be997f:
    int128_t zmm0_1 = *(arg1 + 0x124)
    var_3e0 = 1
    rdx_3 = &var_3f0
    var_3d8 = 0
    rbx = 2
    var_3f0 = zmm0_1
    var_3d0 = 0
else
    void* rax_1 = sub_140d3c6e0(arg1 + 0x134)
    
    if (rax_1 == 0)
        goto label_141be997f
    
    int64_t rax_2
    rax_2.b = sub_140d1fd20(rax_1, *(arg1 + 0x13c)) != 0
    
    if (rax_2.b == 0)
        goto label_141be997f
    
    arg_8.q = *(arg1 + 0x13c)
    int128_t* rax_5
    rax_5, zmm6 = sub_141b700f0(&var_418, sub_140d3c6e0(arg1 + 0x134), &arg_8)
    rdx_3 = rax_5
    rbx = 1

int128_t var_390 = *rdx_3
char var_380 = rdx_3[1].b
int64_t var_378 = 0
int32_t var_370 = 0
sub_1407473e0(&var_378, rdx_3 + 0x18)

if ((rbx.b & 2) != 0)
    rbx &= 0xfffffffd
    sub_140745b20(&var_3d8)

int64_t var_400

if ((rbx.b & 1) != 0)
    rbx &= 0xfffffffe
    sub_140745b20(&var_400)

int32_t r13 = 0xc
int32_t rcx_8
rcx_8.b = sub_140b5b8a0(arg1[0x41].d, 0) == 0
int32_t var_410
char var_408
int64_t var_3c0
int128_t var_310
int64_t var_2f8
int32_t rax_17
int128_t* rdx_12
void*** rsi
int32_t r15

if ((*(arg1 + 0x20c) != 0 | rcx_8.b) == 0)
label_141be9b96:
    int128_t zmm0_2 = *(arg1 + 0x1f0)
    var_3e0 = 1
    int128_t var_38_1 = zmm6
    var_3f0 = zmm0_2
    var_3d8 = 0
    var_3d0 = 0
    sub_140745b20(&var_3d8)
    r15 = var_410
    rdx_12 = &var_3f0
    rsi = var_418
    var_3f0 = zmm0_2
    rax_17 = 0x30
    var_3e0 = 0
    var_3d8.o = zx.o(0)
    char var_3c8_1 = 1
    var_3c0 = 0
    int32_t var_3b8_1 = 0
else
    void* rax_8 = sub_140d3c6e0(&arg1[0x40])
    
    if (rax_8 == 0)
        goto label_141be9b96
    
    int64_t rax_9
    rax_9.b = sub_140d1fd20(rax_8, arg1[0x41]) != 0
    
    if (rax_9.b == 0)
        goto label_141be9b96
    
    arg_8.q = arg1[0x41]
    void var_108
    int128_t* rax_12 = sub_141b700f0(&var_108, sub_140d3c6e0(&arg1[0x40]), &arg_8)
    var_400 = 0
    int32_t var_3f8_1 = 0
    int128_t zmm0_3 = *rax_12
    var_408 = rax_12[1].b
    var_418.o = zmm0_3
    sub_140692f90(&var_400, rax_12 + 0x18)
    void*** rax_13 = sub_140a84c80(0, 0x50, 0)
    r15 = 5
    rsi = rax_13
    
    if (rax_13 != 0)
        int128_t zmm0_4 = var_418.o
        var_3e0 = var_408
        var_3d8 = 0
        var_3f0 = zmm0_4
        var_3d0 = 0
        sub_140692f90(&var_3d8, &var_400)
        *rsi = &data_1430838e0
        sub_140d3a3a0(&rsi[1], arg1)
        rsi[2] = sub_141b9eb50
        *(rsi + 0x18) = var_3f0
        rsi[5].b = var_3e0
        rsi[6] = 0
        rsi[7].d = 0
        sub_140692f90(&rsi[6], &var_3d8)
        rsi[8] = sub_140a387b0()
        sub_140745b20(&var_3d8)
    
    sub_140745b20(&var_400)
    sub_140745b20(rax_12 + 0x18)
    char var_300_1 = 1
    var_2f8 = 0
    int32_t var_2f0_1 = 0
    int128_t var_328
    __builtin_memcpy(&var_328, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
    var_310 = zx.o(0)
    
    if (rsi != 0)
        (*rsi)[8](rsi, &var_2f8)
    
    rdx_12 = &var_328
    rax_17 = 0xc

int32_t rbx_1 = rbx | rax_17
char var_358 = rdx_12[1].b
int64_t var_350 = *(rdx_12 + 0x18)
int64_t* rax_20 = rdx_12[2].q
int128_t var_368 = *rdx_12

if (rax_20 != 0)
    rax_20[1].d += 1

char var_340 = *(rdx_12 + 0x28)
int64_t var_338 = 0
int32_t var_330 = 0
sub_1407473e0(&var_338, &rdx_12[3])

if ((rbx_1.b & 0x20) != 0)
    rbx_1 &= 0xffffffdf
    sub_140745b20(&var_3c0)
    int64_t* r14_2 = var_3d0.q
    
    if (r14_2 != 0)
        r14_2[1].d -= 1
        
        if (r14_2[1].d == 1)
            (**r14_2)(r14_2)
            int32_t temp1_1 = *(r14_2 + 0xc)
            *(r14_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*r14_2 + 8))(r14_2, 1)

if ((rbx_1.b & 0x10) != 0)
    rbx_1 &= 0xffffffef

if ((rbx_1.b & 8) != 0)
    rbx_1 &= 0xfffffff7
    sub_140745b20(&var_2f8)
    int64_t* r14_3 = var_310:8.q
    
    if (r14_3 != 0)
        r14_3[1].d -= 1
        
        if (r14_3[1].d == 1)
            (**r14_3)(r14_3)
            int32_t temp3_1 = *(r14_3 + 0xc)
            *(r14_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*r14_3 + 8))(r14_3, 1)

if ((rbx_1.b & 4) != 0)
    rbx_1 &= 0xfffffffb
    
    if (r15 == 0)
        goto label_141be9cfa
    
    if (rsi != 0)
        (*rsi)[7](rsi, 0)
        rsi = sub_140a84c80(rsi, 0, 0)
    label_141be9cfa:
        
        if (rsi != 0)
            sub_140a74f90(rsi)

int32_t rcx_34
rcx_34.b = sub_140b5b8a0(arg1[0x3d].d, 0) == 0
char rax_37
char* rdx_24
void*** rsi_1
int32_t r12
void*** r14_5

if ((*(arg1 + 0x1ec) != 0 | rcx_34.b) == 0)
label_141be9ece:
    r14_5 = &arg1[0x2b]
    void** var_248
    sub_14068e310(&var_248, r14_5)
    char var_1c0_1 = 1
    int64_t var_1b8 = 0
    int32_t var_1b0_1 = 0
    sub_140693270(r14_5, sub_141baa040(&var_248))
    sub_140745b20(&var_1b8)
    sub_140691a20(&var_248)
    r13 = var_410
    rdx_24 = &var_3e0
    rsi_1 = var_418
    rax_37 = 1
    var_3e0.q = 0
    var_3d8.d = 0
    r12 = 0x100
    var_3f0.q = r14_5
    var_3f0:8.b = 1
else
    void* rax_29 = sub_140d3c6e0(&arg1[0x3c])
    
    if (rax_29 == 0)
        goto label_141be9ece
    
    int64_t rax_30
    rax_30.b = sub_140d1fd20(rax_29, arg1[0x3d]) != 0
    
    if (rax_30.b == 0)
        goto label_141be9ece
    
    arg_8.q = arg1[0x3d]
    void** var_e0
    void*** rax_33 = sub_141b701f0(&var_e0, sub_140d3c6e0(&arg1[0x3c]), &arg_8)
    void** var_2e8
    sub_14068e310(&var_2e8, rax_33)
    char rcx_40 = rax_33[0x11].b
    int64_t* var_258 = nullptr
    int32_t var_250_1 = 0
    
    if (&rax_33[0x12] != &var_258 && rax_33[0x13].d != 0)
        int64_t* rcx_41 = rax_33[0x12]
        
        if (rcx_41 != 0)
            (*(*rcx_41 + 0x40))(rcx_41, &var_258)
    
    r12 = 0xc0
    void*** rax_35 = sub_140a84c80(0, 0xc0, 0)
    rsi_1 = rax_35
    
    if (rax_35 != 0)
        void** var_1a8
        sub_14068e310(&var_1a8, &var_2e8)
        char var_120_1 = rcx_40
        int64_t var_118 = 0
        int32_t var_110_1 = 0
        
        if (var_250_1 != 0)
            int64_t* rcx_44 = var_258
            
            if (rcx_44 != 0)
                (*(*rcx_44 + 0x40))(rcx_44, &var_118)
        
        sub_141b79740(rsi_1, arg1, sub_141b9eab0, &var_1a8)
    
    sub_140745b20(&var_258)
    sub_140691a20(&var_2e8)
    sub_140745b20(&rax_33[0x12])
    sub_140691a20(rax_33)
    rax_37 = 1
    var_410.b = 1
    r14_5 = nullptr
    var_418 = nullptr
    var_408.q = 0
    var_400.d = 0
    
    if (rsi_1 != 0)
        (*rsi_1)[8](rsi_1, &var_408)
        rax_37 = var_410.b
        r14_5 = var_418
    
    rdx_24 = &var_408

void*** var_3b0 = r14_5
int32_t rbx_2 = rbx_1 | r12
char var_3a8 = rax_37
int64_t var_3a0 = 0
int32_t var_398 = 0
sub_1407473e0(&var_3a0, rdx_24)

if (test_bit(rbx_2, 8))
    rbx_2 &= 0xfffffeff
    sub_140745b20(&var_3e0)

if (rbx_2.b s< 0)
    rbx_2 &= 0xffffff7f
    sub_140745b20(&var_408)

if ((rbx_2.b & 0x40) != 0)
    if (r13 == 0)
        goto label_141be9fd1
    
    if (rsi_1 != 0)
        (*rsi_1)[7](rsi_1, 0)
        rsi_1 = sub_140a84c80(rsi_1, 0, 0)
    label_141be9fd1:
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)

int128_t zmm0_7 = *(arg1 + 0x144)
int64_t* rcx_62 = arg1[0x4c]
var_3e0 = 1
var_3f0 = zmm0_7
var_3d8 = 0
int32_t var_3d0_1 = 0
sub_140f60470(rcx_62, &var_3f0)
sub_140745b20(&var_3d8)
sub_140f5d360(arg1[0x4c], &var_368)
int64_t* rcx_65 = arg1[0x4c]
sub_140e92500(rcx_65, &rcx_65[0x65], &var_390, 2)
sub_140f5d380(arg1[0x4c], &var_3b0)
var_418.d = arg1[0x42].d
var_418:4.d = *(arg1 + 0x214)
var_410.b = 1
var_408.q = 0
var_400.d = 0
sub_140f5dc80(arg1[0x4c], &var_418)
sub_140745b20(&var_408)
var_418.b = *(arg1 + 0x122) & 1
var_418:1.b = 1
var_410.q = 0
var_408.d = 0
sub_140f60f60(arg1[0x4c], &var_418)
sub_140745b20(&var_410)
var_418 = nullptr
var_410 = 0
void*** rax_43 = sub_1405978f0(0x28, &var_418)

if (rax_43 != 0)
    *rax_43 = &data_143083980
    sub_140d3a3a0(&rax_43[1], arg1)
    rax_43[2] = sub_141bb4530
    rax_43[4] = sub_140a387b0()

sub_140e24ba0(arg1[0x4c], &var_418)
var_418 = nullptr
var_410 = 0
void*** rax_45 = sub_1405978f0(0x28, &var_418)

if (rax_45 != 0)
    *rax_45 = &data_143083980
    sub_140d3a3a0(&rax_45[1], arg1)
    rax_45[2] = sub_141bb47f0
    rax_45[4] = sub_140a387b0()

sub_140e24bd0(arg1[0x4c], &var_418)
var_418 = nullptr
var_410 = 0
void*** rax_47 = sub_1405978f0(0x28, &var_418)

if (rax_47 != 0)
    *rax_47 = &data_143083980
    sub_140d3a3a0(&rax_47[1], arg1)
    rax_47[2] = sub_141bb4ab0
    rax_47[4] = sub_140a387b0()

sub_140e24c30(arg1[0x4c], &var_418)
var_418 = nullptr
var_410 = 0
void*** rax_49 = sub_1405978f0(0x28, &var_418)

if (rax_49 != 0)
    *rax_49 = &data_143083980
    sub_140d3a3a0(&rax_49[1], arg1)
    rax_49[2] = sub_141bb4950
    rax_49[4] = sub_140a387b0()

sub_140e24c00(arg1[0x4c], &var_418)
sub_140745b20(&var_3a0)
sub_140745b20(&var_338)

if (rax_20 != 0)
    rax_20[1].d -= 1
    
    if (rax_20[1].d == 1)
        (**rax_20)(rax_20)
        int32_t temp5_1 = *(rax_20 + 0xc)
        *(rax_20 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rax_20 + 8))(rax_20, 1)

return sub_140745b20(&var_378)
