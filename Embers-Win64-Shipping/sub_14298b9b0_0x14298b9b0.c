// 函数: sub_14298b9b0
// 地址: 0x14298b9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2

if (arg1->__offset(0x80).q == 0)
    struct _iobuf* rax_1 = std::_Fiopen(arg2, arg3, arg4)
    
    if (rax_1 != 0)
        sub_14058a9f0(arg1, rax_1, 1)
        class std::locale __return
        class std::locale::facet* rax_3 = sub_14058b510(std::streambuf::getloc(arg1, &__return))
        
        if (std::codecvt_base::always_noconv() == 0)
            arg1->__offset(0x68).q = rax_3
            std::streambuf::_Init()
        else
            arg1->__offset(0x68).q = 0
        
        class std::locale::_Locimp* _Ptr = __return._Ptr
        
        if (_Ptr != 0)
            int64_t* rax_6 = _Ptr->vtable->_Decref(_Ptr)
            
            if (rax_6 != 0)
                int64_t r8_1 = *rax_6
                (*r8_1)(rax_6, 1, r8_1)
        
        return arg1

return 0
