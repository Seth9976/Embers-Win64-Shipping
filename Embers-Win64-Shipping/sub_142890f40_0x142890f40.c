// 函数: sub_142890f40
// 地址: 0x142890f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* r8 = *arg1
int64_t rax = *(r8 + 0x40)
int32_t rbx_1

if (rax == 0)
    int32_t rax_2 = *(r8 + 0x10)
    
    if (test_bit(rax_2, 0xc))
        int32_t rax_3 = rax_2 & 0xf0007
        
        if (rax_3 u>= 6)
            if (rax_3 u> 7 && rax_3 != 0x10001)
                if (rax_3 == 0x10002)
                    return 1
                
                if (rax_3 != 0x10003)
                    goto label_142890fb4
            
            rbx_1 = -2
            goto label_142891032
        
    label_142890fb4:
        rbx_1 = 0
        
        if (arg2 == 0)
            goto label_142891004
        
        uint32_t count = *(r8 + 0xc)
        
        if (count u> 0x10)
            sub_1428bc530()
            noreturn
        
        int32_t rax_4 = sub_1428cded0(arg2, &arg1[3], count)
        rbx_1 = rax_4
        
        if (rax_4 != count)
            goto label_142891018
        
        if (rax_4 s> 0)
            memcpy(&arg1[5], &arg1[3], count)
        
        goto label_142891004
    
label_142891018:
    rbx_1 = -1
label_142891032:
    int32_t r8_4 = 0x7a
    
    if (rbx_1 == 0xfffffffe)
        r8_4 = 0x6b
    
    sub_1428a5670(6, 0xcc, r8_4, "crypto\evp\evp_lib.c", 0x51)
else
    rbx_1 = rax()
label_142891004:
    
    if (rbx_1 s<= 0)
        goto label_142891032

if (rbx_1 s< 0xffffffff)
    rbx_1 = -1

return zx.q(rbx_1)
