// 函数: sub_1419e5900
// 地址: 0x1419e5900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0x220)
void* rcx = *(result + 0x440)

if (rcx != 0)
    void var_28
    sub_1423633d0(rcx, &var_28)
    void* rax = *(arg1 + 0x220)
    int64_t* rcx_1 = *(arg1 + 0x230)
    uint128_t zmm3 = zx.o(*(rax + 0x134))
    float rax_1 = *(rax + 0x13c)
    uint128_t zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    uint64_t var_48 = zmm3.q
    float var_14
    float var_10
    sub_141ef53a0(rcx_1, var_10 * 0.699999988f f* _mm_max_ss(zmm3.d, zmm0_1.d).d, rax_1 * var_14, 1)
    wchar16* i_2 = nullptr
    
    for (wchar16* i = wcsstr(&AInteractiveFoliageActor::CapsuleTouched", ::"); i != 0; 
            i = wcsstr(&i[1], ::"))
        i_2 = i
    
    int64_t arg_8
    sub_140b58260(&arg_8, &i_2[2], 1)
    void* rdi_1 = *(arg1 + 0x230)
    int64_t rbx_1 = arg_8
    TEB* gsbase
    
    if (*(rdi_1 + 0x3d9) != 0)
        if (data_143f223a0
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f223a0)
            
            if (data_143f223a0 == 0xffffffff)
                sub_140b58170(&data_143f22398, "OnComponentBeginOverlap", 1)
                _Init_thread_footer(&data_143f223a0)
        
        *(rdi_1 + 0x3d9) = sub_140d2a3f0(rdi_1, data_143f22398, arg1, rbx_1)
    
    wchar16* i_3 = nullptr
    
    for (wchar16* i_1 = wcsstr(&AInteractiveFoliageActor::CapsuleTouched", ::"); i_1 != 0; 
            i_1 = wcsstr(&i_1[1], ::"))
        i_3 = i_1
    
    sub_140b58260(&arg_8, &i_3[2], 1)
    int64_t rbx_2 = arg_8
    void* rdi_2 = *(arg1 + 0x230)
    sub_140d3a3a0(&var_48, nullptr)
    float var_40_1
    var_40_1.q = 0
    sub_140d3a3a0(&var_48, arg1)
    var_40_1.q = rbx_2
    int32_t rcx_11
    rcx_11.b = sub_140b5b8a0(rbx_2.d, 0) == 0
    int32_t var_3c
    
    if ((var_3c != 0 | rcx_11.b) != 0)
        void* rax_6 = sub_140d3c6e0(&var_48)
        
        if (rax_6 != 0)
            sub_140d1fd20(rax_6, var_40_1.q)
    
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    uint64_t r9_2 = zx.q(data_14401b1a0)
    int128_t var_38 = var_48.o
    
    if (data_143f223a0 s> *(0x14 + *(ThreadLocalStoragePointer + (r9_2 << 3))))
        _Init_thread_header(&data_143f223a0)
        
        if (data_143f223a0 == 0xffffffff)
            sub_140b58170(&data_143f22398, "OnComponentBeginOverlap", 1)
            _Init_thread_footer(&data_143f223a0)
    
    result = sub_140d17340(rdi_2, data_143f22398, &var_38)
    *(rdi_2 + 0x3d9) |= result.b

return result
