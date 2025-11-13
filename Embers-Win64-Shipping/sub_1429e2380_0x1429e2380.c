// 函数: sub_1429e2380
// 地址: 0x1429e2380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = arg2 + 0x270
char rax = arg7.b
int32_t rbx_1 = *(r12 + 0x364) - arg4
void* r15 = arg1 + 0x3400
int32_t rdx = 1 << (arg6 - 1)
int32_t r11 = 1 << (rax - 1)

if (rdx s< rbx_1)
    rbx_1 = rdx

int32_t rdi_1 = *(r12 + 0x35c) - arg3

if (r11 s< rdi_1)
    rdi_1 = r11

char* rax_1 = sub_1429e5610(r12, r15, arg5, arg3, arg4, rdx, r11, rbx_1, rdi_1, arg6, rax)

if (arg5 u>= 3)
    int64_t rax_2 = sx.q(*(r12 + 0x180))
    
    if ((rax_2.d != 0 || *(r12 + 0x184) != rax_2.d)
            && *(sx.q(*(r12 + 0x184)) + ((rax_2 + (zx.q(arg5) << 1)) << 1) + 0x1436046e8) == 0xd)
        sub_1429da010(*(r15 + 0x260), 7, "Invalid block size.", &__dos_header)

int32_t rbp_1 = arg3
int32_t rdi_2 = arg4
sub_142a2cb30(arg1, arg2, rbp_1, rdi_2, rbx_1, rdi_1)

if (rax_1[3] != 0)
    void* rbx_2 = r15 + 0x40
    int64_t i_3 = 3
    int64_t i
    
    do
        memset(*rbx_2, 0, zx.q(*(rbx_2 + 0x30)))
        memset(*(rbx_2 + 8), 0, zx.q(*(rbx_2 + 0x32)))
        rbx_2 += 0x80
        i = i_3
        i_3 -= 1
    while (i != 1)
    rdi_2 = arg4

int32_t rbx_3 = 0
int32_t var_90_1

if (rax_1[8] s<= 0)
    void* rdi_3 = arg1 + 0x3400
    int32_t i_1 = 0
    void* r11_1 = rdi_3 + 8
    void* var_50_1 = r11_1
    
    do
        char r12_1
        
        if (i_1 == 0)
            r12_1 = rax_1[2]
        else
            r12_1 = *(sx.q(*(r11_1 + 4))
                + ((sx.q(*r11_1) + ((zx.q(rax_1[2]) + (zx.q(*rax_1) << 2)) << 1)) << 1)
                + 0x143604720)
        
        int32_t r9_2 = *(rdi_3 + 0x1d4)
        int32_t rsi_1 = 1 << r12_1
        int32_t rdx_6
        
        if (r9_2 s< 0)
            rdx_6 = r9_2 s>> ((*r11_1).b + 5)
        else
            rdx_6 = 0
        
        int32_t rbp_2 = rdx_6 + zx.d(*(r11_1 + 0x68))
        int32_t r8_6 = *(rdi_3 + 0x1dc)
        int32_t rdx_8
        
        if (r8_6 s< 0)
            rdx_8 = r8_6 s>> ((*(r11_1 + 4)).b + 5)
        else
            rdx_8 = 0
        
        int32_t rcx_15 = rdx_8 + zx.d(*(r11_1 + 0x6a))
        int32_t rax_7 = rbp_2
        arg5.d = rcx_15
        
        if (r9_2 s>= 0)
            rax_7 = 0
        
        *(rdi_3 + 0x1c0) = rax_7
        int32_t rax_8 = rcx_15
        
        if (r8_6 s>= 0)
            rax_8 = 0
        
        *(rdi_3 + 0x1c4) = rax_8
        int32_t rdi_4 = 0
        
        if (rcx_15 s> 0)
            do
                if (rbp_2 s> 0)
                    do
                        var_90_1.b = r12_1
                        sub_1429e3e50(arg1, rax_1, i_1, rdi_4, rbx_3, var_90_1.b)
                        rbx_3 += rsi_1
                    while (rbx_3 s< rbp_2)
                    
                    rcx_15 = arg5.d
                
                rdi_4 += rsi_1
                rbx_3 = 0
            while (rdi_4 s< rcx_15)
            
            r11_1 = var_50_1
        
        r11_1 -= -0x80
        rdi_3 = arg1 + 0x3400
        i_1 += 1
        var_50_1 = r11_1
    while (i_1 s< 3)
    
    goto label_1429e2644

