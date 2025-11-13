// 函数: sub_141724970
// 地址: 0x141724970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *arg1
uint64_t zmm0 = *rax
int32_t r8 = rax[1].d
int64_t zmm1 = *(rax + 0xc)
int32_t r9 = *(rax + 0x14)
int32_t* rax_1 = arg1[1]
uint64_t var_48 = zmm0
int64_t var_58 = zmm1
int64_t rcx = sx.q(*rax_1)
int32_t zmm2 = *(arg1[2] + (rcx << 2))

if (arg2 != 0)
    *(&var_48 + (rcx << 2)) = zmm2
    zmm0 = var_48
else
    *(&var_58 + (rcx << 2)) = zmm2
    zmm1 = var_58

int64_t rdx = sx.q(arg2)
int64_t r14 = rdx * 0x38
uint64_t* rcx_1 = *arg1[3]
int64_t r15_1 = rdx << 4
rcx_1[rdx * 7] = zmm0
rcx_1[rdx * 7 + 1].d = r8
int64_t rcx_2 = *arg1[3]
*(rcx_2 + r14 + 0xc) = zmm1
*(rcx_2 + r14 + 0x14) = r9
*(*arg1[3] + r14 + 0x18) = 0xffffffff
int64_t* r8_1 = *arg1[4]
int64_t rbx = sx.q(r8_1[rdx * 2 + 1].d)
uint64_t* result

if (rbx.d s<= 5 || *arg1[5] s>= *(arg1[6] + 0x88) || rbx.d s>= *(arg1[7] + 8))
    int64_t rbp_2 = r8_1[rdx * 2]
    uint64_t rdi_1 = 0
    var_48 = 0
    int32_t var_40_1 = rbx.d
    int32_t rbp_3
    
    if (rbx.d != 0)
        sub_140638750(&var_48, rbx.d, 0)
        rdi_1 = var_48
        memcpy(rdi_1, rbp_2, (rbx << 2).d)
        int32_t var_3c
        rbp_3 = var_3c
        rbx = zx.q(var_40_1)
    else
        rbp_3 = 0
    
    result = &var_48
    int64_t* rsi_2 = *arg1[0xa] + r15_1
    
    if (rsi_2 != &var_48)
        int64_t rcx_15 = *rsi_2
        
        if (rcx_15 != 0)
            result = sub_140a74f90(rcx_15)
        
        *rsi_2 = rdi_1
        rsi_2[1].d = rbx.d
        *(rsi_2 + 0xc) = rbp_3
    else if (rdi_1 != 0)
        return sub_140a74f90(rdi_1)
else
    int64_t rcx_5 = arg1[8]
    int64_t rax_10 = rdx * 3
    int32_t i = 0
    int32_t rbp = 0
    int32_t i_3 = 0
    void* r12_1 = rcx_5 + (rax_10 << 3)
    int32_t rcx_6 = *(rcx_5 + (rax_10 << 3))
    
    do
        int32_t rbx_1 = *(r12_1 + 0xc)
        int32_t i_2 = i + 1
        int32_t i_1 = i
        int32_t rax_11 = rbx_1
        
        if (rcx_6 s<= rbx_1)
            rax_11 = rcx_6
        
        int32_t rcx_7 = *(r12_1 + 0x10)
        int32_t r9_1 = rax_11
        
        if (rax_11 s<= rbp)
            r9_1 = rbp
        
        if (rax_11 s<= rbp)
            i_1 = i_3
        
        i_3 = i + 2
        rbp = *(r12_1 + 0x14)
        
        if (*(r12_1 + 4) s<= rcx_7)
            rcx_7 = *(r12_1 + 4)
        
        int32_t r10_1 = rcx_7
        rcx_6 = rbx_1
        
        if (rcx_7 s<= r9_1)
            r10_1 = r9_1
        
        if (rcx_7 s<= r9_1)
            i_2 = i_1
        
        if (*(r12_1 + 8) s<= rbp)
            rbp = *(r12_1 + 8)
        
        r12_1 += 0xc
        
        if (rbp s<= r10_1)
            i_3 = i_2
        
        i += 3
        
        if (rbp s<= r10_1)
            rbp = r10_1
    while (i s< 3)
    
    *(*arg1[3] + r14 + 0x18) = i_3
    int64_t* rdx_2 = *arg1[3] + r14
    char var_68_1 = *arg1[9]
    int32_t var_70_1 = *arg1[5] + 1
    int32_t rax_17 = sub_14173c830(arg1[6], rdx_2, rdx_2 + 0xc, *arg1[4] + r15_1, i_3)
    int32_t rdi = 0
    int32_t r15_2 = 2
    
    if (i_3 == 0xffffffff)
        r15_2 = 8
    
    do
        void* rbx_3 = *arg1[3] + r14
        int64_t rbp_1 = sx.q(*(rbx_3 + 0x28))
        int32_t rax_18 = (rbp_1 + 1).d
        *(rbx_3 + 0x28) = rax_18
        
        if (rax_18 s> *(rbx_3 + 0x2c))
            sub_1405a4cf0(rbx_3 + 0x20)
        
        result = *(rbx_3 + 0x20)
        int32_t rdx_4 = rdi + rax_17
        rdi += 1
        *(result + (rbp_1 << 2)) = rdx_4
    while (rdi s< r15_2)

return result
