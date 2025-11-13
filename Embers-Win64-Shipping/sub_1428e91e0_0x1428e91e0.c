// 函数: sub_1428e91e0
// 地址: 0x1428e91e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* result = nullptr
char* rax = sub_1428a6ba0(arg1)
int32_t rcx
int32_t r8_1

if (rax != 0)
    char rdx_1 = *rax
    char* rdi_1 = nullptr
    int32_t rbp_1 = 1
    char* rbx_1 = rax
    char* rsi_1 = rax
    
    if (rdx_1 == 0)
    label_1428e92fd:
        char* rax_4 = sub_1428ea7c0(rsi_1)
        
        if (rbp_1 != 2)
            rdi_1 = rax_4
            
            if (rax_4 != 0)
                rax_4 = nullptr
            label_1428e9398:
                sub_1428e8b00(rdi_1, rax_4, &result)
                sub_1428a6780(rax)
                return result
            
            rcx = 0x168
            r8_1 = 0x6c
        else
            if (rax_4 != 0)
                goto label_1428e9398
            
            rcx = 0x161
            r8_1 = rbp_1 + 0x6b
    else
        while (true)
            if (rdx_1 == 0xd)
                goto label_1428e92fd
            
            if (rdx_1 == 0xa)
                goto label_1428e92fd
            
            if (rbp_1 == 1)
                if (rdx_1 == 0x3a)
                    *rbx_1 = 0
                    rbp_1 = 2
                    char* rax_2 = sub_1428ea7c0(rsi_1)
                    rdi_1 = rax_2
                    
                    if (rax_2 == 0)
                        rcx = 0x13a
                        break
                    
                    rsi_1 = &rbx_1[1]
                else if (rdx_1 == 0x2c)
                    *rbx_1 = 0
                    char* rax_3 = sub_1428ea7c0(rsi_1)
                    rsi_1 = &rbx_1[1]
                    rdi_1 = rax_3
                    
                    if (rax_3 == 0)
                        rcx = 0x144
                        break
                    
                    sub_1428e8b00(rax_3, nullptr, &result)
            else if (rbp_1 == 2 && rdx_1 == 0x2c)
                *rbx_1 = 0
                rbp_1 -= 1
                char* rax_1 = sub_1428ea7c0(rsi_1)
                
                if (rax_1 == 0)
                    rcx = 0x152
                    r8_1 = 0x6d
                    goto label_1428e935c
                
                sub_1428e8b00(rdi_1, rax_1, &result)
                rdi_1 = nullptr
                rsi_1 = &rbx_1[1]
            
            rdx_1 = rbx_1[1]
            rbx_1 = &rbx_1[1]
            
            if (rdx_1 == 0)
                goto label_1428e92fd
        
        r8_1 = 0x6c
else
    rcx = 0x129
    r8_1 = (&rax[0x41]).d

label_1428e935c:
sub_1428a5670(0x22, 0x6d, r8_1, "crypto\x509v3\v3_utl.c", rcx)
sub_1428a6780(rax)
sub_142898cb0(result, sub_1428e8d70)
return nullptr
