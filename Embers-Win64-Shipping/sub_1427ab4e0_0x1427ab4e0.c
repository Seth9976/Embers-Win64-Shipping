// 函数: sub_1427ab4e0
// 地址: 0x1427ab4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
char rdi = 0
void* rsi = *(arg1 + 0x80)
int32_t var_b8 = 0
float zmm3 = arg2[5] f* 1048576f f+ arg2[2]
int64_t zmm0
zmm0.d = arg2[3].d f* 1048576f
zmm0.d = zmm0.d f+ *arg2
float var_c4 = arg2[4] f* 1048576f f+ arg2[1]
int32_t var_c8 = zmm0.d
char rax_2 = sub_1427ad500(rsi)
char rax_8
int32_t* rbx

if (rax_2 != 0)
    rdi = 1
    uint64_t rcx_1 = zx.q(data_14401b1a0)
    float var_a0_1 = zmm3
    int32_t var_c0_1 = arg2[2]
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    int64_t var_a8 = var_c8.q
    var_c8.q = *arg2
    
    if (data_143f88b60 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_1 << 3))))
        _Init_thread_header(&data_143f88b60)
        
        if (data_143f88b60 == 0xffffffff)
            sub_140b58170(&data_143f88b58, "HitTest", 1)
            _Init_thread_footer(&data_143f88b60)
    
    rbx = **(rsi + 8) + 0x828
    void var_d8
    void var_98
    int64_t* rax_7 = sub_141eb54c0(&var_98, data_143f88b58, &var_d8, 1, nullptr)
    rax_8 = (*rbx)(*(rsi + 8), arg3, &var_c8, &var_a8, rax_7)

if (rax_2 == 0 || rax_8 == 0)
    rbx.b = 0
else
    rbx = 1

if ((rdi & 1) != 0)
    int64_t var_38
    
    if (var_38 != 0)
        sub_140a74f90(var_38)
    
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)

__security_check_cookie(rax_1 ^ &var_108)
return zx.q(rbx.b)
