// 函数: sub_14058ab10
// 地址: 0x14058ab10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1->__offset(0x80).q == 0)
    struct _iobuf* _Stream = std::_Fiopen(arg2, arg3, arg4)
    
    if (_Stream != 0)
        arg1->__offset(0x7c).b = 1
        arg1->__offset(0x71).b = 0
        std::streambuf::_Init()
        char** _Base = nullptr
        char** _Pointer = nullptr
        int32_t* var_20 = nullptr
        _get_stream_buffer_pointers(_Stream, &_Base, &_Pointer, &var_20)
        char** _Base_1 = _Base
        arg1->_IGfirst = _Base_1
        arg1->_IPfirst = _Base_1
        char** _Pointer_1 = _Pointer
        arg1->_IGnext = _Pointer_1
        arg1->_IPnext = _Pointer_1
        int32_t* rax_1 = var_20
        arg1->_IGcount = rax_1
        arg1->_IPcount = rax_1
        arg1->__offset(0x80).q = _Stream
        arg1->__offset(0x74).q = data_14401b790
        arg1->__offset(0x68).q = 0
        class std::locale::facet* rax_4 = sub_14058b510(std::streambuf::getloc(arg1, &var_20))
        
        if (std::codecvt_base::always_noconv() == 0)
            arg1->__offset(0x68).q = rax_4
            std::streambuf::_Init()
        else
            arg1->__offset(0x68).q = 0
        
        int64_t* var_18
        
        if (var_18 != 0)
            int64_t* rax_7 = (*(*var_18 + 0x10))(var_18)
            
            if (rax_7 != 0)
                int64_t r8_2 = *rax_7
                (*r8_2)(rax_7, 1, r8_2)
        
        return arg1

return 0
