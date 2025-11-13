// 函数: sub_1428530e0
// 地址: 0x1428530e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x470)
void var_478
int64_t rax_1 = __security_cookie ^ &var_478
int32_t r14 = 0
int64_t var_440 = 0
char* rax_2 = sub_1428b6440(&var_440, arg2)
char* r8 = rax_2

if (rax_2 == 0)
label_14285324f:
    
    if (*_errno() == 0)
        r14 = 1
    else
        sub_1428a5670(2, 0xa, GetLastError(), "ssl\ssl_cert.c", 0x303)
        sub_1428a4880(3)
        sub_1428a5670(0x14, 0xd7, 2, "ssl\ssl_cert.c", 0x305)
else
    while (true)
        int32_t i = 0
        char* rax_3 = r8
        
        if (*r8 != 0)
            while (i u< 0x80000000)
                rax_3 = &rax_3[1]
                i += 1
                
                if (*rax_3 == 0)
                    break
        
        if (sub_142853640(arg2) + 2 + (i & 0x7fffffff) u> 0x400)
            sub_1428a5670(0x14, 0xd7, 0x10e, "ssl\ssl_cert.c", 0x2f4)
            break
        
        int32_t var_458
        var_458.q = r8
        void var_438
        int32_t rax_7
        int512_t zmm1_1
        rax_7, zmm1_1 = sub_1428b7080(&var_438, 0x400, "%s/%s", arg2)
        
        if (rax_7 - 1 u> 0x3fe)
            break
        
        void* var_448 = nullptr
        int32_t rbp_1 = 1
        int64_t rax_9 = sub_142898e00(arg1, sub_142854c80)
        int64_t* rax_10 = sub_14289a500(&data_143507b90)
        
        if (rax_10 != 0)
            if (sub_142899cf0(rax_10, 0x6c, 3, &var_438) == 0)
            label_14285320e:
                rbp_1 = 0
            else
                if (sub_1428a3d00(rax_10, &var_448, 0, nullptr, zmm1_1) != 0)
                    int64_t i_1
                    
                    do
                        int64_t rax_16 = sub_1428a3930(var_448)
                        
                        if (rax_16 == 0)
                            goto label_14285320e_1
                        
                        int64_t rax_17
                        int512_t zmm1_2
                        rax_17, zmm1_2 = sub_1428abf10(rax_16)
                        
                        if (rax_17 == 0)
                            goto label_14285320e_1
                        
                        if (sub_1428989f0(arg1, rax_17) s< 0)
                            if (sub_142898d50(arg1, rax_17) == 0)
                                sub_1428abf30(rax_17)
                                goto label_14285320e_1
                        else
                            sub_1428abf30(rax_17)
                        
                        i_1 = sub_1428a3d00(rax_10, &var_448, 0, nullptr, zmm1_2)
                    while (i_1 != 0)
                
                sub_1428a49e0()
        else
            sub_1428a5670(0x14, 0xd8, 0x41, "ssl\ssl_cert.c", 0x2b6)
        label_14285320e_1:
            rbp_1 = 0
        
        sub_142899e70(rax_10)
        sub_1428a2c50(var_448)
        sub_142898e00(arg1, rax_9)
        
        if (rbp_1 == 0)
            break
        
        char* rax_11 = sub_1428b6440(&var_440, arg2)
        r8 = rax_11
        
        if (rax_11 == 0)
            goto label_14285324f

if (var_440 != 0)
    sub_1428b63e0(&var_440)

__security_check_cookie(rax_1 ^ &var_478)
return zx.q(r14)
