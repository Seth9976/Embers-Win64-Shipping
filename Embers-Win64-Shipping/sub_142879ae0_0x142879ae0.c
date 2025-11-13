// 函数: sub_142879ae0
// 地址: 0x142879ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax = sub_14285b0f0(arg1, arg2, 0)

if (rax == 0)
    sub_142856580(arg1, (rax + 0x2f).d, 0x21c, 0xf8, "ssl\statem\statem_clnt.c", 0x542)
    return 0

if (sub_142863410(arg1, rax, 0x10003, 1) != 0)
    sub_142856580(arg1, 0x2f, 0x21c, 0x105, "ssl\statem\statem_clnt.c", 0x54b)
    return 0

int32_t var_10
int32_t r9

if (sub_1428989f0(sub_142851c90(arg1), rax) s>= 0)
    int32_t* rcx_4 = *(arg1 + 8)
    
    if ((*(*(rcx_4 + 0xc0) + 0x60) & 8) != 0)
    label_142879c24:
        void* rcx_6 = *(arg1 + 0x508)
        void* rax_11 = *(rcx_6 + 0x128)
        
        if (rax_11 != 0)
            *(rcx_6 + 0x130) = *(rax_11 + 0x18)
        
        if (*(arg1 + 0xc8) == 0)
            *(*(arg1 + 0xa8) + 0x238) = rax
            return 1
        
        void* rdx_3 = *(arg1 + 0x508)
        
        if (*(rdx_3 + 0x130) == rax[6])
            *(*(arg1 + 0xa8) + 0x238) = rax
            return 1
        
        int32_t* rcx_7 = *(arg1 + 8)
        int32_t rax_15
        
        if ((*(*(rcx_7 + 0xc0) + 0x60) & 8) == 0)
            rax_15 = *rcx_7
        
        if ((*(*(rcx_7 + 0xc0) + 0x60) & 8) != 0 || rax_15 s< 0x304 || rax_15 == 0x10000)
            var_10 = 0x57a
            r9 = 0xc5
        else
            int64_t rax_17 = sub_14285b4c0((*(*(rdx_3 + 0x128) + 0x40)).b)
            
            if (sub_14285b4c0((rax[0x10]).b) == rax_17)
                *(*(arg1 + 0xa8) + 0x238) = rax
                return 1
            
            var_10 = 0x571
            r9 = 0xda
    else
        int32_t rax_8 = *rcx_4
        
        if (rax_8 s< 0x304 || rax_8 == 0x10000)
            goto label_142879c24
        
        void* rcx_5 = *(*(arg1 + 0xa8) + 0x238)
        
        if (rcx_5 == 0 || *(rcx_5 + 0x18) == rax[6])
            goto label_142879c24
        
        var_10 = 0x55c
        r9 = 0x105
else
    var_10 = 0x554
    r9 = 0x105

sub_142856580(arg1, 0x2f, 0x21c, r9, "ssl\statem\statem_clnt.c", var_10)
return 0
