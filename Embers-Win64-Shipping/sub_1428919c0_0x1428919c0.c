// 函数: sub_1428919c0
// 地址: 0x1428919c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rdi = arg2
void* rsi = arg3
sub_142891570(arg1, 2)
void* rcx = arg1[1]
int32_t* rax_1

if (rcx != 0)
    rax_1 = *arg1

if (rcx == 0 || rax_1 == 0 || (rdi != 0 && *rdi != *rax_1))
    int32_t* rax_8
    
    if (rdi == 0)
        rdi = *arg1
        
        if (rdi == 0)
            sub_1428a5670((rdi + 6).d, 0x80, 0x8b, "crypto\evp\digest.c", 0x73)
            return 0
        
        rax_8 = rdi
        goto label_142891aff
    
    sub_1428af710(rcx)
    
    if (rsi == 0)
        rsi = sub_1428ce0c0(*rdi)
    label_142891a6b:
        
        if (rsi != 0)
            int32_t* rax_6 = sub_1428ce060(rsi, *rdi)
            rdi = rax_6
            
            if (rax_6 == 0)
                sub_1428a5670((rax_6 + 6).d, 0x80, 0x86, "crypto\evp\digest.c", 0x64)
                sub_1428af710(rsi)
                return 0
        
        arg1[1] = rsi
        rax_8 = *arg1
    label_142891aff:
        
        if (rax_8 == rdi)
            goto label_142891ba1
        
        if (rax_8 != 0)
            int64_t rcx_8 = sx.q(rax_8[0xf])
            
            if (rcx_8.d != 0)
                sub_1428a6890(arg1[3], rcx_8, "crypto\evp\digest.c", 0x7b)
                arg1[3] = 0
        
        bool cond:0_1 = (arg1[2].d & 0x100) != 0
        *arg1 = rdi
        
        if (not(cond:0_1) && rdi[0xf] != 0)
            arg1[5] = *(rdi + 0x18)
            int64_t rax_11 = sub_1428a6a70(sx.q(rdi[0xf]))
            arg1[3] = rax_11
            
            if (rax_11 == 0)
                sub_1428a5670((rax_11 + 6).d, 0x80, (rax_11 + 0x41).d, "crypto\evp\digest.c", 0x83)
                return 0
        
        goto label_142891ba1
    
    int32_t rax_3 = sub_1428af800(rsi)
    
    if (rax_3 != 0)
        goto label_142891a6b
    
    sub_1428a5670(rax_3 + 6, 0x80, 0x86, "crypto\evp\digest.c", 0x58)
else
label_142891ba1:
    int64_t* rcx_12 = arg1[4]
    int32_t rax_13
    
    if (rcx_12 != 0)
        rax_13 = sub_1428bcb30(rcx_12, 0xffffffff, 0xf8, 7, 0, arg1)
    
    if (rcx_12 == 0 || rax_13 s> 0 || rax_13 == 0xfffffffe)
        if ((arg1[2].d & 0x100) == 0)
            jump(*(*arg1 + 0x10))
        
        return 1

return 0
