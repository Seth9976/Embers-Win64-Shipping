// 函数: sub_142b13ea0
// 地址: 0x142b13ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x6b] = arg2
arg1[0x6c].d = arg3
*arg1 = &icu_64::BMPSet::`vftable'
memset(&arg1[1], 0, 0x100)
memset(arg1 + 0x10c, 0, 0x100)
memset(arg1 + 0x20c, 0, 0x100)
int32_t* r9 = arg1[0x6b]
int32_t rdx = 0
int32_t r8_1 = arg1[0x6c].d - 1

if (*r9 s<= 0x800)
    if (r8_1 s> 0 && r9[sx.q(r8_1 - 1)] s> 0x800)
        int32_t rcx_5 = r8_1 s>> 1
        
        if (rcx_5 != 0)
            do
                if (r9[sx.q(rcx_5)] s<= 0x800)
                    rdx = rcx_5
                else
                    r8_1 = rcx_5
                
                rcx_5 = (rdx + r8_1) s>> 1
            while (rcx_5 != rdx)
    
    rdx = r8_1

*(arg1 + 0x30c) = rdx
void* rdi = &arg1[0x62]

for (int32_t i = 1; i s<= 0x10; )
    int64_t j_1 = sx.q(*(rdi - 4))
    int64_t r10_1 = arg1[0x6b]
    int32_t j_2 = arg1[0x6c].d - 1
    int32_t r9_2 = i << 0xc
    
    if (r9_2 s>= *(r10_1 + (j_1 << 2)))
        if (j_1.d s< j_2 && r9_2 s< *(r10_1 + (sx.q(j_2 - 1) << 2)))
            for (int32_t j = (j_1.d + j_2) s>> 1; j != j_1.d; j = (j_1.d + j_2) s>> 1)
                if (r9_2 s>= *(r10_1 + (sx.q(j) << 2)))
                    j_1 = zx.q(j)
                else
                    j_2 = j
        
        j_1 = zx.q(j_2)
    
    *rdi = j_1.d
    i += 1
    rdi += 4

int64_t i_2 = sx.q(arg1[0x69].d)
int32_t i_3 = *(arg1 + 0x34c)
arg1[0x6a].d = arg1[0x6c].d - 1
int64_t r9_3 = arg1[0x6b]

if (*(r9_3 + (i_2 << 2)) s<= 0xfffd)
    if (i_2.d s< i_3 && *(r9_3 + (sx.q(i_3 - 1) << 2)) s> 0xfffd)
        for (int32_t i_1 = (i_2.d + i_3) s>> 1; i_1 != i_2.d; i_1 = (i_2.d + i_3) s>> 1)
            if (*(r9_3 + (sx.q(i_1) << 2)) s<= 0xfffd)
                i_2 = zx.q(i_1)
            else
                i_3 = i_1
    
    i_2 = zx.q(i_3)

i_2.b &= 1
arg1[0x21].b = i_2.b
sub_142b141f0(arg1)
sub_142b14450(arg1)
return arg1
