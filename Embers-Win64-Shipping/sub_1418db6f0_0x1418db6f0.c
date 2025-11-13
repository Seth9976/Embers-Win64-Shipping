// 函数: sub_1418db6f0
// 地址: 0x1418db6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 0
int64_t i_4 = sx.q(*(*(arg1 + 0x60) + 0x50))
int64_t i_5 = i_4
int64_t i_2

if (i_4.d s> 0)
    void* r14_1 = arg1 + 0x20
    i_2 = i_4
    int64_t r12_1 = 0
    int64_t i
    
    do
        void* r15_2 = *(*(arg1 + 0x60) + 0x48) + r12_1
        
        if (data_1439c7a08 s<= 1)
            int64_t r14_2 = sx.q(*(arg1 + 0x18))
            int32_t rbp_1 = *(r15_2 + 8) + 1
            int32_t rax_2 = r14_2.d + rbp_1
            *(arg1 + 0x18) = rax_2
            
            if (rax_2 s> *(arg1 + 0x1c))
                sub_14083a7e0(arg1 + 0x10)
            
            memset(*(arg1 + 0x10) + r14_2 * 0xc, 0, sx.q(rbp_1) * 0xc)
            r14_1 = arg1 + 0x20
        
        int64_t rbp_2 = sx.q(*(r15_2 + 8))
        int64_t rdi_1 = sx.q(*(arg1 + 0x48))
        int32_t rax_5 = (rdi_1 + rbp_2).d
        *(arg1 + 0x48) = rax_5
        
        if (rax_5 s> *(arg1 + 0x4c))
            sub_1405c4fe0(arg1 + 0x40)
        
        memset((rdi_1 << 6) + *(arg1 + 0x40), 0, rbp_2 << 6)
        uint64_t rbp_3 = zx.q(*(r15_2 + 0x10))
        int64_t rdi_2 = sx.q(*(r14_1 + 8))
        int32_t rax_6 = (rdi_2 + rbp_3).d
        *(r14_1 + 8) = rax_6
        
        if (rax_6 s> *(r14_1 + 0xc))
            sub_1405a4df0(r14_1)
        
        memset(*r14_1 + rdi_2 * 0x18, 0, rbp_3 * 0x18)
        uint64_t rbp_4 = zx.q(*(r15_2 + 0x12))
        int64_t rdi_3 = sx.q(*(arg1 + 0x38))
        int32_t rax_8 = (rdi_3 + rbp_4).d
        *(arg1 + 0x38) = rax_8
        
        if (rax_8 s> *(arg1 + 0x3c))
            sub_1405a4df0(arg1 + 0x30)
        
        memset(*(arg1 + 0x30) + rdi_3 * 0x18, 0, rbp_4 * 0x18)
        int32_t rcx_14 = *(r15_2 + 8) + *(arg1 + 0x58)
        *(arg1 + 0x58) = rcx_14
        
        if (rcx_14 s> *(arg1 + 0x5c))
            sub_1405daba0(arg1 + 0x50)
        
        r12_1 += 0x18
        i = i_2
        i_2 -= 1
    while (i != 1)
    i_5 = i_4

memset(*(arg1 + 0x50), 0xff, sx.q(*(arg1 + 0x58)))
int64_t rdi_4 = sx.q(*(arg1 + 0xa0))
int32_t rax_10 = (rdi_4 + i_4).d
*(arg1 + 0xa0) = rax_10

if (rax_10 s> *(arg1 + 0xa4))
    sub_1407755b0(arg1 + 0x98)

int32_t i_3 = i_4.d
int64_t* rcx_19 = rdi_4 * 0x58 + *(arg1 + 0x98)

