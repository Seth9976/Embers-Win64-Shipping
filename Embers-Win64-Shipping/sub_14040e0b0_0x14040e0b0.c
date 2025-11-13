// 函数: sub_14040e0b0
// 地址: 0x14040e0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int32_t var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t r8 = sx.q(*(arg1 + 0x122c))
var_d8 = *(arg2 + 0x1104)
void* r14 = arg1
int64_t var_a8 = arg4
uint64_t count = r8 * 0x490
int64_t rax_3 = count + 0xf

if (rax_3 u<= count)
    rax_3 = 0xffffffffffffff0

int64_t rax_4 = rax_3 & 0xfffffffffffffff0
__chkstk(rax_4)
void var_1a8
void* rsp_1 = &var_1a8 - rax_4
memset(rsp_1 + 0xd0, 0, count)
char* rsi = nullptr
int32_t i = 0

if (*(r14 + 0x122c) s> 0)
    void* rdx = rsp_1 + 0x558
    
    do
        int32_t rax_5 = sx.d(*(arg3 + 0x22))
        *(rdx + 4) = 0
        int32_t rax_7 = (rax_5 + i) & 3
        *(rdx - 4) = rax_7
        *rdx = rax_7
        *(rdx - 8) = *(arg2 + 0x1100)
        *(rdx - 0xc8) = *(arg2 + (sx.q(*(r14 + 0x1208)) << 2) + 0x4fc)
        *(rdx - 0x488) = *(arg2 + 0xf00)
        *(rdx - 0x484) = *(arg2 + 0xf04)
        *(rdx - 0x480) = *(arg2 + 0xf08)
        *(rdx - 0x47c) = *(arg2 + 0xf0c)
        *(rdx - 0x478) = *(arg2 + 0xf10)
        *(rdx - 0x474) = *(arg2 + 0xf14)
        *(rdx - 0x470) = *(arg2 + 0xf18)
        *(rdx - 0x46c) = *(arg2 + 0xf1c)
        *(rdx - 0x468) = *(arg2 + 0xf20)
        *(rdx - 0x464) = *(arg2 + 0xf24)
        *(rdx - 0x460) = *(arg2 + 0xf28)
        *(rdx - 0x45c) = *(arg2 + 0xf2c)
        *(rdx - 0x458) = *(arg2 + 0xf30)
        *(rdx - 0x454) = *(arg2 + 0xf34)
        *(rdx - 0x450) = *(arg2 + 0xf38)
        *(rdx - 0x44c) = *(arg2 + 0xf3c)
        *(rdx - 0x448) = *(arg2 + 0xf40)
        *(rdx - 0x444) = *(arg2 + 0xf44)
        *(rdx - 0x440) = *(arg2 + 0xf48)
        *(rdx - 0x43c) = *(arg2 + 0xf4c)
        *(rdx - 0x438) = *(arg2 + 0xf50)
        *(rdx - 0x434) = *(arg2 + 0xf54)
        *(rdx - 0x430) = *(arg2 + 0xf58)
        *(rdx - 0x42c) = *(arg2 + 0xf5c)
        *(rdx - 0x428) = *(arg2 + 0xf60)
        *(rdx - 0x424) = *(arg2 + 0xf64)
        *(rdx - 0x420) = *(arg2 + 0xf68)
        *(rdx - 0x41c) = *(arg2 + 0xf6c)
        *(rdx - 0x418) = *(arg2 + 0xf70)
        *(rdx - 0x414) = *(arg2 + 0xf74)
        *(rdx - 0x410) = *(arg2 + 0xf78)
        *(rdx - 0x40c) = *(arg2 + 0xf7c)
        *(rdx - 0x48) = *(arg2 + 0x10c0)
        *(rdx - 0x44) = *(arg2 + 0x10c4)
        *(rdx - 0x40) = *(arg2 + 0x10c8)
        i += 1
        rdx += 0x490
        *(rdx - 0x4cc) = *(arg2 + 0x10cc)
        *(rdx - 0x4c8) = *(arg2 + 0x10d0)
        *(rdx - 0x4c4) = *(arg2 + 0x10d4)
        *(rdx - 0x4c0) = *(arg2 + 0x10d8)
        *(rdx - 0x4bc) = *(arg2 + 0x10dc)
        *(rdx - 0x4b8) = *(arg2 + 0x10e0)
        *(rdx - 0x4b4) = *(arg2 + 0x10e4)
        *(rdx - 0x4b0) = *(arg2 + 0x10e8)
        *(rdx - 0x4ac) = *(arg2 + 0x10ec)
        *(rdx - 0x4a8) = *(arg2 + 0x10f0)
        *(rdx - 0x4a4) = *(arg2 + 0x10f4)
        *(rdx - 0x4a0) = *(arg2 + 0x10f8)
        *(rdx - 0x49c) = *(arg2 + 0x10fc)
    while (i s< *(r14 + 0x122c))

