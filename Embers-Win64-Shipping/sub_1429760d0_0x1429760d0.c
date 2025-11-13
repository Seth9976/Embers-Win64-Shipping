// 函数: sub_1429760d0
// 地址: 0x1429760d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t* rax_2 = sub_142891ee0()
int32_t rbx = 0

if (rax_2 != 0)
    void* rsi_1 = *(arg1 + 8)
    int32_t count_1
    void buffer1
    
    if (sub_14296bb40(rax_2, arg2, *(rsi_1 + 8)) != 0
            && sub_1428918e0(rax_2, &buffer1, &count_1) s> 0)
        if (arg3 == 0)
            int32_t rcx_5 = 0
            
            if (sub_1428f2d50(*(rsi_1 + 0x18), &buffer1, count_1) != 0)
                rcx_5 = 1
            
            rbx = rcx_5
        else
            int32_t* rdx_3 = *(rsi_1 + 0x18)
            uint64_t count = zx.q(count_1)
            
            if (count.d == *rdx_3)
                if (memcmp(&buffer1, *(rdx_3 + 8), count) == 0)
                    rbx = 1
                else
                    sub_1428a5670(0x2e, 0x75, 0x9e, "crypto\cms\cms_dd.c", 0x55)
            else
                sub_1428a5670(0x2e, 0x75, 0x79, "crypto\cms\cms_dd.c", 0x4f)
else
    sub_1428a5670((rax_2 + 0x2e).d, (rax_2 + 0x75).d, (rax_2 + 0x41).d, "crypto\cms\cms_dd.c", 0x40)

sub_142891ea0(rax_2)
__security_check_cookie(rax_1 ^ &var_a8)
return zx.q(rbx)
