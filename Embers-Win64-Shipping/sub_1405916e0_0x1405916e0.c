// 函数: sub_1405916e0
// 地址: 0x1405916e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = arg1
struct _Thrd_t thr

if (*(arg1 + 0x14c) != 0)
    thr._Hnd = &arg1[0x14]
    thr._Id.b = 0
    int32_t code = _Mtx_lock(&arg1[0x14])
    
    if (code != 0)
        std::_Throw_C_error(code)
        noreturn
    
    thr._Id.b = 1
    
    while (arg1[0x12] != 0)
        _Cnd_wait(&arg1[0x1e], &arg1[0x14])
    
    std::wostream::operator<<(
        sub_140593a10(std::wcerr, 
            "Destroying video recorder without stopping current record session."), 
        sub_140593eb0)
    
    if (arg1 == -0xa0)
        sub_14058ed50(1)
        noreturn
    
    _Mtx_unlock(&arg1[0x14])
    thr._Id.b = 0
    sub_1405920e0(arg1)

int32_t code_1 = _Mtx_lock(&arg1[0x14])

if (code_1 != 0)
    std::_Throw_C_error(code_1)
    noreturn

while (arg1[0x12] != 0)
    _Cnd_wait(&arg1[0x1e], &arg1[0x14])

arg1[0x13].b = 1
_Cnd_broadcast(&arg1[0x1e])
_Mtx_unlock(&arg1[0x14])

if (arg1[0x28].d == 0)
    std::_Throw_Cpp_error(1)
    noreturn

int32_t rax_2 = _Thrd_id()

if (arg1[0x28].d == rax_2)
    std::_Throw_Cpp_error(5)
    noreturn

int96_t zmm0 = (*(arg1 + 0x138)).12
thr._Hnd = zmm0.q
thr._Id = zmm0:8.d

if (_Thrd_join(&thr, nullptr) != 0)
    std::_Throw_Cpp_error(2)
    noreturn

*(arg1 + 0x138) = zx.o(0)

if (arg1[0x28].d != 0)
    terminate()
    noreturn

_Cnd_destroy_in_situ(&arg1[0x1e])
_Mtx_destroy_in_situ(&arg1[0x14])
sub_1405932b0(&arg1[0xe])
int64_t rcx_16 = arg1[0xe]
arg1[0xe] = 0
j_sub_140a74f90(rcx_16)
sub_140592a80(&arg1[9])
int64_t rcx_18 = arg1[7]

if (rcx_18 != 0)
    avformat_free_context(rcx_18)

int64_t rax_4 = arg1[5]

if (rax_4 != 0)
    int64_t arg_10 = rax_4
    av_frame_free(&arg_10)

int64_t rcx_20 = arg1[4]

if (rcx_20 != 0)
    j_sub_140a74f90(rcx_20)

int64_t rcx_21 = arg1[3]

if (rcx_21 != 0)
    arg1[2](rcx_21)

int64_t* result = arg1[1]

if (result != 0)
    result_1 = result
    result = avcodec_free_context(&result_1)

int64_t rcx_23 = *arg1

if (rcx_23 == 0)
    return result

return j_sub_140a74f90(rcx_23)
