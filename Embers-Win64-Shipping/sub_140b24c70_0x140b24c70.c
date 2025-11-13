// 函数: sub_140b24c70
// 地址: 0x140b24c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* _String1

if (arg4 == 0)
    _String1 = arg1[2]
else
    _String1 = *(arg4 + 8)

int64_t rax = -1

do
    rax += 1
while (arg3[rax] != 0)

int64_t rdx = *arg1

if (_String1 u< rdx)
    *(arg2 + 0x18) = 0
else
    int64_t _MaxCount = sx.q(rax.d)
    
    if (_String1 u> arg1[1] - _MaxCount * 2 || *_String1 != *arg3)
        *(arg2 + 0x18) = 0
    else
        int16_t* _String1_1 = _String1
        int32_t var_14_1 = ((_String1 - rdx) s>> 1).d
        
        if (wcsncmp(_String1, arg3, _MaxCount) != 0)
            *(arg2 + 0x18) = 0
        else
            void* rax_8 = &_String1[_MaxCount]
            void* var_20_1 = rax_8
            
            if (arg4 != 0 && rax_8 u> *(arg4 + 8))
                *(arg4 + 8) = rax_8
            
            *arg2 = _String1.o
            arg2[1].q = 0.q
            *(arg2 + 0x18) = 1

return arg2
