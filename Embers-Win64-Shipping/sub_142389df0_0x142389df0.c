// 函数: sub_142389df0
// 地址: 0x142389df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg1[0x15]
sub_142386ce0(arg1, r15 + 0x1b0)
int32_t i = 0

if (arg1[0xd].d s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rdi_2 = arg1[0xc] + r14_1
        sub_1423b75b0(rdi_2, arg1, &arg1[2], arg1[0xe].d, r15 + 0x1b0)
        char rax_1
        
        if (not(*(r15 + 0x1e0) f< rdi_2[3].d))
            rax_1 = sub_1423b1700(rdi_2)
        
        int64_t rax_4
        int64_t rbp_1
        
        if (*(r15 + 0x1e0) f< rdi_2[3].d || rax_1 != 0)
            rbp_1 = sx.q(arg1[0x10].d)
            int32_t rax_3 = (rbp_1 + 1).d
            arg1[0x10].d = rax_3
            
            if (rax_3 s> *(arg1 + 0x84))
                sub_1405a4cf0(&arg1[0xf])
            
            rax_4 = arg1[0xf]
        else
            rbp_1 = sx.q(arg1[0x12].d)
            int32_t rax_2 = (rbp_1 + 1).d
            arg1[0x12].d = rax_2
            
            if (rax_2 s> *(arg1 + 0x94))
                sub_1405a4cf0(&arg1[0x11])
            
            rax_4 = arg1[0x11]
        
        *(rax_4 + (rbp_1 << 2)) = i
        r14_1 += 0x20
        i += 1
    while (i s< arg1[0xd].d)

if (not(0f f>= *(r15 + 0x1e0)))
    int32_t rdx_4 = arg1[0x10].d
    int64_t rcx_4 = arg1[0xf]
    int64_t* arg_8 = arg1
    sub_14237c070(rcx_4, rdx_4, arg_8.b, &arg_8)

sub_1423b75b0(&arg1[8], arg1, &arg1[2], arg1[0xe].d, r15 + 0x1b0)
void* rax_5 = arg1[0x15]

if (*(rax_5 + 0x381) != 0)
    *(rax_5 + 0x381) = 0
    void* rcx_6 = *(r15 + 0x10)
    void* rdx_7 = sx.q(*(r15 + 0x18)) * 0xd8 + rcx_6
    
    if (rcx_6 != rdx_7)
        while (arg1[0x1c].b == 0)
            if (*(rcx_6 + 0xb1) == 1 && *(rcx_6 + 0x6c) != *(rcx_6 + 0x14))
                *(rcx_6 + 0xb1) = 0
            
            rcx_6 += 0xd8
            
            if (rcx_6 == rdx_7)
                break

int64_t* rdi_3 = *(r15 + 0x10)
void* rsi_1 = sx.q(*(r15 + 0x18)) * 0xd8 + rdi_3

if (rdi_3 != rsi_1)
    while (arg1[0x1c].b == 0)
        sub_1423b7d80(rdi_3)
        sub_14239c1a0(arg1, rdi_3, r15 + 0x1b0)
        rdi_3[0x10].d = 0x3f800000
        rdi_3 = &rdi_3[0x1b]
        
        if (rdi_3 == rsi_1)
            break

int64_t arg_10
int64_t arg_18
int32_t r9_3 = sub_14239b0c0(arg1, &arg_18, &arg_10)
uint64_t result
int32_t rdx_11
result, rdx_11 = sub_14239bc40(arg1, arg_18, arg_10, r9_3)
void* r15_1 = arg1[0x15]
char r12_1 = *(r15_1 + 0x380)
arg1[0x1b].d = 0

if (*(arg1 + 0xdc) != 0)
    result, rdx_11 = sub_1405dadb0(&arg1[0x1a], 0)

int32_t i_1 = 0

if (*(r15_1 + 0x18) s> 0)
    int64_t rdi_4 = 0
    
    do
        result = zx.q(arg1[0x1c].b)
        
        if (result.b != 0)
            break
        
        int64_t rcx_12 = *(r15_1 + 0x10)
        
        if (arg1[1].d s> 0 || (*(rdi_4 + rcx_12 + 0xb4) & 0x80) != 0)
            rdx_11.b = 1
        else
            rdx_11.b = 0
        
        if (r12_1 != 0 || (*(rdi_4 + rcx_12 + 0x94) s<= *(rdi_4 + rcx_12 + 0x5c) && rdx_11.b != 0))
            rdx_11 = 0
        else
            rdx_11 = 1
        
        result = zx.q(*(rdi_4 + rcx_12 + 0xb4) u>> 6) & 1
        
        if (result.d != rdx_11)
            int64_t rsi_2 = sx.q(arg1[0x1b].d)
            int32_t rax_14 = (rsi_2 + 1).d
            arg1[0x1b].d = rax_14
            
            if (rax_14 s> *(arg1 + 0xdc))
                sub_1405a4cf0(&arg1[0x1a])
            
            result = arg1[0x1a]
            *(result + (rsi_2 << 2)) = i_1
        
        i_1 += 1
        rdi_4 += 0xd8
    while (i_1 s< *(r15_1 + 0x18))

arg1[0xa].d = 0

if (*(arg1 + 0x54) != 0)
    result = sub_1405c5570(&arg1[9], 0)

void* rdi_5 = arg1[0xc]
void* rsi_5 = (sx.q(arg1[0xd].d) << 5) + rdi_5

if (rdi_5 != rsi_5)
    void* rbx_1 = rdi_5 + 0x14
    
    do
        bool cond:4_1 = *rbx_1 == 0
        *(rbx_1 - 4) = 0
        
        if (not(cond:4_1))
            result = sub_1405c5570(rbx_1 - 0xc, 0)
        
        rdi_5 += 0x20
        rbx_1 += 0x20
    while (rdi_5 != rsi_5)

return result
