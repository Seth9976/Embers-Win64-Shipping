// 函数: sub_141b87770
// 地址: 0x141b87770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
int64_t rax_1 = __security_cookie ^ &var_4a8
int32_t var_428 = 0
char var_410
int64_t* var_3a0
int64_t var_388
char var_378
char var_310
void var_308
int32_t rsi
char* r13

if (*(arg3 + 0x178) == 0)
    r13 = sub_14065fb60(&var_308, arg3 + 0xf0)
    rsi = 8
else
    int64_t var_3a8
    arg4 = sub_140a96170(&var_3a8)
    int64_t rax_2 = *(arg3 + 0x160)
    var_410 |= 1
    void* rax_3 = *(arg3 + 0x168)
    char var_390_1 = 0
    var_388 = 0
    int32_t var_380_1 = 0
    int16_t var_40f_1 = 0x100
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t rax_4 = *(arg3 + 0x170)
    char rax_5 = *(arg3 + 0x178)
    int64_t var_3e8 = 0
    int32_t var_3e0_1 = 0
    sub_140692f90(&var_3e8, arg3 + 0x180)
    int64_t rax_6 = var_3a8
    
    if (var_3a0 != 0)
        var_3a0[1].d += 1
    
    int64_t var_3b8 = 0
    int32_t var_3b0_1 = 0
    sub_140692f90(&var_3b8, &var_388)
    char rcx_3 = var_378
    char var_377_1 = var_40f_1.b
    char var_376_1 = var_40f_1:1.b
    int64_t var_370_1 = rax_2
    var_378 = rcx_3 ^ ((rcx_3 ^ var_410) & 1)
    void* var_368_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t var_360_1 = rax_4
    char var_358_1 = rax_5
    int64_t var_350 = 0
    int32_t var_348_1 = 0
    sub_1407473e0(&var_350, &var_3e8)
    int64_t var_340_1 = rax_6
    int64_t* var_338_1 = var_3a0
    
    if (var_3a0 != 0)
        var_3a0[1].d += 1
    
    int32_t var_398
    int32_t var_330_1 = var_398
    char var_328_1 = var_390_1
    int64_t var_320 = 0
    int32_t var_318_1 = 0
    sub_1407473e0(&var_320, &var_3b8)
    var_310 = 1
    r13 = &var_378
    rsi = 7

sub_140e23130(*arg1 + 8, arg3, arg3 + 0x30, arg3 + 0x40, arg4, arg3 + 0x60, arg3 + 0x78, 
    *(arg3 + 0x90), arg3 + 0x98, arg3 + 0xc8, arg3 + 0xe8, *(arg3 + 0x94), *(arg3 + 0x95), 
    *(arg3 + 0x96), r13, arg3 + 0x190)

if ((rsi.b & 8) != 0)
    rsi &= 0xfffffff7
    char var_2a0
    
    if (var_2a0 != 0)
        char var_2a0_1 = 0
        sub_140ddef20(&var_308)

if ((rsi.b & 4) != 0)
    rsi &= 0xfffffffb
    
    if (var_310 != 0)
        char var_310_1 = 0
        sub_140ddef20(&var_378)

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    sub_140ddef20(&var_410)

if ((rsi.b & 1) != 0)
    sub_140745b20(&var_388)
    
    if (var_3a0 != 0)
        var_3a0[1].d -= 1
        
        if (var_3a0[1].d == 1)
            (**var_3a0)(var_3a0)
            int32_t rdi_1 = *(var_3a0 + 0xc)
            *(var_3a0 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_3a0 + 8))(var_3a0, zx.q(rdi_1))

int64_t* r13_1 = *arg1
int64_t rbx_2 = *(arg3 + 0x1a0)
var_428.q = *arg1[2]
void var_298
int64_t* rax_31 = sub_140e92ba0(&var_298)
rax_31[0x34] = rbx_2
int64_t* rbx_3 = *(arg3 + 0x1b0)
int64_t var_420 = *(arg3 + 0x1a8)

if (rbx_3 != 0)
    rbx_3[1].d += 1

if (&var_420 != &rax_31[0x48])
    var_420.o = *(rax_31 + 0x240)
    *(rax_31 + 0x240) = var_420.o

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rbx_4 = var_428.q
sub_141b9e620(r13_1, rax_31, rbx_4)
(*(*r13_1 + 0x78))(r13_1, zx.q(*(*rbx_4 + 0x398)), &rax_31[0x42], &rax_31[0x48])
sub_140e977f0(&var_298)
void* rbx_5 = *arg1
char rax_36

if ((*(rbx_5 + 0x30) & 0x20) == 0)
    rax_36 = (*(*(rbx_5 + 8) + 0x220))(rbx_5 + 8)

if ((*(rbx_5 + 0x30) & 0x20) != 0 || rax_36 != 0)
    rax_36 = 0x40

*(rbx_5 + 0x30) &= 0xbf
*(rbx_5 + 0x30) |= rax_36
*arg2 = *arg1
void* rcx_23 = arg1[1]
arg2[1] = rcx_23

if (rcx_23 != 0)
    *(rcx_23 + 8) += 1

__security_check_cookie(rax_1 ^ &var_4a8)
return arg2
