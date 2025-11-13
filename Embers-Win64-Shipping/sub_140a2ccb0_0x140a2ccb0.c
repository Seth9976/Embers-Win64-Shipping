// 函数: sub_140a2ccb0
// 地址: 0x140a2ccb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = arg4
sub_140a30c70(arg2, 0)
int16_t* wcs1 = *arg1
void* r15 = -ffffffffffffffff
int64_t rsi = -1

do
    rsi += 1
while (arg3[rsi] != 0)

if (wcs1 == 0 || *wcs1 == 0 || rsi.d == 0)
    return zx.q(arg2[1].d)

wchar16* i_2 = wcsstr(wcs1, arg3)
int32_t r12 = 0
wchar16* i_1 = i_2

if (i_2 != 0)
    wchar16* i
    
    do
        if (rbp == 0 || ((i_1 - wcs1) & 0xfffffffffffffffe) != 0)
            int64_t rsi_1 = sx.q(arg2[1].d)
            int32_t rbp_3 = ((i_1 - wcs1) s>> 1).d
            int32_t rax = (rsi_1 + 1).d
            arg2[1].d = rax
            
            if (rax s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            int64_t* rsi_3 = (rsi_1 << 4) + *arg2
            *rsi_3 = 0
            rsi_3[1] = 0
            
            if (wcs1 != 0 && *wcs1 != 0 && rbp_3 s> 0)
                int32_t rdx_2 = 0
                
                if (rbp_3 + 1 s> 0)
                    sub_1405947f0(rsi_3, rbp_3 + 1)
                    rdx_2 = rsi_3[1].d
                
                int32_t rax_3 = rbp_3 + 1 + rdx_2
                rsi_3[1].d = rax_3
                
                if (rax_3 s> *(rsi_3 + 0xc))
                    sub_140594770(rsi_3)
                
                UnDecorator::getReferenceType(*rsi_3, wcs1, rbp_3 * 2)
                *(*rsi_3 + (sx.q(rsi_3[1].d) << 1) - 2) = 0
            
            rbp = arg4
        
        wcs1 = &i_1[sx.q(rsi.d)]
        i = wcsstr(wcs1, arg3)
        i_1 = i
    while (i != 0)
    
    r15 = i - 1

if (rbp == 0 || *wcs1 != 0)
    int64_t rsi_4 = sx.q(arg2[1].d)
    int32_t rax_5 = (rsi_4 + 1).d
    arg2[1].d = rax_5
    
    if (rax_5 s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
    
    int64_t* rsi_6 = (rsi_4 << 4) + *arg2
    *rsi_6 = 0
    rsi_6[1] = 0
    
    if (wcs1 != 0 && *wcs1 != 0)
        do
            r15 += 1
        while (wcs1[r15] != 0)
        
        if (r15.d + 1 s> 0)
            sub_1405947f0(rsi_6, r15.d + 1)
            r12 = rsi_6[1].d
        
        int32_t rax_6 = r12 + r15.d + 1
        rsi_6[1].d = rax_6
        
        if (rax_6 s> *(rsi_6 + 0xc))
            sub_140594770(rsi_6)
        
        UnDecorator::getReferenceType(*rsi_6, wcs1, (r15.d + 1) * 2)

return zx.q(arg2[1].d)
