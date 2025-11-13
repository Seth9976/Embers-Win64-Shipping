// 函数: sub_142bcfd90
// 地址: 0x142bcfd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char* rbx = arg1[2]
int64_t r14 = *arg1
int32_t result_1 = 0xa0
int32_t result

if (rbx != 0)
    int64_t* r10_1 = arg1[1]
    char* _Str1
    uint64_t _MaxCount
    
    while (true)
        if (r10_1[3].d s< 2)
            sub_142bd13d0(r10_1)
        
        r10_1[3].d = 0
        _Str1 = sub_142bd1340(r10_1)
        
        if (_Str1 != 0)
            _MaxCount = *r10_1 - _Str1 - 1
            break
        
        int32_t rax_2 = r10_1[3].d
        
        if (rax_2 s< 3 && rax_2 s>= 2)
            continue
        
        _MaxCount = 0
        break
    
    int32_t rax_5
    
    if (_Str1 != 0 && _MaxCount == 0x10)
        rax_5 = strncmp(_Str1, "StartFontMetrics", _MaxCount)
    
    if (_Str1 == 0 || _MaxCount != 0x10 || rax_5 != 0)
        result = 2
    else
        while (true)
            int64_t* r10_2 = arg1[1]
            char* rax_6
            uint64_t rdx_1
            
            while (true)
                if (r10_2[3].d s< 2)
                    sub_142bd13d0(r10_2)
                
                r10_2[3].d = 0
                rax_6 = sub_142bd1340(r10_2)
                
                if (rax_6 != 0)
                    rdx_1 = *r10_2 - rax_6 - 1
                    break
                
                int32_t rax_7 = r10_2[3].d
                
                if (rax_7 s< 3 && rax_7 s>= 2)
                    continue
                
                rdx_1 = 0
                break
            
            if (rax_6 != 0)
                int32_t rax_8 = sub_142bd14c0(rax_6, rdx_1)
                int32_t var_78
                char var_70
                
                if (rax_8 u> 0x31)
                    continue
                else
                    switch (rax_8)
                        case 0
                            var_78 = 2
                            
                            if (sub_142bd0dd0(arg1, &var_78, 1) == 1)
                                *(rbx + 0x14) = var_70.d
                                continue
                        case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xf, 0x10, 0x11, 0x12, 
                                0x13, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1b, 0x1c, 0x1d, 0x1f, 0x20, 
                                0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x29, 0x2a, 0x2b, 0x2c, 
                                0x2e, 0x2f, 0x30
                            continue
                        case 0xe
                            var_78 = 2
                            
                            if (sub_142bd0dd0(arg1, &var_78, 1) == 1)
                                *(rbx + 0x18) = var_70.d
                                continue
                        case 0x14
                            result = 0
                            break
                        case 0x1a
                            var_78 = 2
                            int32_t var_68_1 = 2
                            int32_t var_58_1 = 2
                            int32_t var_48_1 = 2
                            
                            if (sub_142bd0dd0(arg1, &var_78, 4) == 4)
                                *(rbx + 4) = var_70.d
                                int32_t var_60
                                *(rbx + 8) = var_60
                                int32_t var_50
                                *(rbx + 0xc) = var_50
                                int32_t var_40
                                *(rbx + 0x10) = var_40
                                continue
                        case 0x1e
                            var_78 = 4
                            
                            if (sub_142bd0dd0(arg1, &var_78, 1) == 1)
                                *rbx = var_70
                                continue
                        case 0x28
                            int32_t var_98 = 3
                            int32_t rax_11 = sub_142bd0dd0(arg1, &var_98, 1)
                            int32_t var_90
                            
                            if (rax_11 == 1)
                                if ((var_90 & 0xfffffffd) == 0)
                                    continue
                                else
                                    result_1 = rax_11 + 6
                        case 0x2d
                            int32_t var_88 = 3
                            int32_t rax_23 = sub_142bd0dd0(arg1, &var_88, 1)
                            
                            if (rax_23 == 1)
                                int32_t var_80
                                result = sub_142bd0fe0(arg1, var_80, rax_23 + 0x10)
                                result_1 = result
                                
                                if (result != 0)
                                    break
                                
                                continue
                        case 0x31
                            int32_t result_2 = TypeTiIter::next(arg1)
                            result_1 = result_2
                            
                            if (result_2 == 0)
                                result = 0
                                break
            
            sub_142b99980(r14, *(rbx + 0x20))
            int64_t rdx_6 = *(rbx + 0x30)
            *(rbx + 0x20) = 0
            *(rbx + 0x28) = 0
            sub_142b99980(r14, rdx_6)
            result = result_1
            *(rbx + 0x30) = 0
            *(rbx + 0x38) = 0
            *rbx = 0
            break
else
    result = (&rbx[6]).d

__security_check_cookie(rax_1 ^ &var_b8)
return result
