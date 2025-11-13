// 函数: sub_14291bca0
// 地址: 0x14291bca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = -1
char rax = *arg3

if (rax == 1 || rax == 6)
    void* r8 = *(arg3 + 0x18)
    
    if (r8 != 0 && (*(r8 + 8) & 1) != 0)
        int64_t rax_1 = *arg1
        int32_t* rcx_1 = sx.q(*(r8 + 0xc)) + rax_1
        CRITICAL_SECTION** rdi_1 = sx.q(*(r8 + 0x10)) + rax_1
        
        if (arg2 == 0xffffffff)
            int32_t rbx_4 = *rcx_1
            *rcx_1 -= 1
            rbx = rbx_4 - 1
            
            if (rbx_4 == 1)
                sub_1428a5ba0(*rdi_1)
                *rdi_1 = nullptr
        else if (arg2 == 0)
            rbx = 1
            *rcx_1 = 1
            CRITICAL_SECTION* rax_3 = sub_1428a5be0()
            *rdi_1 = rax_3
            
            if (rax_3 == 0)
                sub_1428a5670(0xd, 0xe9, 0x41, "crypto\asn1\tasn_utl.c", 0x4f)
                return 0xffffffff
        else if (arg2 == 1)
            int32_t rbx_2 = *rcx_1
            *rcx_1 += arg2
            return zx.q(rbx_2 + 1)
        
        return zx.q(rbx)

return 0
