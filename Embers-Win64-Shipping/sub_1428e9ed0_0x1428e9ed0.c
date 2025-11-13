// 函数: sub_1428e9ed0
// 地址: 0x1428e9ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint64_t count = arg2

if (arg2 != arg4)
label_1428e9f74:
    return 0

if (arg2 != 0)
    char* r8 = arg3 + arg2
    void* rax_2 = arg1 - arg3
    
    while (true)
        r8 -= 1
        count -= 1
        char* rcx = rax_2 + r8
        
        if (*(rax_2 + r8) == 0x40)
            r8 = count + arg3
        else if (*r8 != 0x40)
            if (count == 0)
                break
            
            continue
        
        uint64_t rdx = arg2 - count
        
        if (sub_1428e9fa0(rcx, rdx, r8, rdx, 0) == 0)
            goto label_1428e9f74
        
        goto label_1428e9f55

label_1428e9f55:

if (count == 0)
    count = arg2

int32_t rbp_1
rbp_1.b = memcmp(arg1, arg3, count) == 0
return zx.q(rbp_1)
