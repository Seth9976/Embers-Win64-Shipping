// 函数: sub_1428732d0
// 地址: 0x1428732d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rax = *(arg1 + 8)
void* r9 = *(rax + 0xc0)
int32_t rax_4

if ((*(r9 + 0x60) & 8) == 0)
    int32_t rax_1 = *rax
    
    if ((rax_1 s< 0x304 || rax_1 == 0x10000) && *(arg1 + 0x84) - 1 u> 3 && *(arg1 + 0x4d8) != 1)
        rax_4 = (*(r9 + 0x50))(zx.q(arg3))
    else
        rax_4 = sub_142861890(arg3)
else if (*(arg1 + 0x84) - 1 u<= 3 || *(arg1 + 0x4d8) == 1)
    rax_4 = sub_142861890(arg3)
else
    rax_4 = (*(r9 + 0x50))(zx.q(arg3))

int32_t rdi = rax_4

if (*arg1 == 0x300 && rax_4 == 0x46)
    rdi = rax_4 - 0x1e
label_142873351:
    
    if (arg2 == 2)
        void* rdx = *(arg1 + 0x508)
        
        if (rdx != 0)
            sub_1428574b0(*(arg1 + 0x738), rdx)
    
    *(*(arg1 + 0xa8) + 0xfc) = 1
    *(*(arg1 + 0xa8) + 0x100) = arg2.b
    *(*(arg1 + 0xa8) + 0x101) = rdi.b
    
    if (sub_14285b860(arg1 + 0x800) == 0)
        jump(*(*(arg1 + 8) + 0x78))
else if (rdi s>= 0)
    goto label_142873351

return 0xffffffff
