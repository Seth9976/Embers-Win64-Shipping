// 函数: ?OpenModW@DBI1@@UEAAHPEBG0PEAPEAUMod@@@Z
// 地址: 0x142c578b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
int64_t rax_1 = __security_cookie ^ &var_4a8
char* r12 = arg6
char* rbx = arg4
__time64_t var_468 = _time64(nullptr)
uint64_t r15
r15.b = 0
int128_t* result = data_143ccb8b8(1, 0x60)
int128_t* rsi = result

if (result != 0)
    uint64_t rdi
    
    if (arg3 == 0)
        var_468 = 0
        
        if (strncmp(rbx, "#HttpOnly_", 0xa) == 0)
            rbx = &rbx[0xa]
            *(rsi + 0x5a) = 1
        
        if (*rbx == 0x23)
            data_143ccb8a0(rsi)
            result = nullptr
        else
            char* rax_38 = strchr(rbx, 0xd)
            
            if (rax_38 != 0)
                *rax_38 = 0
            
            char* rax_39 = strchr(rbx, 0xa)
            
            if (rax_39 != 0)
                *rax_39 = 0
            
            char* rax_40 = sub_142c70cb0(rbx, U"\t", &var_468)
            rdi = rax_40
            int32_t rbp_2 = 0
            
            if (rax_40 != 0)
                while (r15.b == 0)
                    switch (rbp_2)
                        case 0
                            uint64_t rcx_41 = rdi + 1
                            
                            if (*rdi != 0x2e)
                                rcx_41 = rdi
                            
                            int64_t rax_42 = data_143ccb8b0(rcx_41)
                            *(rsi + 0x28) = rax_42
                            
                            if (rax_42 == 0)
                                r15.b = 1
                        case 1
                            int32_t rax_43
                            rax_43.b = sub_142c70460(rdi, "TRUE") != 0
                            rsi[4].b = rax_43.b
                        case 2
                            int64_t rcx_43 = 0
                            
                            while (true)
                                char rax_44 = (*"TRUE")[rcx_43]
                                rcx_43 += 1
                                
                                if (rax_44 != *(rdi + rcx_43 - 1))
                                    int64_t rcx_44 = 0
                                    
                                    while (true)
                                        char rax_45 = (*"FALSE")[rcx_44]
                                        rcx_44 += 1
                                        
                                        if (rax_45 != *(rdi + rcx_44 - 1))
                                            int64_t rax_49 = data_143ccb8b0(rdi)
                                            *(rsi + 0x18) = rax_49
                                            
                                            if (rax_49 != 0)
                                                char* rax_50 = sub_142c59450(rax_49)
                                                rsi[2].q = rax_50
                                                
                                                if (rax_50 == 0)
                                                    r15.b = 1
                                            else
                                                r15.b = 1
                                            
                                            break
                                        
                                        if (rcx_44 == 6)
                                            goto label_142c57ffb
                                    
                                    break
                                
                                if (rcx_43 == 5)
                                label_142c57ffb:
                                    int64_t rax_46 = data_143ccb8b0(&data_14363dfe8)
                                    char rbx_5 = r15.b
                                    *(rsi + 0x18) = rax_46
                                    r15 = 1
                                    
                                    if (rax_46 == 0)
                                        rbx_5 = 1
                                    
                                    int64_t rax_47 = data_143ccb8b0(&data_14363dfe8)
                                    rbp_2 = 3
                                    rsi[2].q = rax_47
                                    
                                    if (rax_47 != 0)
                                        r15 = zx.q(rbx_5)
                                    
                                    goto label_142c58045
                        case 3
                        label_142c58045:
                            int32_t rax_48
                            rax_48.b = sub_142c70460(rdi, "TRUE") != 0
                            *(rsi + 0x58) = rax_48.b
                        case 4
                            rsi[3].q = strtoll(rdi, nullptr, 0xa)
                        case 5
                            int64_t rax_52 = data_143ccb8b0(rdi)
                            *(rsi + 8) = rax_52
                            
                            if (rax_52 == 0)
                                r15.b = 1
                        case 6
                            int64_t rax_53 = data_143ccb8b0(rdi)
                            r15 = zx.q(r15.b)
                            rsi[1].q = rax_53
                            
                            if (rax_53 == 0)
                                r15 = 1
                    
                    char* rax_54 = sub_142c70cb0(nullptr, U"\t", &var_468)
                    rbp_2 += 1
                    rdi = rax_54
                    
                    if (rax_54 == 0)
                        break
                
                if (rbp_2 != 6)
                    goto label_142c5810a
                
                int64_t rax_55 = data_143ccb8b0(&data_1434cce10)
                rsi[1].q = rax_55
                
                if (rax_55 == 0)
                    goto label_142c57e8a
                
                rbp_2 = 7
            label_142c5810a:
                
                if (r15.b != 0 || rbp_2 != 7)
                    goto label_142c57e8a
                
                goto label_142c58121
            
        label_142c57e8a:
            sub_142c59090(rsi)
            result = nullptr
    else
        char* rax_3 = data_143ccb898(0x1388)
        
        if (rax_3 != 0)
            char* rax_4 = strchr(rbx, 0x3b)
            char i = *rbx
            char* rbp_1 = rax_4
            
            if (i != 0)
                while (i == 0x20 || i == 9)
                    i = rbx[1]
                    rbx = &rbx[1]
                    
                    if (i == 0)
                        break
            
            while (true)
                *rax_3 = 0
                char var_448[0x400]
                var_448[0] = 0
                
                if (sub_1425f29b0(rbx, "%1023[^;\r\n=] =%4999[^;\r\n]", &var_448) s>= 1)
                    int64_t i_7 = -1
                    
                    do
                        i_7 += 1
                    while (rax_3[i_7] != 0)
                    
                    void* rax_6 = -ffffffffffffffff
                    
                    do
                        rax_6 += 1
                    while (*(&var_448 + rax_6) != 0)
                    
                    rdi = zx.q(*(rax_6 + rbx))
                    void* rdx = rax_6 + rbx
                    
                    if (rax_6 != 0)
                        char i_1 = *(rdx - 1)
                        void* rdx_1 = rdx - 1
                        
                        if (i_1 == 0x20 || i_1 == 9)
                            if (i_1 != 0)
                                while (i_1 == 0x20 || i_1 == 9)
                                    if (rax_6 == 0)
                                        break
                                    
                                    i_1 = *(rdx_1 - 1)
                                    rdx_1 -= 1
                                    rax_6 -= 1
                                    
                                    if (i_1 == 0)
                                        break
                            
                            if (rax_6 u>= 0x400)
                                __report_rangecheckfailure()
                                noreturn
                            
                            *(&var_448 + rax_6) = 0
                    
                    if (i_7 != 0)
                        int64_t i_2
                        
                        do
                            char rax_7 = rax_3[i_7 - 1]
                            
                            if (rax_7 != 0x20 && rax_7 != 9)
                                break
                            
                            rax_3[i_7 - 1] = 0
                            i_2 = i_7
                            i_7 -= 1
                        while (i_2 != 1)
                    
                    char i_3 = *rax_3
                    char* rbx_1 = rax_3
                    
                    if (i_3 != 0)
                        while (i_3 == 0x20 || i_3 == 9)
                            i_3 = rbx_1[1]
                            rbx_1 = &rbx_1[1]
                            
                            if (i_3 == 0)
                                break
                    
                    if (*(rsi + 8) == 0 && rdi.b == 0x3d)
                        *(rsi + 8) = data_143ccb8b0(&var_448)
                        int64_t rax_9 = data_143ccb8b0(rbx_1)
                        rsi[1].q = rax_9
                        
                        if (*(rsi + 8) != 0 && rax_9 != 0)
                            goto label_142c57b4e
                        
                        r15.b = 1
                        break
                    
                    if (i_7 != 0)
                    label_142c57b4e:
                        bool cond:10_1
                        
                        if (sub_142c70460("path", &var_448) == 0)
                            if (sub_142c70460("domain", &var_448) == 0)
                                int64_t rax_23
                                
                                if (sub_142c70460("version", &var_448) != 0)
                                    data_143ccb8a0(*(rsi + 0x48))
                                    rax_23 = data_143ccb8b0(rbx_1)
                                    *(rsi + 0x48) = rax_23
                                label_142c57d09:
                                    cond:10_1 = rax_23 == 0
                                    goto label_142c57d0d
                                
                                if (sub_142c70460("max-age", &var_448) != 0)
                                    data_143ccb8a0(rsi[5].q)
                                    rax_23 = data_143ccb8b0(rbx_1)
                                    rsi[5].q = rax_23
                                    goto label_142c57d09
                                
                                if (sub_142c70460("expires", &var_448) != 0)
                                    data_143ccb8a0(*(rsi + 0x38))
                                    rax_23 = data_143ccb8b0(rbx_1)
                                    *(rsi + 0x38) = rax_23
                                    goto label_142c57d09
                            else
                                rdi = &rbx_1[1]
                                
                                if (*rbx_1 != 0x2e)
                                    rdi = rbx_1
                                
                                if (strchr(rdi, 0x2e) == 0)
                                    char* rcx_10 = &data_1436b263c
                                    
                                    if (sub_142c70460("localhost", rdi) != 0)
                                        rcx_10 = r12
                                    
                                    r12 = rcx_10
                                
                                char* rcx_11 = rdi
                                
                                if (r12 != 0)
                                    rcx_11 = r12
                                
                                char rax_19 = sub_142c591e0(rcx_11)
                                
                                if (r12 == 0)
                                label_142c57c2b:
                                    data_143ccb8a0(*(rsi + 0x28))
                                    int64_t rax_20 = data_143ccb8b0(rdi)
                                    *(rsi + 0x28) = rax_20
                                    
                                    if (rax_20 == 0)
                                        r15.b = 1
                                        break
                                    
                                    if (rax_19 == 0)
                                        rsi[4].b = 1
                                else
                                    uint64_t rcx_12 = rdi
                                    
                                    if (rax_19 == 0)
                                        if (sub_142c594f0(rcx_12, r12) != 0)
                                            goto label_142c57c2b
                                        
                                        r15.b = 1
                                        arg5 = sub_142c64850(arg1, 
                                            "skipped cookie with bad tailmatch domain: %s\n", rdi, 
                                            arg5)
                                    else
                                        uint32_t i_4
                                        uint32_t rdx_8
                                        
                                        do
                                            rdx_8 = zx.d(*rcx_12)
                                            i_4 = zx.d(*(rcx_12 + r12 - rdi))
                                            
                                            if (rdx_8 != i_4)
                                                break
                                            
                                            rcx_12 += 1
                                        while (i_4 != 0)
                                        
                                        if (rdx_8 - i_4 == 0)
                                            goto label_142c57c2b
                                        
                                        r15.b = 1
                                        arg5 = sub_142c64850(arg1, 
                                            "skipped cookie with bad tailmatch domain: %s\n", rdi, 
                                            arg5)
                        else
                            data_143ccb8a0(*(rsi + 0x18))
                            int64_t rax_14 = data_143ccb8b0(rbx_1)
                            *(rsi + 0x18) = rax_14
                            
                            if (rax_14 == 0)
                                r15.b = 1
                                break
                            
                            char* rax_15 = sub_142c59450(rax_14)
                            rsi[2].q = rax_15
                            cond:10_1 = rax_15 == 0
                        label_142c57d0d:
                            
                            if (cond:10_1)
                                r15.b = 1
                                break
                    else if (sub_142c70460("secure", &var_448) == 0)
                        if (sub_142c70460("httponly", &var_448) != 0)
                            *(rsi + 0x5a) = 1
                        else if (rdi.b == 0x3d)
                            goto label_142c57b4e
                    else
                        *(rsi + 0x58) = 1
                
                if (rbp_1 == 0)
                    break
                
                if (*rbp_1 == 0)
                    break
                
                char i_5 = rbp_1[1]
                rbx = &rbp_1[1]
                
                if (i_5 != 0)
                    while (i_5 == 0x20 || i_5 == 9)
                        i_5 = rbx[1]
                        rbx = &rbx[1]
                        
                        if (i_5 == 0)
                            break
                
                char* rax_26 = strchr(rbx, 0x3b)
                rbp_1 = rax_26
                
                if (rax_26 == 0)
                    if (*rbx == rax_26.b)
                        break
                    
                    char* rax_27 = strchr(rbx, 0)
                    rbp_1 = rax_27
                    
                    if (rax_27 == 0)
                        break
            
            char* _String = rsi[5].q
            
            if (_String == 0)
                char* rcx_24 = *(rsi + 0x38)
                
                if (rcx_24 != 0)
                    int64_t rax_29 = sub_142c705f0(rcx_24)
                    rsi[3].q = rax_29
                    
                    if (rax_29 == 0)
                        rsi[3].q = 1
                    else if (rax_29 s< 0)
                        rsi[3].q = 0
            else
                if (*_String == 0x22)
                    _String = &_String[1]
                
                int64_t rax_10 = strtoll(_String, nullptr, 0xa)
                __time64_t rdx_2 = var_468
                rsi[3].q = rax_10
                
                if (0x7fffffffffffffff - rdx_2 s>= rax_10)
                    rsi[3].q = rax_10 + rdx_2
                else
                    rsi[3].q = 0x7fffffffffffffff
            
            if (r15.b == 0)
                int64_t rax_30
                
                if (*(rsi + 0x28) == 0 && r12 != 0)
                    rax_30 = data_143ccb8b0(r12)
                    *(rsi + 0x28) = rax_30
                
                if (*(rsi + 0x28) == 0 && r12 != 0 && rax_30 == 0)
                    r15.b = 1
                else if (*(rsi + 0x18) == 0 && arg7 != 0)
                    char* rax_31 = strchr(arg7, 0x3f)
                    char* rax_32
                    
                    if (rax_31 != 0)
                        rax_32 = sub_142c70d60(arg7, 0x2f, rax_31 - arg7)
                    else
                        rax_32 = strrchr(arg7, 0x2f)
                    
                    if (rax_32 != 0)
                        void* rbx_4 = rax_32 - arg7
                        int64_t rax_34 = data_143ccb898(rbx_4 + 2)
                        *(rsi + 0x18) = rax_34
                        
                        if (rax_34 == 0)
                            r15.b = 1
                        else
                            memcpy(rax_34, arg7, rbx_4.d + 1)
                            *(rbx_4 + *(rsi + 0x18) + 1) = 0
                            char* rax_36 = sub_142c59450(*(rsi + 0x18))
                            rsi[2].q = rax_36
                            
                            if (rax_36 == 0)
                                r15.b = 1
            
            data_143ccb8a0(rax_3)
            
            if (r15.b != 0 || *(rsi + 8) == 0)
                goto label_142c57e8a
            
        label_142c58121:
            char rax_56 = arg2[2].b
            
            if (rax_56 == 0 && arg2[3].b != rax_56 && rsi[3].q == 0)
                goto label_142c57e8a
            
            *(rsi + 0x59) = rax_56
            sub_142c59360(arg2)
            int128_t** i_6 = *arg2
            rdi.b = 0
            int128_t** i_8
            
            if (i_6 == 0)
                i_8 = nullptr
            else
                do
                    if (sub_142c70460(i_6[1], *(rsi + 8)) != 0)
                        char* rax_58 = i_6[5]
                        
                        if (rax_58 == 0)
                        label_142c581ae:
                            
                            if (*(rsi + 0x28) == 0)
                            label_142c581b9:
                                char* rax_61 = i_6[4]
                                
                                if (rax_61 == 0)
                                    if (rsi[2].q == 0)
                                    label_142c581e7:
                                        rdi.b = 1
                                        
                                        if (*(rsi + 0x59) == 0 && *(i_6 + 0x59) != 0)
                                            goto label_142c57e8a
                                        
                                        *rsi = *i_6
                                        data_143ccb8a0(i_6[1])
                                        data_143ccb8a0(i_6[2])
                                        data_143ccb8a0(i_6[5])
                                        data_143ccb8a0(i_6[3])
                                        data_143ccb8a0(i_6[4])
                                        data_143ccb8a0(i_6[7])
                                        data_143ccb8a0(i_6[9])
                                        data_143ccb8a0(i_6[0xa])
                                        *i_6 = *rsi
                                        *(i_6 + 0x10) = rsi[1]
                                        *(i_6 + 0x20) = rsi[2]
                                        *(i_6 + 0x30) = rsi[3]
                                        *(i_6 + 0x40) = rsi[4]
                                        int128_t zmm1 = rsi[5]
                                        *(i_6 + 0x50) = zmm1
                                        data_143ccb8a0(rsi, zmm1)
                                        rsi = i_6
                                        
                                        do
                                            i_8 = i_6
                                            i_6 = *i_6
                                        while (i_6 != 0)
                                        
                                        goto label_142c582c4
                                    
                                    rdi.b = 0
                                else
                                    char* rdx_18 = rsi[2].q
                                    
                                    if (rdx_18 == 0)
                                        if (rax_61 == 0 && rsi[2].q == 0)
                                            goto label_142c581e7
                                        
                                        rdi.b = 0
                                    else
                                        if (sub_142c70460(rax_61, rdx_18) != 0)
                                            goto label_142c581e7
                                        
                                        rdi.b = 0
                        else
                            char* rdx_17 = *(rsi + 0x28)
                            
                            if (rdx_17 != 0)
                                if (sub_142c70460(rax_58, rdx_17) != 0 && i_6[8].b == rsi[4].b)
                                    goto label_142c581b9
                            else if (rax_58 == 0)
                                goto label_142c581ae
                    
                    i_8 = i_6
                    i_6 = *i_6
                while (i_6 != 0)
            
        label_142c582c4:
            
            if (arg2[2].b != 0)
                *(rsi + 8)
                char const* const r8_8 = "Added"
                
                if (rdi.b != 0)
                    r8_8 = "Replaced"
                
                int64_t var_470_1 = rsi[3].q
                int64_t var_478_1 = *(rsi + 0x18)
                int64_t var_480_1 = *(rsi + 0x28)
                int64_t var_488_1 = rsi[1].q
                sub_142c64850(arg1, "%s cookie %s="%s" for domain %s, path %s, expire %I64d\n", 
                    r8_8, arg5)
            
            if (rdi.b != 0)
                result = rsi
            else if (i_8 == 0)
                *(arg2 + 0x14) += 1
                *arg2 = rsi
                result = rsi
            else
                *i_8 = rsi
                result = rsi
                *(arg2 + 0x14) += 1
        else
            data_143ccb8a0(rsi)
            result = nullptr

__security_check_cookie(rax_1 ^ &var_4a8)
return result
