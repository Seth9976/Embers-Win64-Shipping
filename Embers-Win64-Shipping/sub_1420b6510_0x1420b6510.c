// 函数: sub_1420b6510
// 地址: 0x1420b6510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
uint64_t var_48 = __security_cookie ^ &var_138
int32_t rdi = 0
int128_t* var_e8 = arg2
arg6[1].d = 0

if (*(arg6 + 0xc) != 0)
    sub_1405c5570(arg6, 0)

uint64_t result

if (arg1 != 0)
    TEB* gsbase
    
    if (data_143f48020
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f48020)
        
        if (data_143f48020 == 0xffffffff)
            sub_140b58170(&data_143f48018, "ComponentOverlapComponents", 1)
            _Init_thread_footer(&data_143f48020)
    
    void var_f8
    void var_b8
    sub_141eb54c0(&var_b8, data_143f48018, &var_f8, 0, nullptr)
    sub_141eb8b70(&var_b8, arg5)
    int64_t var_d8 = 0
    int32_t r14_1 = 0
    int32_t var_d0_1 = 0
    int32_t var_f0 = 0
    char var_ec_1 = 0
    
    while (true)
        int32_t rax_3
        
        if (r14_1 s< 0 || r14_1 s>= arg3[1].d)
            rax_3.b = 0
        else
            rax_3.b = 1
        
        if (rax_3.b == 0)
            break
        
        rax_3 = sub_141ebfb60(sub_141ec4150(), 0, zx.d(*(sx.q(r14_1) + *arg3)))
        var_f0 |= 1 << (rax_3 u% 0x20)
        r14_1 += 1
    
    int128_t* rax_6 = var_e8
    float zmm1[0x4] = rax_6[1]
    void* rax_7 = arg1[0x15]
    float var_c8[0x4] = *rax_6
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_e8.d = zmm1[0]
    float var_e0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_e8:4.d = temp0_1[0]
    
    if (rax_7 == 0)
        rax_7 = sub_141ee69e0(arg1)
    
    sub_141ebd910(rax_7, &var_d8, arg1, &var_e8, &var_c8, &var_b8, &var_f0)
    
    if (var_d0_1 s> 0)
        do
            int32_t* rbx_2 = var_d8 + ((sx.q(rdi) * 3 + 1) << 3)
            
            if (sub_140d3e110(rbx_2).b != 0)
                if (arg4 == 0)
                label_1420b66eb:
                    result = sub_140d3c6e0(rbx_2)
                    int64_t rbx_3 = sx.q(arg6[1].d)
                    int32_t rcx_17 = (rbx_3 + 1).d
                    arg6[1].d = rcx_17
                    
                    if (rcx_17 s> *(arg6 + 0xc))
                        sub_1405a4d70(arg6)
                    
                    *(*arg6 + (rbx_3 << 3)) = result
                else
                    void* rax_10 = sub_140d3c6e0(rbx_2)
                    int64_t rdx_3 = sx.q(*(arg4 + 0x38))
                    result = *(rax_10 + 0x10)
                    
                    if (rdx_3.d s<= *(result + 0x38)
                            && *(*(result + 0x30) + (rdx_3 << 3)) == arg4 + 0x30)
                        goto label_1420b66eb
            
            rdi += 1
        while (rdi s< var_d0_1)
    
    int64_t rcx_20 = var_d8
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)

result.b = arg6[1].d s> 0
__security_check_cookie(var_48 ^ &var_138)
return result
