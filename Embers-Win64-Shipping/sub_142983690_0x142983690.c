// 函数: sub_142983690
// 地址: 0x142983690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
TEB* gsbase

if (data_143fed1c0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143fed1c0)
    
    if (data_143fed1c0 == 0xffffffff)
        _Mtx_init_in_situ(&data_143fed170, 2)
        atexit(sub_142d14e00)
        _Init_thread_footer(&data_143fed1c0)

void* var_20 = &data_143fed170
int32_t code = _Mtx_lock(&data_143fed170)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_18 = 1

if (data_143fed1c4 == 0)
    sub_14298cac0("box2f")
    sub_14298cac0("box2i")
    sub_14298cac0("chlist")
    sub_14298cac0("compression")
    sub_14298cac0("chromaticities")
    sub_14298cac0("deepImageState")
    sub_14298cac0("double")
    sub_14298cac0("envmap")
    sub_14298cac0("float")
    sub_14298cac0("floatvector")
    sub_14298cac0("int")
    sub_14298cac0("keycode")
    sub_14298cac0("lineOrder")
    sub_14298cac0("m33d")
    sub_14298cac0("m33f")
    sub_14298cac0("m44d")
    sub_14298cac0("m44f")
    sub_14298cac0("preview")
    sub_14298cac0("rational")
    sub_14298cac0("string")
    sub_14298cac0("stringvector")
    sub_14298cac0("tiledesc")
    sub_14298cac0("timecode")
    sub_14298cac0("v2d")
    sub_14298cac0("v2f")
    sub_14298cac0("v2i")
    sub_14298cac0("v3d")
    sub_14298cac0("v3f")
    char rcx_2
    char rdx_30
    rcx_2, rdx_30 = sub_14298cac0("v3i")
    sub_14299d4d0(rcx_2, rdx_30)
    data_143fed1c4 = 1

int32_t code_1 = _Mtx_unlock(&data_143fed170)

if (code_1 == 0)
    return code_1

std::_Throw_C_error(code_1)
noreturn
