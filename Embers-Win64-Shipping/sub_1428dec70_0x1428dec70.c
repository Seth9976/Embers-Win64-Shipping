// 函数: sub_1428dec70
// 地址: 0x1428dec70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rdx = data_143b85ad0
char* rbx = arg4
int32_t var_38
int32_t r8

if (rdx s>= 0)
label_1428ded3c:
    int64_t* rax_3 = sub_1428e3030(arg1, rdx)
    int64_t* rdi_2 = rax_3
    
    if (rax_3 != 0)
    label_1428dee9b:
        
        if (*rdi_2 != 0)
            var_38 = 0x12d
            r8 = 0x64
        else
            int32_t rsi
            
            if (arg2 - 0xc8 u> 6)
                var_38 = 0x16e
                r8 = 0x77
            else
                switch (arg2)
                    case 0xc8
                        if (rbx != 0)
                            int64_t rax_10 = -1
                            
                            do
                                rax_10 += 1
                            while (rbx[rax_10] != 0)
                            
                            if (rax_10 u< 1)
                                rbx = nullptr
                        
                        sub_1428a6780(rdi_2[3])
                        
                        if (rbx == 0)
                            rdi_2[3] = 0
                            return 0
                        
                        int64_t rax_11 = sub_1428a6ba0(rbx)
                        rdi_2[3] = rax_11
                        rsi.b = rax_11 != 0
                        return zx.q(rsi)
                    case 0xc9
                        rsi.b = arg3 != 0
                        rdi_2[4].d = rsi
                        return 1
                    case 0xca
                        if (rbx != 0)
                            int64_t rax_13 = -1
                            
                            do
                                rax_13 += 1
                            while (rbx[rax_13] != 0)
                            
                            if (rax_13 u< 1)
                                rbx = nullptr
                        
                        sub_1428a6780(rdi_2[5])
                        
                        if (rbx == 0)
                            rdi_2[5] = 0
                            return 0
                        
                        int64_t rax_14 = sub_1428a6ba0(rbx)
                        rdi_2[5] = rax_14
                        rsi.b = rax_14 != 0
                        return zx.q(rsi)
                    case 0xcb
                        if (arg3 u<= 2)
                            rdi_2[6].d = arg3
                            return 1
                        
                        var_38 = 0x14a
                        r8 = 0x8f
                    case 0xcc
                        if (arg3 u<= 2)
                            rdi_2[9].d = arg3
                            return 1
                        
                        var_38 = 0x153
                        r8 = 0x8f
                    case 0xcd
                        int64_t rax_15
                        
                        if (rbx != 0)
                            rax_15 = -1
                            
                            do
                                rax_15 += 1
                            while (rbx[rax_15] != 0)
                        
                        if (rbx == 0 || rax_15 u< 1)
                            var_38 = 0x15b
                            r8 = 0x8f
                        else
                            int64_t rax_16 = sub_1428a6ba0(rbx)
                            
                            if (rax_16 != 0)
                                if (sub_142898d50(rdi_2[0xa], rax_16) != 0)
                                    return 1
                                
                                sub_1428a6780(rax_16)
                                r8 = 0x41
                                var_38 = 0x166
                            else
                                var_38 = 0x161
                                r8 = (rax_16 + 0x41).d
                    case 0xce
                        return sub_1428df1b0(arg1, rdi_2)
    else
        int64_t* rax_4 = sub_1428a6a70(zx.q((&rax_3[0xb]).d))
        int32_t r12_1 = (rdi_2 + 1).d
        int64_t* rbp_1 = rax_4
        
        if (rax_4 != 0)
            void* rax_5 = sub_142898ba0()
            rbp_1[0xa] = rax_5
            
            if (rax_5 != 0)
                rbp_1[9].d = r12_1
                rbp_1[7] = "v_check"
                rbp_1[8] = "bind_engine"
                sub_1428a5c40(data_144020538)
                int64_t* rax_6 = sub_1428e3030(arg1, data_143b85ad0)
                rdi_2 = rax_6
                
                if (rax_6 == 0)
                    int32_t rax_7 = sub_1428e3150(arg1, data_143b85ad0, rbp_1)
                    r12_1 = rax_7
                    
                    if (rax_7 != 0)
                        rdi_2 = rbp_1
                        rbp_1 = nullptr
                
                sub_1428a5d00(data_144020538)
                
                if (rbp_1 != 0)
                    sub_142898a10(rbp_1[0xa])
                
                sub_1428a6780(rbp_1)
                
                if (r12_1 != 0 && rdi_2 != 0)
                    goto label_1428dee9b
                
                var_38 = 0x127
                r8 = 0x70
            else
                sub_1428a5670((rax_5 + 0x26).d, 0xb7, (rax_5 + 0x41).d, "crypto\engine\eng_dyn.c", 
                    0xa5)
                sub_1428a6780(rbp_1)
                r8 = 0x70
                var_38 = 0x127
        else
            sub_1428a5670((rdi_2 + 0x26).d, 0xb7, (rdi_2 + 0x41).d, "crypto\engine\eng_dyn.c", 0xa0)
            r8 = (&rdi_2[0xe]).d
            var_38 = 0x127
else
    int32_t rax_1 = sub_1428a6180(0xa, 0, 0, 0, 0, sub_1428df130)
    
    if (rax_1 != 0xffffffff)
        sub_1428a5c40(data_144020538)
        int32_t rax_2 = data_143b85ad0
        CRITICAL_SECTION* rcx_1 = data_144020538
        
        if (rax_2 s< 0)
            rax_2 = rax_1
        
        data_143b85ad0 = rax_2
        sub_1428a5d00(rcx_1)
        rdx = data_143b85ad0
        goto label_1428ded3c
    
    sub_1428a5670(0x26, 0xb5, 0x90, "crypto\engine\eng_dyn.c", 0xd2)
    r8 = 0x70
    var_38 = 0x127

sub_1428a5670(0x26, 0xb4, r8, "crypto\engine\eng_dyn.c", var_38)
return 0
