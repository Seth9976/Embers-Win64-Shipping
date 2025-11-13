// 函数: sub_14108fe40
// 地址: 0x14108fe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void*** rax_2 = j_sub_140a82f30(0xc0)
void*** r15

if (rax_2 == 0)
    r15 = nullptr
else
    r15 = sub_141346640(rax_2, *(arg3 + 0x10) + 0x5030)

int64_t* rbx = *(arg3 + 8)
int64_t rsi = sx.q(rbx[1].d)
int32_t rax_4 = (rsi + 1).d
rbx[1].d = rax_4

if (rax_4 s> *(rbx + 0xc))
    sub_1405a4d70(rbx)

*(*rbx + (rsi << 3)) = r15
int32_t rax_7 = *(data_143e2d878 + 4)
int32_t r13
r13.b = rax_7 s> 0
int64_t* var_d8 = &data_143ec4c60
char var_100 = 0
int64_t rcx_3 = data_143ec4fdc
char var_108 = 1
char var_110 = 1
int16_t var_70 = 0
int32_t var_94 = divs.dp.d(sx.q(r13 + rcx_3.d), r13 + 1)
int128_t var_a8 = data_1439c7b08
int32_t var_8c = 0
int32_t var_88 = 1
int32_t var_98 = data_1439c7b18
wchar16 const* const var_68 = u"UnknownTexture2D"
int32_t rax_17 = 1
int32_t var_90 = divs.dp.d(sx.q(r13 + (rcx_3 u>> 0x20).d), r13 + 1)

if (data_143ec5030 s>= 3)
    rax_17 = 0x10001

int32_t var_84 = 0x10000
int32_t var_74 = rax_17
int16_t var_80 = 1
wchar16 const* const var_118 = u"ScreenSpaceGTAODepths"
int64_t var_7c = 0xd
int16_t var_60 = 1
char var_5e = 0
sub_1419a0ce0(&data_1439c9260, arg2, &var_a8, &data_143ec4d30, var_118, var_110, var_108, var_100)
char var_f8 = 0
char* var_b8 = &var_f8
void*** (* var_c0)() = j_sub_140597fc0
void*** rax_19 = sub_14081d830(0x160, sub_140a756e0(&var_c0, &data_143958018) + 0x10, 1, 0)
void*** rbx_1 = rax_19

if (rax_19 == 0)
    rbx_1 = nullptr
else
    sub_14108afb0(rax_19)
    rbx_1[0x2a].d = arg4
    *rbx_1 = &data_142f12600
    *(rbx_1 + 0x154) = 0
    rbx_1[0x2b].d = r13 + 1

int64_t* rsi_1 = *(arg3 + 8)
int64_t r14_1 = sx.q(rsi_1[1].d)
int32_t rax_20 = (r14_1 + 1).d
rsi_1[1].d = rax_20

if (rax_20 s> *(rsi_1 + 0xc))
    sub_1405a4d70(rsi_1)

int32_t var_e8 = 0
*(*rsi_1 + (r14_1 << 3)) = rbx_1
void*** var_f0 = *(arg3 + 0x20)
(*rbx_1)[3](rbx_1, 0, &var_f0)
void** rax_24 = *rbx_1
var_f0 = r15
int32_t var_e8_1 = 0
rax_24[3](rbx_1, 1, &var_f0)
(*rbx_1)[4](rbx_1, arg3 + 0x28)
var_d8[0x3b].b = 1
void* rsi_2 = *(*(arg3 + 0x10) + 0x15a8)

if (*(data_143e2dad8 + 4) == 1)
    var_f8 = 0
    var_e8_1.q = &var_f8
    var_f0 = j_sub_140597fc0
    void*** rax_30 = sub_14081d830(0xd0, sub_140a756e0(&var_f0, &data_143958018) + 0x10, 1, 0)
    void*** rsi_3
    
    if (rax_30 == 0)
        rsi_3 = nullptr
    else
        rsi_3 = sub_14108bda0(rax_30, *(arg3 + 0x10), r13 + 1, arg4)
    
    int64_t* r14_2 = *(arg3 + 8)
    int64_t r15_1 = sx.q(r14_2[1].d)
    int32_t rax_32 = (r15_1 + 1).d
    r14_2[1].d = rax_32
    
    if (rax_32 s> *(r14_2 + 0xc))
        sub_1405a4d70(r14_2)
    
    int64_t rax_33 = *r14_2
    var_f0 = rbx_1
    *(rax_33 + (r15_1 << 3)) = rsi_3
    int32_t var_e8_2 = 0
    (*rsi_3)[3](rsi_3, 0, &var_f0)
    var_f0 = r15
    var_e8_1 = 0
    (*rsi_3)[3](rsi_3, 1, &var_f0)
    rbx_1 = rsi_3

if (rsi_2 != 0 && *(data_143e2d988 + 4) == 1)
    var_f8 = 0
    var_e8_1.q = &var_f8
    var_f0 = j_sub_140597fc0
    void*** rax_39 = sub_14081d830(0x1e8, sub_140a756e0(&var_f0, &data_143958018) + 0x10, 1, 0)
    void*** r14_3
    
    if (rax_39 == 0)
        r14_3 = nullptr
    else
        int64_t rdx_13 = *(arg3 + 0x10)
        var_110.d = arg4
        var_118 = rsi_2 + 0x9b8
        r14_3 = sub_14108be50(rax_39, rdx_13, r13 + 1, rdx_13 + 0x4e78, var_118, var_110)
    
    int64_t* rsi_4 = *(arg3 + 8)
    int64_t r15_2 = sx.q(rsi_4[1].d)
    int32_t rax_42 = (r15_2 + 1).d
    rsi_4[1].d = rax_42
    
    if (rax_42 s> *(rsi_4 + 0xc))
        sub_1405a4d70(rsi_4)
    
    int64_t rax_43 = *rsi_4
    var_f0 = rbx_1
    *(rax_43 + (r15_2 << 3)) = r14_3
    var_e8_1 = 0
    (*r14_3)[3](r14_3, 0, &var_f0)
    rbx_1 = r14_3

if (rax_7 s> 0)
    var_f8 = 0
    var_e8_1.q = &var_f8
    var_f0 = j_sub_140597fc0
    void*** rax_46 = sub_14081d830(0xd0, sub_140a756e0(&var_f0, &data_143958018) + 0x10, 1, 0)
    void*** rsi_5
    
    if (rax_46 == 0)
        rsi_5 = nullptr
    else
        rsi_5 = sub_14108bf80(rax_46, *(arg3 + 0x10), r13 + 1, arg4)
    
    int64_t* r14_4 = *(arg3 + 8)
    int64_t r15_3 = sx.q(r14_4[1].d)
    int32_t rax_48 = (r15_3 + 1).d
    r14_4[1].d = rax_48
    
    if (rax_48 s> *(r14_4 + 0xc))
        sub_1405a4d70(r14_4)
    
    int64_t rax_49 = *r14_4
    var_f0 = rbx_1
    *(rax_49 + (r15_3 << 3)) = rsi_5
    int32_t var_e8_3 = 0
    (*rsi_5)[3](rsi_5, 0, &var_f0)
    void** r9_3 = *rsi_5
    var_f0 = *(arg3 + 0x20)
    int32_t var_e8_4 = 0
    r9_3[3](rsi_5, 1, &var_f0, r9_3, var_118, var_110)
    rbx_1 = rsi_5

var_f0 = rbx_1
int32_t var_e8_5 = 0
*(arg3 + 0x28) = var_f0.o
*arg1 = rbx_1
arg1[1].d = 0
__security_check_cookie(rax_1 ^ &var_138)
return arg1
