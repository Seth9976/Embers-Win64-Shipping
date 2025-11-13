// 函数: sub_140593c70
// 地址: 0x140593c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
void** result = arg1
int32_t _State = 0
int32_t _State_1 = 0
void** r12 = arg1
int64_t* var_58 = arg1
void* r8 = *arg1
int64_t* rcx = *(sx.q(*(r8 + 4)) + arg1 + 0x48)

if (rcx != 0)
    (*(*rcx + 8))(rcx)
    r8 = *r12

int64_t rcx_1 = sx.q(*(r8 + 4))
int64_t rax

if (*(rcx_1 + result + 0x10) == 0)
    class std::ostream* rcx_2 = *(rcx_1 + result + 0x50)
    
    if (rcx_2 == 0 || rcx_2 == result)
        rax.b = 1
    else
        std::wostream::flush(rcx_2)
        r8 = *result
        rax.b = *(sx.q(*(r8 + 4)) + result + 0x10) == 0
else
    rax.b = 0

char var_50 = rax.b

if (rax.b != 0)
    class std::locale __return
    class std::locale::facet* rax_3 =
        sub_140593ef0(std::ios_base::getloc(sx.q(*(r8 + 4)) + result, &__return))
    class std::locale::facet* r9_1 = rax_3
    class std::locale::_Locimp* _Ptr = __return._Ptr
    
    if (_Ptr != 0)
        struct std::locale::_Locimp::VTable* vtable = _Ptr->vtable
        int64_t* rax_4 = vtable->_Decref(_Ptr, vtable)
        
        if (rax_4 != 0)
            int64_t r8_1 = *rax_4
            (*r8_1)(rax_4, 1, r8_1)
        
        r9_1 = rax_3
    
    void* rdx_1 = *result
    int64_t rax_5 = sx.q(*(rdx_1 + 4))
    int64_t r8_2 = *(rax_5 + result + 0x28)
    int64_t rsi_1 = 0
    
    if (r8_2 s> 1)
        rsi_1 = r8_2 - 1
    
    if ((*(rax_5 + result + 0x18) & 0x1c0) != 0x40)
        while (true)
            if (_State != 0)
                goto label_140593e42
            
            if (rsi_1 s<= 0)
                rdx_1 = *result
                r9_1 = rax_3
                break
            
            if (0xffff == std::wstreambuf::sputc((*(sx.q(*(*result + 4)) + result + 0x48)).w))
                _State = 4
            
            _State_1 = _State
            rsi_1 -= 1
    
    int16_t r13_1 = (*(sx.q(*(rdx_1 + 4)) + result + 0x48)).w
    std::ctype<wchar_t>::widen(r9_1, arg2)
    
    if (0xffff == std::wstreambuf::sputc(r13_1))
        _State = 4
    
    while (true)
        _State_1 = _State
        
        if (_State != 0)
            break
        
        if (rsi_1 s<= 0)
            break
        
        if (0xffff == std::wstreambuf::sputc((*(sx.q(*(*result + 4)) + result + 0x48)).w))
            _State = 4
        
        rsi_1 -= 1

label_140593e42:
*(sx.q(*(*result + 4)) + result + 0x28) = 0
std::wios::setstate(sx.q(*(*result + 4)) + result, _State, 0)

if (std::uncaught_exceptions() == 0)
    std::wostream::_Osfx(r12)

int64_t* rcx_20 = *(sx.q(*(*r12 + 4)) + r12 + 0x48)

if (rcx_20 != 0)
    (*(*rcx_20 + 0x10))(rcx_20)

return result
