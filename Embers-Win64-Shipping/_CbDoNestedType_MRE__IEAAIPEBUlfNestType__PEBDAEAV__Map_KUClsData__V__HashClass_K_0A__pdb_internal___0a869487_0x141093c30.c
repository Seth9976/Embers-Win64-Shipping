// 函数: ?CbDoNestedType@MRE@@IEAAIPEBUlfNestType@@PEBDAEAV?$Map@KUClsData@@V?$HashClass@K$0A@@pdb_internal@@XVCriticalSectionNop@@@pdb_internal@@AEAV?$Stack@K$0EA@@@@Z
// 地址: 0x141093c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_988
int64_t rax_1 = __security_cookie ^ &var_988
uint64_t var_958 = arg1
void var_918
sub_14108c130(&var_918)
int32_t* rdx = arg2[0x2a8]
int512_t zmm0
zmm0.o = zx.o(0)
void* rbx = nullptr
zmm0.o = data_142d3f660
int64_t var_110
__builtin_memset(&var_110, 0, 0x80)
int128_t var_88
__builtin_memcpy(&var_88, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f", 
    0x20)
int64_t var_68 = 0
sub_14108cb90(&var_918, rdx)
int128_t var_268
sub_1411463f0(arg2, &var_268)
int128_t* rdx_3
void var_698
int128_t var_1c8

if (sub_1422eb5d0(arg2) == 0)
    rdx_3 = arg2[0x2a8]
    sub_14108cb90(&var_698, rdx_3)
    var_1c8 = var_268
    int128_t var_258
    int128_t var_1b8_1 = var_258
    int128_t var_248
    int128_t var_1a8_1 = var_248
    int128_t var_238
    int128_t var_198_1 = var_238
    int128_t var_228
    int128_t var_188_1 = var_228
    int128_t var_218
    int128_t var_178_1 = var_218
    int128_t var_208
    int128_t var_168_1 = var_208
    int128_t var_1f8
    int128_t var_158_1 = var_1f8
    int128_t var_1e8
    int128_t var_148_1 = var_1e8
    int128_t var_1d8
    int128_t var_138_1 = var_1d8
else
    void* rbx_1 = *(**arg2 + 8)
    sub_14108cb90(&var_698, *(rbx_1 + 0x1540))
    rdx_3 = &var_1c8
    sub_1411463f0(rbx_1, rdx_3)
    rbx = nullptr
int64_t* rcx_10 = *(*arg2 + 0x20)

if (rcx_10 != 0)
    void* rax_7 = (*(*rcx_10 + 0x248))(rcx_10, rdx_3)
    
    if (rax_7 != 0)
        rbx = sub_1413e9440(rax_7)

void var_418
sub_14123d450(arg2, &var_418)
void var_3b8
sub_1412998b0(arg2, rbx, &var_3b8)
void* rax_9 = sub_1422c6ca0(var_958)
void* rcx_15 = data_1439b70c0

if (rax_9 == 0)
    rax_9 = data_1439b70c8

int64_t var_128 = *(rax_9 + 0x10)
int64_t rax_11

if (arg3 == 0)
    int32_t var_118_1 = 0
    rax_11 = *(rcx_15 + 0x10)
else
    rax_11 = *(arg3 + 0x10)
    int32_t var_118 = 1

int64_t var_110_1 = rax_11
void* rax_12 = data_143ec4d20

if (data_143ec4e38 == 0)
    rax_12 = rcx_15

int128_t var_108
var_108.q = *(rax_12 + 0x10)
int64_t rax_14 = *(rcx_15 + 0x10)

if (data_143ec5024 s> 1)
    rax_14 = *(data_143ec4ca0 + 0x10)

var_108:8.q = rax_14
int32_t rax_16 = sub_1422e5a30(arg2)
void* r9 = data_1439b70d0
int32_t var_940 = rax_16
int64_t rax_18 = 1 << rax_16.b & data_143f13cb0
void* r8_1

if (rax_18 != 0)
    r8_1 = data_143ec4d00

if (rax_18 == 0 || r8_1 == 0)
    r8_1 = r9

void* rdx_6

if (rax_18 != 0)
    rdx_6 = data_143ec4d08

