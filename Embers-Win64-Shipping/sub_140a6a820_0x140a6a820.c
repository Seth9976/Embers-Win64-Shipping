// 函数: sub_140a6a820
// 地址: 0x140a6a820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_78
sub_140a60300(&var_78, arg3, arg2)
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
int32_t rax_1 = *rdi_1
int64_t* rax_6
int64_t* rsi
int64_t* r14

if (arg1 == 0)
    if (data_143db9670 s> rax_1)
        _Init_thread_header(&data_143db9670)
        
        if (data_143db9670 == 0xffffffff)
            data_143db9660 = 0
            data_143db9668 = 0
            atexit(sub_142cbd410)
            _Init_thread_footer(&data_143db9670)
    
    r14 = &data_143db9660
    int64_t* var_68
    
    if (var_68 != 0)
        r14 = var_68
    
    if (data_143db9688 s> *rdi_1)
        _Init_thread_header(&data_143db9688)
        
        if (data_143db9688 == 0xffffffff)
            data_143db9678 = 0
            data_143db9680 = 0
            atexit(sub_142cbd450)
            _Init_thread_footer(&data_143db9688)
    
    int64_t* var_60
    rax_6 = var_60
    rsi = &data_143db9678
else
    if (data_143db9640 s> rax_1)
        _Init_thread_header(&data_143db9640)
        
        if (data_143db9640 == 0xffffffff)
            data_143db9630 = 0
            data_143db9638 = 0
            atexit(sub_142cbd390)
            _Init_thread_footer(&data_143db9640)
    
    int64_t* rax_2 = var_78
    r14 = &data_143db9630
    
    if (rax_2 != 0)
        r14 = rax_2
    
    if (data_143db9658 s> *rdi_1)
        _Init_thread_header(&data_143db9658)
        
        if (data_143db9658 == 0xffffffff)
            data_143db9648 = 0
            data_143db9650 = 0
            atexit(sub_142cbd3d0)
            _Init_thread_footer(&data_143db9658)
    
    int64_t* var_70
    rax_6 = var_70
    rsi = &data_143db9648

int32_t r9 = r14[1].d

if (rax_6 != 0)
    rsi = rax_6

int32_t rdx_1 = arg8[1].d
int32_t rax_7 = rsi[1].d
int32_t rcx_2 = rax_7 - 1

if (rax_7 == 0)
    rcx_2 = 0

int32_t rax_8 = r9 - 1

if (r9 == 0)
    rax_8 = 0

int32_t rcx_3 = rcx_2 + rax_8
int32_t rax_10 = rdx_1 - 1 + rcx_3

if (rdx_1 == 0)
    rax_10 = rcx_3

int32_t rdx_3 = arg7 + 2 + rax_10 + arg5

if (rdx_3 s> *(arg8 + 0xc))
    sub_1405947f0(arg8, rdx_3)
    r9 = r14[1].d

int32_t r8_1 = r9 - 1

if (r9 == 0)
    r8_1 = 0

sub_140a20ba0(arg8, *r14, r8_1)
sub_140a20ba0(arg8, arg4, arg5)

if (arg7 s> 0)
    int16_t r14_1 = *(arg3 + 0x72)
    
    if (r14_1 != 0)
        int32_t rdx_6 = arg8[1].d
        int32_t rax_12
        rax_12.b = rdx_6 s<= 0
        int32_t rbp_1 = rdx_6 - 1
        
        if (rdx_6 s<= 0)
            rbp_1 = 0
        
        int32_t rax_14 = rax_12 + 1 + rdx_6
        arg8[1].d = rax_14
        
        if (rax_14 s> *(arg8 + 0xc))
            sub_140594770(arg8)
        
        int64_t rcx_8 = sx.q(rbp_1)
        *(*arg8 + (rcx_8 << 1)) = r14_1
        *(*arg8 + (rcx_8 << 1) + 2) = 0
    
    sub_140a20ba0(arg8, arg6, arg7)

int32_t rax_17 = rsi[1].d
int32_t r8_4 = rax_17 - 1

if (rax_17 == 0)
    r8_4 = 0

sub_140a20ba0(arg8, *rsi, r8_4)
return sub_140a62f70(&var_78)
