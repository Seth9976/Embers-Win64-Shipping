// 函数: sub_1417eda60
// 地址: 0x1417eda60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = data_143f5b298

if (rdx == 0 || *(rdx + 0xb08) == 0)
    return 

TEB* gsbase

if (data_143ef98a8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    r8_1, arg1 = _Init_thread_header(&data_143ef98a8)
    
    if (data_143ef98a8 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        r8_1.b = 1
        data_143ef98a0 = (*(*rcx_6 + 0xb0))(rcx_6, u"vr.PixelDensity", r8_1)
        arg1 = _Init_thread_footer(&data_143ef98a8)
    
    rdx = data_143f5b298

int64_t* rcx_3 = *(rdx + 0xb08)
int64_t* rax = (*(*rcx_3 + 0x100))(rcx_3)

if (rax == 0)
    return 

int64_t* rcx_4 = data_143ef98a0

if (rcx_4 == 0)
    return 

int64_t rdx_1 = *rcx_4
(*(rdx_1 + 0x98))(rcx_4, rdx_1)
int512_t zmm1
zmm1.o = 0x3dcccccd

if (arg1.d f< 0.100000001f)
    arg1 = 0x3dcccccd
else if (not(arg1.d f<= 2f))
    if (arg1.d f< 0.100000001f)
        arg1 = 0x3dcccccd
    else
        arg1 = 0x40000000

zmm1.o = arg1
jump(*(*rax + 0xd0))
