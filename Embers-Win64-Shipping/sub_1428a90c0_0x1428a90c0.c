// 函数: sub_1428a90c0
// 地址: 0x1428a90c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x68)
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
uint64_t i = 0
int32_t rax_2

if (arg2 != 0)
    rax_2 = sub_1428a9c80(arg2)

int32_t rax_3

if ((arg2 == 0 || rax_2 == 0) && arg3 != 0)
    rax_3 = sub_1428a9380(arg3)

uint64_t result

if ((arg2 == 0 || rax_2 == 0) && (arg3 == 0 || rax_3 == 0))
    result = sub_1428a9db0(arg1, 1)
    char** result_1 = result
    
    if (result != 0)
        if (sub_1428a96d0(result_1) == 0)
            bool cond:0_1 = data_143fecad8 != 0
            int32_t rcx_4 = data_143b852a8
            result_1[2].d = rcx_4
            *result_1 = arg2
            result_1[1] = arg3
            data_143b852a8 = rcx_4 + 1
            int128_t var_58
            __builtin_memset(&var_58, 0, 0x20)
            int64_t* rax_6
            
            if (not(cond:0_1))
                rax_6 = sub_1428a8c10(sub_1428aa0b0, sub_1428a9fc0)
                data_143fecad8 = rax_6
            
            if (cond:0_1 || rax_6 != 0)
                int64_t* rax_7 = sub_1428f64c0(result_1)
                
                if (rax_7 == 0)
                    goto label_1428a931e
                
                int64_t rax_8 = sub_1428a6730(0x10)
                int128_t var_48
                var_48:8.q = rax_8
                
                if (rax_8 == 0)
                label_1428a92f5:
                    sub_1428a5670(8, 0x69, 0x41, "crypto\objects\obj_dat.c", 0xd4)
                label_1428a931e:
                    
                    do
                        sub_1428a6780(*(&var_58 + (i << 3)))
                        i += 1
                    while (i s<= 3)
                    
                    sub_1428cd400(rax_7)
                    i = 0
                else
                    int64_t rax_9
                    
                    if (*(rax_7 + 0x14) != 0 && result_1[3] != 0)
                        rax_9 = sub_1428a6730(0x10)
                        var_58.q = rax_9
                    
                    if (*(rax_7 + 0x14) != 0 && result_1[3] != 0 && rax_9 == 0)
                        goto label_1428a92f5
                    
                    int64_t rax_10
                    
                    if (*rax_7 != 0)
                        rax_10 = sub_1428a6730(0x10)
                        var_58:8.q = rax_10
                    
                    if (*rax_7 != 0 && rax_10 == 0)
                        goto label_1428a92f5
                    
                    int64_t rax_11
                    
                    if (rax_7[1] != 0)
                        rax_11 = sub_1428a6730(0x10)
                        var_48.q = rax_11
                    
                    if (rax_7[1] != 0 && rax_11 == 0)
                        goto label_1428a92f5
                    
                    int32_t** rdi_1 = &var_58
                    
                    do
                        int32_t* rdx_4 = *rdi_1
                        
                        if (rdx_4 != 0)
                            int64_t* rcx_6 = data_143fecad8
                            *rdx_4 = i.d
                            *(rdx_4 + 8) = rax_7
                            sub_1428a6780(sub_1428a8a90(rcx_6, rdx_4))
                        
                        i = zx.q(i.d + 1)
                        rdi_1 = &rdi_1[1]
                    while (i.d s<= 3)
                    
                    rax_7[4].d &= 0xfffffff2
                    i = zx.q(rax_7[2].d)
            
            *result_1 = nullptr
            result_1[1] = 0
        else
            sub_1428a5670(8, 0x64, 0x66, "crypto\objects\obj_dat.c", 0x2c5)
        
        sub_1428cd400(result_1)
        result = zx.q(i.d)
else
    sub_1428a5670(8, 0x64, 0x66, "crypto\objects\obj_dat.c", 0x2ba)
    result = 0

__security_check_cookie(rax_1 ^ &var_88)
return result