if (rax_18 == 0 || rdx_6 == 0)
    rdx_6 = data_1439b7150

void* rcx_18

if (rax_18 != 0)
    rcx_18 = data_143ec4d10

if (rax_18 == 0 || rcx_18 == 0)
    rcx_18 = r9

int128_t var_f8
var_f8.q = *(r8_1 + 0x10)
int64_t rdx_7 = data_14395fa10
int128_t var_e8
var_e8.q = *(rdx_6 + 0x10)
int128_t var_d8
var_d8.q = *(rcx_18 + 0x10)
int64_t rax_22 = sx.q(data_143f0f1a0)
var_f8:8.q = rdx_7
var_e8:8.q = rdx_7
var_d8:8.q = rdx_7
int32_t rax_24

if (((rax_22 - 2).d & 0xfffffffd) != 0
        && ((*(&data_143f025fc + rax_22 * 0x14) u>> 0x12).b & 1) == 0)
    rax_24 = sub_1422e5a30(arg2)
    rdx_7 = data_14395fa10

void* rax_26

if (((rax_22 - 2).d & 0xfffffffd) == 0 || ((*(&data_143f025fc + rax_22 * 0x14) u>> 0x12).b & 1) != 0
        || rax_24 - 0x19 u<= 1)
    rax_26 = data_143ec4d18

int128_t var_c8

if ((((rax_22 - 2).d & 0xfffffffd) != 0
        && ((*(&data_143f025fc + rax_22 * 0x14) u>> 0x12).b & 1) == 0 && rax_24 - 0x19 u> 1)
        || rax_26 == 0)
    var_c8.q = *(data_1439b70c0 + 8)
else
    var_c8.q = *(rax_26 + 8)

int128_t* rax_29

if (arg4 == 0)
    int128_t var_928
    rax_29 = &var_928
    var_928 = data_142d5beb0
else
    int128_t var_938
    rax_29 = &var_938
    var_938 = *arg4

int64_t* rax_30 = arg5 + 8
void* rcx_24 = data_1439b70c8
int128_t var_88_1 = *rax_29

if (arg5 == 0)
    rax_30 = rcx_24 + 8

int64_t r8_2 = data_14395f4d0
var_c8:8.q = *rax_30
void* rax_32 = arg6 + 8
int128_t var_b8
var_b8.q = r8_2

if (arg6 == 0)
    rax_32 = rcx_24 + 8

var_b8:8.q = *rax_32
int128_t var_a8
var_a8.q = rdx_7
var_a8:8.q = *(data_1439b7100 + 0x10)
int64_t var_98 = r8_2
int128_t var_78
sub_141146070(&var_78, arg2)
char rax_35 = sub_1414207f0(arg2)
void* rax_36

if (rax_35 != 0)
    rax_36 = sub_14141f4a0(arg2)

void* rax_37

if (rax_35 == 0 || rax_36 == 0)
    rax_37 = data_143f10dc8 + 0x10
else
    rax_37 = rax_36 + 8

int64_t var_68_1 = *rax_37
int64_t* rcx_29 = *(*arg2 + 0x20)
void* rax_42

if (rcx_29 != 0)
    rax_42 = (*(*rcx_29 + 0x248))(rcx_29)

int64_t* result

if (rcx_29 == 0 || rax_42 == 0)
    int64_t* rcx_32 = data_143f0f180
    uint64_t var_950
    (*(*rcx_32 + 0xf8))(rcx_32, &var_950, &var_918, &data_143e2d750, 1, 1)
    uint64_t rax_44 = var_950
    var_958 = rax_44
    
    if (rax_44 != 0)
        *(rax_44 + 8) += 1
    
    sub_1405d1550(&var_950)
    sub_1405d1600(arg7, &var_958)
    result = sub_1405d1550(&var_958)
else
    int64_t* rcx_30 = data_143f0f180
    int64_t r9_1 = *rcx_30
    (*(r9_1 + 0x100))(rcx_30, *(rax_42 + 0x38), &var_918, r9_1)
    result = sub_1405d16e0(arg7, *(rax_42 + 0x38))

__security_check_cookie(rax_1 ^ &var_988)
return result
