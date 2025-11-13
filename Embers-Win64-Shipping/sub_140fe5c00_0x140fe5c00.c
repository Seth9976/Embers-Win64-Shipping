// 函数: sub_140fe5c00
// 地址: 0x140fe5c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase
void* rdi = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143e2c178 s> *(rdi + 0x14))
    _Init_thread_header(&data_143e2c178)
    
    if (data_143e2c178 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_10 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.HDR.Display.ColorGamut", r8_3)
        int64_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0
        else
            int64_t rdx_2 = *rax_10
            rax_11 = (*(rdx_2 + 0x58))(rax_10, rdx_2)
        
        data_143e2c170 = rax_11
        _Init_thread_footer(&data_143e2c178)

uint32_t result = *(rdi + 0x14)

if (data_143e2c188 s> result)
    int64_t r8_4
    result, r8_4 = _Init_thread_header(&data_143e2c188)
    
    if (data_143e2c188 == 0xffffffff)
        int64_t* rcx_5 = data_143db18d0
        
        if (rcx_5 == 0)
            sub_140a53c40()
            rcx_5 = data_143db18d0
        
        r8_4.b = 1
        int64_t* rax_13 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.HDR.Display.OutputDevice", r8_4)
        int64_t rax_14
        
        if (rax_13 == 0)
            rax_14 = 0
        else
            int64_t rdx_3 = *rax_13
            rax_14 = (*(rdx_3 + 0x58))(rax_13, rdx_3)
        
        data_143e2c180 = rax_14
        result = _Init_thread_footer(&data_143e2c188)

if (data_143f0f227 != 0)
    result = sub_1419a4730()
    
    if (result.b != 0)
        int64_t rdi_1 = data_143e2c180
        int64_t rcx
        
        if (data_143de5480 == 0)
            rcx = 0
        else
            rcx.b = GetCurrentThreadId() != data_143de5470
        
        int128_t zmm6
        
        if (((*(rdi_1 + (rcx << 2)) - 4) & 0xfffffffd) == 0)
            zmm6 = 0x44fa0000
        else
            zmm6 = 0x447a0000
        
        if (sub_1419767f0() != 0)
            int64_t rdi_2 = data_143e2c170
            
            if (data_143de5480 != 0)
                rbx.b = GetCurrentThreadId() != data_143de5470
            
            return sub_140ffd230(*(arg1 + 0x17d04), 1, *(rdi_2 + (rbx << 2)), zmm6, 0, 0, 0)
        
        if (sub_1419767d0() == 0)
            return sub_1419767e0()
        
        int64_t rdi_3 = data_143e2c170
        
        if (data_143de5480 != 0)
            rbx.b = GetCurrentThreadId() != data_143de5470
        
        return sub_140ffd0b0(*(arg1 + 0x17d04), 1, *(rdi_3 + (rbx << 2)), zmm6, 0, 0, 0)

return result
