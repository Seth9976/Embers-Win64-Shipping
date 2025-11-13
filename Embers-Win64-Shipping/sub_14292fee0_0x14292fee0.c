// 函数: sub_14292fee0
// 地址: 0x14292fee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* r14 = *(arg1 + 0xf0)
int32_t rbp = 0

if (sub_142898c70(arg2) == 0)
label_142930001:
    *(arg1 + 0xd0) |= 0x800
    rbp = -1
else
    int32_t rsi_1 = 0
    
    if (sub_142898c70(arg2) s> 0)
        int32_t rax_11
        
        do
            int64_t* rax_2 = sub_142898ea0(arg2, rsi_1)
            
            if (sub_1428a96d0(rax_2[1]) == 0x2ea)
                goto label_142930001
            
            if (sub_1428a96d0(*rax_2) == 0x2ea)
                goto label_142930001
            
            *rax_2
            int64_t* rax_5 = sub_1428f2490(r14)
            int64_t* rbx_1 = rax_5
            
            if (rax_5 != 0)
                *rax_5 |= 1
            label_14292ffdb:
                
                if (sub_142898d50(rbx_1[3], rax_2[1]) == 0)
                    goto label_14293001b
                
                rax_2[1] = 0
            else
                int32_t* rax_6 = *r14
                
                if (rax_6 != 0)
                    int64_t* rax_7 = sub_14292b530(nullptr, *rax_2, *rax_6 & 0x10)
                    rbx_1 = rax_7
                    
                    if (rax_7 == 0)
                        goto label_14293001b
                    
                    int64_t rcx_6 = *(*r14 + 0x10)
                    *rbx_1 |= 6
                    rbx_1[2] = rcx_6
                    
                    if (sub_142898d50(r14[1], rbx_1) != 0)
                        goto label_14292ffdb
                    
                    sub_14292b4d0(rbx_1)
                    goto label_14293001b
            
            rsi_1 += 1
            rax_11 = sub_142898c70(arg2)
        while (rsi_1 s< rax_11)
    
    rbp = 1

label_14293001b:
sub_142898cb0(arg2, sub_142937e00)
return zx.q(rbp)
