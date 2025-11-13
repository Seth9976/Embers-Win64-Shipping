// 函数: sub_1426239e0
// 地址: 0x1426239e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
int32_t r13 = arg1.d
uint64_t rbp_2 = zx.q(((arg1 << 2).d + arg1.d) * 2)
int32_t arg_18 = 0
int32_t i_7 = 0
int32_t i_6 = 0
sub_142616290(arg6, (rbp_2 << 2).d)

if (arg3 s> 0)
    int32_t r11_1 = 0
    int32_t* r9 = nullptr
    uint64_t i_3 = zx.q(arg3)
    int64_t rax_2 = sx.q(arg3 - 1) << 2
    uint64_t i
    
    do
        int32_t r8 = *(r9 + arg4)
        int32_t rdi_1 = *(rax_2 + arg4)
        void* r10_1 = *arg6
        
        if (i_6 s< rbp_2.d)
            int32_t rdx_1 = 0
            
            if (i_6 s> 0)
                int32_t* rax_3 = r10_1 + 4
                
                while (true)
                    int32_t rcx_1 = rax_3[-1]
                    
                    if (rcx_1 == rdi_1 && *rax_3 == r8)
                        break
                    
                    if (rcx_1 == r8 && *rax_3 == rdi_1)
                        break
                    
                    rdx_1 += 1
                    rax_3 = &rax_3[4]
                    
                    if (rdx_1 s>= i_6)
                        goto label_142623a96
            
            if (i_6 s<= 0 || rdx_1 == 0xffffffff)
            label_142623a96:
                int64_t rax_4 = sx.q(r11_1)
                i_6 += 1
                r11_1 += 4
                *(r10_1 + (rax_4 << 2)) = rdi_1
                *(r10_1 + (rax_4 << 2) + 4) = r8
                *(r10_1 + (rax_4 << 2) + 8) = -2
        
        rax_2 = r9
        r9 = &r9[1]
        i = i_3
        i_3 -= 1
    while (i != 1)
    i_7 = i_6

uint32_t rdi_2 = 0

if (i_6 s> 0)
    int64_t rbx_1 = 0
    
    do
        int32_t* r8_1 = *arg6
        
        if (*(r8_1 + rbx_1 + 8) == 0xffffffff)
            sub_142623480(arg2, r13, r8_1, &i_7, rbp_2.d, &arg_18, rdi_2)
            r8_1 = *arg6
            i_6 = i_7
        
        if (*(rbx_1 + r8_1 + 0xc) == 0xffffffff)
            sub_142623480(arg2, r13, r8_1, &i_7, rbp_2.d, &arg_18, rdi_2)
            i_6 = i_7
        
        rdi_2 += 1
        rbx_1 += 0x10
    while (rdi_2 s< i_6)
    
    r14 = 0

uint32_t rbp_4 = arg_18 << 2
sub_142616290(arg5, rbp_4)
int32_t i_4 = 0

if (rbp_4 s> 0 && rbp_4 u>= 4)
    int64_t rdi_3 = *arg5
    
    if (rdi_3 u> arg5 || rdi_3 + (sx.q(rbp_4 - 1) << 2) u< arg5)
        do
            i_4 += 4
        while (i_4 s< rbp_4)
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rbp_4 + 3)
        __builtin_memset(rdi_3, 0xffffffff, sx.q((temp4_1 + (temp3_1 & 3)) s>> 2) << 4 u>> 2 << 2)

for (int64_t i_1 = sx.q(i_4); i_1 s< sx.q(rbp_4); i_1 += 1)
    *(*arg5 + (i_1 << 2)) = 0xffffffff

if (i_6 s> 0)
    int32_t* r8_2 = nullptr
    uint64_t i_5 = zx.q(i_6)
    uint64_t i_2
    
    do
        int64_t rax_12 = *arg6
        uint64_t rcx_9 = zx.q(*(r8_2 + rax_12 + 0xc))
        
        if (rcx_9.d s>= 0)
            int32_t* rdx_9 = *arg5 + (sx.q((rcx_9 << 2).d) << 2)
            int32_t rcx_12 = *rdx_9
            
            if (rcx_12 != 0xffffffff)
                int32_t rdi_4 = *(r8_2 + rax_12 + 4)
                int32_t rcx_15 = *(r8_2 + rax_12)
                
                if (rcx_12 == rdi_4)
                    rdx_9[2] = rcx_15
                else if (rdx_9[1] == rcx_15)
                    rdx_9[2] = rdi_4
            else
                *rdx_9 = *(r8_2 + rax_12)
                rdx_9[1] = *(r8_2 + rax_12 + 4)
        
        uint64_t rcx_16 = zx.q(*(r8_2 + rax_12 + 8))
        
        if (rcx_16.d s>= 0)
            int32_t* rdx_11 = *arg5 + (sx.q((rcx_16 << 2).d) << 2)
            int32_t rcx_19 = *rdx_11
            
            if (rcx_19 != 0xffffffff)
                int32_t rdi_5 = *(r8_2 + rax_12)
                int32_t rcx_22 = *(r8_2 + rax_12 + 4)
                
                if (rcx_19 == rdi_5)
                    rdx_11[2] = rcx_22
                else if (rdx_11[1] == rcx_22)
                    rdx_11[2] = rdi_5
            else
                *rdx_11 = *(r8_2 + rax_12 + 4)
                rdx_11[1] = *(r8_2 + rax_12)
        
        r8_2 = &r8_2[4]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

int32_t rcx_23 = arg5[1].d
int32_t temp1
int32_t temp2
temp1:temp2 = sx.q(rcx_23)
int32_t result = (temp2 + (temp1 & 3)) s>> 2

if (result s> 0)
    int64_t rdi_6 = 0
    
    do
        int32_t* rdx_14 = *arg5
        int32_t rax_16
        
        if (*(rdx_14 + rdi_6) != 0xffffffff && *(rdx_14 + rdi_6 + 4) != 0xffffffff)
            rax_16 = rcx_23
        
        if (*(rdx_14 + rdi_6) == 0xffffffff || *(rdx_14 + rdi_6 + 4) == 0xffffffff
                || *(rdx_14 + rdi_6 + 8) == 0xffffffff)
            *(rdx_14 + rdi_6) = rdx_14[sx.q(rcx_23) - 4]
            *(rdx_14 + rdi_6 + 4) = *(*arg5 + (sx.q(arg5[1].d) << 2) - 0xc)
            *(rdx_14 + rdi_6 + 8) = *(*arg5 + (sx.q(arg5[1].d) << 2) - 8)
            *(rdx_14 + rdi_6 + 0xc) = *(*arg5 + (sx.q(arg5[1].d) << 2) - 4)
            sub_142616290(arg5, arg5[1].d - 4)
            rax_16 = arg5[1].d
            r14 -= 1
            rdi_6 -= 0x10
        
        rcx_23 = rax_16
        r14 += 1
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(rax_16)
        rdi_6 += 0x10
        result = (temp7_1 + (temp6_1 & 3)) s>> 2
    while (r14 s< result)

return result
