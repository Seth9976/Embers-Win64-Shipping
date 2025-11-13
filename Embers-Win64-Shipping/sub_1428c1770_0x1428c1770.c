// 函数: sub_1428c1770
// 地址: 0x1428c1770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rdi = arg1
void* result = sub_1428a6a70(0x90)

if (result == 0)
    sub_1428a5670((result + 5).d, (result + 0x69).d, (result + 0x41).d, "crypto\dh\dh_lib.c", 0x2f)
    return 0

*(result + 0x68) = 1
CRITICAL_SECTION* rax_1 = sub_1428a5be0()
*(result + 0x88) = rax_1

if (rax_1 != 0)
    void* rax_2 = sub_14291a860()
    *(result + 0x78) = rax_2
    *(result + 0x30) = *(rax_2 + 0x30)
    
    if (rdi == 0)
        rdi = sub_14291a870()
    label_1428c1929:
        *(result + 0x80) = rdi
        int64_t rax_10
        
        if (rdi != 0)
            rax_10 = sub_1427ec4a0(rdi)
            *(result + 0x78) = rax_10
        
        if (rdi == 0 || rax_10 != 0)
            *(result + 0x30) = *(*(result + 0x78) + 0x30)
            
            if (sub_1428a62f0(6, result, result + 0x70) != 0)
                int64_t rdx_8 = *(*(result + 0x78) + 0x20)
                int32_t rax_14
                
                if (rdx_8 != 0)
                    rax_14 = rdx_8(result)
                
                if (rdx_8 == 0 || rax_14 != 0)
                    return result
                
                sub_1428a5670(5, 0x69, rax_14 + 0x46, "crypto\dh\dh_lib.c", 0x55)
        else
            sub_1428a5670(5, 0x69, 0x26, "crypto\dh\dh_lib.c", 0x49)
    else
        if (sub_1428af800(rdi) != 0)
            goto label_1428c1929
        
        sub_1428a5670(5, 0x69, 0x26, "crypto\dh\dh_lib.c", 0x40)
    
    int32_t rax_5 = *(result + 0x68)
    *(result + 0x68) -= 1
    
    if (rax_5 s<= 1)
        void* rax_7 = *(result + 0x78)
        
        if (rax_7 != 0)
            int64_t rdx_3 = *(rax_7 + 0x28)
            
            if (rdx_3 != 0)
                rdx_3(result)
        
        sub_1428af710(*(result + 0x80))
        sub_1428a5f50(6, result, result + 0x70)
        sub_1428a5ba0(*(result + 0x88))
        sub_14288fbf0(*(result + 8))
        sub_14288fbf0(*(result + 0x10))
        sub_14288fbf0(*(result + 0x40))
        sub_14288fbf0(*(result + 0x48))
        sub_1428a6780(*(result + 0x50))
        sub_14288fbf0(*(result + 0x60))
        sub_14288fbf0(*(result + 0x20))
        sub_14288fbf0(*(result + 0x28))
        sub_1428a6780(result)
else
    sub_1428a5670((&rax_1->DebugInfo + 5).d, (rax_1 + 0x69).d, (rax_1 + 0x41).d, 
        "crypto\dh\dh_lib.c", 0x36)
    sub_1428a6780(result)

return 0
