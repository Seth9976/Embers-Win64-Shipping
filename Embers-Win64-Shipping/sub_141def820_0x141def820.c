// 函数: sub_141def820
// 地址: 0x141def820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0x18)

if ((*(arg1 + 0x20) == 0 && *(arg1 + 0x28) == 0) || *rsi == 0)
    return 

TEB* gsbase
void* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f39300 s> *(rbx_1 + 0x14))
    _Init_thread_header(&data_143f39300)
    
    if (data_143f39300 == 0xffffffff)
        sub_1405947f0(&data_143f392f0, 0x13)
        int32_t rax_7 = data_143f392f8 + 0x13
        bool cond:1_1 = rax_7 s<= data_143f392fc
        data_143f392f8 = rax_7
        
        if (not(cond:1_1))
            sub_140594770(&data_143f392f0)
        
        UnDecorator::getReferenceType(data_143f392f0, u"Core.ServerNetConn", 0x26)
        atexit(sub_142cf9290)
        _Init_thread_footer(&data_143f39300)

if (data_143f39318 s> *(rbx_1 + 0x14))
    _Init_thread_header(&data_143f39318)
    
    if (data_143f39318 == 0xffffffff)
        sub_1405947f0(&data_143f39308, 0x10)
        int32_t rax_8 = data_143f39310 + 0x10
        bool cond:2_1 = rax_8 s<= data_143f39314
        data_143f39310 = rax_8
        
        if (not(cond:2_1))
            sub_140594770(&data_143f39308)
        
        UnDecorator::getReferenceType(data_143f39308, u"OutAckOnlyCount", 0x20)
        atexit(sub_142cf9250)
        _Init_thread_footer(&data_143f39318)

if (data_143f39330 s> *(rbx_1 + 0x14))
    _Init_thread_header(&data_143f39330)
    
    if (data_143f39330 == 0xffffffff)
        sub_1405947f0(&data_143f39320, 0x12)
        int32_t rax_9 = data_143f39328 + 0x12
        bool cond:3_1 = rax_9 s<= data_143f3932c
        data_143f39328 = rax_9
        
        if (not(cond:3_1))
            sub_140594770(&data_143f39320)
        
        UnDecorator::getReferenceType(data_143f39320, u"OutKeepAliveCount", 0x24)
        atexit(sub_142cf9270)
        _Init_thread_footer(&data_143f39330)

int64_t* r14_1 = *rsi
void* var_28 = nullptr
int32_t var_20_1 = 0
sub_1405a5220(&var_28, 2)
int64_t rbx_2 = sx.q(var_20_1)
int32_t rax_5 = (rbx_2 + 1).d

if (rax_5 s> 0)
    sub_1405c4f50(&var_28)

int64_t* rbx_5 = rbx_2 * 0x30 + var_28
*rbx_5 = 0
int32_t rsi_1 = data_143f39310
int64_t rbp_1 = data_143f39308
rbx_5[1].d = rsi_1

if (rsi_1 != 0)
    sub_1405a4c70(rbx_5, rsi_1, 0)
    memcpy(*rbx_5, rbp_1, rsi_1 * 2)
else
    *(rbx_5 + 0xc) = 0

sub_140a2e390(&rbx_5[2], u"%llu", *(arg1 + 0x20))
rbx_5[4] = 0
rbx_5[5].b = 0
*(rbx_5 + 0x2c) = 0
int64_t rbx_6 = sx.q(rax_5)
int32_t i_2 = (rbx_6 + 1).d

if (i_2 s> 0)
    sub_1405c4f50(&var_28)

int64_t* rbx_9 = rbx_6 * 0x30 + var_28
*rbx_9 = 0
int32_t rsi_2 = data_143f39328
int64_t rbp_2 = data_143f39320
rbx_9[1].d = rsi_2

if (rsi_2 != 0)
    sub_1405a4c70(rbx_9, rsi_2, 0)
    memcpy(*rbx_9, rbp_2, rsi_2 * 2)
else
    *(rbx_9 + 0xc) = 0

sub_140a2e390(&rbx_9[2], u"%llu", *(arg1 + 0x28))
rbx_9[4] = 0
rbx_9[5].b = 0
*(rbx_9 + 0x2c) = 0
(*(*r14_1 + 0x58))(r14_1, &data_143f392f0, &var_28)
int32_t i_1 = i_2
void* rbx_10 = var_28

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_11 = *(rbx_10 + 0x10)
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int64_t rcx_12 = *rbx_10
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        rbx_10 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_10 = var_28

if (rbx_10 != 0)
    sub_140a74f90(rbx_10)
