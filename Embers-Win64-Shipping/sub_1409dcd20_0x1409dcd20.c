// 函数: sub_1409dcd20
// 地址: 0x1409dcd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg2
TEB* gsbase

if (data_143ceecf0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ceecf0)
    
    if (data_143ceecf0 == 0xffffffff)
        atexit(sub_142cb8400)
        _Init_thread_footer(&data_143ceecf0)

int64_t rcx = sx.q(r14[1].d)
int32_t rax_2 = data_143ceece8
uint64_t rbx
uint64_t arg_8 = rbx

if (rcx.d s> rax_2)
    bool cond:1_1 = rcx.d s<= data_143ceecec
    data_143ceece8 = rcx.d
    
    if (not(cond:1_1))
        sub_140679a80(&data_143ceece0)
else if (rcx.d s< rax_2)
    rbx = zx.q(rax_2 - rcx.d)
    
    if (rax_2 != rcx.d)
        int32_t rdx_2 = rax_2 - rbx.d
        
        if (rdx_2 != rcx.d)
            memmove(rcx + data_143ceece0, sx.q((rbx + rcx).d) + data_143ceece0, rdx_2 - rcx.d)
            rax_2 = data_143ceece8
        
        data_143ceece8 = rax_2 - rbx.d

int32_t i = 0

if (r14[1].d s> 0)
    char* r12_1 = nullptr
    int128_t zmm6
    int128_t var_38_1 = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    int128_t zmm8
    int128_t var_58_1 = zmm8
    int128_t zmm9
    int128_t var_68_1 = zmm9
    
    do
        rbx.b = 1
        int32_t rdi_1 = *(*r14 + (r12_1 << 2))
        int64_t var_98
        int64_t* rax_6 = sub_1409c2bd0(arg1[5], &var_98, rdi_1)
        int64_t rcx_3 = var_98
        int32_t r15_1 = rax_6[1].d
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        if (r15_1 s> 0)
            int32_t* var_b8
            sub_1409c2bd0(arg1[5], &var_b8, rdi_1)
            int32_t* rax_7 = &data_143a1c6c8
            int32_t* rcx_5 = var_b8
            int32_t var_b0
            
            if (var_b0 s> 0)
                rax_7 = rcx_5
            
            rbx = zx.q(*rax_7)
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            int32_t var_d8
            int32_t zmm10_1
            int128_t zmm11
            zmm6, zmm10_1, zmm11 = sub_1409b31b0(arg1, &var_d8, rbx.d)
            int32_t rsi_1 = 1
            
            if (r15_1 s> 1)
                void* r14_1 = 4
                
                do
                    int64_t var_a8
                    sub_1409c2bd0(arg1[5], &var_a8, rdi_1)
                    int64_t rcx_8 = var_a8
                    int32_t* rax_8
                    
                    if (rsi_1 s>= 0)
                        rax_8 = r14_1 + rcx_8
                    
                    int32_t var_a0
                    
                    if (rsi_1 s< 0 || rsi_1 s>= var_a0)
                        rax_8 = &data_143a1c6c8
                    
                    rbx = zx.q(*rax_8)
                    
                    if (rcx_8 != 0)
                        sub_140a74f90(rcx_8)
                    
                    int32_t var_c8
                    zmm6, zmm7, zmm8, zmm9, zmm10_1, zmm11 = sub_1409b31b0(arg1, &var_c8, rbx.d)
                    rsi_1 += 1
                    r14_1 += 4
                    int128_t zmm2_1
                    zmm2_1.d = var_c8.d f* zmm9.d
                    float var_c4
                    zmm2_1.d = zmm2_1.d f+ var_c4 f* zmm8.d
                    float var_c0
                    zmm2_1.d = zmm2_1.d f+ var_c0 f* zmm7.d
                    zmm6 = _mm_min_ss(zmm2_1.d, zmm6.d)
                while (rsi_1 s< r15_1)
                
                r14 = arg2
            
            rbx.b = zmm6.d f>= zmm10_1
        
        rbx.b ^= 1
        i += 1
        r12_1[data_143ceece0] = rbx.b
        r12_1 = &r12_1[1]
    while (i s< r14[1].d)

return sub_1409dc820(arg1, r14, &data_143ceece0) __tailcall
