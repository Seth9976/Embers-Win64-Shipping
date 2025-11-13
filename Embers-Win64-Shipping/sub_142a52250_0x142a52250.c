// 函数: sub_142a52250
// 地址: 0x142a52250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg2

if (arg1 == 0)
    int64_t rax
    rax.b = 0
    return rax

arg2.b = 0xff
int32_t rax_1 = arg1(rdi, arg2)

if (rax_1 s< 0)
label_142a52368:
    rax_1.b = 0
else
    while (true)
        int32_t rdx
        
        if (rax_1 u< 0xd800)
            rdx = (rax_1 & 0x1f) + (zx.d(*((sx.q(rax_1) s>> 5 << 1) + &data_143614790)) << 2)
        else if (rax_1 u<= 0xffff)
            int32_t rdx_1 = 0
            
            if (rax_1 s<= 0xdbff)
                rdx_1 = 0x140
            
            rdx = (rax_1 & 0x1f)
                + (zx.q(*((sx.q(rdx_1 + (rax_1 s>> 5)) << 1) + &data_143614790)) << 2).d
        else if (rax_1 u> 0x10ffff)
            rdx = 0xd58
        else if (rax_1 s< 0xe0800)
            rdx = (rax_1 & 0x1f) + (zx.q(*((zx.q(
                zx.d(*((sx.q((rax_1 s>> 0xb) + 0x820) << 1) + &data_143614790))
                + (rax_1 s>> 5 & 0x3f)) << 1) + &data_143614790)) << 2).d
        else
            rdx = 0x2fd0
        
        int16_t rcx_15 = *((zx.q(rdx) << 1) + &data_143614790)
        uint32_t rax_5
        
        if ((rcx_15.b & 8) != 0)
            rax_5 = zx.d(*((zx.q(rcx_15) u>> 4 << 1) + &data_14361a740)) u>> 7
        else
            rax_5 = zx.d(rcx_15)
        
        rax_1 = rax_5 & 0x60
        
        if (rax_1 == 0x20)
            rax_1.b = 1
            break
        
        if (rax_1 != 0x60)
            goto label_142a52368
        
        rax_1 = arg1(rdi, 0)
        
        if (rax_1 s< 0)
            goto label_142a52368

return rax_1