int64_t rdx_1 = sx.q(*(arg3 + 0x1d))
int64_t rax_58 = sx.q(*(arg3 + 0x1e))
int32_t r8_1 = *(r14 + 0x1204)
int32_t r13 = r8_1
int32_t r12 = 0
int32_t var_d0 = 0
int32_t rax_59 = sx.d(*(&data_1436fc948 + ((rax_58 + (rdx_1 s>> 1 << 1)) << 1)))

if (r8_1 s> 0x20)
    r13 = 0x20

int32_t var_cc = r13
int32_t rax_61

if (rdx_1.b != 2)
    int32_t rax_62 = var_d8
    
    if (rax_62 s> 0)
        rax_61 = rax_62 - 3
        
        if (r13 s< rax_61)
            rax_61 = r13
        
        r13 = rax_61
        var_cc = rax_61
else
    int64_t rdx_2 = sx.q(*(r14 + 0x11fc))
    int64_t rcx_5 = 0
    
    if (rdx_2 s> 0)
        do
            rax_61 = arg13[rcx_5] - 3
            
            if (r13 s< rax_61)
                rax_61 = r13
            
            rcx_5 += 1
            r13 = rax_61
        while (rcx_5 s< rdx_2)
        
        r8_1 = *(r14 + 0x1204)
        var_cc = rax_61
int64_t rdx_3 = sx.q(*(r14 + 0x1208))
int32_t rax_63
rax_63.b = *(arg3 + 0x1f) != 4
int64_t r9 = sx.q(*(r14 + 0x1200) + rdx_3.d)
int64_t rax_66 = r9 << 2
int64_t rcx_6 = rax_66 + 0xf

if (rcx_6 u<= rax_66)
    rcx_6 = 0xffffffffffffff0

int64_t rcx_7 = rcx_6 & 0xfffffffffffffff0
__chkstk(rcx_7)
void* rsp_2 = rsp_1 - rcx_7
int64_t rax_69 = r9 * 2
int64_t rcx_8 = rax_69 + 0xf

if (rcx_8 u<= rax_69)
    rcx_8 = 0xffffffffffffff0

int64_t rcx_9 = rcx_8 & 0xfffffffffffffff0
__chkstk(rcx_9)
void* rsp_3 = rsp_2 - rcx_9
int64_t rax_73 = sx.q(r8_1) << 2
int64_t rcx_10 = rax_73 + 0xf

if (rcx_10 u<= rax_73)
    rcx_10 = 0xffffffffffffff0

int64_t rcx_11 = rcx_10 & 0xfffffffffffffff0
__chkstk(rcx_11)
void* rsp_4 = rsp_3 - rcx_11
*(arg2 + 0x110c) = rdx_3.d
uint64_t rdx_4 = 0
void* var_b0 = arg2 + (rdx_3 << 1)
int64_t r15_1 = sx.q(r13)
*(arg2 + 0x1108) = *(r14 + 0x1208)
int32_t rdi_1 = 0
int32_t var_d4 = 0
int64_t var_58 = r15_1
int32_t r10 = 1
int64_t var_c8

