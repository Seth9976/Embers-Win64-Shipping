// 函数: sub_140589910
// 地址: 0x140589910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t _Buffer = arg2

if (arg3 s<= 0)
    return 0

if (*(arg1 + 0x68) != 0)
    return std::streambuf::xsgetn(arg1, arg2) __tailcall

int64_t _ElementCount = arg3
int64_t rdx_1 = **(arg1 + 0x38)
int32_t rcx_1

if (rdx_1 == 0)
    rcx_1 = 0
else
    rcx_1 = **(arg1 + 0x50)

int64_t rax_4 = sx.q(rcx_1)

if (rcx_1 != 0)
    int64_t rbx_1 = arg3
    
    if (rax_4 u< arg3)
        rbx_1 = rax_4
    
    memcpy(_Buffer, rdx_1, rbx_1.d)
    int32_t* rax_5 = *(arg1 + 0x50)
    _Buffer += rbx_1
    _ElementCount -= rbx_1
    *rax_5 -= rbx_1.d
    int64_t* rcx_3 = *(arg1 + 0x38)
    *rcx_3 += sx.q(rbx_1.d)

int64_t _ElementCount_1 = _ElementCount

if (*(arg1 + 0x80) != 0)
    int64_t* r8_2 = *(arg1 + 0x18)
    
    if (*r8_2 == &arg1[0x70])
        int64_t rcx_4 = *(arg1 + 0x88)
        int32_t rdx_2 = (*(arg1 + 0x90)).d
        *r8_2 = rcx_4
        **(arg1 + 0x38) = rcx_4
        **(arg1 + 0x50) = rdx_2 - rcx_4.d
    
    if (_ElementCount u> 0xfff)
        uint64_t rax_10
        
        do
            rax_10 = fread(_Buffer, 1, 0xfff, *(arg1 + 0x80))
            _ElementCount -= rax_10
            _Buffer += rax_10
            _ElementCount_1 = _ElementCount
            
            if (rax_10 != 0xfff)
                return arg3 - _ElementCount
        while (_ElementCount u> rax_10)
    
    if (_ElementCount_1 != 0)
        _ElementCount_1 -= fread(_Buffer, 1, _ElementCount, *(arg1 + 0x80))

return arg3 - _ElementCount_1
