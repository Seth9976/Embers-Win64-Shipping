// 函数: sub_1428db880
// 地址: 0x1428db880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void** rbx = arg1

if (arg2 != 0)
    void* rax_1 = *(arg2 + 0x18)
    
    if (rax_1 != 0)
        if (arg3 == 0)
            int64_t r8_1 = *(rax_1 + 0x10)
            
            if (r8_1 != 0)
                jump(r8_1)
        else
            int64_t r8 = *(rax_1 + 0x20)
            
            if (r8 != 0)
                r8()
                return 1
    
    int32_t rax_3
    
    if (*arg2 != 5)
        rax_3 = *(arg2 + 4)
        
        if (rax_3 != 0xfffffffc)
            if (rax_3 == 1)
                *arg1 = *(arg2 + 0x20)
                return 1
            
            if (rax_3 == 5)
                *arg1 = 1
                return 1
            
            if (rax_3 != 6)
                goto label_1428db913
            
            *rbx = sub_1428a9570(0)
            return 1
        
        int32_t* rax_10 = sub_1428a6730(0x10)
        
        if (rax_10 == 0)
            sub_1428a5670((rax_10 + 0xd).d, (rax_10 + 0x77).d, (rax_10 + 0x41).d, 
                "crypto\asn1\tasn_new.c", 0x12f)
            return 0
        
        *(rax_10 + 8) = 0
        *rax_10 = 0xffffffff
        *rbx = rax_10
    else
        rax_3 = -1
    label_1428db913:
        void* rcx
        
        if (arg3 == 0)
            void* rax_4 = sub_1428f2e90(rax_3)
            rcx = rax_4
            *rbx = rax_4
        else
            rcx = *arg1
            __builtin_memset(rcx, 0, 0x18)
            *(rcx + 4) = rax_3
            *(rcx + 0x10) = 0x80
        
        if (*arg2 == 5 && rcx != 0)
            *(rcx + 0x10) |= 0x40
    
    if (*rbx != 0)
        return 1

return 0