if (*(r14 + 0x11fc) s<= 0)
    var_c8 = arg5
else
    int32_t r9_1 = rax_63
    int32_t* r8_3 = arg13
    int32_t* var_98_1 = arg13
    int32_t r11_1 = 1 - r9_1
    int32_t var_90_1 = r11_1
    var_c8 = arg5
    
    while (true)
        int64_t rax_86 = arg6 + (sx.q((rdx_4.d s>> 1 | r11_1) << 4) << 1)
        int64_t rax_89 = arg7 + (sx.q((rdx_4 * 5).d) << 1)
        int64_t rax_93 = arg8 + (sx.q(rdx_4.d << 4) << 1)
        int32_t rax_95 = *(arg9 - arg13 + r8_3)
        *(arg2 + 0x1118) = 0
        
        if (*(arg3 + 0x1d) == 2)
            var_d8 = *r8_3
            
            if ((rdx_4.d & (3 - r9_1 * 2)) == 0)
                if (rdx_4.d == 2)
                    int32_t r11_2 = *(r14 + 0x122c)
                    int64_t rdi_2 = 0
                    void* rcx_23 = rsp_1 + 0x55c
                    int64_t r8_4 = 1
                    int32_t r9_2 = *rcx_23
                    
                    if (r11_2 s> 1)
                        void* rdx_5 = rsp_1 + 0x9ec
                        uint64_t i_3 = zx.q(r11_2 - 1)
                        uint64_t i_1
                        
                        do
                            int32_t rax_100 = *rdx_5
                            
                            if (rax_100 s< r9_2)
                                r9_2 = rax_100
                                rdi_2 = r8_4
                            
                            r8_4 += 1
                            rdx_5 += 0x490
                            i_1 = i_3
                            i_3 -= 1
                        while (i_1 != 1)
                    
                    int32_t i_2 = 0
                    int64_t rax_101 = 0
                    
                    if (r11_2 s> 0)
                        do
                            if (rax_101 != rdi_2)
                                *rcx_23 += 0x7ffffff
                            
                            i_2 += 1
                            rax_101 += 1
                            rcx_23 += 0x490
                        while (i_2 s< *(r14 + 0x122c))
                    
                    int32_t r13_1 = r13 + r12
                    char* r9_3 = nullptr
                    void* rdi_4 = rdi_2 * 0x490 + rsp_1 + 0xd0
                    
                    if (r15_1 s> 0)
                        void* r11_4 = var_b0 - var_58 * 2
                        
                        do
                            r13_1 = (r13_1 - 1) & 0x1f
                            int64_t r15_2 = sx.q(r13_1)
                            r9_3[var_c8 - var_58] =
                                (((*(rdi_4 + (r15_2 << 2) + 0x240) s>> 9) + 1) s>> 1).b
                            int32_t rdx_6 = *(rdi_4 + (r15_2 << 2) + 0x2c0)
                            int32_t r10_1 = sx.d(*(arg12 + 4))
                            int32_t r8_8 = ((*(arg12 + 4) s>> 0xf) + 1) s>> 1
                            int16_t rcx_32
                            
                            if (((((((zx.d(rdx_6.w) * r10_1) s>> 0x10) + (rdx_6 s>> 0x10) * r10_1
                                    + r8_8 * rdx_6) s>> 0xd) + 1) & 0xfffffffe) s> 0xfffe)
                                rcx_32 = 0x7fff
                            else if (((((((zx.d(rdx_6.w) * r10_1) s>> 0x10)
                                    + (rdx_6 s>> 0x10) * r10_1 + r8_8 * rdx_6) s>> 0xd) + 1) & 0xfffffffe)
                                    s>= 0xffff0000)
                                rcx_32 = ((((((zx.d(rdx_6.w) * r10_1) s>> 0x10)
                                    + (rdx_6 s>> 0x10) * r10_1 + r8_8 * rdx_6) s>> 0xd) + 1) s>> 1).w
                            else
                                rcx_32 = -0x8000
                            
                            *r11_4 = rcx_32
                            r11_4 += 2
                            r9_3 = &r9_3[1]
                            *(arg2 + (&r9_3[sx.q(*(arg2 + 0x110c)) - var_58] << 2) + 0x500) =
                                *(rdi_4 + (r15_2 << 2) + 0x3c0)
                        while (r9_3 s< var_58)
                        
                        r14 = arg1
                        r15_1 = var_58
                        rsi = nullptr
                    
                    r13 = var_cc
                    rdx_4 = zx.q(var_d4)
                    rdi_1 = 0
                
                int32_t r8_10 = *(r14 + 0x1238)
                int32_t r9_4 = *(r14 + 0x1208)
                int32_t rax_122 = *(r14 + 0x1204) * rdx_4.d
                *(rsp_4 - 0x60) = r8_10
                sub_1403e77a0(rsp_3 + 0xd0 + (sx.q(r9_4 - r8_10 - var_d8 - 2) << 1), 
                    arg2 + (sx.q(rax_122 + r9_4 - r8_10 - var_d8 - 2) << 1), rax_86, 
                    zx.q(r9_4 - (r9_4 - r8_10 - var_d8 - 2)))
                rdx_4 = zx.q(var_d4)
                *(arg2 + 0x1108) = *(r14 + 0x1208)
                *(arg2 + 0x1118) = 1
        
        int32_t rax_127 = sx.d(*(arg3 + 0x1d))
        *(rsp_4 - 0x18) = r13
        *(rsp_4 - 0x20) = rax_127
        *(rsp_4 - 0x28) = arg13
        *(rsp_4 - 0x30) = arg12
        *(rsp_4 - 0x38) = arg15
        *(rsp_4 - 0x40) = *(r14 + 0x122c)
        *(rsp_4 - 0x48) = rdx_4.d
        *(rsp_4 - 0x50) = rsp_2 + 0xd0
        *(rsp_4 - 0x58) = rsp_3 + 0xd0
        *(rsp_4 - 0x60) = rsp_4 + 0xd0
        sub_14040fe50(r14, arg2, rsp_1 + 0xd0, var_a8)
        uint64_t r8_13 = zx.q(sx.d(*(arg3 + 0x1d)))
        *(rsp_4 + 0x48) = r13
        *(rsp_4 + 0x40) = &var_d0
        *(rsp_4 + 0x38) = *(r14 + 0x122c)
        *(rsp_4 + 0x30) = *(r14 + 0x1260)
        *(rsp_4 + 0x28) = *(r14 + 0x1238)
        *(rsp_4 + 0x20) = *(r14 + 0x1234)
        int32_t rax_139 = *(r14 + 0x1204)
        *(rsp_4 + 0x18) = rdi_1
        *(rsp_4 + 0x10) = rax_139
        *(rsp_4 + 8) = rax_59
        *rsp_4 = arg14
        *(rsp_4 - 8) = *(arg12 - arg13 + var_98_1)
        *(rsp_4 - 0x10) = *(arg11 - arg13 + var_98_1)
        *(rsp_4 - 0x18) = *(arg10 - arg13 + var_98_1)
        *(rsp_4 - 0x20) = rax_95 s>> 1 << 0x10 | rax_95 s>> 2
        *(rsp_4 - 0x28) = var_d8
        *(rsp_4 - 0x30) = rax_93
        *(rsp_4 - 0x38) = rax_89
        *(rsp_4 - 0x40) = rax_86
        *(rsp_4 - 0x48) = rsp_4 + 0x50
        *(rsp_4 - 0x50) = rsp_2 + 0xd0
        *(rsp_4 - 0x58) = var_b0
        *(rsp_4 - 0x60) = var_c8
        sub_14040eeb0(arg2, rsp_1 + 0xd0, r8_13, rsp_4 + 0xd0)
        int64_t rax_156 = sx.q(*(r14 + 0x1204))
        rdi_1 += 1
        var_c8 += rax_156
        var_a8 += rax_156 << 2
        rdx_4 = zx.q(var_d4 + 1)
        r8_3 = &var_98_1[1]
        var_b0 += rax_156 << 1
        r12 = var_d0
        var_d4 = rdx_4.d
        var_98_1 = r8_3
        r10 = 1
        
        if (rdx_4.d s>= *(r14 + 0x11fc))
            break
        
        r9_1 = rax_63
        r11_1 = var_90_1

