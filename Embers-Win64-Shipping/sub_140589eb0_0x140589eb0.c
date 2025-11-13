// 函数: sub_140589eb0
// 地址: 0x140589eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t _Last2 = __security_cookie ^ &var_88
uint64_t result

if (arg2 != 0xffffffff)
    int64_t rax_2 = **(arg1 + 0x40)
    
    if (rax_2 != 0 && rax_2 u< sx.q(**(arg1 + 0x58)) + rax_2)
        *std::streambuf::_Pninc() = arg2.b
        result = zx.q(arg2)
    else if (*(arg1 + 0x80) == 0)
        result = 0xffffffff
    else
        int64_t* r8_3 = *(arg1 + 0x18)
        
        if (*r8_3 == arg1 + 0x70)
            int32_t rdx_2 = (*(arg1 + 0x90)).d
            int64_t rcx = *(arg1 + 0x88)
            *r8_3 = rcx
            **(arg1 + 0x38) = rcx
            **(arg1 + 0x50) = rdx_2 - rcx.d
        
        class std::codecvt<unsigned short, char, _Mbstatet>* rcx_1 = *(arg1 + 0x68)
        
        if (rcx_1 != 0)
            char _First1 = arg2.b
            uint16_t _Last1
            char* _Mid2
            uint16_t const* _Mid1
            char var_30[0x20]
            int32_t rax_8 = std::codecvt<char, char, struct _Mbstatet>::out(rcx_1, arg1 + 0x74, 
                &_First1, &_Last1, &_Mid1, &var_30, &_Last2, &_Mid2)
            
            if (rax_8 s< 0)
                result = 0xffffffff
            else if (rax_8 s<= 1)
                char* _Mid2_1 = _Mid2
                uint64_t _ElementCount = _Mid2_1 - &var_30
                
                if (_Mid2_1 == &var_30)
                label_14058a018:
                    *(arg1 + 0x71) = 1
                    result = zx.q(arg2)
                    
                    if (_Mid1 == &_First1)
                        result = 0xffffffff
                else
                    if (_ElementCount == fwrite(&var_30, 1, _ElementCount, *(arg1 + 0x80)))
                        goto label_14058a018
                    
                    result = 0xffffffff
            else if (rax_8 != 3)
                result = 0xffffffff
            else
                int32_t result_2 = -1
                
                if (fputc(sx.d(_First1), *(arg1 + 0x80)) != 0xffffffff)
                    result_2 = arg2
                
                result = zx.q(result_2)
        else
            int32_t result_1 = -1
            
            if (fputc(sx.d(arg2.b), *(arg1 + 0x80)) != 0xffffffff)
                result_1 = arg2
            
            result = zx.q(result_1)
else
    result = 0

__security_check_cookie(_Last2 ^ &var_88)
return result
