// 函数: sub_14292bb60
// 地址: 0x14292bb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
bool cond:0 = data_143fecfd0 != 0
void* rax_1

if (not(cond:0))
    rax_1 = sub_142898b60(sub_142859050)
    data_143fecfd0 = rax_1

if (cond:0 || rax_1 != 0)
    int32_t* rax_2 = sub_14292bd20(arg1)
    int32_t* rbx_1 = rax_2
    
    if (rax_2 == 0 || (rax_2[4].b & 1) == 0)
        int32_t* rax_3 = sub_1428a6a70(0x14)
        
        if (rax_3 != 0)
            if (sub_142898d50(data_143fecfd0, rax_3) != 0)
                int32_t rax_10
                
                if (rbx_1 == 0)
                    *rax_3 = arg1
                    rax_10 = 1
                    *(rax_3 + 4) = -1
                else
                    *rax_3 = *rbx_1
                    rax_3[1] = rbx_1[1]
                    rax_3[2] = rbx_1[2]
                    rax_3[3] = rbx_1[3]
                    rax_10 = rbx_1[4] | 1
                
                rax_3[4] = rax_10
                rbx_1 = rax_3
                goto label_14292bc71
            
            sub_1428a6780(rax_3)
        else
            sub_1428a5670((rax_3 + 0xd).d, 0x8a, (rax_3 + 0x41).d, "crypto\asn1\a_strnid.c", 0xa0)
    else
    label_14292bc71:
        
        if (rbx_1 != 0)
            if (arg2 s>= 0)
                rbx_1[1] = arg2
            
            if (arg3 s>= 0)
                rbx_1[2] = arg3
            
            if (arg4 != 0)
                rbx_1[3] = arg4
            
            if (arg5 != 0)
                rbx_1[4] = arg5 | 1
            
            return 1

sub_1428a5670(0xd, 0x81, 0x41, "crypto\asn1\a_strnid.c", 0xbe)
return 0
