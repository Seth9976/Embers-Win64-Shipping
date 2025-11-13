// 函数: sub_14259b5d0
// 地址: 0x14259b5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1

if (arg1 == arg2)
    return rdi

int64_t i_3 = sx.q(arg2[1].d)
sub_141e3d380(arg1, i_3.d)
int32_t rax = rdi[1].d + i_3.d
rdi[1].d = rax

if (rax s> *(rdi + 0xc))
    sub_1408888d0(rdi)

void* rsi = &rdi[2]
rdi[6].d = arg2[6].d
*(rdi + 0x34) = *(arg2 + 0x34)

if (rsi != &arg2[2])
    sub_14059a8e0(rsi, arg2[5].d)
    int32_t rax_3 = arg2[5].d
    *(rsi + 0x18) = rax_3
    
    if (rax_3 != 0)
        void* r9_1 = arg2[4]
        void* r10_1 = *(rsi + 0x10)
        void* rdx_3 = &arg2[2]
        
        if (r9_1 != 0)
            rdx_3 = r9_1
        
        if (r10_1 != 0)
            rsi = r10_1
        
        memcpy(rsi, rdx_3, (zx.q(rax_3 + 0x1f) u>> 5 << 2).d)

void* rcx_3 = *rdi
int64_t i_1 = i_3
int64_t i_2 = i_1
int32_t r14 = 0

if (i_3.d s<= 0)
    return rdi

void* rax_5 = *arg2 - rcx_3
int64_t* rbx_1 = rcx_3 + 0x48
int32_t rsi_1 = 1
void* r9_2 = rax_5 - 0x38
int64_t* r10_2 = rax_5 - 0x40
void* var_68_1 = r9_2
int32_t* r8_4 = rax_5 - 0x44
int64_t* var_60_1 = r10_2
int64_t* r11_1 = rax_5 - 0x48
int32_t* var_70_1 = r8_4
int64_t* var_58_1 = r11_1
int64_t i

do
    void* rax_6 = arg2[4]
    void* rcx_9 = &arg2[2]
    
    if (rax_6 != 0)
        rcx_9 = rax_6
    
    int32_t rax_7 = r14
    
    if (r14 s< 0)
        rax_7 = r14 + 0x1f
    
    if ((*(rcx_9 + (sx.q(rax_7 s>> 5) << 2)) & rsi_1) == 0)
        rbx_1[-9].d = *(r11_1 + rbx_1)
        *(rbx_1 - 0x44) = *(r8_4 + rbx_1)
    else
        rbx_1[-9] = *(r11_1 + rbx_1)
        rbx_1[-8] = 0
        int64_t rbp = sx.q(*(r9_2 + rbx_1))
        int64_t r12_1 = *(r10_2 + rbx_1)
        rbx_1[-7].d = rbp.d
        
        if (rbp.d != 0)
            sub_1405c4a00(&rbx_1[-8], rbp.d, 0)
            memcpy(rbx_1[-8], r12_1, (rbp << 3).d)
        else
            *(rbx_1 - 0x34) = 0
        
        rbx_1[-6] = 0
        sub_14259b0a0(&rbx_1[-6], *(rax_5 - 0x30 + rbx_1), *(rax_5 - 0x28 + rbx_1), 0, 0)
        rbx_1[-4] = 0
        rbx_1[-3] = 0
        void* rdx_7 = &rbx_1[-2]
        *rbx_1 = 0
        rbx_1[1].d = 0
        *(rbx_1 + 0xc) = 0x80
        void* rax_12 = *rbx_1
        
        if (rax_12 != 0)
            rdx_7 = rax_12
        
        *rdx_7 = 0
        *(rdx_7 + 8) = 0
        rbx_1[2].d = 0xffffffff
        *(rbx_1 + 0x14) = 0
        rbx_1[4] = 0
        rbx_1[5].d = 0
        sub_14259b3d0(&rbx_1[-4], rax_5 - 0x20 + rbx_1)
        i_1 = i_2
        r8_4 = var_70_1
        r9_2 = var_68_1
        r10_2 = var_60_1
        r11_1 = var_58_1
        rbx_1[6].d = *(rax_5 + 0x30 + rbx_1)
        *(rbx_1 + 0x34) = *(rax_5 + 0x34 + rbx_1)
    
    r14 += 1
    rsi_1 = rol.d(rsi_1, 1)
    rbx_1 -= -0x80
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
return arg1
