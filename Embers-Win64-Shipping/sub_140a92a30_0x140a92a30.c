// 函数: sub_140a92a30
// 地址: 0x140a92a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg1

for (void* rsi_2 = &i[sx.q(arg1[1].d) * 2]; i != rsi_2; i = &i[2])
    int32_t rcx = i[1].d
    int64_t* r9_1 = *arg2
    int32_t rax_1 = rcx - 1
    int64_t _MaxCount = sx.q(r9_1[1].d)
    
    if (rcx == 0)
        rax_1 = 0
    
    if (_MaxCount.d == rax_1)
        wchar16* _String2
        
        if (rcx == 0)
            _String2 = &data_142d40450
        else
            _String2 = *i
        
        if (wcsncmp(*r9_1, _String2, _MaxCount) == 0)
            return i

return nullptr
