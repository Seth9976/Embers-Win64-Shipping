// 函数: sub_1428aa880
// 地址: 0x1428aa880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* _Str2_1 = arg2

if (arg2 != 0)
    char rax_1 = *arg2
    
    if (rax_1 != 0)
        char* r14 = arg2
        
        while (true)
            if (rax_1 == 0x3b || rax_1 == 0)
                void* _Str2 = _Str2_1
                _Str2_1 = &r14[1]
                uint64_t _MaxCount = r14 - _Str2
                
                if (r14 != _Str2)
                    int32_t rbx_1 = 0
                    
                    if (sub_142898c70(*(arg1 + 8)) s> 0)
                        int32_t rax_5
                        
                        do
                            char* _Str1 = *sub_142898ea0(*(arg1 + 8), rbx_1)
                            int32_t i = 0
                            char* _Str1_1 = _Str1
                            
                            if (*_Str1 != 0)
                                while (i u< 0x80000000)
                                    _Str1_1 = &_Str1_1[1]
                                    i += 1
                                    
                                    if (*_Str1_1 == 0)
                                        break
                            
                            if ((zx.q(i) & 0x7fffffff) == _MaxCount
                                    && strncmp(_Str1, _Str2, _MaxCount) == 0)
                                break
                            
                            rbx_1 += 1
                            rax_5 = sub_142898c70(*(arg1 + 8))
                        while (rbx_1 s< rax_5)
                    
                    if (rbx_1 s>= sub_142898c70(*(arg1 + 8)))
                        void* rax_7
                        
                        if (*(arg1 + 8) == 0)
                            rax_7 = sub_142898ba0()
                            *(arg1 + 8) = rax_7
                        
                        if (*(arg1 + 8) == 0 && rax_7 == 0)
                            sub_1428a5670(0xb, 0x64, 0x41, "crypto\x509\by_dir.c", 0xb9)
                            return 0
                        
                        char** rax_8 = sub_1428a6730(0x18)
                        
                        if (rax_8 == 0)
                            sub_1428a5670(0xb, 0x64, 0x41, "crypto\x509\by_dir.c", 0xbf)
                            return 0
                        
                        rax_8[1].d = arg3
                        rax_8[2] = sub_142898b60(sub_1428aab20)
                        char* rax_10 = sub_1428a6c10(_Str2, _MaxCount, "crypto\x509\by_dir.c", 0xc4)
                        *rax_8 = rax_10
                        
                        if (rax_10 == 0 || rax_8[2] == 0)
                            sub_1428a6780(rax_10)
                            sub_142898cb0(rax_8[2], sub_1428aab40)
                            sub_1428a6780(rax_8)
                            return 0
                        
                        if (sub_142898d50(*(arg1 + 8), rax_8) == 0)
                            sub_1428aaad0(rax_8)
                            sub_1428a5670(0xb, 0x64, 0x41, "crypto\x509\by_dir.c", 0xcb)
                            return 0
            
            char rax_12 = *r14
            r14 = &r14[1]
            
            if (rax_12 == 0)
                break
            
            rax_1 = *r14
        
        return 1

sub_1428a5670(0xb, 0x64, 0x71, "crypto\x509\by_dir.c", 0xa0)
return 0
