// 函数: sub_140f02770
// 地址: 0x140f02770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg3[2]
void* rbx = &arg3[2]
int32_t r10 = *arg3
int32_t r11 = r9
bool cond:0 = r10 s< r9

if (r10 == r9)
    cond:0 = arg3[1] s< arg3[3]

if (cond:0)
    r11 = r10

int32_t* rcx = rbx
bool cond:1 = r10 s< r9

if (r10 == r9)
    cond:1 = arg3[1] s< arg3[3]

if (cond:1)
    rcx = arg3

int32_t rdx = rcx[1]
int32_t rcx_1 = r9
int32_t arg_18 = rdx
bool cond:2 = r10 s> r9

if (r10 == r9)
    cond:2 = arg3[1] s> arg3[3]

if (cond:2)
    rcx_1 = r10

bool cond:3 = r10 s> r9

if (r10 == r9)
    cond:3 = arg3[1] s> arg3[3]

if (cond:3)
    rbx = arg3

int32_t r15 = *(rbx + 4)

if (r11 s< 0)
    return 

int32_t rax = *(arg1 + 0x20)

if (r11 s>= rax || rcx_1 s< 0 || rcx_1 s>= rax)
    return 

int64_t rbx_1 = sx.q(r11)

if (r11 == rcx_1)
    arg_18 = rdx
    int32_t arg_1c = r15
    sub_140f02610(arg2, rbx_1 * 0x70 + *(arg1 + 0x18), &arg_18)
    return 

int64_t rdi_1 = sx.q(rcx_1)
int64_t r12_1 = rbx_1

if (rbx_1 s> rdi_1)
    return 

void* r13_1 = rbx_1 * 0x70
void* r14_1 = r13_1

do
    int64_t* rax_2 = *(arg1 + 0x18)
    void* rdx_3
    int32_t* r8_1
    
    if (rbx_1 == r12_1)
        rdx_3 = rax_2 + r13_1
        int32_t rcx_3 = *(*(rax_2 + r13_1) + 8)
        int32_t arg_20 = arg_18
        int32_t rax_5 = rcx_3 - 1
        
        if (rcx_3 == 0)
            rax_5 = 0
        
        r8_1 = &arg_20
        int32_t arg_24 = rax_5
    else if (rbx_1 != rdi_1)
        rdx_3 = r14_1 + rax_2
        int32_t var_40 = 0
        int32_t rcx_4 = *(*rdx_3 + 8)
        int32_t rax_7 = rcx_4 - 1
        
        if (rcx_4 == 0)
            rax_7 = 0
        
        r8_1 = &var_40
        int32_t var_3c_1 = rax_7
    else
        int32_t var_48 = 0
        r8_1 = &var_48
        rdx_3 = rdi_1 * 0x70 + rax_2
        int32_t var_44_1 = r15
    
    sub_140f02610(arg2, rdx_3, r8_1)
    
    if (rbx_1 != rdi_1)
        sub_140a20ba0(arg2, &data_142d6acb4, 2)
    
    rbx_1 += 1
    r14_1 += 0x70
while (rbx_1 s<= rdi_1)
