// 函数: sub_142a52390
// 地址: 0x142a52390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg2

if (arg1 == 0)
    int64_t rax
    rax.b = 0
    return rax

arg2.b = 0xff
int32_t i = arg1(rdi, arg2)

if (i s< 0)
label_142a524ac:
    i.b = 0
else
    while (i != 0x49)
        int32_t rdx
        
        if (i u< 0xd800)
            rdx = (i & 0x1f) + (zx.d(*((sx.q(i) s>> 5 << 1) + &data_143614790)) << 2)
        else if (i u<= 0xffff)
            int32_t rdx_1 = 0
            
            if (i s<= 0xdbff)
                rdx_1 = 0x140
            
            rdx = (i & 0x1f) + (zx.q(*((sx.q(rdx_1 + (i s>> 5)) << 1) + &data_143614790)) << 2).d
        else if (i u> 0x10ffff)
            rdx = 0xd58
        else if (i s< 0xe0800)
            rdx = (i & 0x1f) + (zx.q(*((
                zx.q(zx.d(*((sx.q((i s>> 0xb) + 0x820) << 1) + &data_143614790)) + (i s>> 5 & 0x3f))
                << 1) + &data_143614790)) << 2).d
        else
            rdx = 0x2fd0
        
        int16_t rcx_15 = *((zx.q(rdx) << 1) + &data_143614790)
        uint32_t rax_4
        
        if ((rcx_15.b & 8) != 0)
            rax_4 = zx.d(*((zx.q(rcx_15) u>> 4 << 1) + &data_14361a740)) u>> 7
        else
            rax_4 = zx.d(rcx_15)
        
        if ((rax_4 & 0x60) != 0x60)
            goto label_142a524ac
        
        i = arg1(rdi, 0)
        
        if (i s< 0)
            goto label_142a524ac
    
    i.b = 1

return i
