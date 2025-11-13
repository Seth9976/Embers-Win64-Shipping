// 函数: sub_142261880
// 地址: 0x142261880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg1[0x4a]
int64_t* rbx = arg2
int64_t* r14 = arg1

if (r15 == 0)
    r15 = arg1[0xa9]

int32_t i = 0
int32_t r13 = 1

if (r15 != 0 && (1 & (*(r15 + 0x228) u>> 4).b) != 0)
    if (*(r15 + 0xf8) != 0)
        int64_t rsi_1 = sx.q(*(arg2 + 8))
        int32_t rax_3 = (rsi_1 + 1).d
        *(arg2 + 8) = rax_3
        
        if (rax_3 s> *(arg2 + 0xc))
            sub_1405a4d70(rbx)
        
        *(*rbx + (rsi_1 << 3)) = *(r15 + 0xf8)
    
    int32_t var_a4_1 = 1
    int32_t r10_1 = *(r15 + 0x1c8)
    int32_t rcx_2 = 0
    int32_t var_a8_1 = 0
    int32_t r8_1 = 0
    int32_t var_98_1 = 0xffffffff
    int64_t var_94_1 = 0
    
    if (r10_1 != 0)
        void* rax_5 = *(r15 + 0x1c0)
        void* r9_1 = r15 + 0x1b0
        
        if (rax_5 != 0)
            r9_1 = rax_5
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_4 = *r9_1
        
        if (rdx_4 != 0)
        label_142261999:
            int32_t rax_12 = ((rdx_4 - 1) & rdx_4) ^ rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_a4_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_2
            
            var_94_1.d = r8_1 - rax_13 + 0x1f
            
            if (r8_1 - rax_13 + 0x1f s> r10_1)
                var_94_1.d = r10_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_2)
                r8_1 += 0x20
                rcx_2 += 1
                var_94_1:4.d = r8_1
                var_a8_1 = rcx_2
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                int32_t var_98_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_142261999
            
            var_94_1.d = r10_1
    
    int32_t rdx_6 = *(r15 + 0x1c8)
    int32_t r12_2 = 0xffffffff << (rdx_6 & 0x1f).b
    int32_t r9_3 = rdx_6 & 0xffffffe0
    int128_t var_70_1 = 0xffffffff
    int32_t r8_4 = rdx_6 s>> 5
    arg3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int64_t var_40_1 = arg3
    int128_t var_80_1
    var_80_1:8.d = r12_2
    var_80_1:0xc.d = rdx_6
    int64_t* var_60_1 = (r15 + 0x1a0).o.q
    int128_t var_50_1 = var_a8_1.o
    
    if (rdx_6 != r10_1)
        void* rax_17 = *(r15 + 0x1c0)
        void* r11_1 = r15 + 0x1b0
        
        if (rax_17 != 0)
            r11_1 = rax_17
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_10 = *(r11_1 + (sx.q(r8_4) << 2)) & r12_2
        
        if (rdx_10 != 0)
        label_142261a76:
            int32_t rax_23 = ((rdx_10 - 1) & rdx_10) ^ rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_23)
            int32_t r14_1
            
            if (rax_23 == 0)
                r14_1 = 0x20
            else
                r14_1 = 0x1f - temp0_4
            
            var_80_1:0xc.d = r9_3 - r14_1 + 0x1f
            
            if (r9_3 - r14_1 + 0x1f s> r10_1)
                var_80_1:0xc.d = r10_1
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r11_1 + (rcx_6 << 2) + 4)
                var_80_1:8.d = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_142261a76
            
            var_80_1:0xc.d = r10_1
    
    while (true)
        arg2 = sx.q(var_50_1:0xc.d)
        int32_t rax_16
        
        if (arg2.d != (var_80_1:8.q u>> 0x20).d || var_50_1.q != r15 + 0x1b0)
            rax_16.b = 0
        else
            rax_16.b = 1
        
        if (rax_16.b == 0 || var_60_1 != r15 + 0x1a0)
            rax_16.b = 1
        else
            rax_16.b = 0
        
        if (rax_16.b == 0)
            break
        
        void* rsi_4 = *(*var_60_1 + arg2 * 0x10)
        
        if (rsi_4 != 0)
            void* rax_26 = sub_1424c7390()
            void* rdx_11 = *(rsi_4 + 0x10)
            int64_t rax_27 = sx.q(*(rax_26 + 0x38))
            
            if (rax_27.d s<= *(rdx_11 + 0x38)
                    && *(*(rdx_11 + 0x30) + (rax_27 << 3)) == rax_26 + 0x30
                    && rsi_4 != *(r15 + 0xf8))
                int64_t r14_2 = sx.q(rbx[1].d)
                int32_t rax_29 = (r14_2 + 1).d
                rbx[1].d = rax_29
                
                if (rax_29 s> *(rbx + 0xc))
                    sub_1405a4d70(rbx)
                
                *(*rbx + (r14_2 << 3)) = rsi_4
        
        int32_t var_54
        var_50_1:8.d &= not.d(var_54)
        void var_58
        sub_14059bdd0(&var_58)
    
    r14 = arg1
    i = 0
    r13 = 1

