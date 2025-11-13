// 函数: sub_14058b2f0
// 地址: 0x14058b2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
void** result = arg1
int32_t _State = 0
int32_t _State_1 = 0
void** r15 = arg1
int64_t* var_38 = arg1
void* r8 = *arg1
int64_t* rcx = *(sx.q(*(r8 + 4)) + arg1 + 0x48)

if (rcx != 0)
    (*(*rcx + 8))(rcx)
    r8 = *r15

int64_t rcx_1 = sx.q(*(r8 + 4))
int64_t rax
void* rcx_3

if (*(rcx_1 + result + 0x10) == 0)
    class std::ostream* rcx_2 = *(rcx_1 + result + 0x50)
    
    if (rcx_2 == 0 || rcx_2 == result)
        rax.b = 1
        rcx_3 = r8
    else
        std::ostream::flush(rcx_2)
        rcx_3 = *result
        rax.b = *(sx.q(*(rcx_3 + 4)) + result + 0x10) == 0
        r8 = rcx_3
else
    rax.b = 0
    rcx_3 = r8

char var_30 = rax.b

if (rax.b != 0)
    int64_t rax_2 = sx.q(*(rcx_3 + 4))
    int64_t rdx_1 = *(rax_2 + result + 0x28)
    int64_t rdi_1 = 0
    
    if (rdx_1 s> 1)
        rdi_1 = rdx_1 - 1
    
    if ((*(rax_2 + result + 0x18) & 0x1c0) != 0x40)
        while (true)
            if (_State != 0)
                goto label_14058b444
            
            if (rdi_1 s<= 0)
                r8 = *result
                break
            
            if (std::streambuf::sputc((*(sx.q(*(*result + 4)) + result + 0x48)).b) == 0xffffffff)
                _State = 4
            
            _State_1 = _State
            rdi_1 -= 1
    
    if (std::streambuf::sputc((*(sx.q(*(r8 + 4)) + result + 0x48)).b) == 0xffffffff)
        _State = 4
    
    while (true)
        _State_1 = _State
        
        if (_State != 0)
            break
        
        if (rdi_1 s<= 0)
            break
        
        if (std::streambuf::sputc((*(sx.q(*(*result + 4)) + result + 0x48)).b) == 0xffffffff)
            _State = 4
        
        rdi_1 -= 1

label_14058b444:
*(sx.q(*(*result + 4)) + result + 0x28) = 0
std::ios::setstate(sx.q(*(*result + 4)) + result, _State, 0)

if (std::uncaught_exception() == 0)
    std::ostream::_Osfx(r15)

int64_t* rcx_16 = *(sx.q(*(*r15 + 4)) + r15 + 0x48)

if (rcx_16 != 0)
    (*(*rcx_16 + 0x10))(rcx_16)

return result
