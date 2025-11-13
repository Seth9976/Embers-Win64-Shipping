// 函数: sub_140a9af50
// 地址: 0x140a9af50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
TEB* gsbase
int32_t* r15_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143dba0b0 s> *r15_1)
    _Init_thread_header(&data_143dba0b0)
    
    if (data_143dba0b0 == 0xffffffff)
        data_143dba0a0 = 0
        data_143dba0a8.q = 0
        sub_1405947f0(&data_143dba0a0, 5)
        int32_t rax_12 = data_143dba0a8 + 5
        bool cond:0_1 = rax_12 s<= data_143dba0ac
        data_143dba0a8 = rax_12
        
        if (not(cond:0_1))
            sub_140594770(&data_143dba0a0)
        
        UnDecorator::getReferenceType(data_143dba0a0, u"true", 0xa)
        atexit(sub_142cbdfe0)
        _Init_thread_footer(&data_143dba0b0)

int32_t rax_2 = data_143dba0a8
int16_t* const rdi = &data_142d40450
int32_t rax_3
int16_t* rdx

if (rax_2 == 0)
    rax_3 = 0
    rdx = &data_142d40450
else
    rdx = data_143dba0a0
    rax_3 = rax_2 - 1

int32_t rax_5

if (sub_140a546e0(arg2, rdx, sx.q(rax_3)) != 0)
    if (data_143dba0c8 s> *r15_1)
        _Init_thread_header(&data_143dba0c8)
        
        if (data_143dba0c8 == 0xffffffff)
            data_143dba0b8 = 0
            data_143dba0c0.q = 0
            sub_1405947f0(&data_143dba0b8, 6)
            int32_t rax_13 = data_143dba0c0 + 6
            bool cond:1_1 = rax_13 s<= data_143dba0c4
            data_143dba0c0 = rax_13
            
            if (not(cond:1_1))
                sub_140594770(&data_143dba0b8)
            
            UnDecorator::getReferenceType(data_143dba0b8, u"false", 0xc)
            atexit(sub_142cbe000)
            _Init_thread_footer(&data_143dba0c8)
    
    int32_t rax_9 = data_143dba0c0
    int32_t rax_10
    
    if (rax_9 == 0)
        rax_10 = 0
    else
        rdi = data_143dba0b8
        rax_10 = rax_9 - 1
    
    if (sub_140a546e0(arg2, rdi, sx.q(rax_10)) != 0)
        return 0
    
    *arg3 = 0
    rax_5 = data_143dba0c0
else
    *arg3 = 1
    rax_5 = data_143dba0a8

if (rax_5 != 0)
    rbx = rax_5 - 1

return arg2 + (sx.q(rbx) << 1)
