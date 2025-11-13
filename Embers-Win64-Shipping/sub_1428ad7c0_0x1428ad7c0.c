// 函数: sub_1428ad7c0
// 地址: 0x1428ad7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rdi = nullptr
char* r15 = nullptr

if (sub_1428ad4e0(arg1) != 0)
    uint64_t rsi_3
    
    if (*arg1 != 0)
        rsi_3 = *(arg1 + 0x10)
    else
        rsi_3 = *(arg1 + 0x38) + 0x2f + *(arg1 + 0x50)
    
    if (arg2 == 0)
        return zx.q(rsi_3.d)
    
    char* rcx = *arg2
    char* rax_1
    char* rdx
    
    if (rcx == 0)
        rax_1 = sub_1428a6730(rsi_3)
        rcx = rax_1
        r15 = rax_1
        rdx = rax_1
        
        if (rax_1 != 0)
            goto label_1428ad84a
        
        sub_1428a5670((&rax_1[0x32]).d, (&rax_1[0x6b]).d, (&rax_1[0x41]).d, "crypto\ct\ct_oct.c", 
            0xe5)
    else
        rax_1 = &rcx[rsi_3]
        rdx = rcx
    label_1428ad84a:
        *arg2 = rax_1
        
        if (*arg1 != 0)
            memcpy(rcx, *(arg1 + 8), rsi_3.d)
            return zx.q(rsi_3.d)
        
        *rcx = 0
        void* r14_1 = &rdx[0x2b]
        int128_t* rax_2 = *(arg1 + 0x18)
        *(rdx + 1) = *rax_2
        *(rdx + 0x11) = rax_2[1]
        rdx[0x21] = *(arg1 + 0x2f)
        rdx[0x22] = *(arg1 + 0x2e)
        rdx[0x23] = *(arg1 + 0x2d)
        rdx[0x24] = arg1[0xb].b
        rdx[0x25] = *(arg1 + 0x2b)
        rdx[0x26] = *(arg1 + 0x2a)
        rdx[0x27] = *(arg1 + 0x29)
        rdx[0x28] = arg1[0xa].b
        rdx[0x29] = *(arg1 + 0x39)
        rdx[0x2a] = arg1[0xe].b
        int64_t r8_1 = *(arg1 + 0x38)
        
        if (r8_1 != 0)
            memcpy(r14_1, *(arg1 + 0x30), r8_1.d)
            r14_1 += *(arg1 + 0x38)
        
        if (sub_1428ad680(arg1) == 0)
            sub_1428a5670(0x32, 0x6d, 0x6b, "crypto\ct\ct_oct.c", 0x9f)
            sub_1428a6780(rdi)
        else if (*arg1 == 0)
            uint64_t rbp_2 = *(arg1 + 0x50) + 4
            
            if (r14_1 == 0)
                void* rax_20 = sub_1428a6730(rbp_2)
                rdi = rax_20
                
                if (rax_20 != 0)
                    goto label_1428ad957
                
                sub_1428a5670(0x32, 0x6d, 0x41, "crypto\ct\ct_oct.c", 0xb6)
                sub_1428a6780(rdi)
            else
                rdi = r14_1
            label_1428ad957:
                *rdi = arg1[0x10].b
                *(rdi + 1) = *(arg1 + 0x41)
                *(rdi + 2) = *(arg1 + 0x51)
                *(rdi + 3) = arg1[0x14].b
                memcpy(rdi + 4, *(arg1 + 0x48), (*(arg1 + 0x50)).d)
                
                if (rbp_2.d s> 0)
                    return zx.q(rsi_3.d)
        else
            sub_1428a5670(0x32, 0x6d, 0x67, "crypto\ct\ct_oct.c", 0xa4)
            sub_1428a6780(rdi)
else
    sub_1428a5670(0x32, 0x6b, 0x6a, "crypto\ct\ct_oct.c", 0xce)

sub_1428a6780(r15)
return 0xffffffff