sub_1429e1ef0(arg2, r15, rbp_1, zx.q(rdi_2))

if (rax_1[3] == 0)
    void* r8_10 = arg1 + 0x3400
    int32_t rsi_2 = 0
    void* rdi_5 = r8_10 + 8
    int32_t i_2 = 0
    void* var_50_2 = rdi_5
    
    do
        char rdx_15
        
        if (i_2 == 0)
            rdx_15 = rax_1[2]
        else
            rdx_15 = *(sx.q(*(rdi_5 + 4))
                + ((sx.q(*rdi_5) + ((zx.q(rax_1[2]) + (zx.q(*rax_1) << 2)) << 1)) << 1)
                + 0x143604720)
        
        int32_t r10_2 = *(r8_10 + 0x1d4)
        int32_t rbp_3 = 1 << rdx_15
        arg6 = rdx_15
        int32_t r8_11
        
        if (r10_2 s< 0)
            r8_11 = r10_2 s>> ((*rdi_5).b + 5)
        else
            r8_11 = 0
        
        int32_t r15_1 = r8_11 + zx.d(*(rdi_5 + 0x68))
        int32_t r9_7 = *(arg1 + 0x35dc)
        int32_t r8_13
        
        if (r9_7 s< 0)
            r8_13 = r9_7 s>> ((*(rdi_5 + 4)).b + 5)
        else
            r8_13 = 0
        
        int32_t rcx_26 = r8_13 + zx.d(*(rdi_5 + 0x6a))
        r8_10 = arg1 + 0x3400
        arg7 = rcx_26
        int32_t rax_16 = r15_1
        int32_t rdi_6 = 0
        
        if (r10_2 s>= 0)
            rax_16 = 0
        
        *(r8_10 + 0x1c0) = rax_16
        int32_t rax_17 = rcx_26
        
        if (r9_7 s>= 0)
            rax_17 = 0
        
        *(r8_10 + 0x1c4) = rax_17
        
        if (rcx_26 s> 0)
            do
                if (r15_1 s> 0)
                    do
                        var_90_1.b = rdx_15
                        rdx_15 = arg6
                        rsi_2 += sub_1429e53f0(arg1, rax_1, i_2, rdi_6, rbx_3, var_90_1.b)
                        rbx_3 += rbp_3
                    while (rbx_3 s< r15_1)
                    
                    rcx_26 = arg7
                
                rdi_6 += rbp_3
                rbx_3 = 0
            while (rdi_6 s< rcx_26)
            
            r8_10 = arg1 + 0x3400
        
        i_2 += 1
        rdi_5 = var_50_2 + 0x80
        var_50_2 = rdi_5
    while (i_2 s< 3)
    
    if (arg5 u< 3)
    label_1429e2644:
        rbp_1 = arg3
        r15 = arg1 + 0x3400
        rdi_2 = arg4
    else
        r15 = arg1 + 0x3400
        rdi_2 = arg4
        rbp_1 = arg3
        
        if (rsi_2 == 0)
            rax_1[3] = 1

int32_t result
result.b = *(arg1 + 0x1c) - 0x41 u<= 0x3fffffbe
*(r15 + 0x25c) |= result

if (*(r12 + 0x10b8) == 0)
    return result

return sub_142a25f70(r12, rax_1, rbp_1, rdi_2, rdx, r11)
