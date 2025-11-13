// 函数: sub_1429ccc20
// 地址: 0x1429ccc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = *(arg1 + 0x150)
int32_t rbx = arg2 * 2
int64_t r10 = sx.q(rbx + 1)
void* r8 = *(arg1 + 0x108)
int64_t rax_2 = sx.q(rbx)
int64_t r12 = sx.q(*(r8 + (rax_2 << 2)))
int64_t rcx = sx.q(*(r11 + (rax_2 << 2)))

if (r12.d == 0 || rcx.d s< 2 || rcx.d - r12.d s> 1)
    rax_2.b = 0
    return rax_2

int64_t rdx = 0
int32_t r14 = -1
int32_t i_1 = -1

if (rcx.d == r12.d)
    int64_t rdx_1 = *(arg1 + 0x18)
    r14 = *(*(arg1 + 0x120) + (sx.q(*(r8 + (r10 << 2))) << 2))
    int32_t r8_1 = r14 * 2
    int64_t r10_2 = sx.q(*(rdx_1 + (sx.q(r8_1 + 1) << 2)))
    int32_t* r9 = *(arg1 + 0x30) + (r10_2 << 2)
    int32_t* rdx_2 = r9
    void* rax_8 = &r9[sx.q(*(rdx_1 + (sx.q(r8_1) << 2)))]
    
    if (r9 != rax_8)
        while (*rdx_2 != arg2)
            rdx_2 = &rdx_2[1]
            
            if (rdx_2 == rax_8)
                break
    
    rdx = (rdx_2 - r9) s>> 2
    i_1 = *(*(arg1 + 0x48) + ((sx.q(rdx.d) + r10_2) << 2))
else if (rcx.d s> 0)
    int64_t rbp_1 = *(arg1 + 0x90)
    int64_t r9_1 = 0
    
    do
        int32_t i_2 = *(*(arg1 + 0x168) + (sx.q(*(r11 + (r10 << 2))) << 2) + (r9_1 << 2))
        int32_t r8_2 = i_2 * 2
        
        if (*(rbp_1 + (sx.q(r8_2) << 2)) == 1)
            i_1 = i_2
            int64_t r8_3 = *(arg1 + 0x18)
            r14 = *(*(arg1 + 0xa8) + (sx.q(*(rbp_1 + (sx.q(r8_2 + 1) << 2))) << 2))
            int32_t rdx_5 = r14 * 2
            int64_t rbx_1 = sx.q(*(r8_3 + (sx.q(rdx_5 + 1) << 2)))
            int32_t* r10_3 = *(arg1 + 0x30) + (rbx_1 << 2)
            int32_t* rax_16 = r10_3
            void* rdx_6 = &r10_3[sx.q(*(r8_3 + (sx.q(rdx_5) << 2)))]
            
            if (r10_3 != rdx_6)
                while (*rax_16 != arg2)
                    rax_16 = &rax_16[1]
                    
                    if (rax_16 == rdx_6)
                        break
            
            rdx = sx.q(((rax_16 - r10_3) s>> 2).d)
            
            if (i_1 == *(*(arg1 + 0x48) + ((rbx_1 + rdx) << 2)))
                break
        
        r9_1 += 1
    while (r9_1 s< rcx)

int32_t i_3 = i_1
*arg3 = r14
*arg4 = i_1
int64_t rax_21

if (rcx s<= 1)
label_1429ccf04:
    rax_21.b = 1
else
    int32_t rbp_2 = r14 * 2
    int64_t rbx_2 = 1
    int64_t rdi_1 = 1
    int64_t r15_1 = sx.q(rbp_2 + 1) << 2
    
    while (true)
        void* r8_4 = *(arg1 + 0x18)
        int32_t rax_24
        
        if (rdx.d == 0)
            rax_24 = *(r8_4 + (sx.q(rbp_2) << 2)) - 1
        else
            rax_24 = (rdx - 1).d
        
        int32_t i = *(*(arg1 + 0x48) + (sx.q(*(r8_4 + r15_1)) << 2) + (sx.q(rax_24) << 2))
        
        if (i != i_1 && i != i_3)
            *(arg4 + (rbx_2 << 2)) = i
            rbx_2 += 1
            
            if (rdi_1 s>= r12)
            label_1429ccef6:
                i_1 = i
                
                if (rbx_2 s>= rcx)
                    goto label_1429ccf04
                
                continue
            else
                int64_t r9_3 = *(arg1 + 0x90)
                int32_t r8_5 = i * 2
                int32_t* r11_1 = *(arg1 + 0xa8) + (sx.q(*(r9_3 + (sx.q(r8_5 + 1) << 2))) << 2)
                int32_t rcx_13 = *(r9_3 + (sx.q(r8_5) << 2))
                
                if (rcx_13 != 0 && (rcx_13 != 1 || *r11_1 != r14))
                    int64_t rdx_8 = *(arg1 + 0x18)
                    int32_t* rax_29 = nullptr
                    
                    if (*r11_1 == r14)
                        rax_29 = 4
                    
                    r14 = *(rax_29 + r11_1)
                    rbp_2 = r14 * 2
                    int64_t rcx_14 = sx.q(rbp_2 + 1)
                    r15_1 = rcx_14 << 2
                    int32_t* r8_6 = *(arg1 + 0x48) + (sx.q(*(rdx_8 + (rcx_14 << 2))) << 2)
                    int32_t* rax_33 = r8_6
                    void* rdx_9 = &r8_6[sx.q(*(rdx_8 + (sx.q(rbp_2) << 2)))]
                    
                    if (r8_6 != rdx_9)
                        while (*rax_33 != i)
                            rax_33 = &rax_33[1]
                            
                            if (rax_33 == rdx_9)
                                break
                    
                    rdx = zx.q(((rax_33 - r8_6) s>> 2).d)
                    *(arg3 + (rdi_1 << 2)) = r14
                    rdi_1 += 1
                    goto label_1429ccef6
        
        rax_21.b = 0
        break

return rax_21
