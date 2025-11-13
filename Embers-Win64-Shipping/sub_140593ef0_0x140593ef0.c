// 函数: sub_140593ef0
// 地址: 0x140593ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

class std::_Lockit arg_8
std::_Lockit::_Lockit(&arg_8, 0)
class std::locale::facet* _Ppf = data_14401b7a0
uint64_t rax_1 = std::locale::id()
class std::locale::_Locimp* _Ptr = arg1->_Ptr
class std::locale::facet* result

if (rax_1 u>= _Ptr->_Facetcount)
    result = nullptr
label_140593f40:
    
    if (_Ptr->_Xparent == 0)
        goto label_140593f5a
    
    class std::locale::_Locimp* rax_2 = std::locale::_Getgloballocale()
    
    if (rax_1 u>= rax_2->_Facetcount)
    label_140593f5f:
        result = _Ppf
        
        if (result == 0)
            if (std::ctype<wchar_t>::_Getcat(&_Ppf, arg1) == -1)
                __scrt_throw_std_bad_alloc()
                noreturn
            
            class std::locale::facet* _Ppf_1 = _Ppf
            class std::locale::facet* _Ppf_2 = _Ppf_1
            std::_Facet_Register(_Ppf_1)
            _Ppf_1->vtable->_Incref(_Ppf_1)
            result = _Ppf
            data_14401b7a0 = result
    else
        result = rax_2->_Facetvec[rax_1]
    label_140593f5a:
        
        if (result == 0)
            goto label_140593f5f
else
    result = _Ptr->_Facetvec[rax_1]
    
    if (result == 0)
        goto label_140593f40

std::_Lockit::~_Lockit(&arg_8)
return result
