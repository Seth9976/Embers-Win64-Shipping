// 函数: sub_140e56fb0
// 地址: 0x140e56fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3f8
int64_t rax_1 = __security_cookie ^ &var_3f8
int32_t var_310 = 0
char var_378
int64_t* var_300
int64_t var_2e8
char var_2d8
char var_270
void var_268
char* rdx_4
int32_t rsi

if (*(arg3 + 0x178) == 0)
    rdx_4 = sub_14065fb60(&var_268, arg3 + 0xf0)
    rsi = 8
else
    int64_t var_308
    arg4 = sub_140a96170(&var_308)
    int64_t rax_2 = *(arg3 + 0x160)
    var_378 |= 1
    void* rax_3 = *(arg3 + 0x168)
    char var_2f0_1 = 0
    var_2e8 = 0
    int32_t var_2e0_1 = 0
    int16_t var_377_1 = 0x100
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t rax_4 = *(arg3 + 0x170)
    char rax_5 = *(arg3 + 0x178)
    int64_t var_350 = 0
    int32_t var_348_1 = 0
    sub_140692f90(&var_350, arg3 + 0x180)
    int64_t rax_6 = var_308
    
    if (var_300 != 0)
        var_300[1].d += 1
    
    int64_t var_320 = 0
    int32_t var_318_1 = 0
    sub_140692f90(&var_320, &var_2e8)
    char rcx_3 = var_2d8
    char var_2d7_1 = var_377_1.b
    char var_2d6_1 = var_377_1:1.b
    int64_t var_2d0_1 = rax_2
    var_2d8 = rcx_3 ^ ((rcx_3 ^ var_378) & 1)
    void* var_2c8_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int32_t var_2c0_1 = rax_4
    char var_2b8_1 = rax_5
    int64_t var_2b0 = 0
    int32_t var_2a8_1 = 0
    sub_1407473e0(&var_2b0, &var_350)
    int64_t var_2a0_1 = rax_6
    int64_t* var_298_1 = var_300
    
    if (var_300 != 0)
        var_300[1].d += 1
    
    int32_t var_2f8
    int32_t var_290_1 = var_2f8
    char var_288_1 = var_2f0_1
    int64_t var_280 = 0
    int32_t var_278_1 = 0
    sub_1407473e0(&var_280, &var_320)
    rdx_4 = &var_2d8
    var_270 = 1
    rsi = 7

sub_140e23130(*arg1, arg3, arg3 + 0x30, arg3 + 0x40, arg4, arg3 + 0x60, arg3 + 0x78, 
    *(arg3 + 0x90), arg3 + 0x98, arg3 + 0xc8, arg3 + 0xe8, *(arg3 + 0x94), *(arg3 + 0x95), 
    *(arg3 + 0x96), rdx_4, arg3 + 0x190)

if ((rsi.b & 8) != 0)
    rsi &= 0xfffffff7
    char var_200
    
    if (var_200 != 0)
        char var_200_1 = 0
        sub_140ddef20(&var_268)

if ((rsi.b & 4) != 0)
    rsi &= 0xfffffffb
    
    if (var_270 != 0)
        char var_270_1 = 0
        sub_140ddef20(&var_2d8)

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    sub_140ddef20(&var_378)

if ((rsi.b & 1) != 0)
    sub_140745b20(&var_2e8)
    
    if (var_300 != 0)
        var_300[1].d -= 1
        
        if (var_300[1].d == 1)
            (**var_300)(var_300)
            int32_t rdi_1 = *(var_300 + 0xc)
            *(var_300 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_300 + 8))(var_300, zx.q(rdi_1))

void var_1f8
sub_140de9c30(*arg1, sub_140dd5d30(&var_1f8))
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

sub_140ddea30(&var_1f8)
int64_t* rbx_3 = *arg1
char rax_30

if ((rbx_3[5].b & 0x20) == 0)
    rax_30 = (*(*rbx_3 + 0x220))(rbx_3)

if ((rbx_3[5].b & 0x20) != 0 || rax_30 != 0)
    rax_30 = 0x40

rbx_3[5].b &= 0xbf
rbx_3[5].b |= rax_30
*arg2 = *arg1
void* rcx_21 = arg1[1]
arg2[1] = rcx_21

if (rcx_21 != 0)
    *(rcx_21 + 8) += 1

__security_check_cookie(rax_1 ^ &var_3f8)
return arg2
