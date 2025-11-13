// 函数: sub_1428bbd90
// 地址: 0x1428bbd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* result = sub_14289a660(arg1)

if (result == 0)
    return result

int64_t* rax = sub_14289a060(arg1)
int32_t rsi_1

if (arg2 == 1)
    rax[0x10] = 0
    rsi_1 = 1
else if (arg2 == 0xb)
    int64_t* rax_4 = sub_14289a660(arg1)
    void* rax_5 = sub_14289a060(arg1)
    
    if (*(rax_5 + 0x68) == 0 || (*(rax_5 + 0x84) != 0 && *(rax_5 + 0x80) == 0))
    label_1428bc008:
        rsi_1 = sub_142899cf0(result, 0xb, 0, 0)
    else
        sub_142899cc0(arg1, 0xf)
        *(rax_5 + 0x90) = 0
        *(rax_5 + 0x98) = 0
        int32_t rax_6 = *(rax_5 + 0x80)
        
        while (true)
            if (rax_6 != 0)
                int64_t rdx_7 = *(rax_5 + 0x78)
                int32_t i
                int64_t rdi_2
                
                do
                    int32_t rax_7 = sub_14289aa40(rax_4, rdx_7, rax_6)
                    rdi_2 = sx.q(rax_7)
                    
                    if (rax_7 s<= 0)
                        sub_142899cd0(arg1)
                        rsi_1 = rdi_2.d
                        goto label_1428bc037
                    
                    *(rax_5 + 0x78) += rdi_2
                    i = *(rax_5 + 0x80)
                    rdx_7 = *(rax_5 + 0x78)
                    rax_6 = i - rdi_2.d
                    *(rax_5 + 0x80) = rax_6
                while (i != rdi_2.d)
            
            if (*(rax_5 + 0x84) != 0)
                goto label_1428bc008
            
            int64_t rax_8 = *(rax_5 + 0x68)
            *(rax_5 + 0x78) = rax_8
            *(rax_5 + 0xa0) = rax_8
            *(rax_5 + 0xa8) = *(rax_5 + 0x70)
            int32_t rax_10 = sub_14036f750(rax_5 + 0x90, 4)
            
            if (rax_10 != 1)
                if (rax_10 != 0)
                    sub_1428a5670(0x29, 0x63, 0x63, "crypto\comp\c_zlib.c", 0x217)
                    sub_140374310(rax_10)
                    sub_1428a4880(2)
                    rsi_1 = 0
                    break
                
                rax_6 = *(rax_5 + 0x70) - *(rax_5 + 0xa8)
                *(rax_5 + 0x80) = rax_6
            else
                int32_t rax_11 = *(rax_5 + 0x70)
                *(rax_5 + 0x84) = 1
                rax_6 = rax_11 - *(rax_5 + 0xa8)
                *(rax_5 + 0x80) = rax_6
else if (arg2 == 0x65)
    sub_142899cc0(arg1, 0xf)
    rsi_1 = sub_142899cf0(result, 0x65, arg3, arg4)
    sub_142899cd0(arg1)
else if (arg2 == 0x75)
    int32_t rbp_1 = arg3
    int32_t rdi_1
    
    if (arg4 == 0)
        rdi_1 = arg3
    else
        int32_t rax_2 = *arg4
        rdi_1 = -1
        
        if (rax_2 != 0)
            rbp_1 = -1
        
        if (rax_2 != 0)
            rdi_1 = arg3
    
    if (rbp_1 != 0xffffffff)
        sub_1428a6780(*rax)
        *rax = 0
        rax[1].d = rbp_1
    
    if (rdi_1 != 0xffffffff)
        sub_1428a6780(rax[0xd])
        rax[0xd] = 0
        rax[0xe].d = rdi_1
    
    rsi_1 = 1
else
    rsi_1 = sub_142899cf0(result, arg2, arg3, arg4)

label_1428bc037:
return zx.q(rsi_1)
