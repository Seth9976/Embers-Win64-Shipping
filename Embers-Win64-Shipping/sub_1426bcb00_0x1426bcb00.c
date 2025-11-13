// 函数: sub_1426bcb00
// 地址: 0x1426bcb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = arg4
int64_t rsi = sx.q(arg5)
void* i = arg2
int64_t rbp = sx.q(arg3)

if ((*(arg1 + 0x263) & 0x20) == 0)
    return 

uint64_t rax
rax.b = zx.d(*(arg1 + 0x260)) s< *(arg1 + 0x118)

if (rax.b == 0)
    return 

void* rcx = *(arg1 + 0xa0)

if (rcx != 0)
    rax = sub_141dce620(rcx)

if (rcx != 0 && rax.b != 0)
    return 

if (*(arg1 + 0x1a0) != 0)
    if ((*(arg1 + 0x1a8) & 2) != 0)
        rax.b = 0
    else
        rax.b = 1
else if ((*(arg1 + 0x1a8) & 1) == 0 || (*(arg1 + 0x1a8) & 2) != 0)
    rax.b = 0
else
    rax.b = 1

if (rax.b != 0 && (*(arg1 + 0x1a8) & 1) != 0)
    return 

int64_t r10_1 = *(arg1 + 0x190)
int16_t rcx_1 = *(r12 + 0x50)
int16_t r14_1 = -1
int32_t r15_1 = arg6
int16_t var_50_1 = rbp.w
int16_t var_4e_1 = rcx_1
int16_t arg_8 = 0xffff

if (r15_1 == 2 && rsi.d s>= 0)
    int32_t r9 = *(i + 0x60)
    
    if (rsi.d s>= r9)
        rcx_1 = *(i + 0x8c) + 1
    else
        int64_t* r8 = *(i + 0x58)
        void* rax_1 = r8[rsi * 6]
        
        if (rax_1 != 0)
            rcx_1 = *(rax_1 + 0x50) - r8[rsi * 6 + 3].w
        else
            rax_1 = r8[rsi * 6 + 1]
            
            if (rax_1 == 0)
                rcx_1 = *(i + 0x8c) + 1
            else
                rcx_1 = *(rax_1 + 0x50) - r8[rsi * 6 + 3].w
    
    rax = zx.q((rsi + 1).d)
    int16_t var_4e_2 = rcx_1
    
    if (rax.d s< 0 || rax.d s>= r9)
        rax.b = 0
    else
        rax.b = 1
    
    if (rax.b == 0)
        r14_1 = *(i + 0x8c) + 1
    else
        uint64_t* r8_1 = *(i + 0x58)
        rax = r8_1[(rsi + 1) * 6]
        
        if (rax != 0)
            r14_1 = *(rax + 0x50) - r8_1[(rsi + 1) * 6 + 3].w
        else
            rax = r8_1[(rsi + 1) * 6 + 1]
            
            if (rax == 0)
                r14_1 = *(i + 0x8c) + 1
            else
                r14_1 = *(rax + 0x50) - r8_1[(rsi + 1) * 6 + 3].w
    
    arg_8 = r14_1

int16_t var_54_1 = rbp.w
int16_t var_52_1 = r14_1

if (r10_1 != 0)
    rax = zx.q(*(arg1 + 0x188))
    bool c_1 = rax.w u< rbp.w
    
    if (rax.w == rbp.w)
        c_1 = *(arg1 + 0x18a) u< rcx_1
    
    rax.b = c_1

if (r10_1 != 0 && rax.b != 0)
    rax = zx.q(*(arg1 + 0x18c))
    
    if (r15_1 != 2)
        if (rax.w u< 0xffff)
            arg_8.d = 0xffffffff
            *(arg1 + 0x18c) = 0xffffffff
    else if (rax.w u< 0xffff)
        bool c_2 = rax.w u< rbp.w
        
        if (rax.w == rbp.w)
            c_2 = *(arg1 + 0x18e) u< r14_1
        
        rax.b = c_2
        
        if (rax.b != 0)
            *(arg1 + 0x18c) = var_54_1.d
