// 函数: sub_1428ea060
// 地址: 0x1428ea060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* _Str1 = arg3
__chkstk(0x30)
int64_t r10 = arg4

if (arg4 u<= 1 || *arg3 != 0x2e)
    int32_t rdi_1 = 0
    char* _Str1_2 = nullptr
    int32_t r14_1 = 0
    char* rsi_1 = nullptr
    int32_t rbx_1 = 1
    
    if (arg2 != 0)
        do
            char rcx = *(rsi_1 + arg1)
            char* _Str1_1 = rsi_1 + arg1
            
            if (rcx == 0x2a)
                int32_t rcx_2 = rbx_1 & 1
                int32_t rax_2
                
                if (rsi_1 != arg2 - 1)
                    rax_2 = 0
                
                if (rsi_1 == arg2 - 1 || *(rsi_1 + arg1 + 1) == 0x2e)
                    rax_2 = 1
                
                if (_Str1_2 == 0 && (rbx_1.b & 8) == 0 && r14_1 == 0
                        && ((arg5.b & 4) == 0 || (rcx_2 != 0 && rax_2 != 0))
                        && (rcx_2 != 0 || rax_2 != 0))
                    _Str1_2 = _Str1_1
                    rbx_1 &= 0xfffffffe
                    goto label_1428ea1a5
                
            label_1428ea2f5:
                arg3 = _Str1
                r10 = arg4
                goto label_1428ea313
            
            if (rcx - 0x61 u> 0x19 && rcx - 0x41 u> 0x19 && rcx - 0x30 u> 9)
                if (rcx != 0x2e)
                    if (rcx != 0x2d || (rbx_1.b & 1) != 0)
                        goto label_1428ea2f5
                    
                    rbx_1 |= 4
                    goto label_1428ea1a5
                
                if ((rbx_1.b & 5) != 0)
                    goto label_1428ea2f5
                
                rbx_1 = 1
                r14_1 += 1
                goto label_1428ea1a5
            
            if ((rbx_1.b & 1) != 0 && arg2 - rsi_1 u>= 4 && _strnicmp(_Str1_1, "xn--", 4) == 0)
                rbx_1 |= 8
            
            rbx_1 &= 0xfffffffa
        label_1428ea1a5:
            rsi_1 = &rsi_1[1]
        while (rsi_1 u< arg2)
        
        arg3 = _Str1
        r10 = arg4
    
    if ((rbx_1.b & 5) == 0 && r14_1 s>= 2 && _Str1_2 != 0)
        void* r15_1 = _Str1_2 - arg1
        void* rbp_2 = arg2 - 1 + arg1 - _Str1_2
        
        if (r10 u>= r15_1 + rbp_2 && sub_1428e9fa0(arg1, r15_1, arg3, r15_1, arg5) != 0)
            char* rsi_4 = _Str1 - rbp_2 + arg4
            void* rbx_2 = r15_1 + _Str1
            
            if (sub_1428e9fa0(rsi_4, rbp_2, &_Str1_2[1], rbp_2, arg5) != 0)
                uint64_t rbp_3
                
                if (r15_1 != 0 || _Str1_2[1] != 0x2e)
                    rbp_3 = 0
                    
                    if (arg4 u< 4)
                    label_1428ea2a2:
                        
                        if (rsi_4 != rbx_2 + 1)
                            if (rbx_2 != rsi_4)
                                goto label_1428ea2ea
                        else if (*rbx_2 != 0x2a && rbx_2 != rsi_4)
                        label_1428ea2ea:
                            
                            do
                                char rcx_7 = *rbx_2
                                
                                if ((rcx_7 - 0x2d u> 0x2d
                                        || not(test_bit(0x3ffffff01ff9, zx.q(rcx_7 - 0x2d))))
                                        && rcx_7 - 0x61 u> 0x19)
                                    if (rbp_3 == 0)
                                        return zx.q(rdi_1)
                                    
                                    if (rcx_7 != 0x2e)
                                        return zx.q(rdi_1)
                                
                                rbx_2 += 1
                            while (rbx_2 != rsi_4)
                        
                        rdi_1 = 1
                    else if (_strnicmp(_Str1, "xn--", 4) != 0)
                        goto label_1428ea2a2
                else if (rbx_2 != rsi_4)
                    rbp_3 = 0
                    
                    if ((arg5.b & 8) != 0)
                        rbp_3 = zx.q((r15_1 + 1).d)
                    
                    goto label_1428ea2a2
        
        return zx.q(rdi_1)

label_1428ea313:
return sub_1428e9fa0(arg1, arg2, arg3, r10, arg5)
