// 函数: sub_141411380
// 地址: 0x141411380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = &arg1[3]
*arg1 = &data_142f7e2d0
arg1[1] = 0
arg1[2] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[7].d = 0xffffffff
*(arg1 + 0x3c) = 0
arg1[9] = 0
arg1[0xa].d = 0
arg1[0xb] = 0
arg1[0xc].d = 0
arg1[0xd] = 0
arg1[0xe].d = 0
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11] = 2
int64_t* rcx = data_143ed2d20
int32_t rax_2 = (*(*rcx + 0x90))(rcx)
int64_t* rsi = data_143ed2d20
data_143ed4aa0 = rax_2
int64_t* var_48 = nullptr
void*** rax_3 = sub_140a84c80(0, 0x20, 0)
var_48 = rax_3
int32_t var_40 = 2

if (rax_3 != 0)
    *rax_3 = &data_142d43dd8
    rax_3[1] = sub_141422110
    rax_3[3] = sub_140a387b0()
    *rax_3 = &data_142d43e30

(*(*rsi + 0xa8))(rsi, &var_48)
int64_t* rax_7

if (var_40 == 0)
    rax_7 = var_48
label_1414114ca:
    
    if (rax_7 != 0)
        sub_140a74f90(rax_7)
else
    int64_t* rcx_2 = var_48
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x38))(rcx_2, 0)
        rax_7 = var_48
        
        if (rax_7 != 0)
            rax_7 = sub_140a84c80(rax_7, 0, 0)
            var_48 = rax_7
        
        int32_t var_40_1 = 0
        goto label_1414114ca
TEB* gsbase
int32_t* rsi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143ed4b18 s> *rsi_2)
    _Init_thread_header(&data_143ed4b18)
    
    if (data_143ed4b18 == 0xffffffff)
        int64_t* rcx_15 = data_143db18d0
        
        if (rcx_15 == 0)
            sub_140a53c40()
            rcx_15 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        data_143ed4b10 = (*(*rcx_15 + 0xb0))(rcx_15, u"r.EarlyZPass", r8_2)
        _Init_thread_footer(&data_143ed4b18)

int64_t* var_38 = nullptr
void*** rax_10 = sub_140a84c80(0, 0x20, 0)
var_38 = rax_10
int32_t var_30 = 2

if (rax_10 != 0)
    *rax_10 = &data_142d43dd8
    rax_10[1] = sub_1414220c0
    rax_10[3] = sub_140a387b0()
    *rax_10 = &data_142d43e30

int64_t* rcx_6 = data_143ed4b10
(*(*rcx_6 + 0xa8))(rcx_6, &var_38)
int64_t* rax_14

if (var_30 == 0)
    rax_14 = var_38
label_141411595:
    
    if (rax_14 != 0)
        sub_140a74f90(rax_14)
else
    int64_t* rcx_7 = var_38
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x38))(rcx_7, 0)
        rax_14 = var_38
        
        if (rax_14 != 0)
            rax_14 = sub_140a84c80(rax_14, 0, 0)
            var_38 = rax_14
        
        int32_t var_30_1 = 0
        goto label_141411595

if (data_143ed4b28 s> *rsi_2)
    _Init_thread_header(&data_143ed4b28)
    
    if (data_143ed4b28 == 0xffffffff)
        int64_t* rcx_14 = data_143db18d0
        
        if (rcx_14 == 0)
            sub_140a53c40()
            rcx_14 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        data_143ed4b20 = (*(*rcx_14 + 0xb0))(rcx_14, u"r.VertexDeformationOutputsVelocity", r8_1)
        _Init_thread_footer(&data_143ed4b28)

var_48 = nullptr
int64_t* rax_16 = sub_140a84c80(0, 0x20, 0)
var_48 = rax_16
int32_t var_40_2 = 2

if (rax_16 != 0)
    *rax_16 = &data_142d43dd8
    rax_16[1] = sub_1414220c0
    rax_16[3] = sub_140a387b0()
    *rax_16 = &data_142d43e30

int64_t* rcx_10 = data_143ed4b20
(*(*rcx_10 + 0xa8))(rcx_10, &var_48)
int64_t* rax_20

if (var_40_2 == 0)
    rax_20 = var_48
label_14141163e:
    
    if (rax_20 != 0)
        sub_140a74f90(rax_20)
else
    int64_t* rcx_11 = var_48
    
    if (rcx_11 != 0)
        (*(*rcx_11 + 0x38))(rcx_11, 0)
        rax_20 = var_48
        
        if (rax_20 != 0)
            rax_20 = sub_140a84c80(rax_20, 0, 0)
            var_48 = rax_20
        
        int32_t var_40_3 = 0
        goto label_14141163e
return arg1