else if ((*(arg1 + 0x180) & 1) == 0)
label_1426bcdac:
    char r13_1 = 0
    
    if (r15_1 != 2)
        if (rsi.d s< 0 || rsi.d s>= *(i + 0x60))
            rax.b = 0
        else
            rax.b = 1
        
        if (rax.b == 0)
        label_1426bcf74:
            *(arg1 + 0x190) = i
            *(arg1 + 0x198) = rbp.w
        label_1426bcf8d:
            
            if (r10_1 != 0 || r15_1 != 2)
                int16_t rax_14 = *(arg1 + 0x18c)
                
                if (rax_14 u< 0xffff)
                    bool c_4 = rax_14 u< rbp.w
                    
                    if (rax_14 == rbp.w)
                        c_4 = *(arg1 + 0x18e) u< r14_1
                    
                    rax_14.b = c_4
                    
                    if (rax_14.b != 0)
                        *(arg1 + 0x18c) = var_54_1.d
            else
                *(arg1 + 0x18c) = var_54_1.d
            
            *(arg1 + 0x19b) &= 0xfe
            *(arg1 + 0x188) = var_50_1.d
            int32_t rax_16
            rax_16.b = r15_1 != 2
            *(arg1 + 0x19a) = r15_1.b
            *(arg1 + 0x19b) |= rax_16.b
            int64_t r8_9
            
            if (*(arg1 + 0x118) == 0)
                r8_9 = 0
            else
                r8_9 = *(zx.q(*(arg1 + 0x260)) * 0x58 + *(arg1 + 0x110) + 8)
            
            if (r12 != r8_9)
                r13_1 = 2
            
            *(arg1 + 0x19b) = r13_1 | (*(arg1 + 0x19b) & 0xfd)
            *(arg1 + 0x1a8) |= 2
            rax = zx.q(*(arg1 + 0x180))
            
            if ((rax.b & 4) != 0)
                *(arg1 + 0x180) = rax.d | 2
            
            if (*(arg1 + 0x118) == 0
                    || *(sx.q(*(arg1 + 0x118)) * 0x58 + *(arg1 + 0x110) - 0x17) != 2)
                rax.b = 0
            else
                rax.b = 1
            
            uint8_t rdi = *(arg1 + 0x263) u>> 2
            
            if ((rdi & 1) != 0 || rax.b != 0)
                rax.b = 1
            
            if (rax.b != 0)
                sub_1426be250(arg1)
            
            if ((not.b(rdi) & 1) != 0)
                *(arg1 + 0x263) |= 8
        else
            if (*(*(i + 0x58) + rsi * 0x30 + 0x28) s<= 0)
                goto label_1426bcf74
            
            void* rax_11 = sub_14272f060()
            void* rdx_12 = *(r12 + 0x10)
            int64_t rax_12 = sx.q(*(rax_11 + 0x38))
            
            if (rax_12.d s> *(rdx_12 + 0x38)
                    || *(*(rdx_12 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
                goto label_1426bcf74
            
            if (sub_1426af380(i, arg1, rbp.d, rsi.d).b == 0)
                goto label_1426bcf74
    else
        if (rsi.d s< 0)
        label_1426bcdee:
            void* rdx_8 = *(arg1 + 0x190)
            uint64_t r8_4 = zx.q(*(arg1 + 0x198))
            void* rcx_5 = rdx_8
            
            if (rdx_8 == 0)
                r8_4 = zx.q(*(arg1 + 0x260))
                void** rax_5 = r8_4 * 0x58 + *(arg1 + 0x110)
                rcx_5 = rax_5[1]
                
                if (rcx_5 == 0)
                    rcx_5 = *rax_5
                else if (*(rax_5 + 0x41) != 0)
                    rcx_5 = *(rcx_5 + 0x48)
            
            if (rdx_8 != i)
                void* const var_48 = nullptr
                int16_t var_58 = 0xffff
                sub_1426afd70(arg1 + 0x110, arg1 + 0x120, i, rbp.w, rcx_5, r8_4.w, &var_48, &var_58)
                void* const r15_2 = var_48
                int32_t rsi_1 = rbp.d
                
                if (i != 0)
                    int64_t r14_2 = rbp * 0x58
                    
                    do
                        void* i_2 = i
                        
                        if (i == r15_2)
                            break
                        
                        i = *(i + 0x48)
                        
                        if (i == 0)
                            if (rsi_1 s<= 0)
                                break
                            
                            rsi_1 -= 1
                            r14_2 -= 0x58
                            i_2 = *(r14_2 + *(arg1 + 0x110) + 8)
                            i = *(i_2 + 0x48)
                        
                        if (sub_1426af380(i, arg1, rsi_1, sub_1426b1760(i, i_2)).b == 0)
                            return 
                    while (i != 0)
                    
                    r14_1 = arg_8
                
                int16_t rax_9 = var_58
                r12 = arg4
                *(arg1 + 0x190) = r15_2
                r15_1 = arg6
                *(arg1 + 0x198) = rax_9
            
            goto label_1426bcf8d
        
        if (sub_1426b6270(arg1, r12, rsi.d) != 0)
            goto label_1426bcdee
        
        if (sub_1426af380(i, arg1, rbp.d, rsi.d).b != 0)
            goto label_1426bcdee
else
    int16_t rcx_2 = *(i + 0x50)
    int16_t rdx_4 = *(arg1 + 0x16a)
    
    if (rcx_2 != rdx_4 || rbp.w != *(arg1 + 0x168))
        rax.b = 0
    else
        rax.b = 1
    
    if (rax.b != 0)
        goto label_1426bcdac
    
    rax = zx.q(*(arg1 + 0x168))
    bool c_3 = rax.w u< rbp.w
    
    if (rax.w == rbp.w)
        c_3 = rdx_4 u< rcx_2
    
    rdx_4.b = c_3
    
    if (rdx_4.b == 0)
        goto label_1426bcdac
    
    if (rbp.d != zx.d(rax.w))
        for (int16_t* i_1 = *(arg1 + 0x158); i_1 != &i_1[sx.q(*(arg1 + 0x160)) * 2]; i_1 = &i_1[2])
            if (zx.d(*i_1) == rbp.d)
                return 
        
        goto label_1426bcdac
    
    if (*(arg1 + 0x17c) u> rcx_2 || rcx_2 u>= *(arg1 + 0x17e))
        goto label_1426bcdac
