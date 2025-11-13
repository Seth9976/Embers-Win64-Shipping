// 函数: sub_140f26400
// 地址: 0x140f26400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
int64_t rax_1 = __security_cookie ^ &var_4a8
int32_t var_428 = 0
int64_t* var_408
int64_t var_3f0
char var_3e0
void var_378
char var_310
void var_308
int32_t rsi
void* r13

if (*(arg3 + 0x178) == 0)
    r13 = sub_14065fb60(&var_308, arg3 + 0xf0)
    rsi = 8
else
    int64_t var_410
    arg4 = sub_140a96170(&var_410)
    int64_t rax_2 = *(arg3 + 0x160)
    var_3e0 |= 1
    int64_t var_3d8_1 = rax_2
    void* rax_3 = *(arg3 + 0x168)
    char var_3f8_1 = 0
    var_3f0 = 0
    int32_t var_3e8_1 = 0
    int16_t var_3df_1 = 0x100
    void* var_3d0_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t var_3c8_1 = *(arg3 + 0x170)
    char var_3c0_1 = *(arg3 + 0x178)
    int64_t var_3b8 = 0
    int32_t var_3b0_1 = 0
    sub_140692f90(&var_3b8, arg3 + 0x180)
    int64_t var_3a8_1 = var_410
    int64_t* var_3a0_1 = var_408
    
    if (var_408 != 0)
        var_408[1].d += 1
    
    int32_t var_400
    int32_t var_398_1 = var_400
    char var_390_1 = var_3f8_1
    int64_t var_388 = 0
    int32_t var_380_1 = 0
    sub_140692f90(&var_388, &var_3f0)
    sub_140e92ae0(&var_378, &var_3e0)
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
    sub_140ddef20(&var_3e0)

if ((rsi.b & 1) != 0)
    sub_140745b20(&var_3f0)
    
    if (var_408 != 0)
        var_408[1].d -= 1
        
        if (var_408[1].d == 1)
            (**var_408)(var_408)
            int32_t rdi_1 = *(var_408 + 0xc)
            *(var_408 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_408 + 8))(var_408, zx.q(rdi_1))

int64_t* r13_1 = *arg1
int64_t rbx_2 = *(arg3 + 0x1a0)
var_428.q = *arg1[2]
void var_298
int64_t* rax_20 = sub_140e92ba0(&var_298)
rax_20[0x34] = rbx_2
int64_t* rbx_3 = *(arg3 + 0x1b0)
int64_t var_420 = *(arg3 + 0x1a8)

if (rbx_3 != 0)
    rbx_3[1].d += 1

if (&var_420 != &rax_20[0x48])
    var_420.o = *(rax_20 + 0x240)
    *(rax_20 + 0x240) = var_420.o

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rbx_4 = var_428.q
sub_140f3f7d0(r13_1, rax_20, rbx_4)
(*(*r13_1 + 0x78))(r13_1, zx.q(*(*rbx_4 + 0x398)), &rax_20[0x42], &rax_20[0x48])
sub_140e977f0(&var_298)
void* rbx_5 = *arg1
char rax_25

if ((*(rbx_5 + 0x30) & 0x20) == 0)
    rax_25 = (*(*(rbx_5 + 8) + 0x220))(rbx_5 + 8)

if ((*(rbx_5 + 0x30) & 0x20) != 0 || rax_25 != 0)
    rax_25 = 0x40

*(rbx_5 + 0x30) &= 0xbf
*(rbx_5 + 0x30) |= rax_25
*arg2 = *arg1
void* rcx_21 = arg1[1]
arg2[1] = rcx_21

if (rcx_21 != 0)
    *(rcx_21 + 8) += 1

__security_check_cookie(rax_1 ^ &var_4a8)
return arg2
