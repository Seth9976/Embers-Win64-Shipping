// 函数: sub_140593a10
// 地址: 0x140593a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
char* r13 = arg2
void** result = arg1
int32_t _State = 0
int32_t _State_1 = 0
char* r14 = -ffffffffffffffff

do
    r14 = &r14[1]
while (*(r14 + arg2) != 0)

void* rcx = *arg1
int64_t rax = sx.q(*(rcx + 4))
int64_t rdi = *(rax + result + 0x28)
void* i

if (rdi s<= 0 || rdi s<= r14)
    i = nullptr
else
    i = rdi - r14

class std::wostream* result_1 = result
int64_t* rdx = *(rax + result + 0x48)

if (rdx != 0)
    (*(*rdx + 8))(rdx)
    rcx = *result

int64_t rax_2 = sx.q(*(rcx + 4))

if (*(rax_2 + result + 0x10) == 0)
    rax_2 = *(rax_2 + result + 0x50)
    
    if (rax_2 == 0 || rax_2 == result)
        rax_2.b = 1
    else
        std::wostream::flush(rax_2)
        rcx = *result
        rax_2.b = *(sx.q(*(rcx + 4)) + result + 0x10) == 0
else
    rax_2.b = 0

char var_58 = rax_2.b

if (rax_2.b != 0)
    class std::locale __return
    class std::locale::facet* rax_4 =
        sub_140593ef0(std::ios_base::getloc(sx.q(*(rcx + 4)) + result, &__return))
    class std::locale::_Locimp* _Ptr = __return._Ptr
    
    if (_Ptr != 0)
        struct std::locale::_Locimp::VTable* vtable = _Ptr->vtable
        int64_t* rax_5 = vtable->_Decref(_Ptr, vtable)
        
        if (rax_5 != 0)
            int64_t r8_1 = *rax_5
            (*r8_1)(rax_5, 1, r8_1)
    
    if ((*(sx.q(*(*result + 4)) + result + 0x18) & 0x1c0) != 0x40)
        for (; i s> 0; i -= 1)
            if (0xffff == std::wstreambuf::sputc((*(sx.q(*(*result + 4)) + result + 0x48)).w))
                _State = 4
                _State_1 = 4
                break
    
    while (_State == 0)
        if (r14 s<= 0)
            for (; i s> 0; i -= 1)
                if (0xffff == std::wstreambuf::sputc((*(sx.q(*(*result + 4)) + result + 0x48)).w))
                    _State |= 4
                    _State_1 = _State
                    break
            
            break
        
        int16_t rax_12 = (*(sx.q(*(*result + 4)) + result + 0x48)).w
        std::ctype<wchar_t>::widen(rax_4, *r13)
        
        if (0xffff == std::wstreambuf::sputc(rax_12))
            _State = 4
        
        _State_1 = _State
        r14 -= 1
        r13 = &r13[1]
    
    *(sx.q(*(*result + 4)) + result + 0x28) = 0
    result_1 = result
else
    _State = 4

std::wios::setstate(sx.q(*(*result + 4)) + result, _State, 0)

if (std::uncaught_exceptions() == 0)
    std::wostream::_Osfx(result_1)

int64_t* rcx_20 = *(sx.q(result_1->vtable->__vecDelDtor:4.d) + result_1 + 0x48)

if (rcx_20 != 0)
    (*(*rcx_20 + 0x10))(rcx_20)

return result
