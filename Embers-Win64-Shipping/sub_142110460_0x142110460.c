// 函数: sub_142110460
// 地址: 0x142110460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x190)
void* rax_2 = (*(*rcx + 0x2e8))(rcx, zx.q(*(*(arg4 + 8) + 0x1c)), 3)

if (rax_2 != 0 && sub_1405948b0(rax_2) != 0)
    TEB* gsbase
    
    if (data_143f48ae8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f48ae8)
        
        if (data_143f48ae8 == 0xffffffff)
            sub_140b4c820(&data_143f48ae0, u"__SubsurfaceProfile")
            _Init_thread_footer(&data_143f48ae8)
    
    uint64_t result
    
    if (*arg2 != data_143f48ae0)
        result.b = 0
    else
        int64_t rdx_1 = *(arg1 + 0x180)
        
        if (rdx_1 == 0)
            result = 0
        else
            result = sub_1422c5440(&data_143a2fdb0, rdx_1)
        
        uint128_t zmm0 = zx.o(result.d)
        result.b = 1
        zmm0.d = _mm_cvtepi32_ps(zmm0).d f* 0.00392156886f
        *arg3 = zmm0.d
    
    return result

uint64_t rbx_1 = zx.q(*(*(arg1 + 0x190) + 0x150))
sub_142111bd0()
int64_t* rcx_4 = *(&data_143f48af0 + (rbx_1 << 3))
int64_t* rax_8 = (*(*rcx_4 + 0x280))(rcx_4)
return (*(*rax_8 + 0x60))(rax_8, arg2, arg3, arg4)
