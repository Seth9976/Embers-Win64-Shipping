// 函数: sub_141eb80c0
// 地址: 0x141eb80c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3e8
int64_t rax_1 = __security_cookie ^ &var_3e8
int64_t* rax_2 = sub_142459c10()
void* rsi = rax_2[0x23]

if (rsi == 0)
    int64_t rdx_1 = *rax_2
    (*(rdx_1 + 0x390))(rax_2, rdx_1)
    rsi = rax_2[0x23]

int32_t var_3a4 = 0xffffffff
int64_t var_3b0 = 0
void** const var_3b8 = &data_14325a238
char var_3a8 = 0
int64_t var_3a0
__builtin_memset(&var_3a0, 0, 0x40)
void** var_348
sub_141eb5950(&var_348, 0, &var_3b8)
int64_t* rbx_1 = *(rsi + 0x10)
int64_t var_398
int64_t var_390
int64_t var_388
int64_t var_380
int64_t var_378
int64_t var_370
int64_t var_368
void var_358
void** var_1a8
(*(*rbx_1 + 0x290))(rbx_1, *SymBuffer::end(sub_140b4cb20(&var_1a8, &var_348), &var_358), rsi, 
    rbx_1, rsi, 0, var_3b8, var_3b0, var_3a8, var_3a0, var_398, var_390, var_388, var_380, var_378, 
    var_370, var_368)
sub_140b4cbb0(&var_1a8)
sub_141eb6810(&var_348)

if (var_370 != 0)
    sub_140a74f90(var_370)

if (var_380 != 0)
    sub_140a74f90(var_380)

if (var_390 != 0)
    sub_140a74f90(var_390)

int64_t rcx_11 = var_3a0

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

__security_check_cookie(rax_1 ^ &var_3e8)
return zx.q(var_398.d)
