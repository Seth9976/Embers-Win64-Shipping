// 函数: sub_1428c7310
// 地址: 0x1428c7310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t arg_10 = *arg2
int32_t* rax_1 = sub_1428c3710(nullptr, &arg_10, arg3)
arg_10 = *arg2
int32_t rax_2 = sub_142898c70(rax_1)
int32_t rbp

if (rax_2 != 6)
    if (sub_142898c70(rax_1) != 4)
        if (sub_142898c70(rax_1) == 3)
            void* rax_5 = sub_1428f1150(nullptr, &arg_10, arg3)
            sub_142898cb0(rax_1, sub_1428c3620)
            
            if (rax_5 != 0)
                int64_t* rax_7 = sub_1428f1170(rax_5)
                sub_1428f1010(rax_5)
                
                if (rax_7 != 0)
                    *arg2 = arg_10
                    
                    if (arg1 != 0)
                        *arg1 = rax_7
                    
                    return rax_7
            else
                sub_1428a5670((rax_5 + 0xd).d, 0xcf, 0xa7, "crypto\asn1\d2i_pr.c", 0x6d)
            
            return 0
        
        rbp = 6
    else
        rbp = 0x198
else
    rbp = rax_2 + 0x6e

sub_142898cb0(rax_1, sub_1428c3620)
int64_t arg_20 = *arg2
int32_t* rbx_2

if (arg1 != 0)
    rbx_2 = *arg1

if (arg1 == 0 || rbx_2 == 0)
    int32_t* rax_12 = sub_1428968f0()
    rbx_2 = rax_12
    
    if (rax_12 != 0)
        goto label_1428c7460
    
    sub_1428a5670((rax_12 + 0xd).d, 0x9a, (rax_12 + 6).d, "crypto\asn1\d2i_pr.c", 0x1d)
else
    sub_1428af710(*(rbx_2 + 0x18))
    *(rbx_2 + 0x18) = 0
label_1428c7460:
    int32_t rax_11 = sub_142896cb0(rbx_2, rbp)
    
    if (rax_11 != 0)
        int64_t r9_1 = *(*(rbx_2 + 0x10) + 0xb8)
        int32_t rax_14
        
        if (r9_1 != 0)
            rax_14 = r9_1(rbx_2, &arg_20, zx.q(arg3))
        
        if (r9_1 != 0 && rax_14 != 0)
            goto label_1428c751c
        
        if (*(*(rbx_2 + 0x10) + 0x40) == 0)
            sub_1428a5670(0xd, 0x9a, 0xd, "crypto\asn1\d2i_pr.c", 0x3c)
        else
            void* rax_16 = sub_1428f1150(nullptr, &arg_20, arg3)
            
            if (rax_16 != 0)
                int32_t* rax_17 = sub_1428f1170(rax_16)
                sub_1428f1010(rax_16)
                
                if (rax_17 != 0)
                    sub_1428965a0(rbx_2)
                    rbx_2 = rax_17
                label_1428c751c:
                    *arg2 = arg_20
                    
                    if (arg1 != 0)
                        *arg1 = rbx_2
                    
                    return rbx_2
    else
        sub_1428a5670(rax_11 + 0xd, 0x9a, 0xa3, "crypto\asn1\d2i_pr.c", 0x29)
    
    if (arg1 == 0 || *arg1 != rbx_2)
        sub_1428965a0(rbx_2)

return nullptr
