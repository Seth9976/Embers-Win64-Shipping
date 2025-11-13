// 函数: sub_142a52cd0
// 地址: 0x142a52cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg1)
char r10 = 0
int32_t rcx

if (r9.d u< 0xd800)
    rcx = (r9.d & 0x1f) + (zx.d(*((r9 s>> 5 << 1) + &data_143614790)) << 2)
else if (r9.d u<= 0xffff)
    int32_t rcx_1 = 0
    
    if (r9.d s<= 0xdbff)
        rcx_1 = 0x140
    
    rcx = (r9.d & 0x1f) + (zx.q(*((sx.q((r9.d s>> 5) + rcx_1) << 1) + &data_143614790)) << 2).d
else if (r9.d u> 0x10ffff)
    rcx = 0xd58
else if (r9.d s< 0xe0800)
    rcx = (r9.d & 0x1f) + (zx.q(*((
        zx.q(zx.d(*((sx.q((r9.d s>> 0xb) + 0x820) << 1) + &data_143614790)) + (r9.d s>> 5 & 0x3f))
        << 1) + &data_143614790)) << 2).d
else
    rcx = 0x2fd0

int16_t rcx_5 = *((zx.q(rcx) << 1) + &data_143614790)

if ((rcx_5.b & 8) != 0)
    uint64_t rax_23 = zx.q(rcx_5) u>> 4
    int16_t rdx = *(&data_14361a740 + (rax_23 << 1))
    
    if (rdx s< 0)
        if ((arg2 & 7) != 0)
            if (r9.d == 0x49)
                return 0x131
            
            if (r9.d == 0x130)
                return 0x69
        else
            if (r9.d == 0x49)
                return 0x69
            
            if (r9.d == 0x130)
                return zx.q(r9.d)
    
    if ((0x200 & rdx) == 0)
        if ((rdx.b & 0x10) != 0 && (rcx_5.b & 2) != 0)
            uint64_t rax_29 = zx.q(*((zx.q(rdx) & 0xf) + 0x14361b7d0))
            uint32_t rcx_6
            
            if ((0x100 & rdx) != 0)
                rcx_6 = zx.d(*(&data_14361a740 + (rax_23 << 1) + (rax_29 << 2) + 2)) << 0x10
                    | zx.d(*(&data_14361a740 + (rax_23 << 1) + (rax_29 << 2) + 4))
            else
                rcx_6 = zx.d(*(&data_14361a740 + (rax_23 << 1) + (rax_29 << 1) + 2))
            
            if ((0x400 & rdx) != 0)
                return zx.q(r9.d - rcx_6)
            
            return zx.q(r9.d + rcx_6)
        
        if ((rdx.b & 2) != 0)
            r10 = 1
        label_142a52e99:
            
            if ((0x100 & rdx) == 0)
                return zx.q(*(&data_14361a740 + (rax_23 << 1)
                    + (zx.q(*((sx.q((1 << r10) - 1) & zx.q(rdx)) + 0x14361b7d0)) << 1) + 2))
            
            uint64_t rax_41 = zx.q(*((sx.q((1 << r10) - 1) & zx.q(rdx)) + 0x14361b7d0))
            r9 = zx.q(zx.d(*(&data_14361a740 + (rax_23 << 1) + (rax_41 << 2) + 2)) << 0x10)
                | zx.q(*(&data_14361a740 + (rax_23 << 1) + (rax_41 << 2) + 4))
        else if ((1 & rdx.b) != 0)
            goto label_142a52e99
else if ((rcx_5.b & 2) != 0)
    return zx.q(r9.d + (sx.d(rcx_5) s>> 7))

return zx.q(r9.d)
