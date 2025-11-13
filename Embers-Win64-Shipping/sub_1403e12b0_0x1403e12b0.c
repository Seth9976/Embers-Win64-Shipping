// 函数: sub_1403e12b0
// 地址: 0x1403e12b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
void* var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t rcx = sx.q(arg5)
int64_t r14 = sx.q(arg2)
int32_t i_11 = rcx.d s>> 4
int32_t var_94 = rcx.d
int32_t var_90 = r14.d
int64_t var_78_1
__builtin_memset(&var_78_1, 0, 0x28)
int32_t i_8 = 0

if (i_11 << 4 s< rcx.d)
    i_11 += 1
    *(rcx + arg4) = 0
    *(rcx + arg4 + 8) = 0

int64_t r8 = sx.q(i_11 << 4)
int64_t rax_7 = r8 << 2
int64_t rcx_1 = rax_7 + 0xf

if (rcx_1 u<= rax_7)
    rcx_1 = 0xffffffffffffff0

int64_t rcx_2 = rcx_1 & 0xfffffffffffffff0
__chkstk(rcx_2)
void var_e8
void* rsp_1 = &var_e8 - rcx_2
void* rdx = rsp_1 + 0x30
void* var_88 = rdx

if (r8 s> 0)
    void* rax_9 = arg4 + 1
    void* rcx_3 = rdx + 8
    int64_t i_6 = ((r8 - 1) u>> 2) + 1
    int64_t i
    
    do
        char rdx_1 = *(rax_9 - 1)
        int32_t rdx_2 = sx.d(rdx_1)
        
        if (rdx_1 s<= 0)
            rdx_2 = neg.d(rdx_2)
        
        *(rcx_3 - 8) = rdx_2
        char rdx_3 = *rax_9
        int32_t rdx_4 = sx.d(rdx_3)
        
        if (rdx_3 s<= 0)
            rdx_4 = neg.d(rdx_4)
        
        *(rcx_3 - 4) = rdx_4
        char rdx_5 = *(rax_9 + 1)
        int32_t rdx_6 = sx.d(rdx_5)
        
        if (rdx_5 s<= 0)
            rdx_6 = neg.d(rdx_6)
        
        *rcx_3 = rdx_6
        char rdx_7 = *(rax_9 + 2)
        int32_t rdx_8 = sx.d(rdx_7)
        
        if (rdx_7 s<= 0)
            rdx_8 = neg.d(rdx_8)
        
        *(rcx_3 + 4) = rdx_8
        rcx_3 += 0x10
        rax_9 += 4
        i = i_6
        i_6 -= 1
    while (i != 1)
    rdx = var_88

int64_t i_10 = sx.q(i_11)
int64_t rcx_4 = i_10 << 2
int64_t rax_10 = rcx_4 + 0xf

if (rax_10 u<= rcx_4)
    rax_10 = 0xffffffffffffff0

int64_t rax_11 = rax_10 & 0xfffffffffffffff0
__chkstk(rax_11)
void* rsp_2 = rsp_1 - rax_11
int64_t rax_12 = rcx_4 + 0xf
var_b8 = rsp_2 + 0x30

if (rax_12 u<= rcx_4)
    rax_12 = 0xffffffffffffff0

int64_t rax_13 = rax_12 & 0xfffffffffffffff0
__chkstk(rax_13)
void* rsp_3 = rsp_2 - rax_13
void* r10 = rdx
int64_t rcx_5 = sx.q(i_11)

if (i_11 s> 0)
    void* r11_1 = rsp_3 + 0x30
    int64_t i_5 = rcx_5
    int64_t i_1
    
    do
        *r11_1 = 0
        
        while (true)
            int64_t rax_15 = 0
            int64_t var_70
            int32_t r9_1
            
            while (true)
                int32_t rcx_7 = *(r10 + (rax_15 << 3) + 4) + *(r10 + (rax_15 << 3))
                
                if (rcx_7 s> 8)
                    r9_1 = 1
                    break
                
                *(&var_70 + (rax_15 << 2)) = rcx_7
                rax_15 += 1
                
                if (rax_15 s>= 8)
                    r9_1 = 0
                    break
            
            int64_t rax_16 = 0
            int32_t rax_17
            
            while (true)
                int32_t rcx_9 = *(&var_70:4 + (rax_16 << 3)) + (&var_70)[rax_16].d
                
                if (rcx_9 s> 0xa)
                    rax_17 = 1
                    break
                
                *(&var_70 + (rax_16 << 2)) = rcx_9
                rax_16 += 1
                
                if (rax_16 s>= 4)
                    rax_17 = 0
                    break
            
            int64_t rax_18 = 0
            int32_t rax_19
            
            while (true)
                int32_t rcx_11 = *(&var_70:4 + (rax_18 << 3)) + (&var_70)[rax_18].d
                
                if (rcx_11 s> 0xc)
                    rax_19 = 1
                    break
                
                *(&var_70 + (rax_18 << 2)) = rcx_11
                rax_18 += 1
                
                if (rax_18 s>= 2)
                    rax_19 = 0
                    break
            
            int64_t rcx_12 = 0
            int32_t* rdx_9 = rsp_2 + 0x30 - (rsp_3 + 0x30) + r11_1
            int32_t rax_22
            
            while (true)
                int32_t rax_21 = *(&var_70:4 + (rcx_12 << 3)) + (&var_70)[rcx_12].d
                
                if (rax_21 s> 0x10)
                    rax_22 = 1
                    break
                
                rcx_12 += 1
                *rdx_9 = rax_21
                rdx_9 = &rdx_9[1]
                
                if (rcx_12 s>= 1)
                    rax_22 = 0
                    break
            
            if (rax_22 == neg.d(r9_1 + rax_17 + rax_19))
                break
            
            *r11_1 += 1
            int64_t j_4 = 4
            void* rcx_13 = r10
            int64_t j
            
            do
                int32_t zmm0[0x4] = *rcx_13
                rcx_13 += 0x10
                *(rcx_13 - 0x10) = _mm_sra_epi32(zmm0, 1)
                j = j_4
                j_4 -= 1
            while (j != 1)
        
        r10 += 0x40
        r11_1 += 4
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    rcx_5 = i_10

