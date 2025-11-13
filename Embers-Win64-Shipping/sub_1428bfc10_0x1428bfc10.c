// 函数: sub_1428bfc10
// 地址: 0x1428bfc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = *arg1
int64_t r10 = *(rax + 0x88)

if (r10 == 0)
    sub_1428a5670((r10 + 0x10).d, 0x126, (r10 + 0x42).d, "crypto\ec\ec_lib.c", 0x2c8)
    return 0

if (rax == *arg2)
    int32_t rax_2 = arg1[4].d
    int32_t rcx_1
    
    if (rax_2 != 0)
        rcx_1 = arg2[1].d
    
    if (rax_2 == 0 || rcx_1 == 0 || rax_2 == rcx_1)
        int32_t var_18
        var_18.q = arg3
        
        if (r10(arg1) != 0)
            void* rax_4 = *arg1
            int64_t r9_1 = *(rax_4 + 0xd0)
            
            if (r9_1 != 0)
                int32_t rax_5
                int32_t rcx_3
                
                if (rax_4 == *arg2)
                    rcx_3 = arg1[4].d
                    
                    if (rcx_3 != 0)
                        rax_5 = arg2[1].d
                
                if (rax_4 == *arg2 && (rcx_3 == 0 || rax_5 == 0 || rcx_3 == rax_5))
                    if (r9_1(arg1, arg2, arg3) s> 0)
                        return 1
                else
                    sub_1428a5670(0x10, 0x77, 0x65, "crypto\ec\ec_lib.c", 0x358)
            else
                sub_1428a5670(0x10, 0x77, (r9_1 + 0x42).d, "crypto\ec\ec_lib.c", 0x354)
            
            sub_1428a5670(0x10, 0x126, 0x6b, "crypto\ec\ec_lib.c", 0x2d3)
        
        return 0

sub_1428a5670(0x10, 0x126, 0x65, "crypto\ec\ec_lib.c", 0x2cc)
return 0
