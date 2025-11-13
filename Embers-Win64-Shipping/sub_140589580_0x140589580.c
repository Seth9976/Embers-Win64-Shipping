// 函数: sub_140589580
// 地址: 0x140589580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t _Mode

if (arg2 == 0)
    _Mode = 4

if (arg2 != 0 || arg3 != 0)
    _Mode = 0

FILE* _Stream = *(arg1 + 0x80)

if (_Stream != 0 && setvbuf(_Stream, arg2, _Mode, arg3) == 0)
    FILE* _Stream_1 = *(arg1 + 0x80)
    *(arg1 + 0x7c) = 1
    *(arg1 + 0x71) = 0
    std::streambuf::_Init()
    
    if (_Stream_1 != 0)
        char** _Base = nullptr
        char** _Pointer = nullptr
        int64_t _Count = 0
        _get_stream_buffer_pointers(_Stream_1, &_Base, &_Pointer, &_Count)
        char** _Base_1 = _Base
        *(arg1 + 0x18) = _Base_1
        *(arg1 + 0x20) = _Base_1
        char** _Pointer_1 = _Pointer
        *(arg1 + 0x38) = _Pointer_1
        *(arg1 + 0x40) = _Pointer_1
        int64_t _Count_1 = _Count
        *(arg1 + 0x50) = _Count_1
        *(arg1 + 0x58) = _Count_1
    
    *(arg1 + 0x80) = _Stream_1
    *(arg1 + 0x74) = data_14401b790
    *(arg1 + 0x68) = 0
    return arg1

return 0
