// 函数: sub_14290db70
// 地址: 0x14290db70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = *(arg1 + 0x10)
void* rcx

if (rax != 0)
    rcx = *(arg1 + 0x18)

if (rax == 0 || rcx == 0)
    sub_1428a5670(0x10, 0x116, 0x8c, "crypto\ec\ecx_meth.c", 0x298)
else
    void* rax_1 = *(rax + 0x28)
    int64_t rdx
    
    if (rax_1 != 0)
        rdx = *(rax_1 + 0x40)
    
    if (rax_1 == 0 || rdx == 0)
        sub_1428a5670(0x10, 0x116, 0x7b, "crypto\ec\ecx_meth.c", 0x29e)
    else
        int64_t r8 = *(rcx + 0x28)
        
        if (r8 != 0)
            int32_t rax_2
            
            if (arg2 != 0)
                rax_2 = sub_14293df70(arg2, rdx, r8)
            
            if (arg2 == 0 || rax_2 != 0)
                *arg3 = 0x38
                return 1
        else
            sub_1428a5670(0x10, 0x116, 0x85, "crypto\ec\ecx_meth.c", 0x2a2)

return 0
