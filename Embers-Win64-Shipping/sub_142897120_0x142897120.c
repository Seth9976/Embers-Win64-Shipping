// 函数: sub_142897120
// 地址: 0x142897120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rdi = arg1
void* result = sub_1428a6a70(0xb0)

if (result == 0)
    sub_1428a5670((result + 4).d, (result + 0x6a).d, (result + 0x41).d, "crypto\rsa\rsa_lib.c", 
        0x37)
    return 0

*(result + 0x70) = 1
CRITICAL_SECTION* rax_1 = sub_1428a5be0()
*(result + 0xa8) = rax_1

if (rax_1 != 0)
    void* rax_2 = sub_1428d85e0()
    *(result + 8) = rax_2
    *(result + 0x74) = *(rax_2 + 0x48) & 0xfffffbff
    
    if (rdi == 0)
        rdi = sub_1428d8730()
    label_142897318:
        *(result + 0x10) = rdi
        int64_t rax_11
        
        if (rdi != 0)
            rax_11 = sub_14060aa60(rdi)
            *(result + 8) = rax_11
        
        if (rdi == 0 || rax_11 != 0)
            *(result + 0x74) = *(*(result + 8) + 0x48) & 0xfffffbff
            
            if (sub_1428a62f0(9, result, result + 0x68) != 0)
                int64_t rdx_8 = *(*(result + 8) + 0x38)
                int32_t rax_15
                
                if (rdx_8 != 0)
                    rax_15 = rdx_8(result)
                
                if (rdx_8 == 0 || rax_15 != 0)
                    return result
                
                sub_1428a5670(4, 0x6a, rax_15 + 0x46, "crypto\rsa\rsa_lib.c", 0x5e)
        else
            sub_1428a5670(4, 0x6a, 0x26, "crypto\rsa\rsa_lib.c", 0x52)
    else
        if (sub_1428af800(rdi) != 0)
            goto label_142897318
        
        sub_1428a5670(4, 0x6a, 0x26, "crypto\rsa\rsa_lib.c", 0x48)
    
    int32_t rax_6 = *(result + 0x70)
    *(result + 0x70) -= 1
    
    if (rax_6 s<= 1)
        void* rax_8 = *(result + 8)
        
        if (rax_8 != 0)
            int64_t rdx_3 = *(rax_8 + 0x40)
            
            if (rdx_3 != 0)
                rdx_3(result)
        
        sub_1428af710(*(result + 0x10))
        sub_1428a5f50(9, result, result + 0x68)
        sub_1428a5ba0(*(result + 0xa8))
        sub_14288fbf0(*(result + 0x18))
        sub_14288fbf0(*(result + 0x20))
        sub_14288fbf0(*(result + 0x28))
        sub_14288fbf0(*(result + 0x30))
        sub_14288fbf0(*(result + 0x38))
        sub_14288fbf0(*(result + 0x40))
        sub_14288fbf0(*(result + 0x48))
        sub_14288fbf0(*(result + 0x50))
        sub_1428979d0(*(result + 0x60))
        sub_142898cb0(*(result + 0x58), sub_1428d8930)
        sub_1428d6b20(*(result + 0x98))
        sub_1428d6b20(*(result + 0xa0))
        sub_1428a6780(*(result + 0x90))
        sub_1428a6780(result)
else
    sub_1428a5670((&rax_1->DebugInfo + 4).d, (rax_1 + 0x6a).d, (rax_1 + 0x41).d, 
        "crypto\rsa\rsa_lib.c", 0x3e)
    sub_1428a6780(result)

return 0
