// 函数: sub_141741f10
// 地址: 0x141741f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143ef75c8 s> *rdi_1)
    _Init_thread_header(&data_143ef75c8)
    
    if (data_143ef75c8 == 0xffffffff)
        sub_140b58260(&data_143ef75c0, u"Sphere", 1)
        _Init_thread_footer(&data_143ef75c8)

if (data_143ef75d8 s> *rdi_1)
    _Init_thread_header(&data_143ef75d8)
    
    if (data_143ef75d8 == 0xffffffff)
        sub_140b58260(&data_143ef75d0, &data_142e7a7b0, 1)
        _Init_thread_footer(&data_143ef75d8)

if (data_143ef75e8 s> *rdi_1)
    _Init_thread_header(&data_143ef75e8)
    
    if (data_143ef75e8 == 0xffffffff)
        sub_140b58260(&data_143ef75e0, u"Plane", 1)
        _Init_thread_footer(&data_143ef75e8)

if (data_143ef75f8 s> *rdi_1)
    _Init_thread_header(&data_143ef75f8)
    
    if (data_143ef75f8 == 0xffffffff)
        sub_140b58260(&data_143ef75f0, u"Capsule", 1)
        _Init_thread_footer(&data_143ef75f8)

if (data_143ef7608 s> *rdi_1)
    _Init_thread_header(&data_143ef7608)
    
    if (data_143ef7608 == 0xffffffff)
        sub_140b58260(&data_143ef7600, u"Transformed", 1)
        _Init_thread_footer(&data_143ef7608)

if (data_143ef7618 s> *rdi_1)
    _Init_thread_header(&data_143ef7618)
    
    if (data_143ef7618 == 0xffffffff)
        sub_140b58260(&data_143ef7610, u"Union", 1)
        _Init_thread_footer(&data_143ef7618)

if (data_143ef7628 s> *rdi_1)
    _Init_thread_header(&data_143ef7628)
    
    if (data_143ef7628 == 0xffffffff)
        sub_140b58260(&data_143ef7620, u"LevelSet", 1)
        _Init_thread_footer(&data_143ef7628)

if (data_143ef7638 s> *rdi_1)
    _Init_thread_header(&data_143ef7638)
    
    if (data_143ef7638 == 0xffffffff)
        sub_140b58260(&data_143ef7630, u"Unknown", 1)
        _Init_thread_footer(&data_143ef7638)

if (data_143ef7648 s> *rdi_1)
    _Init_thread_header(&data_143ef7648)
    
    if (data_143ef7648 == 0xffffffff)
        sub_140b58260(&data_143ef7640, u"Convex", 1)
        _Init_thread_footer(&data_143ef7648)

if (data_143ef7658 s> *rdi_1)
    _Init_thread_header(&data_143ef7658)
    
    if (data_143ef7658 == 0xffffffff)
        sub_140b58260(&data_143ef7650, u"TaperedCylinder", 1)
        _Init_thread_footer(&data_143ef7658)

if (data_143ef7668 s> *rdi_1)
    _Init_thread_header(&data_143ef7668)
    
    if (data_143ef7668 == 0xffffffff)
        sub_140b58260(&data_143ef7660, u"Cylinder", 1)
        _Init_thread_footer(&data_143ef7668)

if (data_143ef7678 s> *rdi_1)
    _Init_thread_header(&data_143ef7678)
    
    if (data_143ef7678 == 0xffffffff)
        sub_140b58260(&data_143ef7670, u"TriangleMesh", 1)
        _Init_thread_footer(&data_143ef7678)

if (data_143ef7688 s> *rdi_1)
    _Init_thread_header(&data_143ef7688)
    
    if (data_143ef7688 == 0xffffffff)
        sub_140b58260(&data_143ef7680, u"HeightField", 1)
        _Init_thread_footer(&data_143ef7688)

int32_t rax_15 = zx.d(arg2) & 0x3f
int64_t rax_17

if (rax_15 u> 0xc)
    rax_17 = 0
else
    switch (rax_15)
        case 0
            rax_17 = data_143ef75c0
        case 1
            rax_17 = data_143ef75d0
        case 2
            rax_17 = data_143ef75e0
        case 3
            rax_17 = data_143ef75f0
        case 4
            rax_17 = data_143ef7600
        case 5
            rax_17 = data_143ef7610
        case 6
            rax_17 = data_143ef7620
        case 7
            rax_17 = data_143ef7630
        case 8
            rax_17 = data_143ef7640
        case 9
            rax_17 = data_143ef7650
        case 0xa
            rax_17 = data_143ef7660
        case 0xb
            rax_17 = data_143ef7670
        case 0xc
            rax_17 = data_143ef7680

*arg1 = rax_17
return arg1
