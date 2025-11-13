// 函数: sub_1428bf3e0
// 地址: 0x1428bf3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* r10 = *arg1
int64_t rbx = *(r10 + 0xb0)
int32_t var_18
int32_t r8

if (rbx != 0)
    if (r10 == *arg2)
        int32_t rax_1 = arg1[4].d
        int32_t rcx
        
        if (rax_1 != 0)
            rcx = arg2[1].d
        
        if ((rax_1 == 0 || rcx == 0 || rax_1 == rcx) && r10 == *arg3)
            int32_t rcx_1
            
            if (rax_1 != 0)
                rcx_1 = arg3[1].d
            
            if ((rax_1 == 0 || rcx_1 == 0 || rax_1 == rcx_1) && r10 == *arg4)
                int32_t rcx_2
                
                if (rax_1 != 0)
                    rcx_2 = arg4[1].d
                
                if (rax_1 == 0 || rcx_2 == 0 || rax_1 == rcx_2)
                    jump(rbx)
    
    var_18 = 0x31a
    r8 = 0x65
else
    var_18 = 0x315
    r8 = 0x42

sub_1428a5670(0x10, 0x70, r8, "crypto\ec\ec_lib.c", var_18)
return 0
