// 函数: sub_1428d5930
// 地址: 0x1428d5930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rdi = arg1
void* result = sub_1428a6a70(0x68)

if (result == 0)
    sub_1428a5670((result + 0xa).d, (result + 0x67).d, (result + 0x41).d, "crypto\dsa\dsa_lib.c", 
        0x36)
    return 0

*(result + 0x40) = 1
CRITICAL_SECTION* rax_1 = sub_1428a5be0()
*(result + 0x60) = rax_1

if (rax_1 != 0)
    void* rax_2 = sub_142922da0()
    *(result + 0x50) = rax_2
    *(result + 0x30) = *(rax_2 + 0x40) & 0xfffffbff
    
    if (rdi == 0)
        rdi = sub_1429230d0()
    label_1428d5ab8:
        *(result + 0x58) = rdi
        int64_t rax_11
        
        if (rdi != 0)
            rax_11 = sub_142891590(rdi)
            *(result + 0x50) = rax_11
        
        if (rdi == 0 || rax_11 != 0)
            *(result + 0x30) = *(*(result + 0x50) + 0x40) & 0xfffffbff
            
            if (sub_1428a62f0(7, result, result + 0x48) != 0)
                int64_t rdx_7 = *(*(result + 0x50) + 0x30)
                int32_t rax_15
                
                if (rdx_7 != 0)
                    rax_15 = rdx_7(result)
                
                if (rdx_7 == 0 || rax_15 != 0)
                    return result
                
                sub_1428a5670(0xa, 0x67, rax_15 + 0x46, "crypto\dsa\dsa_lib.c", 0x5c)
        else
            sub_1428a5670(0xa, 0x67, 0x26, "crypto\dsa\dsa_lib.c", 0x50)
    else
        if (sub_1428af800(rdi) != 0)
            goto label_1428d5ab8
        
        sub_1428a5670(0xa, 0x67, 0x26, "crypto\dsa\dsa_lib.c", 0x47)
    
    int32_t rax_6 = *(result + 0x40)
    *(result + 0x40) -= 1
    
    if (rax_6 s<= 1)
        void* rax_8 = *(result + 0x50)
        
        if (rax_8 != 0)
            int64_t rdx_3 = *(rax_8 + 0x38)
            
            if (rdx_3 != 0)
                rdx_3(result)
        
        sub_1428af710(*(result + 0x58))
        sub_1428a5f50(7, result, result + 0x48)
        sub_1428a5ba0(*(result + 0x60))
        sub_14288fbf0(*(result + 8))
        sub_14288fbf0(*(result + 0x10))
        sub_14288fbf0(*(result + 0x18))
        sub_14288fbf0(*(result + 0x20))
        sub_14288fbf0(*(result + 0x28))
        sub_1428a6780(result)
else
    sub_1428a5670((&rax_1->LockCount + 2).d, (rax_1 + 0x67).d, (rax_1 + 0x41).d, 
        "crypto\dsa\dsa_lib.c", 0x3d)
    sub_1428a6780(result)

return 0