void* r12 = var_b8
int32_t i_2 = 0
uint32_t rsi_2 = 0x7fffffff
int64_t r14_1 = (r14 s>> 1) * 9
void* const r9_4 = &data_1436fd700
void* rdi = &data_1436fd7a8 + r14_1

do
    uint32_t r8_4 = zx.d(*rdi)
    
    if (rcx_5 s> 0)
        void* rdx_10 = r12
        int64_t j_5 = rcx_5
        int64_t j_1
        
        do
            if (*(rsp_3 + 0x30 - r12 + rdx_10) s<= 0)
                r8_4 += zx.d(*(sx.q(*rdx_10) + r9_4))
            else
                r8_4 += zx.d(*(r9_4 + 0x11))
            
            rdx_10 += 4
            j_1 = j_5
            j_5 -= 1
        while (j_1 != 1)
        rcx_5 = i_10
    
    if (r8_4 s< rsi_2)
        rsi_2 = r8_4
        i_8 = i_2
    
    i_2 += 1
    r9_4 += 0x12
    rdi += 1
while (i_2 s< 9)

int64_t* r12_1 = arg1
sub_1403fe400(r12_1, i_8, &data_1436fd6e8 + r14_1, 8)
int64_t i_7 = i_10
int64_t r13_1 = 0

if (i_7 s> 0)
    void* rdi_1 = rsp_3 + 0x30
    void* rsi_4 = var_b8 - rdi_1
    int64_t i_3
    
    do
        void* r8_6 = &data_1436fd630 + sx.q(i_8) * 0x12
        int64_t* rcx_17 = r12_1
        
        if (*rdi_1 != 0)
            sub_1403fe400(rcx_17, 0x11, r8_6, 8)
            int32_t j_2 = 0
            
            if (*rdi_1 - 1 s> 0)
                do
                    sub_1403fe400(r12_1, 0x11, &data_1436fd6d2, 8)
                    j_2 += 1
                while (j_2 s< *rdi_1 - 1)
            
            r8_6 = &data_1436fd6d2
            rcx_17 = r12_1
        
        sub_1403fe400(rcx_17, *(rdi_1 + rsi_4), r8_6, 8)
        rdi_1 += 4
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)
    i_7 = i_10

int64_t rbx_2 = 0

if (i_7 s> 0)
    void* rax_34 = var_b8
    int32_t rdi_2 = 0
    
    do
        if (*(rax_34 + (rbx_2 << 2)) s> 0)
            sub_1403e66e0(r12_1, var_88 + (sx.q(rdi_2) << 2))
            rax_34 = var_b8
        
        rbx_2 += 1
        rdi_2 += 0x10
    while (rbx_2 s< i_7)
    
    if (i_7 s> 0)
        void* r12_2 = arg4
        
        do
            int32_t rax_37 = *(rsp_3 + 0x30 + (r13_1 << 2))
            
            if (rax_37 s> 0)
                void* rsi_6 = r12_2
                int64_t i_9 = 0x10
                int64_t i_4
                
                do
                    char rax_38 = *rsi_6
                    int32_t rax_39 = sx.d(rax_38)
                    
                    if (rax_38 s<= 0)
                        rax_39 = neg.d(rax_39)
                    
                    int32_t rdi_3 = sx.d(rax_39.b)
                    int32_t j_3 = rax_37 - 1
                    
                    if (rax_37 - 1 s> 0)
                        do
                            sub_1403fe400(arg1, rdi_3 s>> j_3.b & 1, &data_1436fc840, 8)
                            j_3 -= 1
                        while (j_3 s> 0)
                    
                    sub_1403fe400(arg1, rdi_3 & 1, &data_1436fc840, 8)
                    rsi_6 += 1
                    i_4 = i_9
                    i_9 -= 1
                while (i_4 != 1)
                r13_1 = var_78_1
                i_7 = i_10
            
            r13_1 += 1
            r12_2 += 0x10
            var_78_1 = r13_1
        while (r13_1 s< i_7)
        
        r12_1 = arg1

*(rsp_3 + 0x28) = var_b8
*(rsp_3 + 0x20) = arg3
int64_t result = sub_1403e6310(r12_1, arg4, zx.q(var_94), zx.q(var_90))
__security_check_cookie(rax_1 ^ &var_b8)
return result
