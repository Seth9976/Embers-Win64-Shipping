// 函数: sub_141060540
// 地址: 0x141060540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f227 == 0 || sub_1419a4730() == 0)
    return 

int64_t rbx_1 = 0
TEB* gsbase
void* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
uint64_t rdx_1

if (data_143e2c9a8 s> *(rdi_1 + 0x14))
    int64_t r8_3
    rdx_1, r8_3 = _Init_thread_header(&data_143e2c9a8)
    
    if (data_143e2c9a8 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        r8_3.b = 1
        int64_t* rax_8 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.HDR.Display.OutputDevice", r8_3)
        int64_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0
        else
            int64_t rdx_3 = *rax_8
            rax_9 = (*(rdx_3 + 0x58))(rax_8, rdx_3)
        
        data_143e2c9a0 = rax_9
        _Init_thread_footer(&data_143e2c9a8)

int64_t rsi_1 = data_143e2c9a0
int64_t rcx

if (data_143de5480 == 0)
    rcx = 0
else
    uint32_t rax_3
    rax_3, rdx_1 = GetCurrentThreadId()
    rcx.b = rax_3 != data_143de5470

int32_t rsi_2 = *(rsi_1 + (rcx << 2))
int128_t zmm6

if (((rsi_2 - 4) & 0xfffffffd) == 0)
    zmm6 = 0x44fa0000
else
    zmm6 = 0x447a0000

if (data_143e2c9b8 s> *(rdi_1 + 0x14))
    int64_t r8_4
    rdx_1, r8_4 = _Init_thread_header(&data_143e2c9b8)
    
    if (data_143e2c9b8 == 0xffffffff)
        int64_t* rcx_5 = data_143db18d0
        
        if (rcx_5 == 0)
            sub_140a53c40()
            rcx_5 = data_143db18d0
        
        r8_4.b = 1
        int64_t* rax_11 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.HDR.Display.ColorGamut", r8_4)
        int64_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0
        else
            int64_t rdx_4 = *rax_11
            rax_12 = (*(rdx_4 + 0x58))(rax_11, rdx_4)
        
        data_143e2c9b0 = rax_12
        _Init_thread_footer(&data_143e2c9b8)

int64_t rdi_2 = data_143e2c9b0

if (data_143de5480 != 0)
    uint32_t rax_6
    rax_6, rdx_1 = GetCurrentThreadId()
    rbx_1.b = rax_6 != data_143de5470

int32_t rbx_2 = *(rdi_2 + (rbx_1 << 2))
float zmm0_1 = (zx.o(0)).d
rdx_1.b = 1
sub_141069060(arg1, rdx_1.b, rbx_2, zmm6.d, zmm0_1, zmm0_1, zmm0_1)
sub_141060750(arg1, rbx_2, rsi_2)
