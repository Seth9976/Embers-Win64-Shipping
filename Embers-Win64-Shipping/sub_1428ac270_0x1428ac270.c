// 函数: sub_1428ac270
// 地址: 0x1428ac270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
__chkstk(0x68)
int64_t* rdi = arg1
int32_t* r13 = nullptr
int32_t rbp = -1
int32_t arg_20 = 0
int32_t arg_18 = 0xffffffff
int64_t** r14 = nullptr
sub_1428a6780(arg1[3])
int32_t* rcx_1 = *rdi
rdi[3] = 0

if (sub_142898c70(rcx_1) == 0)
    rdi[4].d = 0
    return 1

int32_t* rax_2 = sub_142898ba0()

if (rax_2 != 0)
    int32_t rsi_1 = 0
    int32_t arg_10 = 0
    
    if (sub_142898c70(*rdi) s<= 0)
    label_1428ac55c:
        int32_t rax_19 = sub_1428ac1a0(rax_2, nullptr)
        r14 = nullptr
        
        if (rax_19 s>= 0)
            rdi[4].d = rax_19
            int64_t rax_20 = sub_1428a6730(sx.q(rax_19))
            int64_t var_58 = rax_20
            
            if (rax_20 != 0)
                rdi[3] = rax_20
                int32_t rbx_4 = 0
                
                if (sub_142898c70(rax_2) s> 0)
                    int32_t rax_24
                    
                    do
                        arg_8 = sub_142898ea0(rax_2, rbx_4)
                        
                        if (sub_1428c6210(&arg_8, &var_58, &data_143504aa0, 0xffffffff, 0xffffffff)
                                s< 0)
                            break
                        
                        rbx_4 += 1
                        rax_24 = sub_142898c70(rax_2)
                    while (rbx_4 s< rax_24)
                
                arg_20 = 1
            else
                sub_1428a5670(0xb, 0x9c, 0x41, "crypto\x509\x_name.c", 0x168)
    else
        int32_t var_68_1
        
        while (true)
            int64_t* rax_4 = sub_142898ea0(*rdi, rsi_1)
            
            if (rax_4[2].d != rbp)
                int32_t* rax_5 = sub_142898ba0()
                r13 = rax_5
                
                if (rax_5 == 0)
                    r14 = nullptr
                    goto label_1428ac633
                
                if (sub_142898d50(rax_2, rax_5) == 0)
                    sub_142898a10(r13)
                    sub_1428a5670(0xb, 0x9c, 0x41, "crypto\x509\x_name.c", 0x148)
                    r14 = nullptr
                    goto label_1428ac633
                
                arg_18 = rax_4[2].d
            
            int64_t** rax_8 = sub_1428db530(&data_143504a50)
            r14 = rax_8
            
            if (rax_8 == 0)
                var_68_1 = 0x14f
                break
            
            int64_t* rax_9 = sub_1428f64c0(*rax_4)
            *r14 = rax_9
            
            if (rax_9 == 0)
                var_68_1 = 0x154
                break
            
            int32_t* rbx_2 = rax_4[1]
            int32_t* r15_1 = r14[1]
            
            if ((sub_1428c42e0(rbx_2[1]) & 0x2956) != 0)
                r15_1[1] = 0xc
                int32_t i_2 = sub_1428f6be0(&r15_1[2], rbx_2)
                *r15_1 = i_2
                int32_t i = i_2
                
                if (i_2 == 0xffffffff)
                    goto label_1428ac633
                
                char* rbx_3 = *(r15_1 + 8)
                
                if (i_2 s> 0)
                    do
                        if (sub_1428e4710(zx.d(*rbx_3), 8) == 0)
                            break
                        
                        rbx_3 = &rbx_3[1]
                        i -= 1
                    while (i s> 0)
                
                if (i s> 0)
                    void* rdi_3 = sx.q(i) - 1 + rbx_3
                    
                    do
                        if (sub_1428e4710(zx.d(*rdi_3), 8) == 0)
                            break
                        
                        rdi_3 -= 1
                        i -= 1
                    while (i s> 0)
                
                char* rsi_2 = *(r15_1 + 8)
                int32_t rdi_4 = 0
                int32_t rax_14 = rsi_2.d
                
                if (i s> 0)
                    do
                        uint32_t rcx_12 = zx.d(*rbx_3)
                        
                        if ((rcx_12 & 0xffffff80) == 0)
                            if (sub_1428e4710(rcx_12, 8) == 0)
                                *rsi_2 = sub_1428e4730(zx.d(*rbx_3))
                                goto label_1428ac4b3
                            
                            *rsi_2 = 0x20
                            rsi_2 = &rsi_2[1]
                            int32_t i_1
                            
                            do
                                uint32_t rcx_13 = zx.d(rbx_3[1])
                                rbx_3 = &rbx_3[1]
                                rdi_4 += 1
                                i_1 = sub_1428e4710(rcx_13, 8)
                            while (i_1 != 0)
                        else
                            *rsi_2 = rcx_12.b
                        label_1428ac4b3:
                            rsi_2 = &rsi_2[1]
                            rbx_3 = &rbx_3[1]
                            rdi_4 += 1
                    while (rdi_4 s< i)
                    
                    rax_14 = r15_1[2]
                
                rdi = arg_8
                *r15_1 = rsi_2.d - rax_14
                rsi_1 = arg_10
            else if (sub_1428f2a00(r15_1, rbx_2) == 0)
                goto label_1428ac633
            
            if (sub_142898d50(r13, r14) == 0)
                var_68_1 = 0x15a
                break
            
            rsi_1 += 1
            arg_10 = rsi_1
            
            if (rsi_1 s>= sub_142898c70(*rdi))
                goto label_1428ac55c
            
            rbp = arg_18
        
        sub_1428a5670(0xb, 0x9c, 0x41, "crypto\x509\x_name.c", var_68_1)
else
    sub_1428a5670((rax_2 + 0xb).d, 0x9c, (rax_2 + 0x41).d, "crypto\x509\x_name.c", 0x13d)

label_1428ac633:
sub_1428c3d60(r14, &data_143504a50)
sub_142898cb0(rax_2, sub_1428ac250)
return zx.q(arg_20)
