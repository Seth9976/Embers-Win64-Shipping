// 函数: sub_142891110
// 地址: 0x142891110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* r8 = *arg1
int64_t rax = *(r8 + 0x38)
int32_t rbx_1
int32_t rax_1

if (rax == 0)
    int32_t rax_2 = r8[4]
    
    if (test_bit(rax_2, 0xc))
        int32_t rax_3 = rax_2 & 0xf0007
        
        if (rax_3 u< 6)
        label_14289117a:
            rbx_1 = 0
            
            if (arg2 == 0)
                goto label_1428911b4
            
            int32_t rbx_2 = r8[3]
            
            if (rbx_2 u> 0x10)
                sub_1428bc530()
                noreturn
            
            rax_1 = sub_1428cdfe0(arg2, &arg1[3], rbx_2)
            goto label_1428911b2
        
        if (rax_3 u> 7 && rax_3 != 0x10001)
            if (rax_3 == 0x10002)
                if (*r8 == 0xf6)
                    sub_1428cd2e0(arg2, 5, 0)
                
                return 1
            
            if (rax_3 != 0x10003)
                goto label_14289117a
        
        rbx_1 = -2
        goto label_1428911f9
    
    rbx_1 = -1
label_1428911f9:
    int32_t r8_3 = 0x7a
    
    if (rbx_1 == 0xfffffffe)
        r8_3 = 0xe4
    
    sub_1428a5670(6, 0xcd, r8_3, "crypto\evp\evp_lib.c", 0x2e)
else
    rax_1 = rax()
label_1428911b2:
    rbx_1 = rax_1
label_1428911b4:
    
    if (rbx_1 s<= 0)
        goto label_1428911f9

if (rbx_1 s< 0xffffffff)
    rbx_1 = -1

return zx.q(rbx_1)
