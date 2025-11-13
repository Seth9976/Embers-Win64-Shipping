// 函数: sub_1428c2470
// 地址: 0x1428c2470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char* string_6 = nullptr
void* rbp = nullptr
uint64_t r14 = 0
char* string_1 = arg1
void* string
int32_t i

if (*arg1 != 0x5b)
    char* rax_3 = strrchr(arg1, 0x3a)
    char* string_2 = strchr(string_1, 0x3a)
    string = string_2
    
    if (string_2 != rax_3)
        sub_1428a5670(0x20, 0x88, 0x81, "crypto\bio\b_addr.c", 0x220)
        return 0
    
    i = 0
    
    if (string != 0)
        void* string_5 = string
        string_6 = string_1
        string += 1
        rbp = string_5 - string_1
        void* string_4 = string
        
        if (*string != 0)
            while (i u< 0x80000000)
                string_4 += 1
                i += 1
                
                if (*string_4 == 0)
                    break
        
        goto label_1428c2629
    
    char rcx_2 = *string_1
    
    if (arg4 != 0)
        string = string_1
        
        if (rcx_2 != 0)
            while (i u< 0x80000000)
                string_1 = &string_1[1]
                i += 1
                
                if (*string_1 == 0)
                    break
        
    label_1428c2629:
        r14 = zx.q(i) & 0x7fffffff
        
        if (string != 0 && strchr(string, 0x3a) != 0)
            sub_1428a5670(0x20, 0x88, 0x82, "crypto\bio\b_addr.c", 0x223)
            return 0
    else
        string_6 = string_1
        
        if (rcx_2 != 0)
            while (i u< 0x80000000)
                string_1 = &string_1[1]
                i += 1
                
                if (*string_1 == 0)
                    break
        
        rbp = zx.q(i) & 0x7fffffff
else
    char* rax = strchr(arg1, 0x5d)
    
    if (rax == 0)
        sub_1428a5670(0x20, 0x88, 0x82, "crypto\bio\b_addr.c", 0x223)
        return 0
    
    string_6 = &string_1[1]
    char rax_1 = rax[1]
    rbp = rax - string_6
    
    if (rax_1 != 0)
        if (rax_1 != 0x3a)
            sub_1428a5670(0x20, 0x88, 0x82, "crypto\bio\b_addr.c", 0x223)
            return 0
        
        string = &rax[2]
        i = 0
        void* string_3 = string
        
        if (*string != 0)
            while (i u< 0x80000000)
                string_3 += 1
                i += 1
                
                if (*string_3 == 0)
                    break
        
        goto label_1428c2629
    
    string = nullptr

if (string_6 == 0 || arg2 == 0)
    goto label_1428c2678

if (rbp == 0 || (rbp == 1 && *string_6 == 0x2a))
    *arg2 = nullptr
label_1428c2678:
    
    if (string == 0 || arg3 == 0)
        return 1
    
    if (r14 == 0 || (r14 == 1 && *string == 0x2a))
        *arg3 = nullptr
        return 1
    
    char* rax_6 = sub_1428a6c10(string, r14, "crypto\bio\b_addr.c", 0x218)
    *arg3 = rax_6
    
    if (rax_6 != 0)
        return 1
else
    char* rax_2 = sub_1428a6c10(string_6, rbp, "crypto\bio\b_addr.c", 0x20e)
    *arg2 = rax_2
    
    if (rax_2 != 0)
        goto label_1428c2678

sub_1428a5670(0x20, 0x88, 0x41, "crypto\bio\b_addr.c", 0x226)
return 0
