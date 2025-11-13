// 函数: sub_142891fd0
// 地址: 0x142891fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t var_18
int32_t r8_1

if (arg2 == 0 || *arg2 == 0)
    var_18 = 0x265
    r8_1 = 0x6f
else
    void* rcx = arg2[1]
    int32_t rax_1
    
    if (rcx != 0)
        rax_1 = sub_1428af800(rcx)
    
    if (rcx == 0 || rax_1 != 0)
        sub_1428922e0(arg1)
        *arg1 = *arg2
        *(arg1 + 0x10) = *(arg2 + 0x10)
        *(arg1 + 0x20) = *(arg2 + 0x20)
        *(arg1 + 0x30) = *(arg2 + 0x30)
        *(arg1 + 0x40) = *(arg2 + 0x40)
        *(arg1 + 0x50) = *(arg2 + 0x50)
        *(arg1 + 0x60) = *(arg2 + 0x60)
        *(arg1 + 0x70) = *(arg2 + 0x70)
        *(arg1 + 0x80) = *(arg2 + 0x80)
        *(arg1 + 0x90) = *(arg2 + 0x90)
        
        if (arg2[0xe] == 0)
            goto label_1428920d2
        
        int64_t rcx_2 = sx.q(*(*arg2 + 0x30))
        
        if (rcx_2.d == 0)
            goto label_1428920d2
        
        int64_t rax_3 = sub_1428a6730(rcx_2)
        arg1[0xe] = rax_3
        
        if (rax_3 != 0)
            memcpy(rax_3, arg2[0xe], *(*arg2 + 0x30))
        label_1428920d2:
            int64_t rax_5 = *arg2
            int32_t rax_6
            
            if ((*(rax_5 + 0x10) & 0x400) != 0)
                rax_6 = (*(rax_5 + 0x48))(arg2, 8, 0, arg1)
            
            if ((*(rax_5 + 0x10) & 0x400) == 0 || rax_6 != 0)
                return 1
            
            *arg1 = 0
            r8_1 = 0x86
            var_18 = 0x280
        else
            *arg1 = rax_3
            r8_1 = (rax_3 + 0x41).d
            var_18 = 0x277
    else
        var_18 = 0x26b
        r8_1 = rax_1 + 0x26

sub_1428a5670(6, 0xa3, r8_1, "crypto\evp\evp_enc.c", var_18)
return 0