int32_t r8_15 = *(r14 + 0x122c)
int32_t r9_8 = 0
int32_t rdx_11 = *(rsp_1 + 0x55c)

if (r8_15 s> 1)
    void* rax_158 = rsp_1 + 0x9ec
    
    do
        int32_t rcx_62 = *rax_158
        
        if (rcx_62 s< rdx_11)
            rdx_11 = rcx_62
            r9_8 = r10
        
        r10 += 1
        rax_158 += 0x490
    while (r10 s< r8_15)

void* r9_11 = sx.q(r9_8) * 0x490 + rsp_1 + 0xd0
int32_t r11_6 = r12 + r13
*(arg3 + 0x22) = *(r9_11 + 0x488)
int32_t rcx_66 = *(arg12 + (sx.q(*(r14 + 0x11fc)) << 2) - 4) s>> 6

if (r15_1 s> 0)
    int32_t r8_16 = sx.d(rcx_66.w)
    void* r12_7 = var_b0 - r15_1 * 2
    int32_t r10_5 = ((rcx_66 s>> 0xf) + 1) s>> 1
    
    do
        r11_6 = (r11_6 - 1) & 0x1f
        int64_t rdi_5 = sx.q(r11_6)
        rsi[var_c8 - r15_1] = (((*(r9_11 + (rdi_5 << 2) + 0x240) s>> 9) + 1) s>> 1).b
        int32_t rdx_12 = *(r9_11 + (rdi_5 << 2) + 0x2c0)
        int16_t rax_171
        
        if (((((((zx.d(rdx_12.w) * r8_16) s>> 0x10) + (rdx_12 s>> 0x10) * r8_16 + r10_5 * rdx_12)
                s>> 7) + 1) & 0xfffffffe) s> 0xfffe)
            rax_171 = 0x7fff
        else if (((((((zx.d(rdx_12.w) * r8_16) s>> 0x10) + (rdx_12 s>> 0x10) * r8_16
                + r10_5 * rdx_12) s>> 7) + 1) & 0xfffffffe) s>= 0xffff0000)
            rax_171 = ((((((zx.d(rdx_12.w) * r8_16) s>> 0x10) + (rdx_12 s>> 0x10) * r8_16
                + r10_5 * rdx_12) s>> 7) + 1) s>> 1).w
        else
            rax_171 = -0x8000
        
        *r12_7 = rax_171
        r12_7 += 2
        rsi = &rsi[1]
        *(arg2 + (&rsi[sx.q(*(arg2 + 0x110c)) - r15_1] << 2) + 0x500) =
            *(r9_11 + (rdi_5 << 2) + 0x3c0)
    while (rsi s< r15_1)
    
    r14 = arg1

