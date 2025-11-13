// 函数: sub_141ba0860
// 地址: 0x141ba0860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
void* var_268 = nullptr
int32_t var_260 = 0
sub_1405947f0(&var_268, 3)
int32_t rax_2 = var_260 + 3
var_260 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_268)

void* rsi = var_268
UnDecorator::getReferenceType(rsi, &data_142e14158, 6)
int32_t var_200
sub_14062d6e0(arg3 + 0x10, &var_200, &var_268)
int64_t rax_3 = sx.q(var_200)
void* const rcx_4

if (rax_3.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = *(arg3 + 0x10) + rax_3 * 0x28

int16_t* rdx_3

if (*(rcx_4 + 0x18) == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *(rcx_4 + 0x10)

int64_t rbx = **(arg1 + 0x10)
void var_208
int64_t* rax_6
int64_t r8_1
rax_6, r8_1 = sub_140b58260(&var_208, rdx_3, 1)
r8_1.b = 1
int64_t var_250 = (*(rbx + 0x268))(*(arg1 + 0x10), *rax_6, r8_1)

if (rsi != 0)
    sub_140a74f90(rsi)

char var_1f4 = 0
var_268 = nullptr
int32_t var_260_1 = 0
sub_1405947f0(&var_268, 6)
int32_t rax_8 = var_260_1 + 6
var_260_1 = rax_8

if (rax_8 s> 0)
    sub_140594770(&var_268)

void* rsi_1 = var_268
UnDecorator::getReferenceType(rsi_1, u"width", 0xc)
sub_14062d6e0(arg3 + 0x10, &var_200, &var_268)
int64_t rax_9 = sx.q(var_200)
void* const rcx_12

if (rax_9.d == 0xffffffff)
    rcx_12 = nullptr
else
    rcx_12 = *(arg3 + 0x10) + rax_9 * 0x28

int64_t* rbx_1 = rcx_12 + 0x10

if (rcx_12 == 0)
    rbx_1 = nullptr

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

int32_t var_1f8

if (rbx_1 != 0)
    char var_1fc_1
    
    if (sub_140b24690(rbx_1, &var_200) == 0)
        var_1fc_1 = 0
    else
        var_200 = var_200
        var_1fc_1 = 1
    
    if (var_1fc_1 != 0)
        var_1f8 = var_200
        char var_1f4_1 = 1

char var_1ec = 0
var_268 = nullptr
int32_t var_260_2 = 0
sub_1405947f0(&var_268, 7)
int32_t rax_14 = var_260_2 + 7
var_260_2 = rax_14

if (rax_14 s> 0)
    sub_140594770(&var_268)

void* rsi_2 = var_268
UnDecorator::getReferenceType(rsi_2, u"height", 0xe)
sub_14062d6e0(arg3 + 0x10, &var_200, &var_268)
int64_t rax_15 = sx.q(var_200)
void* const rcx_19

if (rax_15.d == 0xffffffff)
    rcx_19 = nullptr
else
    rcx_19 = *(arg3 + 0x10) + rax_15 * 0x28

int64_t* rbx_2 = rcx_19 + 0x10

if (rcx_19 == 0)
    rbx_2 = nullptr

if (rsi_2 != 0)
    sub_140a74f90(rsi_2)

int32_t var_1f0

if (rbx_2 != 0)
    char var_1fc_2
    
    if (sub_140b24690(rbx_2, &var_200) == 0)
        var_1fc_2 = 0
    else
        var_200 = var_200
        var_1fc_2 = 1
    
    if (var_1fc_2 != 0)
        var_1f0 = var_200
        char var_1ec_1 = 1

int32_t var_258 = 2
var_268 = nullptr
int64_t* var_260_3 = nullptr
sub_1405947f0(&var_268, 8)
int32_t rax_20 = var_260_3.d + 8
var_260_3.d = rax_20

if (rax_20 s> 0)
    sub_140594770(&var_268)

void* rsi_3 = var_268
UnDecorator::getReferenceType(rsi_3, u"stretch", 0x10)
sub_14062d6e0(arg3 + 0x10, &var_200, &var_268)
int64_t rax_21 = sx.q(var_200)
void* const rcx_26

if (rax_21.d == 0xffffffff)
    rcx_26 = nullptr
else
    rcx_26 = *(arg3 + 0x10) + rax_21 * 0x28

int64_t* rbx_3 = rcx_26 + 0x10

if (rcx_26 == 0)
    rbx_3 = nullptr

if (rsi_3 != 0)
    sub_140a74f90(rsi_3)

if (rbx_3 != 0)
    TEB* gsbase
    
    if (data_143f317b0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f317b0)
        
        if (data_143f317b0 == 0xffffffff)
            data_143f317a8 = sub_140f91e30()
            _Init_thread_footer(&data_143f317b0)
    
    int64_t rax_25 = sub_140be0d40(data_143f317a8, rbx_3, 0)
    int32_t rcx_31 = var_258
    
    if (rax_25 != -1)
        rcx_31 = rax_25.d
    
    var_258 = rcx_31

int64_t r9
int64_t var_228 = r9
int64_t* var_230 = &var_250
int32_t* var_220 = &var_1f8
int32_t* var_218 = &var_1f0
int32_t* var_210 = &var_258
void*** rax_26 = sub_141b77660()
void* var_248 = &rax_26[2]
sub_140918950(&var_248, &rax_26[2])
int64_t var_278 = 0x390
int64_t** var_238 = &var_230
sub_140e23ed0(&rax_26[2], "SRichInlineImage")
void var_1e8
int64_t* rax_27
int128_t zmm1
rax_27, zmm1 = sub_140e93f70(&var_1e8)
void** rax_28 = sub_141b8a720(&var_248, &var_268, rax_27, zmm1)
*arg2 = *rax_28
void* rax_30 = rax_28[1]
arg2[1] = rax_30

if (rax_30 != 0)
    *(rax_30 + 8) += 1

if (var_260_3 != 0)
    var_260_3[1].d -= 1
    
    if (var_260_3[1].d == 1)
        (**var_260_3)(var_260_3)
        int32_t temp2_1 = *(var_260_3 + 0xc)
        *(var_260_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_260_3 + 8))(var_260_3, 1)

if (rax_26 != 0)
    rax_26[1].d -= 1
    
    if (rax_26[1].d == 1)
        (**rax_26)(rax_26)
        int32_t temp3_1 = *(rax_26 + 0xc)
        *(rax_26 + 0xc) -= 1
        
        if (temp3_1 == 1)
            void** r8_8 = *rax_26
            r8_8[1](rax_26, 1, r8_8)

sub_140ddea30(&var_1e8)
__security_check_cookie(rax_1 ^ &var_298)
return arg2
