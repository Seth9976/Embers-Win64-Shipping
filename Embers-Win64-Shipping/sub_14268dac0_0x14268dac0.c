// 函数: sub_14268dac0
// 地址: 0x14268dac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((arg1[1].d u>> 4).b & 1) != 0)
    float zmm0 = *(arg1 + 0x45c)
    TEB* gsbase
    int64_t rcx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    data_143f717a4 = zmm0 * zmm0
    
    if (data_143f71954 s> *(0x14 + rcx_1))
        _Init_thread_header(&data_143f71954)
        
        if (data_143f71954 == 0xffffffff)
            sub_1426709c0(&data_143f71950, (*(arg1 + 0x474) u>> 8).b & 1)
            _Init_thread_footer(&data_143f71954)
    
    data_143f717a0 = data_143f71798

void* rax_6 = (*(*arg1 + 0x150))(arg1)

if (rax_6 != 0 && ((arg1[1].d u>> 0xa).b & 1) != 0 && sub_142668ed0(arg1) != 0)
    int64_t* rcx_6 = data_143f5b298
    
    if ((*(*rcx_6 + 0x350))(rcx_6) == 0 && sub_140d21d80(rax_6) != sub_140d21d80(arg1)
            && data_143de5426 == 0)
        (*(*arg1 + 0x630))(arg1)

sub_142661b90(arg1)
float zmm0_1 = *(arg1 + 0x414)
int32_t zmm1 = arg1[0x82].d

if (not(zmm1 f< zmm0_1))
    zmm0_1 = _mm_min_ss(zmm0_1 * 1024f, zmm1)

arg1[0x82].d = zmm0_1

if ((arg1[1].d & 0x410) == 0)
    (*(*arg1 + 0x798))(arg1, zmm1)

sub_142676a20(arg1, arg1 + 0x444, &arg1[0x89])
int32_t result = 0x40 - *(arg1 + 0x444) - arg1[0x89].d
*(arg1 + 0x44c) = result
return result
