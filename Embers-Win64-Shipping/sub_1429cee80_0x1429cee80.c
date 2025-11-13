// 函数: sub_1429cee80
// 地址: 0x1429cee80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[1]
void* rbp = **(arg1 + 0x28)
int32_t var_80 = rbx
int32_t rbx_1 = rbx & 3
int32_t var_70 = rbx_1
char arg_10
int32_t rax_1

if (rbx_1 == 0)
    rax_1 = sub_1429d3440(*arg1)
    arg_10 = 1

if (rbx_1 != 0 || rax_1 s<= 0)
    arg_10 = 0

int32_t i = 0

if (*(rbp + 4) s> 0)
    char* rdx_1 = nullptr
    
    do
        bool rcx_1 = false
        int64_t r8_1 = *(rbp + 0xf0)
        int64_t r9_1 = *(rbp + 0xd8)
        
        if (*(*(rbp + 0x90) + (rdx_1 << 3)) s< 2)
            rcx_1 = true
        
        rcx_1 |= rdx_1[r8_1] & 0xfd
        rdx_1[r8_1] = rcx_1
        
        if ((2 & rcx_1) != 0 || (rcx_1 & 1) != 0)
            *(r9_1 + (rdx_1 << 2)) = 0x41200000
        
        rcx_1 = (*(r9_1 + (rdx_1 << 2)) >= 10f) << 2 | (rdx_1[r8_1] & 0xfb)
        rdx_1[r8_1] = rcx_1
        char rax_4
        
        if (*(r9_1 + (rdx_1 << 2)) <= 0f || (rcx_1 & 4) != 0)
            rax_4 = 0
        else
            rax_4 = 8
        
        i += 1
        rdx_1[r8_1] = (rcx_1 & 0xf7) | rax_4
        rdx_1 = &rdx_1[1]
    while (i s< *(rbp + 4))

int32_t rax_5 = sub_1429d3460(*arg1)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax_5)
int32_t i_2 = 0
int32_t var_74 = (temp1 - temp0) s>> 1
int32_t i_1

