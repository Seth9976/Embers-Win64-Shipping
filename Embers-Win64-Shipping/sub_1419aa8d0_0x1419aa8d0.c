// 函数: sub_1419aa8d0
// 地址: 0x1419aa8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = data_143f13ca8
uint64_t rcx = zx.q(data_14401b1a0)

if (data_143f13ca0 != 0)
    rax = -1

data_143f13ca8 = rax
TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (rcx << 3)) + 0x14

if (data_143f1b058 s> *rbx_1)
    _Init_thread_header(&data_143f1b058)
    
    if (data_143f1b058 == 0xffffffff)
        int64_t* rcx_13 = data_143db18d0
        
        if (rcx_13 == 0)
            sub_140a53c40()
            rcx_13 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        data_143f1b050 = (*(*rcx_13 + 0xb0))(rcx_13, u"r.DBuffer", r8_1)
        _Init_thread_footer(&data_143f1b058)

int64_t* rcx_1 = data_143f1b050

if (rcx_1 != 0)
    int32_t rax_4 = (*(*rcx_1 + 0x90))(rcx_1)
    int64_t rcx_2 = data_143f13cb0
    
    if (rax_4 != 0)
        rcx_2 = -1
    
    data_143f13cb0 = rcx_2

if (data_143f1b068 s> *rbx_1)
    _Init_thread_header(&data_143f1b068)
    
    if (data_143f1b068 == 0xffffffff)
        int64_t* rcx_14 = data_143db18d0
        
        if (rcx_14 == 0)
            sub_140a53c40()
            rcx_14 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        data_143f1b060 = (*(*rcx_14 + 0xb0))(rcx_14, u"r.BasePassOutputsVelocity", r8_2)
        _Init_thread_footer(&data_143f1b068)

int64_t* rcx_3 = data_143f1b060

if (rcx_3 != 0)
    int32_t rax_7 = (*(*rcx_3 + 0x90))(rcx_3)
    int64_t rcx_4 = data_143f13cb8
    
    if (rax_7 != 0)
        rcx_4 = -1
    
    data_143f13cb8 = rcx_4

if (data_143f1b078 s> *rbx_1)
    _Init_thread_header(&data_143f1b078)
    
    if (data_143f1b078 == 0xffffffff)
        int64_t* rcx_15 = data_143db18d0
        
        if (rcx_15 == 0)
            sub_140a53c40()
            rcx_15 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        data_143f1b070 = (*(*rcx_15 + 0xb0))(rcx_15, u"r.AnisotropicBRDF", r8_3)
        _Init_thread_footer(&data_143f1b078)

int64_t* rcx_5 = data_143f1b070

if (rcx_5 != 0)
    int32_t rax_10 = (*(*rcx_5 + 0x90))(rcx_5)
    int64_t rcx_6 = data_143f13cc0
    
    if (rax_10 != 0)
        rcx_6 = -1
    
    data_143f13cc0 = rcx_6

if (data_143f1b088 s> *rbx_1)
    _Init_thread_header(&data_143f1b088)
    
    if (data_143f1b088 == 0xffffffff)
        int64_t* rcx_16 = data_143db18d0
        
        if (rcx_16 == 0)
            sub_140a53c40()
            rcx_16 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        data_143f1b080 = (*(*rcx_16 + 0xb0))(rcx_16, u"r.SelectiveBasePassOutputs", r8_4)
        _Init_thread_footer(&data_143f1b088)

int64_t* rcx_7 = data_143f1b080

if (rcx_7 != 0)
    int32_t rax_13 = (*(*rcx_7 + 0x90))(rcx_7)
    int64_t rcx_8 = data_143f13cc8
    
    if (rax_13 != 0)
        rcx_8 = -1
    
    data_143f13cc8 = rcx_8

if (data_143f1b098 s> *rbx_1)
    _Init_thread_header(&data_143f1b098)
    
    if (data_143f1b098 == 0xffffffff)
        int64_t* rcx_17 = data_143db18d0
        
        if (rcx_17 == 0)
            sub_140a53c40()
            rcx_17 = data_143db18d0
        
        int64_t r8_5
        r8_5.b = 1
        data_143f1b090 = (*(*rcx_17 + 0xb0))(rcx_17, u"r.DistanceFields", r8_5)
        _Init_thread_footer(&data_143f1b098)

int64_t* rcx_9 = data_143f1b090

if (rcx_9 != 0)
    int32_t rax_16 = (*(*rcx_9 + 0x90))(rcx_9)
    int64_t rcx_10 = data_143f13cd0
    
    if (rax_16 != 0)
        rcx_10 = -1
    
    data_143f13cd0 = rcx_10

int32_t result = *rbx_1

if (data_143f1b0a8 s> result)
    int64_t r8_6
    result, r8_6 = _Init_thread_header(&data_143f1b0a8)
    
    if (data_143f1b0a8 == 0xffffffff)
        int64_t* rcx_18 = data_143db18d0
        
        if (rcx_18 == 0)
            sub_140a53c40()
            rcx_18 = data_143db18d0
        
        r8_6.b = 1
        data_143f1b0a0 = (*(*rcx_18 + 0xb0))(rcx_18, u"r.RayTracing", r8_6)
        result = _Init_thread_footer(&data_143f1b0a8)

int64_t* rcx_11 = data_143f1b0a0

if (rcx_11 != 0)
    result = (*(*rcx_11 + 0x90))(rcx_11)
    int64_t rcx_12 = data_143f13cd8
    
    if (result != 0)
        rcx_12 = -1
    
    data_143f13cd8 = rcx_12

return result
