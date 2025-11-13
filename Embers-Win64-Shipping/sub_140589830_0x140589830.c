// 函数: sub_140589830
// 地址: 0x140589830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t _ElementCount = arg3
char* _Buffer = arg2

if (arg1->__offset(0x68).q != 0)
    return std::streambuf::xsputn(arg1, arg2, arg3) __tailcall

int64_t _ElementCount_2 = _ElementCount
char* r9_1 = *arg1->_IPnext
int32_t _ElementCount_3

if (r9_1 == 0)
    _ElementCount_3 = 0
else
    _ElementCount_3 = *arg1->_IPcount

int64_t _ElementCount_1 = sx.q(_ElementCount_3)

if (_ElementCount s> 0)
    if (_ElementCount_3 s> 0)
        if (_ElementCount s< _ElementCount_1)
            _ElementCount_1 = _ElementCount
        
        memcpy(r9_1, arg2, _ElementCount_1.d)
        int32_t* _IPcount = arg1->_IPcount
        _ElementCount -= _ElementCount_1
        _Buffer = &_Buffer[_ElementCount_1]
        *_IPcount -= _ElementCount_1.d
        int64_t* _IPnext = arg1->_IPnext
        *_IPnext += sx.q(_ElementCount_1.d)
    
    if (_ElementCount_3 s<= 0 || _ElementCount s> 0)
        FILE* _Stream = arg1->__offset(0x80).q
        
        if (_Stream != 0)
            _ElementCount -= fwrite(_Buffer, 1, _ElementCount, _Stream)

return _ElementCount_2 - _ElementCount
