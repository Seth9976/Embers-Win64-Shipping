// 函数: sub_142932120
// 地址: 0x142932120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char** rbx = nullptr
char** rdi = nullptr
int32_t var_18_1
int16_t* result

if (arg2 == 0)
    if (arg3 == 0)
        sub_1428a5670((&arg2[0x25]).d, 0x86, (&arg3[0x43]).d, "crypto\dso\dso_win32.c", 0x18d)
        return nullptr
    
    int16_t* result_1 = sub_1428a6ba0(arg3)
    result = result_1
    
    if (result_1 != 0)
        goto label_1429322ee
    
    var_18_1 = 0x199
else if (arg3 != 0)
    char** rax_2 = sub_142932820(arg1, arg2, 0)
    rbx = rax_2
    
    if (rax_2 != 0)
        char** rax_3 = sub_142932820(arg1, arg3, 1)
        rdi = rax_3
        
        if (rax_3 == 0)
            sub_1428a5670((rax_3 + 0x25).d, 0x86, (rax_3 + 0x41).d, "crypto\dso\dso_win32.c", 0x1a4)
            sub_1428a6780(rbx)
            return nullptr
        
        if (*rbx == 0 && rbx[2] == 0)
            *rbx = *rax_3
            rbx[1].d = rdi[1].d
            rbx[2] = rdi[2]
            rbx[3].d = rdi[3].d
        
        char* rax_8 = rbx[6]
        
        if (rax_8 != 0)
            char rax_11 = *rax_8
            
            if (rax_11 != 0x5c && rax_11 != 0x2f)
                rbx[4] = rdi[6]
                rbx[5].d = rdi[7].d
        else
            rbx[6] = rdi[6]
            rbx[7].d = rdi[7].d
        
        if (rbx[8] == 0)
            rbx[8] = rdi[8]
            rbx[9].d = rdi[9].d
        
        result = sub_142932500(arg1, rbx)
        goto label_1429322ee
    
    var_18_1 = 0x19f
else
    int16_t* result_2 = sub_1428a6ba0(arg2)
    result = result_2
    
    if (result_2 != 0)
    label_1429322ee:
        sub_1428a6780(rbx)
        sub_1428a6780(rdi)
        return result
    
    var_18_1 = 0x193
sub_1428a5670(0x25, 0x86, 0x41, "crypto\dso\dso_win32.c", var_18_1)
return nullptr
