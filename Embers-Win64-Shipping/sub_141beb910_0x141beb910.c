// 函数: sub_141beb910
// 地址: 0x141beb910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
sub_141beee70(arg1)
int32_t rcx
rcx.b = sub_140b5b8a0(arg1[0x37].d, 0) == 0
int128_t var_388
char var_378
int128_t var_370
int64_t var_358
void*** var_348
int128_t* rdx_3
int32_t rsi

if ((*(arg1 + 0x1bc) != 0 | rcx.b) == 0)
label_141beb9c5:
    int128_t zmm0_1 = *(arg1 + 0x1a0)
    var_378 = 0
    rdx_3 = &var_388
    char var_360_1 = 1
    var_388 = zmm0_1
    var_358 = 0
    rsi = 2
    var_370 = zx.o(0)
    int32_t var_350_1 = 0
else
    void* rax_1 = sub_140d3c6e0(&arg1[0x36])
    
    if (rax_1 == 0)
        goto label_141beb9c5
    
    if (sub_140d1fd20(rax_1, arg1[0x37]) == 0)
        goto label_141beb9c5
    
    arg_8.q = arg1[0x37]
    rdx_3 = sub_141b70370(&var_348, sub_140d3c6e0(&arg1[0x36]), &arg_8)
    rsi = 1

int128_t var_2e8 = *rdx_3
char var_2d8 = rdx_3[1].b
int64_t var_2d0 = *(rdx_3 + 0x18)
int64_t* rax_8 = rdx_3[2].q

if (rax_8 != 0)
    rax_8[1].d += 1

char var_2c0 = *(rdx_3 + 0x28)
int64_t var_2b8 = 0
int32_t var_2b0 = 0
sub_1407473e0(&var_2b8, &rdx_3[3])

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    sub_140745b20(&var_358)
    int64_t* rbx_1 = var_370:8.q
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if ((rsi.b & 1) != 0)
    rsi &= 0xfffffffe
    void var_318
    sub_140745b20(&var_318)
    int64_t* var_328
    
    if (var_328 != 0)
        var_328[1].d -= 1
        
        if (var_328[1].d == 1)
            (**var_328)(var_328)
            int32_t temp3_1 = *(var_328 + 0xc)
            *(var_328 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_328 + 8))(var_328, 1)

int32_t rcx_12
rcx_12.b = sub_140b5b8a0(arg1[0x33].d, 0) == 0
int64_t var_338
char rax_23
int64_t* rdx_15
void*** rbx_3
int32_t r12
char r14_1
void*** r15_1
int32_t var_340

if ((*(arg1 + 0x19c) != 0 | rcx_12.b) == 0)
label_141bebc82:
    r15_1 = &arg1[0x21]
    void** var_208
    sub_14068e310(&var_208, r15_1)
    char var_180_1 = 1
    int64_t var_178 = 0
    int32_t var_170_1 = 0
    sub_140693270(r15_1, sub_141baa040(&var_208))
    sub_140745b20(&var_178)
    sub_140691a20(&var_208)
    r12 = var_340
    rdx_15 = &var_378
    rbx_3 = var_348
    rax_23 = 1
    var_388.q = r15_1
    r14_1 = 0x10
    var_388:8.b = 1
    var_378.q = 0
    var_370.d = 0
else
    void* rax_15 = sub_140d3c6e0(&arg1[0x32])
    
    if (rax_15 == 0)
        goto label_141bebc82
    
    if (sub_140d1fd20(rax_15, arg1[0x33]) == 0)
        goto label_141bebc82
    
    arg_8.q = arg1[0x33]
    void** var_c8
    void*** rax_19 = sub_141b701f0(&var_c8, sub_140d3c6e0(&arg1[0x32]), &arg_8)
    void** var_2a8
    sub_14068e310(&var_2a8, rax_19)
    char rcx_18 = rax_19[0x11].b
    int64_t* var_218 = nullptr
    int32_t var_210_1 = 0
    
    if (&rax_19[0x12] != &var_218 && rax_19[0x13].d != 0)
        int64_t* rcx_19 = rax_19[0x12]
        
        if (rcx_19 != 0)
            (*(*rcx_19 + 0x40))(rcx_19, &var_218)
    
    void*** rax_21 = sub_140a84c80(0, 0xc0, 0)
    rbx_3 = rax_21
    r12 = 0xc
    
    if (rax_21 != 0)
        void** var_168
        sub_14068e310(&var_168, &var_2a8)
        char var_e0_1 = rcx_18
        int64_t var_d8 = 0
        int32_t var_d0_1 = 0
        
        if (var_210_1 != 0)
            int64_t* rcx_22 = var_218
            
            if (rcx_22 != 0)
                (*(*rcx_22 + 0x40))(rcx_22, &var_d8)
        
        sub_141b79740(rbx_3, arg1, sub_141b9eb00, &var_168)
    
    sub_140745b20(&var_218)
    sub_140691a20(&var_2a8)
    sub_140745b20(&rax_19[0x12])
    sub_140691a20(rax_19)
    var_348 = nullptr
    rax_23 = 1
    var_340.b = 1
    r15_1 = nullptr
    var_338 = 0
    int32_t var_330_1 = 0
    
    if (rbx_3 != 0)
        (*rbx_3)[8](rbx_3, &var_338)
        rax_23 = var_340.b
        r15_1 = var_348
    
    rdx_15 = &var_338
    r14_1 = 0xc
char r14_2 = r14_1 | rsi.b
int64_t var_2f8 = 0
int32_t var_2f0 = 0
sub_1407473e0(&var_2f8, rdx_15)

if ((r14_2 & 0x10) != 0)
    sub_140745b20(&var_378)

if ((r14_2 & 8) != 0)
    sub_140745b20(&var_338)

if ((r14_2 & 4) != 0)
    if (r12 == 0)
        goto label_141bebd85
    
    if (rbx_3 != 0)
        (*rbx_3)[7](rbx_3, 0)
        rbx_3 = sub_140a84c80(rbx_3, 0, 0)
    label_141bebd85:
        
        if (rbx_3 != 0)
            sub_140a74f90(rbx_3)

if (arg1[0x3b] != 0)
    var_388.q = r15_1
    var_388:8.b = rax_23
    var_378.q = 0
    var_370.d = 0
    sub_140692f90(&var_378, &var_2f8)
    sub_140e24960(arg1[0x3b], &var_388)
    sub_140e23c00(arg1[0x3b], &var_2e8)
    var_348 = nullptr
    int32_t var_340_1 = 0
    void*** rax_30 = sub_1405978f0(0x28, &var_348)
    
    if (rax_30 != 0)
        *rax_30 = &data_143083980
        sub_140d3a3a0(&rax_30[1], arg1)
        rax_30[2] = sub_141bb4690
        rax_30[4] = sub_140a387b0()
    
    sub_140e24ba0(arg1[0x3b], &var_348)

sub_140745b20(&var_2f8)
uint64_t result = sub_140745b20(&var_2b8)

if (rax_8 != 0)
    rax_8[1].d -= 1
    
    if (rax_8[1].d == 1)
        result = (**rax_8)(rax_8)
        int32_t temp5_1 = *(rax_8 + 0xc)
        *(rax_8 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rax_8 + 8))(rax_8, 1)

return result
