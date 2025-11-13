// 函数: sub_142851d80
// 地址: 0x142851d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rbx = nullptr
int64_t* r12 = *(*(arg1 + 0xa8) + 0xe8)
int32_t rax_2 = sub_1428916c0(sub_142891580(r12))
int32_t rsi = 0
int64_t rdi_1

if (rax_2 s>= 0)
    rdi_1 = sx.q(rax_2)

if (rax_2 s< 0 || rdi_1 u> arg3)
    sub_142856580(arg1, 0x50, 0x230, 0x44, "ssl\ssl_lib.c", 0x1139)
else
    int64_t* rax_3 = sub_142891ee0()
    rbx = rax_3
    
    if (rax_3 != 0)
        int32_t rax_4 = sub_142891c70(rax_3, r12)
        int32_t rax_5
        
        if (rax_4 != 0)
            rax_5 = sub_1428918e0(rbx, arg2, nullptr)
        
        if (rax_4 == 0 || rax_5 s<= 0)
            sub_142856580(arg1, 0x50, 0x230, 0x44, "ssl\ssl_lib.c", 0x1144)
        else
            *arg4 = rdi_1
            rsi = 1

sub_142891ea0(rbx)
return zx.q(rsi)
