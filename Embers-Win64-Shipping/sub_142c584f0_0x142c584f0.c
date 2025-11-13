// 函数: sub_142c584f0
// 地址: 0x142c584f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__time64_t rax = _time64(nullptr)
void** i = nullptr
uint64_t _NumOfElements = 0

if (arg1 == 0 || *arg1 == 0)
    return nullptr

sub_142c59360(arg1)
char rax_1 = sub_142c591e0(arg2)
int64_t* rbx_1 = *arg1

if (rbx_1 != 0)
    while (true)
        int64_t rcx_2 = rbx_1[6]
        
        if ((rcx_2 != 0 && rcx_2 s<= rax) || (rbx_1[0xb].b != 0 && arg4 == 0))
            goto label_142c585e3
        
        char* rcx_3 = rbx_1[5]
        
        if (rcx_3 != 0)
            if (rbx_1[8].b == 0)
            label_142c585ab:
                
                if (sub_142c70460(arg2, rbx_1[5]) == 0)
                    goto label_142c585e3
                
                goto label_142c585b4
            
            char rax_2
            
            if (rax_1 == 0)
                rax_2 = sub_142c594f0(rcx_3, arg2)
            
            if (rax_1 == 0 && rax_2 != 0)
                goto label_142c585b4
            
            if (rbx_1[8].b == 0 || rax_1 != 0)
                goto label_142c585ab
            
            goto label_142c585e3
        
    label_142c585b4:
        char* rcx_5 = rbx_1[4]
        char rax_4
        
        if (rcx_5 != 0)
            rax_4 = sub_142c59250(rcx_5, arg3)
        
        if (rcx_5 != 0 && rax_4 == 0)
            goto label_142c585e3
        
        void*** i_2 = sub_142c58f50(rbx_1)
        
        if (i_2 != 0)
            *i_2 = i
            _NumOfElements += 1
            i = i_2
        label_142c585e3:
            rbx_1 = *rbx_1
            
            if (rbx_1 != 0)
                continue
            else
                if (_NumOfElements == 0)
                    break
                
                void*** _Base = data_143ccb898(_NumOfElements << 3)
                
                if (_Base != 0)
                    if (i != 0)
                        void*** _Base_1 = _Base
                        
                        do
                            *_Base_1 = i
                            _Base_1 = &_Base_1[1]
                            i = *i
                        while (i != 0)
                    
                    qsort(_Base, _NumOfElements, 8, sub_142c58e70)
                    i = *_Base
                    int64_t i_1 = 0
                    
                    if (_NumOfElements != 1)
                        do
                            int64_t* rcx_9 = _Base[i_1]
                            int64_t rax_5 = _Base[i_1 + 1]
                            i_1 += 1
                            *rcx_9 = rax_5
                        while (i_1 u< _NumOfElements - 1)
                    
                    *_Base[_NumOfElements - 1] = 0
                    data_143ccb8a0(_Base, i_1, _NumOfElements - 1)
                    break
        
        sub_142c58460(i)
        return nullptr

return i