int64_t rax_185 = sx.q(*(r14 + 0x1204))
void* rcx_91 = r9_11 + (rax_185 << 2)
*(arg2 + 0xf00) = *(r9_11 + (rax_185 << 2))
*(arg2 + 0xf04) = *(rcx_91 + 4)
*(arg2 + 0xf08) = *(rcx_91 + 8)
*(arg2 + 0xf0c) = *(rcx_91 + 0xc)
*(arg2 + 0xf10) = *(rcx_91 + 0x10)
*(arg2 + 0xf14) = *(rcx_91 + 0x14)
*(arg2 + 0xf18) = *(rcx_91 + 0x18)
*(arg2 + 0xf1c) = *(rcx_91 + 0x1c)
*(arg2 + 0xf20) = *(rcx_91 + 0x20)
*(arg2 + 0xf24) = *(rcx_91 + 0x24)
*(arg2 + 0xf28) = *(rcx_91 + 0x28)
*(arg2 + 0xf2c) = *(rcx_91 + 0x2c)
*(arg2 + 0xf30) = *(rcx_91 + 0x30)
*(arg2 + 0xf34) = *(rcx_91 + 0x34)
*(arg2 + 0xf38) = *(rcx_91 + 0x38)
*(arg2 + 0xf3c) = *(rcx_91 + 0x3c)
*(arg2 + 0xf40) = *(rcx_91 + 0x40)
*(arg2 + 0xf44) = *(rcx_91 + 0x44)
*(arg2 + 0xf48) = *(rcx_91 + 0x48)
*(arg2 + 0xf4c) = *(rcx_91 + 0x4c)
*(arg2 + 0xf50) = *(rcx_91 + 0x50)
*(arg2 + 0xf54) = *(rcx_91 + 0x54)
*(arg2 + 0xf58) = *(rcx_91 + 0x58)
*(arg2 + 0xf5c) = *(rcx_91 + 0x5c)
*(arg2 + 0xf60) = *(rcx_91 + 0x60)
*(arg2 + 0xf64) = *(rcx_91 + 0x64)
*(arg2 + 0xf68) = *(rcx_91 + 0x68)
*(arg2 + 0xf6c) = *(rcx_91 + 0x6c)
*(arg2 + 0xf70) = *(rcx_91 + 0x70)
*(arg2 + 0xf74) = *(rcx_91 + 0x74)
*(arg2 + 0xf78) = *(rcx_91 + 0x78)
*(arg2 + 0xf7c) = *(rcx_91 + 0x7c)
*(arg2 + 0x10c0) = *(r9_11 + 0x440)
*(arg2 + 0x10c4) = *(r9_11 + 0x444)
*(arg2 + 0x10c8) = *(r9_11 + 0x448)
*(arg2 + 0x10cc) = *(r9_11 + 0x44c)
*(arg2 + 0x10d0) = *(r9_11 + 0x450)
*(arg2 + 0x10d4) = *(r9_11 + 0x454)
*(arg2 + 0x10d8) = *(r9_11 + 0x458)
*(arg2 + 0x10dc) = *(r9_11 + 0x45c)
*(arg2 + 0x10e0) = *(r9_11 + 0x460)
*(arg2 + 0x10e4) = *(r9_11 + 0x464)
*(arg2 + 0x10e8) = *(r9_11 + 0x468)
*(arg2 + 0x10ec) = *(r9_11 + 0x46c)
*(arg2 + 0x10f0) = *(r9_11 + 0x470)
*(arg2 + 0x10f4) = *(r9_11 + 0x474)
*(arg2 + 0x10f8) = *(r9_11 + 0x478)
*(arg2 + 0x10fc) = *(r9_11 + 0x47c)
*(arg2 + 0x1100) = *(r9_11 + 0x480)
*(arg2 + 0x1104) = arg13[sx.q(*(r14 + 0x11fc)) - 1]
memmove(arg2, arg2 + (sx.q(*(r14 + 0x1200)) << 1), *(r14 + 0x1208) * 2)
int64_t result =
    memmove(arg2 + 0x500, arg2 + ((sx.q(*(r14 + 0x1200)) + 0x140) << 2), *(r14 + 0x1208) << 2)
__security_check_cookie(rax_1 ^ &var_d8)
return result