int64_t* rax_35 = sub_141baa510((*(*r14 + 0x150))(r14, arg2, arg3))
int64_t r12_5 = 0
int64_t* r15_1 = *rax_35
uint64_t rcx_16 = sx.q(rax_35[1].d) << 3 u>> 3

if (r15_1 u> &r15_1[rax_35[1]])
    rcx_16 = 0

if (rcx_16 != 0)
    do
        void* rax_38 = sub_141d343b0(*r15_1)
        
        if (rax_38 != 0 && (*(rax_38 + 0x220) & 1) != 0 && *(rax_38 + 0xf8) != 0)
            int64_t r14_3 = sx.q(rbx[1].d)
            int32_t rax_39 = (r14_3 + 1).d
            rbx[1].d = rax_39
            
            if (rax_39 s> *(rbx + 0xc))
                sub_1405a4d70(rbx)
            
            *(*rbx + (r14_3 << 3)) = *(rax_38 + 0xf8)
        
        r15_1 = &r15_1[1]
        r12_5 += 1
    while (r12_5 != rcx_16)
    
    r14 = arg1
    r13 = 1

int64_t result = zx.q(r14[0x9b].d u>> 3)

if ((result.b & 1) != 0)
    int64_t rsi_6 = sx.q(rbx[1].d)
    int32_t rax_42 = (rsi_6 + 1).d
    rbx[1].d = rax_42
    
    if (rax_42 s> *(rbx + 0xc))
        sub_1405a4d70(rbx)
    
    result = r14[0x1f]
    *(*rbx + (rsi_6 << 3)) = result

if (r14[0x99].d s> 0)
    do
        int64_t r14_4 = sx.q(i) << 3
        int64_t rax_44 = sub_140d3c6e0(r14[0x98] + r14_4)
        
        if (rax_44 == 0)
            int32_t rcx_26 = r14[0x99].d
            int32_t rax_46 = rcx_26 - i
            
            if (rax_46 != 1)
                int64_t rcx_27 = r14[0x98]
                memmove(rcx_27 + r14_4, rcx_27 + (sx.q(r13) << 3), (rax_46 - 1) << 3)
                rcx_26 = r14[0x99].d
            
            r14[0x99].d = rcx_26 - 1
            result = sub_1405c53d0(&r14[0x98])
            i -= 1
            r13 -= 1
        else
            int64_t r14_5 = sx.q(rbx[1].d)
            int32_t rcx_24 = (r14_5 + 1).d
            rbx[1].d = rcx_24
            
            if (rcx_24 s> *(rbx + 0xc))
                sub_1405a4d70(rbx)
            
            result = *rbx
            *(result + (r14_5 << 3)) = rax_44
        
        i += 1
        r13 += 1
    while (i s< arg1[0x99].d)

return result
