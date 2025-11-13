// 函数: sub_1426adc10
// 地址: 0x1426adc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int32_t arg_10 = 0
TEB* gsbase

if (data_143f72160 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f72160)
    
    if (data_143f72160 == 0xffffffff)
        sub_1405947f0(&data_143f72120, 0xa)
        int32_t rax_8 = data_143f72128 + 0xa
        bool cond:0_1 = rax_8 s<= data_143f7212c
        data_143f72128 = rax_8
        
        if (not(cond:0_1))
            sub_140594770(&data_143f72120)
        
        UnDecorator::getReferenceType(data_143f72120, u"Succeeded", 0x14)
        data_143f72130 = 0
        data_143f72138 = 0
        sub_1405947f0(&data_143f72130, 7)
        int32_t rax_9 = data_143f72138.d + 7
        bool cond:1_1 = rax_9 s<= data_143f72138:4.d
        data_143f72138.d = rax_9
        
        if (not(cond:1_1))
            sub_140594770(&data_143f72130)
        
        UnDecorator::getReferenceType(data_143f72130, u"Failed", 0xe)
        data_143f72140 = 0
        data_143f72148 = 0
        sub_1405947f0(&data_143f72140, 8)
        int32_t rax_10 = data_143f72148.d + 8
        bool cond:3_1 = rax_10 s<= data_143f72148:4.d
        data_143f72148.d = rax_10
        
        if (not(cond:3_1))
            sub_140594770(&data_143f72140)
        
        UnDecorator::getReferenceType(data_143f72140, u"Aborted", 0x10)
        data_143f72150 = 0
        data_143f72158 = 0
        sub_1405947f0(&data_143f72150, 0xb)
        int32_t rax_11 = data_143f72158.d + 0xb
        bool cond:4_1 = rax_11 s<= data_143f72158:4.d
        data_143f72158.d = rax_11
        
        if (not(cond:4_1))
            sub_140594770(&data_143f72150)
        
        UnDecorator::getReferenceType(data_143f72150, u"InProgress", 0x16)
        atexit(sub_142d125b0)
        _Init_thread_footer(&data_143f72160)

uint64_t var_38
uint64_t var_28
uint64_t* rcx
int32_t rbx_2
uint64_t rsi

if (rbx.d u>= 4)
    int64_t var_20_1 = 0
    rcx = &var_28
    rbx_2 = 2
    rsi = 0
else
    var_38 = 0
    rsi = 0
    int32_t rbx_1 = (&data_143f72128)[rbx * 4]
    int64_t rbp_1 = (&data_143f72120)[rbx * 2]
    int32_t var_30_1 = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_38, rbx_1, 0)
        rsi = var_38
        memcpy(rsi, rbp_1, rbx_1 * 2)
        rcx = &var_38
        rbx_2 = 1
    else
        rcx = &var_38
        int32_t var_2c_1 = 0
        rbx_2 = 1

*rcx = 0
int32_t rax_5 = rcx[1].d
*arg1 = rsi
arg1[1].d = rax_5
int32_t rax_6 = *(rcx + 0xc)
rcx[1] = 0
*(arg1 + 0xc) = rax_6

if ((rbx_2.b & 2) != 0)
    uint64_t rcx_3 = var_28
    rbx_2 &= 0xfffffffd
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

if ((rbx_2.b & 1) != 0)
    uint64_t rcx_4 = var_38
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

return arg1
