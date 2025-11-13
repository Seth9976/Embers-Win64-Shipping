// 函数: sub_1428f64c0
// 地址: 0x1428f64c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 == 0)
    return 0

if ((arg1[4].b & 1) == 0)
    return arg1

int64_t* rax_2 = sub_1428cd4b0()

if (rax_2 == 0)
    sub_1428a5670((&rax_2[1]).d, (rax_2 + 0x65).d, (rax_2 + 0xd).d, "crypto\objects\obj_lib.c", 
        0x1c)
    return 0

rax_2[4].d = arg1[4].d | 0xd
int64_t rax_6 = sx.q(*(arg1 + 0x14))
int64_t rax_7

if (rax_6.d s> 0)
    rax_7 = sub_1428a6af0(arg1[3], rax_6, "crypto\objects\obj_lib.c", 0x26)
    rax_2[3] = rax_7

if (rax_6.d s<= 0 || rax_7 != 0)
    *(rax_2 + 0x14) = *(arg1 + 0x14)
    rax_2[2].d = arg1[2].d
    char* rcx_2 = arg1[1]
    int64_t rax_10
    
    if (rcx_2 != 0)
        rax_10 = sub_1428a6ba0(rcx_2)
        rax_2[1] = rax_10
    
    if (rcx_2 == 0 || rax_10 != 0)
        char* rcx_3 = *arg1
        int64_t rax_11
        
        if (rcx_3 != 0)
            rax_11 = sub_1428a6ba0(rcx_3)
            *rax_2 = rax_11
        
        if (rcx_3 == 0 || rax_11 != 0)
            return rax_2

sub_1428cd400(rax_2)
sub_1428a5670(8, 0x65, 0x41, "crypto\objects\obj_lib.c", 0x35)
return 0
