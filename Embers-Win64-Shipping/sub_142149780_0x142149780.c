// 函数: sub_142149780
// 地址: 0x142149780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x30)

if (rcx == 0)
    return 

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(*(rcx + 0x40) + 3)
int32_t rax_6 = ((temp1_1 + (temp0_1 & 3)) s>> 2) + *(rcx + 0x50)
arg2[1].d = 0

if (*(arg2 + 0xc) != rax_6)
    sub_1405a5410(arg2, rax_6)

void* rax = *(arg1 + 0x30)
int32_t i = 0
int128_t zmm0

if (*(rax + 0x40) s> 0)
    int64_t* r15_1 = nullptr
    int128_t zmm6
    int128_t var_38_1 = zmm6
    
    do
        int64_t r12_1 = *(rax + 0x38)
        int32_t rdi_2 = i & 0x80000003
        
        if (rdi_2 s< 0)
            rdi_2 = ((rdi_2 - 1) | 0xfffffffc) + 1
        
        if (rdi_2 == 0)
            int64_t rbx_1 = sx.q(arg2[1].d)
            int32_t rax_7 = (rbx_1 + 1).d
            arg2[1].d = rax_7
            
            if (rax_7 s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            *(*arg2 + rbx_1 * 0x10) = zx.o(0)
        
        int64_t rbx_2 = *(r15_1 + r12_1)
        int64_t r13_3 = (sx.q(arg2[1].d) << 4) + *arg2
        void* const rcx_8
        
        if (*(arg1 + 0x48) == *(arg1 + 0x74))
        label_1421498c2:
            rcx_8 = nullptr
        else
            int32_t rax_11 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
            void* r8_1 = arg1 + 0x78
            void* rcx_6 = *(r8_1 + 8)
            
            if (rcx_6 != 0)
                r8_1 = rcx_6
            
            int32_t rax_13 = *(r8_1 + (((sx.q(*(arg1 + 0x88)) - 1) & sx.q(rax_11)) << 2))
            
            if (rax_13 == 0xffffffff)
            label_1421498c2_1:
                rcx_8 = nullptr
            else
                int64_t r8_2 = *(arg1 + 0x40)
                
                while (true)
                    int64_t rdx_7 = sx.q(rax_13) * 5
                    rcx_8 = r8_2 + (rdx_7 << 2)
                    
                    if (*(r8_2 + (rdx_7 << 2)) == rbx_2)
                        break
                    
                    rax_13 = *(rcx_8 + 0xc)
                    
                    if (rax_13 == 0xffffffff)
                        goto label_1421498c2_2
                
                if (rax_13 == 0xffffffff)
                label_1421498c2_2:
                    rcx_8 = nullptr
        
        void* rax_14 = rcx_8 + 8
        
        if (rcx_8 == 0)
            rax_14 = nullptr
        
        if (rax_14 == 0)
            zmm0 = *(r15_1 + r12_1 + 0x18)
        else
            zmm0 = *rax_14
        
        i += 1
        r15_1 += 0x1c
        *(r13_3 + (sx.q(rdi_2) << 2) - 0x10) = zmm0.d
        rax = *(arg1 + 0x30)
    while (i s< *(rax + 0x40))

int32_t i_1 = 0

if (*(rax + 0x50) s<= 0)
    return 

int64_t* rdi_5 = nullptr

do
    void* r15_2 = *(rax + 0x48)
    int64_t rbx_3 = *(rdi_5 + r15_2)
    int64_t* rdx_13
    
    if (*(arg1 + 0x98) == *(arg1 + 0xc4))
    label_14214999e:
        rdx_13 = nullptr
    else
        int32_t rax_18 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
        void* r8_3 = arg1 + 0xc8
        void* rcx_10 = *(r8_3 + 8)
        
        if (rcx_10 != 0)
            r8_3 = rcx_10
        
        int32_t rax_20 = *(r8_3 + (((sx.q(*(arg1 + 0xd8)) - 1) & sx.q(rax_18)) << 2))
        
        if (rax_20 == 0xffffffff)
        label_14214999e_1:
            rdx_13 = nullptr
        else
            while (true)
                rdx_13 = (sx.q(rax_20) << 5) + *(arg1 + 0x90)
                
                if (*rdx_13 == rbx_3)
                    break
                
                rax_20 = rdx_13[3].d
                
                if (rax_20 == 0xffffffff)
                    goto label_14214999e_2
            
            if (rax_20 == 0xffffffff)
            label_14214999e_2:
                rdx_13 = nullptr
    
    int64_t rbx_4 = sx.q(arg2[1].d)
    void* rcx_11 = &rdx_13[1]
    
    if (rdx_13 == 0)
        rcx_11 = nullptr
    
    if (rcx_11 == 0)
        rcx_11 = r15_2 + 0x18 + rdi_5
    
    int32_t rax_23 = (rbx_4 + 1).d
    zmm0 = *rcx_11
    arg2[1].d = rax_23
    
    if (rax_23 s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
    
    i_1 += 1
    rdi_5 = &rdi_5[5]
    *(*arg2 + rbx_4 * 0x10) = zmm0
    rax = *(arg1 + 0x30)
while (i_1 s< *(rax + 0x50))
