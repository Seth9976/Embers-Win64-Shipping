// 函数: sub_140a84ed0
// 地址: 0x140a84ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
int64_t* var_28
sub_140597da0(&arg1[1], (*(*rcx + 8))(rcx, &var_28))
int64_t* rdi = var_28

if (rdi != 0)
    int64_t* rcx_2 = data_143ddb3f0
    
    if (rcx_2 == 0)
        sub_140a750a0()
        rcx_2 = data_143ddb3f0
    
    (*(*rcx_2 + 0x30))(rcx_2, rdi)

int64_t* var_38 = *arg2
int32_t var_30 = arg2[1].d
var_28.o = var_38.o
int64_t result = sub_140a69950(&var_28, &arg1[1])

if (arg3 == 0)
    return result

TEB* gsbase

if (data_143db9628 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9628)
    
    if (data_143db9628 == 0xffffffff)
        sub_1405947f0(&data_143db9618, 3)
        int32_t rax_19 = data_143db9620 + 3
        bool cond:0_1 = rax_19 s<= data_143db9624
        data_143db9620 = rax_19
        
        if (not(cond:0_1))
            sub_140594770(&data_143db9618)
        
        UnDecorator::getReferenceType(data_143db9618, &data_142e5c258, 6)
        atexit(sub_142cbd490)
        _Init_thread_footer(&data_143db9628)

int64_t* rcx_5 = *arg1
sub_140597da0(&arg1[3], (*(*rcx_5 + 0x10))(rcx_5, &var_28))
int64_t* rdi_1 = var_28

if (rdi_1 != 0)
    int64_t* rcx_7 = data_143ddb3f0
    
    if (rcx_7 == 0)
        sub_140a750a0()
        rcx_7 = data_143ddb3f0
    
    (*(*rcx_7 + 0x30))(rcx_7, rdi_1)

var_38 = &data_143db9618
int32_t var_30_1 = 1
var_28.o = var_38.o
sub_140a69950(&var_28, &arg1[3])
sub_140a7c350(&var_38, &arg1[0xd], &arg1[0x15], &arg1[0x11])
int64_t* rcx_10 = *arg1
sub_140597da0(&arg1[7], (*(*rcx_10 + 0x30))(rcx_10, &var_28))
int64_t* rdi_2 = var_28

if (rdi_2 != 0)
    int64_t* rcx_12 = data_143ddb3f0
    
    if (rcx_12 == 0)
        sub_140a750a0()
        rcx_12 = data_143ddb3f0
    
    (*(*rcx_12 + 0x30))(rcx_12, rdi_2)

int64_t* rsi_1 = var_38
var_28 = rsi_1
int32_t var_20_1 = var_30_1
var_28.o = var_28.o
sub_140a69950(&var_28, &arg1[7])
int64_t* rcx_14 = *arg1
sub_140597da0(&arg1[0xf], (*(*rcx_14 + 0x50))(rcx_14, &var_28))
int64_t* rdi_3 = var_28

if (rdi_3 != 0)
    int64_t* rcx_16 = data_143ddb3f0
    
    if (rcx_16 == 0)
        sub_140a750a0()
        rcx_16 = data_143ddb3f0
    
    (*(*rcx_16 + 0x30))(rcx_16, rdi_3)

var_28 = rsi_1
int32_t var_20_2 = var_30_1
var_28.o = var_28.o
sub_140a69950(&var_28, &arg1[0xf])
int64_t* rcx_18 = *arg1
sub_140597da0(&arg1[0x13], (*(*rcx_18 + 0x58))(rcx_18, &var_28))
int64_t* rbx_1 = var_28

if (rbx_1 != 0)
    int64_t* rcx_20 = data_143ddb3f0
    
    if (rcx_20 == 0)
        sub_140a750a0()
        rcx_20 = data_143ddb3f0
    
    (*(*rcx_20 + 0x30))(rcx_20, rbx_1)

var_28 = rsi_1
int32_t var_20_3 = var_30_1
var_28.o = var_28.o
sub_140a69950(&var_28, &arg1[0x13])
return sub_140597000(&var_38)
