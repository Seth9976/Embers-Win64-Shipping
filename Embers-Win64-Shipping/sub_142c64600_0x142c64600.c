// 函数: sub_142c64600
// 地址: 0x142c64600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t result

if (*(arg1 + 0x5d8) == 0 || arg6 == 0)
    result = sub_142c65160(arg1, arg2, arg3, arg4)
else
    int64_t rdx = *(arg6 + 0xd8)
    
    if (rdx == 0)
        result = sub_142c65160(arg1, arg2, arg3, arg4)
    else
        char const* const r9 = "Data"
        void* const rax_3
        
        if (arg2 == 1)
            r9 = "Header"
        label_142c64692:
            rax_3 = "from"
        label_142c646aa:
            void* const var_e8_1 = rax_3
            char _Buffer[0xa0]
            sub_142c564b0(&_Buffer, 0xa0, "[%s %s %s]", r9, arg5)
            uint64_t _ElementSize = -1
            
            do
                _ElementSize += 1
            while (_Buffer[_ElementSize] != 0)
            
            int64_t r10_1 = *(arg1 + 0x310)
            
            if (r10_1 == 0)
                fwrite(&data_1436b35e0, 2, 1, *(arg1 + 0x258))
                fwrite(&_Buffer, _ElementSize, 1, *(arg1 + 0x258))
                result = sub_142c65160(arg1, arg2, arg3, arg4)
            else
                result = r10_1(arg1, 0, &_Buffer, _ElementSize, *(arg1 + 0x260), rdx)
                
                if (result == 0)
                    result = sub_142c65160(arg1, arg2, arg3, arg4)
        else
            if (arg2 == 2)
                r9 = "Header"
            label_142c64682:
                rax_3 = &data_143613bd0
                goto label_142c646aa
            
            if (arg2 == 3)
                goto label_142c64692
            
            if (arg2 == 4)
                goto label_142c64682
            
            result = sub_142c65160(arg1, arg2, arg3, arg4)

__security_check_cookie(rax_1 ^ &var_108)
return result
