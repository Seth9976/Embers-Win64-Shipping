// 函数: sub_1421ba650
// 地址: 0x1421ba650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t rdi = data_143a2ee34
char rcx = (data_1439c7a34).b
int32_t rbx = data_143a2ee38
int128_t var_68 = zx.o(0)
int32_t var_44 = (1 << rcx) - 1
char var_40 = 0
int64_t var_38 = 0
int32_t var_30 = 0
int128_t var_58 = data_1439c7b20
int32_t var_48 = data_1439c7b30
sub_1421be920(rdi, rbx, 1, 1, 0, 1, 0, &var_68, arg1 + 0x10, arg1 + 0x18, 1)
sub_1421be920(rdi, rbx, 0xa, 1, 0, 1, 0, &var_68, arg1 + 0x20, arg1 + 0x28, 1)
TEB* gsbase
void* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f4ec40 s> *(rbx_1 + 0x14))
    _Init_thread_header(&data_143f4ec40)
    
    if (data_143f4ec40 == 0xffffffff)
        sub_140b58260(&data_143f4ec38, u"ParticleStatePosition", 1)
        _Init_thread_footer(&data_143f4ec40)

if (data_143f4ec50 s> *(rbx_1 + 0x14))
    _Init_thread_header(&data_143f4ec50)
    
    if (data_143f4ec50 == 0xffffffff)
        sub_140b58260(&data_143f4ec48, u"ParticleStateVelocity", 1)
        _Init_thread_footer(&data_143f4ec50)

*(*(arg1 + 0x10) + 0x58) = data_143f4ec38
*(*(arg1 + 0x20) + 0x58) = data_143f4ec48
int64_t* rcx_6 = data_143f0f180
(*(*rcx_6 + 0x2e8))(rcx_6, *(arg1 + 0x10), u"ParticleStatePosition")
int64_t* rcx_7 = data_143f0f180
int64_t result = (*(*rcx_7 + 0x2e8))(rcx_7, *(arg1 + 0x20), u"ParticleStateVelocity")
*(arg1 + 0x30) = 0
__security_check_cookie(rax_1 ^ &var_c8)
return result
