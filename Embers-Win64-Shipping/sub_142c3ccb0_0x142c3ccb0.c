// 函数: sub_142c3ccb0
// 地址: 0x142c3ccb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_142c3ae60(arg2, arg1, 4)

if (rax == 0)
    return rax

int32_t r9 = *(arg3 + 0x10)

if (r9 == 0)
    *(arg1 + 2) = r9.w
    rax.b = 1
    return rax

int32_t rbx = 1
int32_t r11 = 1
int32_t r8 = 1

if (r9 u> 1)
    do
        int128_t* const rdx_1
        
        if (r8 - 1 u< r9)
            rdx_1 = *(arg3 + 8) + (zx.q(r8 - 1) << 1)
        else
            rdx_1 = &data_14369a5d0
        
        int128_t* const r10_1
        
        if (r8 u< r9)
            r10_1 = *(arg3 + 8) + (zx.q(r8) << 1)
        else
            r10_1 = &data_14369a5d0
        
        if (zx.d(*(rdx_1 + 1)) + (zx.d(*rdx_1) << 8) + 1
                != (zx.d(*r10_1) << 8) + zx.d(*(r10_1 + 1)))
            r11 += 1
        
        r8 += 1
    while (r8 u< r9)

uint16_t rax_5 = r11.w u>> 8
*(arg1 + 3) = r11.b
*(arg1 + 2) = rax_5.b
int128_t* rax_7 =
    sub_142c3ae60(arg2, arg1 + 2, ((zx.q(((zx.d(rax_5.b) << 8) + zx.d(r11.b)) * 3) << 1) + 2).d)

if (rax_7 != 0)
    uint64_t r8_3 = 0
    int128_t* const rdx_5 = &data_14369a5d0
    
    if (*(arg3 + 0x10) u> 0)
        rdx_5 = *(arg3 + 8)
    
    int128_t* rcx_15
    
    if (zx.d(*(arg1 + 3)) != neg.d(zx.d(*(arg1 + 2)) << 8))
        rcx_15 = arg1 + 4
    else
        rcx_15 = &data_144017550
        data_144017550.d = 0x100
        data_144017550:4.w = 0
    
    *rcx_15 = *rdx_5
    
    if (zx.d(*(arg1 + 2)) << 8 != neg.d(zx.d(*(arg1 + 3))))
        rax_7 = arg1 + 4
    else
        data_144017550.d = 0x100
        data_144017550:4.w = 0
        rax_7 = &data_144017550
    
    *(rax_7 + 4) = 0
    int32_t r9_1 = *(arg3 + 0x10)
    
    if (r9_1 u> 1)
        do
            int128_t* const r10_2
            
            if (rbx - 1 u< r9_1)
                r10_2 = *(arg3 + 8) + (zx.q(rbx - 1) << 1)
            else
                r10_2 = &data_14369a5d0
            
            int128_t* const rax_14
            
            if (rbx u< r9_1)
                rax_14 = *(arg3 + 8) + (zx.q(rbx) << 1)
            else
                rax_14 = &data_14369a5d0
            
            if ((zx.d(*r10_2) << 8) + 1 + zx.d(*(r10_2 + 1))
                    != zx.d(*(rax_14 + 1)) + (zx.d(*rax_14) << 8))
                r8_3 = zx.q(r8_3.d + 1)
                int128_t* const rdx_8
                
                if (rbx u< r9_1)
                    rdx_8 = *(arg3 + 8) + (zx.q(rbx) << 1)
                else
                    rdx_8 = &data_14369a5d0
                
                int128_t* rcx_29
                
                if (r8_3.d u< (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3)))
                    rcx_29 = arg1 + 2 + (((r8_3 << 1) + 1 + zx.q(r8_3.d)) << 1)
                else
                    rcx_29 = &data_144017550
                    data_144017550.d = 0x100
                    data_144017550:4.w = 0
                
                *rcx_29 = *rdx_8
                void* rcx_35
                
                if (r8_3.d u< (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3)))
                    rcx_35 = arg1 + 2 + (((r8_3 << 1) + 1 + zx.q(r8_3.d)) << 1)
                else
                    rcx_35 = &data_144017550
                    data_144017550.d = 0x100
                    data_144017550:4.w = 0
                
                *(rcx_35 + 5) = rbx.b
                *(rcx_35 + 4) = (rbx.w u>> 8).b
            
            int128_t* const rdx_9
            
            if (rbx u< *(arg3 + 0x10))
                rdx_9 = *(arg3 + 8) + (zx.q(rbx) << 1)
            else
                rdx_9 = &data_14369a5d0
            
            int128_t* rcx_41
            
            if (r8_3.d u< zx.d(*(arg1 + 3)) + (zx.d(*(arg1 + 2)) << 8))
                rcx_41 = arg1 + 2 + (((r8_3 << 1) + 1 + zx.q(r8_3.d)) << 1)
            else
                rcx_41 = &data_144017550
                data_144017550.d = 0x100
                data_144017550:4.w = 0
            
            rbx += 1
            *(rcx_41 + 2) = *rdx_9
            r9_1 = *(arg3 + 0x10)
        while (rbx u< r9_1)
    
    rax_7.b = 1

return rax_7
