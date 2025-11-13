// 函数: sub_141fea830
// 地址: 0x141fea830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
rbx.b = 0
int32_t r9 = *(arg1 + 0x14)
int128_t zmm13 = *(data_143f3dfe8 + 4)
int128_t zmm14
int128_t var_d8 = zmm14
int128_t zmm0
zmm0.d = (*(data_143f3e860 + 4)).d f* 0.00999999978f
void* result = data_143f3e950
int128_t zmm10
zmm10.d = 1f f- zmm0.d
zmm0 = arg1[4].d
int128_t zmm11
zmm11.d = (*(result + 4)).d f* 0.00999999978f
zmm10.d = zmm10.d f* zmm13.d

if (r9 s> 0)
    int128_t* rdi_1 = &data_143f3ee18
    uint64_t r12_1 = zx.q(data_14401b1a0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    int128_t zmm6 = zx.o(0)
    int128_t zmm9 = 0x3f800000
    int128_t zmm12 = zx.o(0)
    int128_t zmm15 = *(data_143f3e8c0 + 4)
    zmm0 = *(data_143f3e878 + 4)
    zmm14 = zmm0
    int32_t arg_18 = zmm0.d
    uint32_t rcx = *(data_143f3e920 + 4)
    uint32_t rax_5 = 2
    
    if (rcx s>= 2)
        rax_5 = rcx
    
    int32_t r15_1 = 0
    rcx.b = 1
    char arg_8 = 1
    int32_t r14_1 = 1
    int32_t rax_7 = 0
    int32_t arg_10 = 0
    int128_t zmm7
    zmm7.d = (*(data_143f3e8a8 + 4)).d f* zmm13.d
    int128_t zmm1
    
    while (rcx.b != 0)
        int128_t* rbp_1
        
        if (r14_1 - 2 s< 0 || r14_1 - 2 s>= r9)
            if (data_143f3ee30 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                _Init_thread_header(&data_143f3ee30)
                
                if (data_143f3ee30 == 0xffffffff)
                    __builtin_memcpy(&data_143f3ee18, 
                        "\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\x"
                    "bf\x01", 
                        0x15)
                    _Init_thread_footer(&data_143f3ee30)
            
            r9 = *(arg1 + 0x14)
            rbp_1 = &data_143f3ee18
        else
            rbp_1 =
                *arg1 + sx.q(mods.dp.d(sx.q(arg1[2].d - (r14_1 - 2) + arg1[1].d), arg1[1].d)) * 0x18
        
        if (r14_1 - 1 s< 0 || r14_1 - 1 s>= r9)
            if (data_143f3ee30 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                _Init_thread_header(&data_143f3ee30)
                
                if (data_143f3ee30 == 0xffffffff)
                    __builtin_memcpy(&data_143f3ee18, 
                        "\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\x"
                    "bf\x01", 
                        0x15)
                    _Init_thread_footer(&data_143f3ee30)
            
            r9 = *(arg1 + 0x14)
        else
            rdi_1 =
                *arg1 + sx.q(mods.dp.d(sx.q(arg1[2].d - (r14_1 - 1) + arg1[1].d), arg1[1].d)) * 0x18
        
        int64_t rax_25
        int64_t rcx_5
        int128_t* rdx_9
        int64_t r8
        
        if (r14_1 s< 0 || r14_1 s>= r9)
            if (data_143f3ee30 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
                rax_25, rcx_5, r8, r9 = _Init_thread_header(&data_143f3ee30)
                
                if (data_143f3ee30 == 0xffffffff)
                    __builtin_memcpy(&data_143f3ee18, 
                        "\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\x"
                    "bf\x01", 
                        0x15)
                    rax_25, rcx_5, r8, r9 = _Init_thread_footer(&data_143f3ee30)
            
            rdx_9 = &data_143f3ee18
        else
            rdx_9 = *arg1 + sx.q(mods.dp.d(sx.q(arg1[2].d - r14_1 + arg1[1].d), arg1[1].d)) * 0x18
        
        zmm1 = *(rdi_1 + 0xc)
        
        if (zmm1.d f< 0f)
            rax_7 = arg_10
        else
            float temp20_1 = *(rdi_1 + 4)
            zmm13.d f- temp20_1
            char r10_1 = *(rdi_1 + 0x14)
            rcx_5.b = zmm13.d f< temp20_1
            
            if (r10_1 == 0)
                zmm0 = zx.o(0)
            else
                zmm0 = zmm14
            
            zmm0.d = zmm0.d f+ *(rdi_1 + 8)
            rax_25.b = zmm0.d f> zmm10.d
            
            if (rcx_5.b != 0 || rax_25.b != 0)
                r8.b = 1
            else
                r8.b = 0
            
            if (r10_1 == 0 || rax_25.b == 0)
                r9.b = 0
            else
                r9.b = 1
            
            if (r8.b != 0 || zmm1.d f<= zmm13.d)
                rax_25.b = 0
            label_141feabd5:
                rdx_9.b = 0
                
                if (rax_25.b != 0)
                    goto label_141feabe7
                
                r15_1 = 0
            label_141feaca4:
                
                if (r10_1 == 0 || (r8.b == 0 && r9.b == 0))
                    zmm0.d = zmm10.d f/ zmm1.d
                    zmm0.d = _mm_sqrt_ss(zmm0.d, zmm0.d).d f* *rdi_1
                else
                    zmm0 = *rdi_1
                    
                    if (not(zmm0.d f<= zmm11.d))
                        zmm0 = zmm11
                
                zmm12.d = zmm12.d f+ zmm9.d
                zmm0.d = zmm0.d f* zmm9.d
                rax_7 = arg_10 + 1
                arg_10 = rax_7
                zmm9.d = zmm9.d f* zmm15.d
                zmm6.d = zmm6.d f+ zmm0.d
            else
                rax_25.b = 1
                
                if (r15_1 != 0 || zmm7.d f<= 0f || zmm1.d f<= zmm7.d)
                    goto label_141feabd5
                
                zmm0 = *(rbp_1 + 0xc)
                
                if (not(zmm0.d f< 0f) &&
                        (zmm0.d f>= zmm7.d || zmm7.d f<= *(rbp_1 + 4) || zmm7.d f<= *(rbp_1 + 8)))
                    goto label_141feabd5
                
                zmm0 = *(rdx_9 + 0xc)
                
                if (not(zmm0.d f< 0f) &&
                        (zmm0.d f>= zmm7.d || zmm7.d f<= *(rdx_9 + 4) || zmm7.d f<= *(rdx_9 + 8)))
                    goto label_141feabd5
                
                rdx_9.b = 1
            label_141feabe7:
                char rcx_6 = 0
                r15_1 += 1
                
                if (r15_1 != rax_5)
                    rcx_6 = arg_8
                
                arg_8 = rcx_6
                
                if (rdx_9.b == 0)
                    goto label_141feaca4
                
                rax_7 = arg_10
        
        r9 = *(arg1 + 0x14)
        rdi_1 = &data_143f3ee18
        rcx = zx.d(arg_8)
        r14_1 += 1
        
        if (r14_1 s> r9)
            break
    
    zmm6.d = zmm6.d f/ zmm12.d
    
    if (rax_7 s<= 0 || r15_1 != rax_7)
        rbx.b = 0
        zmm0 = *(data_143f3e908 + 4)
        
        if (not(zmm0.d f== 0f))
            zmm1 = arg1[4].d
            
            if (not(zmm6.d f<= zmm1.d))
                zmm0.d = zmm0.d f* 0.00999999978f
                zmm0.d = zmm0.d f+ 1f
                zmm0.d = zmm0.d f* zmm1.d
                
                if (not(zmm6.d f>= zmm0.d))
                    zmm6 = zmm1
        
        zmm0 = arg1[4].d
        
        if (not(zmm6.d f<= zmm0.d))
            zmm6.d = zmm6.d f- zmm0.d
            zmm6.d = zmm6.d f* *(data_143f3e8f0 + 4)
            zmm6.d = zmm6.d f+ zmm0.d
    else
        rbx.b = 1
        *(arg1 + 0x14) = 0
    
    int64_t rdi_2 = data_143f3ded8
    int64_t rcx_7
    
    if (data_143de5480 == 0)
        rcx_7 = 0
    else
        rcx_7.b = GetCurrentThreadId() != data_143de5470
    
    result = data_143f3ddc8
    zmm0.d = (*(result + 4)).d f* 0.00999999978f
    
    if (not(zmm6.d f< zmm0.d))
        zmm0.d = (*(rdi_2 + (rcx_7 << 2))).d f* 0.00999999978f
        zmm0 = _mm_min_ss(zmm0.d, zmm6.d)

if (not(zmm0.d f== arg1[4].d))
    result = data_143f3e8d8

if ((zmm0.d f== arg1[4].d || arg1[3].d s< *(result + 4)) && rbx.b == 0)
    arg1[3].d += 1
    return result

arg1[4].d = zmm0.d
arg1[3].d = 0
return result
