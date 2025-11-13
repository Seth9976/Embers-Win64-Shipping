// 函数: sub_142898f20
// 地址: 0x142898f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
__chkstk(0x30)

if (arg1 != 0)
    int64_t _NumOfElements = sx.q(*arg1)
    
    if (_NumOfElements.d != 0)
        uint64_t _CompareFunction = *(arg1 + 0x18)
        
        if (_CompareFunction != 0)
            if (arg1[4] == 0)
                if (_NumOfElements.d s> 1)
                    qsort(*(arg1 + 8), _NumOfElements, 8, _CompareFunction)
                    arg2 = arg_10
                
                arg1[4] = 1
            
            if (arg2 != 0)
                int64_t rax_2 = sub_1428a8fc0(&arg_10, *(arg1 + 8), *arg1, 8, *(arg1 + 0x18), arg3)
                
                if (rax_2 != 0)
                    return (rax_2 - *(arg1 + 8)) s>> 3
        else if (_NumOfElements.d s> 0)
            int64_t* rcx = *(arg1 + 8)
            
            do
                if (*rcx == arg2)
                    return _CompareFunction
                
                _CompareFunction = zx.q(_CompareFunction.d + 1)
                rcx = &rcx[1]
            while (_CompareFunction.d s< _NumOfElements.d)

return 0xffffffff
