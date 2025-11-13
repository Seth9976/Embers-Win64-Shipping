// 函数: sub_142bd0dd0
// 地址: 0x142bd0dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[1]
int32_t* r14 = arg2

if (arg3 s> 5)
    return 0

int32_t r15 = 0

if (arg3 s> 0)
    int64_t rbp_1 = 0
    
    while (true)
        char* _Str1_1
        char* _Str1
        
        if (*r14 != 0)
            char* _Str1_2 = sub_142bd1340(rbx)
            _Str1 = _Str1_2
            _Str1_1 = _Str1_2
        else
            sub_142bd1440(rbx)
            
            if (rbx[3].d s< 2)
                int64_t rdx = rbx[2]
                _Str1 = *rbx - 1
                
                while (true)
                    char* rcx_1 = *rbx
                    
                    if (rcx_1 u< rdx)
                        uint32_t rax_2 = zx.d(*rcx_1)
                        *rbx = &rcx_1[1]
                        
                        if (rax_2 == 0xd || rax_2 == 0xa)
                            rbx[3].d = 2
                            _Str1_1 = _Str1
                            break
                        
                        if (rax_2 != 0xffffffff && rax_2 != 0x1a)
                            continue
                    
                    rbx[3].d = 3
                    _Str1_1 = _Str1
                    break
            else
                _Str1 = nullptr
                _Str1_1 = nullptr
        
        if (_Str1 == 0)
            break
        
        int64_t rax_3 = sx.q(*r14)
        uint64_t _MaxCount = *rbx - _Str1 - 1
        
        if (rax_3.d u<= 5)
            switch (rax_3)
                case 0, 1
                    int32_t arg_18
                    int64_t rax_4 = sub_142b99990(*arg1, (_MaxCount + 1).d, &arg_18)
                    bool cond:1_1 = arg_18 != 0
                    *(r14 + 8) = rax_4
                    
                    if (not(cond:1_1))
                        memcpy(rax_4, _Str1, _MaxCount.d)
                        *(_MaxCount + *(r14 + 8)) = 0
                case 2
                    r14[2] = sub_142bd02f0(&_Str1_1, &_Str1[_MaxCount], 0)
                case 3
                    r14[2] = sub_142bd0580(&_Str1_1, &_Str1[_MaxCount])
                case 4
                    int32_t rax_8
                    
                    if (_MaxCount == 4)
                        rax_8 = strncmp(_Str1, "true", _MaxCount)
                    
                    if (_MaxCount != 4 || rax_8 != 0)
                        r14[2].b = 0
                    else
                        r14[2].b = 1
                case 5
                    int64_t rax_9 = arg1[3]
                    
                    if (rax_9 == 0)
                        r14[2] = 0
                    else
                        r14[2] = rax_9(_Str1, _MaxCount, arg1[4])
        
        r15 += 1
        rbp_1 += 1
        r14 = &r14[4]
        
        if (rbp_1 s>= sx.q(arg3))
            break

return zx.q(r15)
