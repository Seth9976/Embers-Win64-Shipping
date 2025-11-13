// 函数: sub_140a30a20
// 地址: 0x140a30a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rbx = &data_142d40450
wchar16* wcs1

if (arg1[1].d == 0)
    wcs1 = &data_142d40450
else
    wcs1 = *arg1

wchar16* rax = wcsstr(wcs1, U""")

if (rax != 0)
    int32_t r9_1 = arg1[1].d
    int16_t* const rcx
    
    if (r9_1 == 0)
        rcx = &data_142d40450
    else
        rcx = *arg1
    
    if (((rax - rcx) s>> 1).d != 0xffffffff)
        int32_t var_1c = 0
        int64_t rdx = 0
        int64_t var_28 = 0
        int32_t rcx_1 = 0
        int32_t r8 = 0
        
        if (r9_1 != 0)
            rbx = *arg1
        
        int16_t i = *rbx
        int64_t rbp
        rbp.b = 0
        
        while (i != 0)
            if (rbp.b != 0)
                rbp.b = 0
            else if (i == 0x5c)
                rbp.b = 1
            else if (i == 0x22)
                int32_t rdi_1 = rcx_1 - 1
                
                if (rcx_1 s<= 0)
                    rdi_1 = 0
                
                int32_t rcx_2
                rcx_2.b = rcx_1 s<= 0
                rcx_1 += rcx_2 + 1
                
                if (rcx_1 s> r8)
                    sub_140594770(&var_28)
                    r8 = var_1c
                    rdx = var_28
                
                *(rdx + (sx.q(rdi_1) << 1)) = 0x5c
            
            int16_t rsi_1 = *rbx
            
            if (rsi_1 != 0)
                int32_t rdi_2 = rcx_1 - 1
                
                if (rcx_1 s<= 0)
                    rdi_2 = 0
                
                int32_t rcx_5
                rcx_5.b = rcx_1 s<= 0
                rcx_1 += rcx_5 + 1
                
                if (rcx_1 s> r8)
                    sub_140594770(&var_28)
                    r8 = var_1c
                    rdx = var_28
                
                int64_t rax_6 = sx.q(rdi_2)
                *(rdx + (rax_6 << 1)) = rsi_1
                *(rdx + (rax_6 << 1) + 2) = 0
            
            i = rbx[1]
            rbx = &rbx[1]
        
        *arg2 = rdx
        arg2[1].d = rcx_1
        *(arg2 + 0xc) = r8
        return arg2

sub_140596d10(arg2, arg1)
return arg2