if (i_4.d != 0)
    void* rax_11 = rcx_19 + 0x2c
    int32_t i_1
    
    do
        *rcx_19 = 0
        rcx_19 = &rcx_19[0xb]
        __builtin_memset(rax_11 - 0x24, 0, 0x14)
        *(rax_11 - 0xc) = 0
        *(rax_11 - 4) = 0
        *(rax_11 + 4) = 0
        *(rax_11 + 0xc) = 0
        *(rax_11 + 0x14) = 0
        *(rax_11 + 0x1c) = 0
        *(rax_11 + 0x24) = 1
        rax_11 += 0x58
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

void* rax_12 = *(arg1 + 8)
void* rdi_5 = nullptr
void* rcx_20 = *(rax_12 + 0x798)

if (data_1439c7a08 s<= 1)
    rdi_5 = *(arg1 + 0x10)

int64_t r14_3 = 0
void* arg_20 = *(arg1 + 0x40)
int64_t* var_88 = *(arg1 + 0x20)
int64_t var_80 = *(arg1 + 0x30)
int64_t var_78 = *(arg1 + 0x50)
int64_t var_58 = 0
int32_t var_4c = 0
int32_t var_50 = i_4.d

if (i_4.d s> 0)
    sub_1405a4cf0(&var_58)
    r14_3 = var_58

memset(r14_3, 0, i_5 << 2)
i_2.d = 0
int32_t r8_13 = 0

if (i_5 s> 0)
    int64_t r12_2 = 0
    int64_t r13 = 0
    
    do
        void* rbp_5 = *(*(arg1 + 0x60) + 0x48)
        *(r14_3 + (r12_2 << 2)) = r8_13
        int64_t* rbp_6 = rbp_5 + r13
        r8_13 = i_2.d + sub_1418ee660(sx.q(rbx.d) * 0x58 + *(arg1 + 0x98), rbp_6, rdi_5, arg_20, 
            var_88, var_80, var_78, rcx_20, rax_12 + 0x7a8)
        i_2.d = r8_13
        
        if (rdi_5 != 0)
            void* rdi_6 = rdi_5 + sx.q(rbp_6[1].d) * 0xc
            *rdi_6 = -1
            *(rdi_6 + 8) = *(*(*(arg1 + 0x60) + 0x198) + (r12_2 << 2))
            rdi_5 = rdi_6 + 0xc
        
        int64_t rdx_9 = sx.q(rbp_6[1].d)
        rbx = zx.q(rbx.d + 1)
        var_78 += rdx_9
        r12_2 += 1
        arg_20 += rdx_9 << 6
        r13 += 0x18
        var_88 = &var_88[zx.q(rbp_6[2].w) * 3]
        i_5 = i_4
        var_80 += zx.q(*(rbp_6 + 0x12)) * 0x18
    while (r12_2 s< i_5)
    
    rbx = 0
    i_4 = zx.q(i_5.d)

int64_t r12_3 = sx.q(*(arg1 + 0x88))
int32_t rax_37 = r12_3.d + r8_13
*(arg1 + 0x88) = rax_37

if (rax_37 s> *(arg1 + 0x8c))
    sub_1405a4cf0(arg1 + 0x80)
    r8_13 = i_2.d

memset(*(arg1 + 0x80) + (r12_3 << 2), 0, sx.q(r8_13) << 2)

if (i_5 s> 0)
    int64_t r8_18 = 0
    
    do
        uint64_t rcx_31 = zx.q(*(r14_3 + (rbx << 2)))
        r8_18 += 0x58
        rbx += 1
        *(r8_18 + *(arg1 + 0x98) - 0x48) = *(arg1 + 0x80) + (rcx_31 << 2)
    while (rbx s< i_5)

int64_t rbx_1 = sx.q(*(arg1 + 0x70))
int32_t rax_41 = (rbx_1 + i_4).d
*(arg1 + 0x70) = rax_41

if (rax_41 s> *(arg1 + 0x74))
    sub_1405a4d70(arg1 + 0x68)

int64_t result = memset(*(arg1 + 0x68) + (rbx_1 << 3), 0, i_5 << 3)

if (r14_3 == 0)
    return result

return sub_140a74f90(r14_3)
