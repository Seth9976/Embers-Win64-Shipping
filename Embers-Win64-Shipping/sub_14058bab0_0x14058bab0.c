// 函数: sub_14058bab0
// 地址: 0x14058bab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
void** result = arg1
int32_t _State = 0
int32_t _State_1 = 0
void* rcx = *arg1
int64_t rax = sx.q(*(rcx + 4))
int64_t rdi = *(rax + result + 0x28)
void* rdi_1

if (rdi s<= 0 || rdi u<= arg3)
    rdi_1 = nullptr
else
    rdi_1 = rdi - arg3

class std::wostream* result_2 = result
void** result_1 = result
int64_t* r8 = *(rax + result + 0x48)
void* rdx = rcx

if (r8 != 0)
    (*(*r8 + 8))(r8, rdx)
    rcx = *result
    rdx = rcx

int64_t rax_2 = sx.q(*(rcx + 4))

if (*(rax_2 + result + 0x10) == 0)
    rax_2 = *(rax_2 + result + 0x50)
    
    if (rax_2 == 0 || rax_2 == result)
        rax_2.b = 1
    else
        std::ostream::flush(rax_2)
        rcx = *result
        rax_2.b = *(sx.q(*(rcx + 4)) + result + 0x10) == 0
        rdx = rcx
else
    rax_2.b = 0

char var_30 = rax_2.b

if (rax_2.b != 0)
    if ((*(sx.q(*(rcx + 4)) + result + 0x18) & 0x1c0) != 0x40)
        while (true)
            if (rdi_1 == 0)
                rdx = *result
                goto label_14058bbf3
            
            if (std::streambuf::sputc((*(sx.q(*(*result + 4)) + result + 0x48)).b) == 0xffffffff)
                _State = 4
                _State_1 = 4
                break
            
            rdi_1 -= 1
        
        goto label_14058bba5
    
label_14058bbf3:
    
    if (std::streambuf::sputn(*(sx.q(*(rdx + 4)) + result + 0x48), arg2, arg3) == arg3)
    label_14058bba5:
        
        while (true)
            if (rdi_1 == 0)
                goto label_14058bbd1
            
            if (std::streambuf::sputc((*(sx.q(*(*result + 4)) + result + 0x48)).b) == 0xffffffff)
                _State |= 4
                break
            
            rdi_1 -= 1
    else
        _State = 4
    
    _State_1 = _State
label_14058bbd1:
    *(sx.q(*(*result + 4)) + result + 0x28) = 0
else
    _State = 4

std::ios::setstate(sx.q(*(*result + 4)) + result, _State, 0)

if (std::uncaught_exception() == 0)
    std::ostream::_Osfx(result_2)

int64_t* rcx_15 = *(sx.q(result_2->vtable->__vecDelDtor:4.d) + result_2 + 0x48)

if (rcx_15 != 0)
    (*(*rcx_15 + 0x10))(rcx_15)

return result
