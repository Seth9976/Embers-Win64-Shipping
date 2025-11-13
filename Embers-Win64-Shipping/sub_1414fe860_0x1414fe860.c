// 函数: sub_1414fe860
// 地址: 0x1414fe860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = *(arg2 + 0x4c) * *(arg2 + 0x44)
int32_t rax_1 = *(arg2 + 0x48) * *(arg2 + 0x40)
bool cond:0 = rax_1 == r8_1

if (rax_1 u>= r8_1)
    r8_1 = rax_1

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(r8_1)
int32_t rcx

rcx = cond:0 ? 0x20 : 0x1f - temp0

int32_t rcx_2 = rcx << 0x1a s>> 0x1f
uint64_t rflags_1
char temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(r8_1 - 1)
char rdx

if (rcx_2 == 0)
    rdx = 0x20
else
    rdx = 0x1f - temp0_1

int32_t r9 = arg1[8]
uint64_t rax_6 = zx.q(0x20 - rdx) & zx.q((not.d(rcx_2)).b)
int32_t i = rax_6.d
int32_t rcx_4 = rax_6.d

if (rax_6.d s< r9)
    int64_t r11_1 = *(arg1 + 0x18)
    int16_t* rdx_1 = r11_1 + (rax_6 << 1)
    
    do
        int16_t r8_3 = *rdx_1
        
        if (r8_3 != 0xffff)
            int64_t rax_8 = *(arg1 + 8)
            uint64_t r15_1 = zx.q(r8_3) << 4
            void** rdi = r15_1 + rax_8
            *(r11_1 + (sx.q(rcx_4) << 1)) = *(r15_1 + rax_8 + 0xc)
            int16_t rax_10 = *(rdi + 0xc)
            void** arg_20 = rdi
            
            if (rax_10 != 0xffff)
                *(*(arg1 + 8) + zx.q(rax_10) * 0x10 + 0xe) = 0xffff
                *(rdi + 0xc) = 0xffff
            
            *rdi = arg2
            int32_t r9_1 = 1
            uint64_t rbp = zx.q(r8_3)
            int32_t temp0_2 = arg1[0x14]
            
            if (rbp.d u>= temp0_2)
                uint64_t rflags_2
                int32_t temp0_3
                temp0_3, rflags_2 = _bit_scan_reverse((rbp + 1).d)
                int32_t rcx_8
                
                if (rbp.d == temp0_2)
                    rcx_8 = 0x20
                else
                    rcx_8 = 0x1f - temp0_3
                
                int32_t rcx_10 = rcx_8 << 0x1a s>> 0x1f
                uint64_t rflags_3
                char temp0_4
                temp0_4, rflags_3 = _bit_scan_reverse(rbp.d)
                char r10_1
                
                if (rcx_10 == 0)
                    r10_1 = 0x20
                else
                    r10_1 = 0x1f - temp0_4
                
                int32_t rdx_3 = 1 << ((not.d(rcx_10)).b & (0x20 - r10_1))
                
                if (rdx_3 u<= 0x20)
                    rdx_3 = 0x20
                
                sub_140a30d10(&arg1[0x12], rdx_3)
                r9_1 = 1
            
            int32_t i_3 = 0
            uint64_t r8_5 = zx.q(arg1[0x13].w) & zx.q((arg2 u>> 4).w)
            *(*(arg1 + 0x60) + (rbp << 2)) = *(*(arg1 + 0x58) + (r8_5 << 2))
            *(*(arg1 + 0x58) + (r8_5 << 2)) = rbp.d
            int32_t r8_6 = rdi[1].d
            
            if ((r8_6 u>> 0x18 & 0xf) u> i)
                do
                    rdi[1].d = ((((r8_6 u>> 0x18) - 1) << 0x18 ^ r8_6) & 0xf000000) ^ r8_6
                    int32_t rbp_2 = r9_1 << (*arg1).b
                    int32_t j_1 = rbp_2 - 1
                    
                    if (rbp_2 != 1)
                        int32_t var_4c_1 = 0xffffffff
                        int32_t j
                        
                        do
                            int32_t rdx_4 = rdi[1].d
                            int64_t rdi_1 = sx.q(arg1[4])
                            int32_t var_50_1 = (((j_1 << (((rdx_4 u>> 0x18).b & 0xf) * (*arg1).b))
                                + rdx_4) & 0xffffff) | (rdx_4 & 0xf000000)
                            int32_t rax_34 = (rdi_1 + 1).d
                            arg1[4] = rax_34
                            
                            if (rax_34 s> arg1[5])
                                sub_1405a4f90(&arg1[2])
                            
                            *(*(arg1 + 8) + rdi_1 * 0x10) = 0.o
                            rdi = *(arg1 + 8) + r15_1
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        arg_20 = rdi
                        r9_1 = j_1 + 1
                    
                    r8_6 = rdi[1].d
                    i_3 += rbp_2 - 1
                while ((r8_6 u>> 0x18 & 0xf) u> i)
                
                if (i_3 != 0)
                    int32_t r9_2 = arg1[0xc]
                    int32_t rsi_2 = 0
                    
                    if (r9_2 != 0)
                        int32_t r8_7 = r8_6 & 0xffffff
                        int32_t rax_40
                        
                        do
                            int32_t rdx_10 = ((r9_2 - rsi_2) u>> 1) + rsi_2
                            int32_t temp3_1 = *(*(arg1 + 0x28) + (sx.q(rdx_10) << 2))
                            rax_40 = rdx_10 + 1
                            
                            if (r8_7 u>= temp3_1)
                                rax_40 = rsi_2
                            
                            if (r8_7 u>= temp3_1)
                                r9_2 = rdx_10
                            
                            rsi_2 = rax_40
                        while (rax_40 != r9_2)
                    
                    int32_t r15_2 = arg1[0xc]
                    int32_t rax_41 = r15_2 + i_3
                    arg1[0xc] = rax_41
                    
                    if (rax_41 s> arg1[0xd])
                        sub_1405a4cf0(&arg1[0xa])
                    
                    int64_t i_2 = sx.q(i_3)
                    int64_t r12_1 = sx.q(rsi_2) << 2
                    int64_t rdx_13 = *(arg1 + 0x28) + r12_1
                    memmove(rdx_13 + (i_2 << 2), rdx_13, (r15_2 - rsi_2) << 2)
                    int32_t rcx_25 = arg1[0x10]
                    void* r8_10 = &arg1[0xe]
                    int32_t rax_44 = i_3 + rcx_25
                    *(r8_10 + 8) = rax_44
                    
                    if (rax_44 s> *(r8_10 + 0xc))
                        sub_140594770(r8_10)
                        r8_10 = &arg1[0xe]
                    
                    int64_t r15_5 = sx.q(rsi_2) * 2
                    int64_t rdx_16 = *r8_10 + r15_5
                    memmove(rdx_16 + (i_2 << 1), rdx_16, (rcx_25 - rsi_2) * 2)
                    
                    if (i_2 s> 0)
                        int32_t r11_2 = 0
                        int64_t i_1
                        
                        do
                            int32_t rdx_19 = r11_2 - i_3 + arg1[4]
                            void* r8_15 = (sx.q(rdx_19) << 4) + *(arg1 + 8)
                            int32_t r9_3 = *(r8_15 + 8)
                            int16_t r10_3 = *(*(arg1 + 0x18) + ((zx.q(r9_3 u>> 0x18) & 0xf) << 1))
                            *(r8_15 + 0xc) = r10_3
                            
                            if (r10_3 != 0xffff)
                                *(*(arg1 + 8) + zx.q(r10_3) * 0x10 + 0xe) = rdx_19.w
                                r9_3 = *(r8_15 + 8)
                            
                            r11_2 += 1
                            *(*(arg1 + 0x18) + ((zx.q(r9_3 u>> 0x18) & 0xf) << 1)) = rdx_19.w
                            *(r12_1 + *(arg1 + 0x28)) = *(r8_15 + 8) & 0xffffff
                            r12_1 += 4
                            *(r15_5 + *(arg1 + 0x38)) = rdx_19.w
                            r15_5 += 2
                            i_1 = i_2
                            i_2 -= 1
                        while (i_1 != 1)
                        rdi = arg_20
            
            arg1[0x1b] += 1
            arg1[0x1c] += 1 << (i.b * (*arg1).b)
            return zx.q(rdi[1].d) & 0xffffff
        
        rcx_4 += 1
        rdx_1 = &rdx_1[1]
    while (rcx_4 s< r9)

return 0xffffffff
