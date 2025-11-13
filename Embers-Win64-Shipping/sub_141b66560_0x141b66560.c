// 函数: sub_141b66560
// 地址: 0x141b66560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* rbx = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f2ecf8 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f2ecf8)
    
    if (data_143f2ecf8 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_12 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.HDR.Display.OutputDevice", r8_3)
        
        if (rax_12 != 0)
            int64_t rdx_3 = *rax_12
            rax_12 = (*(rdx_3 + 0x58))(rax_12, rdx_3)
        
        data_143f2ecf0 = rax_12
        _Init_thread_footer(&data_143f2ecf8)

if (data_143f2ed08 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f2ed08)
    
    if (data_143f2ed08 == 0xffffffff)
        int64_t* rcx_5 = data_143db18d0
        
        if (rcx_5 == 0)
            sub_140a53c40()
            rcx_5 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        int64_t* rax_14 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.HDR.Display.ColorGamut", r8_4)
        
        if (rax_14 != 0)
            int64_t rdx_4 = *rax_14
            rax_14 = (*(rdx_4 + 0x58))(rax_14, rdx_4)
        
        data_143f2ed00 = rax_14
        _Init_thread_footer(&data_143f2ed08)

if (data_143f2ed18 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f2ed18)
    
    if (data_143f2ed18 == 0xffffffff)
        int64_t* rcx_7 = data_143db18d0
        
        if (rcx_7 == 0)
            sub_140a53c40()
            rcx_7 = data_143db18d0
        
        int64_t r8_5
        r8_5.b = 1
        int64_t* rax_16 = (*(*rcx_7 + 0xb0))(rcx_7, u"r.TonemapperGamma", r8_5)
        
        if (rax_16 != 0)
            int64_t rdx_5 = *rax_16
            rax_16 = (*(rdx_5 + 0x60))(rax_16, rdx_5)
        
        data_143f2ed10 = rax_16
        _Init_thread_footer(&data_143f2ed18)

int32_t rdx = *(data_143f2ecf0 + 4)
void* rax_5 = data_143f2ed00
int32_t arg_8 = rdx
void* rax_6 = data_143f2ed10
int32_t arg_10 = *(rax_5 + 4)

if (not((zx.o(0)).d f>= *(rax_6 + 4)))
    int32_t rax_7 = 2
    
    if (rdx s>= 2)
        rax_7 = rdx
    
    arg_8 = rax_7

int64_t arg_18 = *(arg2 + 0x1a0)
sub_1405eb490(arg2, &arg_18, arg1 + 0x118, &arg_8, 0)
arg_18 = *(arg2 + 0x1a0)
return sub_1405eb490(arg2, &arg_18, arg1 + 0x11e, &arg_10, 0)
