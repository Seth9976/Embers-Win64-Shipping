// 函数: sub_14294f040
// 地址: 0x14294f040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
uint64_t rbx = zx.q(arg3)
int32_t count_1 = 0
int64_t buffer1_1 = 0
void* buffer2 = arg2
uint64_t count = 0
int64_t buffer1 = 0

if (arg7 != sx.q(sub_142897860(arg8)))
    sub_1428a5670(4, 0x91, 0x77, "crypto\rsa\rsa_sign.c", 0x84)
    return 0

int128_t* rax_3 = sub_1428a6730(arg7)
int32_t rbx_1

if (rax_3 != 0)
    int32_t rax_4 = sub_1428975a0(zx.q(arg7.d), arg6, rax_3, arg8, 1)
    int64_t rbp_1 = sx.q(rax_4)
    
    if (rax_4 s<= 0)
        rbx_1 = 0
    else
        int32_t var_48_1
        
        if (arg1 != 0x72)
            if (arg1 != 0x5f || rbp_1.d != 0x12 || *rax_3 != 4 || *(rax_3 + 1) != 0x10)
                if (arg4 == 0)
                    goto label_14294f2c3
                
                void* rax_12 = sub_14289b970(sub_1428a9620(arg1))
                
                if (rax_12 != 0)
                    rbx = zx.q(sub_1428916c0(rax_12))
                    
                    if (rbx u<= rbp_1)
                        buffer2 = rbp_1 - rbx + rax_3
                    label_14294f2c3:
                        int32_t var_48_2 = rbx.d
                        int32_t rax_14 = sub_14294ef20(&buffer1_1, &count_1, arg1, buffer2.d)
                        buffer1 = buffer1_1
                        
                        if (rax_14 == 0)
                            count = zx.q(count_1)
                            rbx_1 = 0
                        else
                            count = sx.q(count_1)
                            int32_t rax_15
                            
                            if (count.d == rbp_1.d)
                                rax_15 = memcmp(buffer1, rax_3, count)
                            
                            if (count.d != rbp_1.d || rax_15 != 0)
                                var_48_1 = 0xdc
                                goto label_14294f150
                            
                            if (arg4 != 0)
                                memcpy(arg4, buffer2, rbx.d)
                                *arg5 = rbx
                            
                            rbx_1 = 1
                    else
                        sub_1428a5670(4, 0x91, 0x8f, "crypto\rsa\rsa_sign.c", 0xd0)
                        rbx_1 = 0
                else
                    sub_1428a5670(4, 0x91, (rax_12 + 0x75).d, "crypto\rsa\rsa_sign.c", 0xca)
                    rbx_1 = 0
            else if (arg4 != 0)
                rbx_1 = (rbp_1 - 0x11).d
                *arg4 = *(rax_3 + 2)
                *arg5 = 0x10
            else if (rbx.d == 0x10)
                if (*buffer2 != *(rax_3 + 2) || *(buffer2 + 8) != *(rax_3 + 0xa))
                    var_48_1 = 0xbd
                    goto label_14294f150
                
                rbx_1 = 1
            else
                sub_1428a5670(4, 0x91, 0x83, "crypto\rsa\rsa_sign.c", 0xb8)
                rbx_1 = 0
        else if (rbp_1.d != 0x24)
            var_48_1 = 0x9b
        label_14294f150:
            sub_1428a5670(4, 0x91, 0x68, "crypto\rsa\rsa_sign.c", var_48_1)
            rbx_1 = 0
        else if (arg4 != 0)
            rbx_1 = 1
            *arg4 = *rax_3
            arg4[1] = rax_3[1]
            arg4[2].d = rax_3[2].d
            *arg5 = 0x24
        else if (rbx.d == 0x24)
            if (memcmp(rax_3, buffer2, 0x24) != 0)
                var_48_1 = 0xa9
                goto label_14294f150
            
            rbx_1 = 1
        else
            sub_1428a5670(4, 0x91, 0x83, "crypto\rsa\rsa_sign.c", 0xa4)
            rbx_1 = 0
else
    sub_1428a5670((rax_3 + 4).d, 0x91, (rax_3 + 0x41).d, "crypto\rsa\rsa_sign.c", 0x8b)
    rbx_1 = 0

sub_1428a6890(buffer1, sx.q(count.d), "crypto\rsa\rsa_sign.c", 0xea)
sub_1428a6890(rax_3, arg7, "crypto\rsa\rsa_sign.c", 0xeb)
return zx.q(rbx_1)