if (*(rbp + 8) s> 0)
    int64_t r9_2 = 0
    uint16_t* rdi_1 = nullptr
    int64_t var_58_1 = 0
    float* var_88_1 = nullptr
    
    do
        void* rdx_3 = *(rbp + 0x150)
        int32_t r14_1 = 0
        int32_t r15_1 = 0
        int64_t r10 = *(rbp + 0x198)
        int32_t r11_1 = 0
        int64_t rsi_1 = *(rbp + 0x1b0)
        uint64_t j_3 = zx.q(*(rdx_3 + r9_2))
        int32_t* rdx_4 = *(rbp + 0x108)
        int64_t var_68_1 = r10
        int32_t* r13_1 = *(rbp + 0x168) + (sx.q(*(rdx_3 + r9_2 + 4)) << 2)
        int32_t j_4 = j_3.d
        int32_t* var_60_1 = r13_1
        int32_t* r12_1 = *(rbp + 0x120) + (sx.q(*(rdx_4 + r9_2 + 4)) << 2)
        int32_t j_6 = *(rdx_4 + r9_2)
        int32_t r9_3 = 0
        int32_t j_5 = j_6
        
        if (j_3.d s> 0)
            int32_t* rdx_5 = r13_1
            uint64_t j
            
            do
                int64_t rax_10 = sx.q(*rdx_5)
                rdx_5 = &rdx_5[1]
                uint32_t rcx_5 = zx.d(*(rax_10 + *(rbp + 0xf0)))
                r14_1 += rcx_5 u>> 1 & 1
                r15_1 += rcx_5 u>> 2 & 1
                r9_3 += rcx_5 & 1
                r11_1 += rcx_5 u>> 3 & 1
                j = j_3
                j_3 -= 1
            while (j != 1)
            j_3 = zx.q(j_4)
            r10 = var_68_1
            j_6 = j_5
        
        float* r8_2
        
        if (j_6 != 1 || j_3.d != 2)
            r13_1.b = 0
            
            if ((*(rdi_1 + rsi_1) & 1) == 0 || (r9_3 == 2 && r14_1 == 0 && j_6 s> j_3.d))
                r8_2 = var_88_1
            else
                r8_2 = var_88_1
                *(r8_2 + r10) = 0x41200000
        else
            r13_1 = zx.q(j_6.b)
            
            if (rbx_1 != j_3.d
                    && ((*(rdi_1 + rsi_1) & 1) == 0 || (r9_3 == 2 && r14_1 == 0 && j_6 s> j_3.d)))
                r8_2 = var_88_1
            else
                r8_2 = var_88_1
                *(r8_2 + r10) = 0x41200000
        
        j_6.b = *(r8_2 + r10) >= 10f
        uint16_t rcx_7 = zx.w(j_6.b) << 4 | (*(rdi_1 + rsi_1) & 0xffef)
        *(rdi_1 + rsi_1) = rcx_7
        int32_t zmm1 = *(r8_2 + r10)
        int16_t rax_21
        
        if (zmm1 f<= 0f || 10f f<= zmm1)
            rax_21 = 0
        else
            rax_21 = 0x20
        
        int16_t rax_22 = 0
        
        if (r11_1 s> 0)
            rax_22 = 0x40
        
        *(rdi_1 + rsi_1) = (((rcx_7 & 0xffdf) | rax_21) & 0xffbf) | rax_22
        int16_t rax_24 = sub_1429c8d30(&var_80, *(var_88_1 + r10), r11_1 + r15_1) & 0xf
        *(rdi_1 + rsi_1) &= 0xf87b
        int16_t rcx_9 = 0
        
        if (r14_1 s> 0)
            rcx_9 = 4
        
        *(rdi_1 + rsi_1) |= rax_24 << 7 | rcx_9
        int16_t rcx_10 = *(rdi_1 + rsi_1)
        int16_t rax_25
        
        if (r13_1.b == 0 || (rcx_10.b & 0x10) == 0)
            rax_25 = 0
        else
            rax_25 = 8
        
        rcx_10 = (rcx_10 & 0xfff7) | rax_25
        *(rdi_1 + rsi_1) = rcx_10
        
        if ((rcx_10.b & 8) == 0)
            bool cond:5_1
            
            if ((rcx_10.b & 4) == 0)
                cond:5_1 = j_5 != rax_5
            else
                cond:5_1 = j_5 != var_74
            
            int16_t rax_26
            rax_26.b = cond:5_1
            *(rdi_1 + rsi_1) = (rax_26 * 2) | (rcx_10 & 0xfffd)
        else
            *(rdi_1 + rsi_1) = rcx_10 & 0xfffd
        
        int16_t rcx_11 = 0
        
        if (r15_1 s> 0)
            rcx_11 = 0x1000
        
        rcx_11 = (rcx_11 | (*(rdi_1 + rsi_1) & 0xe7ff)) & 0xdfff
        int16_t rdx_7 = (sbb.w(0x1010, 0x1010, (rcx_11 & 0x1010) != 0) & 0x4000) | (rcx_11 & 0xbfff)
        *(rdi_1 + rsi_1) = rdx_7
        
        if ((0x1000 & rdx_7) != 0)
            if ((rdx_7.b & 0x10) == 0)
                zmm1 = (zx.o(0)).d
            else
                zmm1 = *(var_88_1 + var_68_1)
            
            int32_t rax_30 = sub_1429c8d30(&var_80, zmm1, r15_1)
            
            if (rax_30 == 4)
                *(rdi_1 + rsi_1) |= 0x2000
                int16_t r9_4 = *(rdi_1 + rsi_1)
                
                if ((r9_4.b & 3) == 0)
                    if ((r9_4.b & 4) == 0)
                        int64_t rax_31 = sx.q(rax_5)
                        
                        if (rax_31 == 4)
                            int64_t rdx_8 = *(rbp + 0xf0)
                            *(rdi_1 + rsi_1) = (zx.w((*(sx.q(var_60_1[2]) + rdx_8)
                                ^ *(sx.q(*var_60_1) + rdx_8)) u>> 2) & 1) << 0xe | (r9_4 & 0xbfff)
                        else if (rax_31 == 6)
                            int64_t r8_7 = *(rbp + 0xf0)
                            int16_t rax_37
                            
                            if (((*(sx.q(var_60_1[3]) + r8_7) ^ *(sx.q(*var_60_1) + r8_7)) & 4) != 0
                                    || ((*(sx.q(var_60_1[4]) + r8_7) ^ *(sx.q(var_60_1[1]) + r8_7))
                                    & 4) != 0)
                                rax_37 = 0x4000
                            else
                                rax_37 = 0
                            
                            *(rdi_1 + rsi_1) = (r9_4 & 0xbfff) | rax_37
                    else
                        *(rdi_1 + rsi_1) = r9_4 & 0xbfff
            else if (rax_30 == 8 && r15_1 == j_4 && (j_4 s> 2 || (*(rdi_1 + rsi_1) & 0x10) != 0))
                *(rdi_1 + rsi_1) &= 0xbfff
        
        if (arg_10 != 0 && (*(rdi_1 + rsi_1) & 4) != 0 && j_5 s> 0)
            uint64_t j_2 = zx.q(j_5)
            uint64_t j_1
            
            do
                int64_t rcx_16 = sx.q(*r12_1)
                r12_1 = &r12_1[1]
                int64_t rax_39 = *(rbp + 0x60)
                *(rcx_16 + rax_39) |= 1
                arg1[2] |= 2
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
            rbx_1 = var_70
        
        rdi_1 = &rdi_1[1]
        i_1 = i_2 + 1
        var_88_1 = &var_88_1[1]
        r9_2 = var_58_1 + 8
        i_2 = i_1
        var_58_1 = r9_2
    while (i_1 s< *(rbp + 8))

i_1.b = 1
return i_1
