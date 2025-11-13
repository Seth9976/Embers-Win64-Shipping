// 函数: sub_1416ed270
// 地址: 0x1416ed270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rdi = *(arg1 + 0x58)
void* r12 = arg1
int32_t* r13 = arg2
int128_t zmm6
int128_t var_38 = zmm6
void* r14_2 = &rdi[sx.q(*(arg1 + 0x60)) * 4]
int128_t zmm7
int128_t var_48 = zmm7
uint128_t zmm8
uint128_t var_58 = zmm8

if (rdi != r14_2)
    int32_t* rbx_3 = rdi - r13 + 0x28
    
    do
        int64_t rcx = 0
        void* rax_1 = &r13[3]
        
        while (not(*(rax_1 - 0xc) f> *(rbx_3 + rax_1)))
            if (*rax_1 f< *(rbx_3 + rax_1 - 0xc))
                break
            
            rcx += 1
            rax_1 += 4
            
            if (rcx s>= 3)
                int64_t* rsi_1 = *arg3
                zmm6 = *rdi
                zmm7 = rdi[1]
                int64_t rbp_1 = sx.q(rsi_1[1].d)
                zmm8 = zx.o(rdi[2].q)
                int32_t rax_2 = (rbp_1 + 1).d
                rsi_1[1].d = rax_2
                
                if (rax_2 s> *(rsi_1 + 0xc))
                    sub_1405c4ec0(rsi_1)
                
                int64_t rax_3 = *rsi_1
                int64_t rcx_3 = rbp_1 * 5
                *(rax_3 + (rcx_3 << 3)) = zmm6
                *(rax_3 + (rcx_3 << 3) + 0x10) = zmm7
                *(rax_3 + (rcx_3 << 3) + 0x20) = zmm8.q
                break
        
        rdi = &rdi[4]
        rbx_3 = &rbx_3[0x10]
    while (rdi != r14_2)
    
    r12 = arg1

int128_t* rdi_1 = *(r12 + 0x48)
void* r14_5 = &rdi_1[sx.q(*(r12 + 0x50)) * 4]

if (rdi_1 != r14_5)
    void* rbx_6 = rdi_1 - r13 + 0x28
    
    do
        int64_t rcx_4 = 0
        void* rax_4 = &r13[3]
        
        while (not(*(rax_4 - 0xc) f> *(rbx_6 + rax_4)))
            if (*rax_4 f< *(rbx_6 + rax_4 - 0xc))
                break
            
            rcx_4 += 1
            rax_4 += 4
            
            if (rcx_4 s>= 3)
                int64_t* rsi_2 = *arg3
                zmm6 = *rdi_1
                zmm7 = rdi_1[1]
                int64_t rbp_2 = sx.q(rsi_2[1].d)
                zmm8 = zx.o(rdi_1[2].q)
                int32_t rax_5 = (rbp_2 + 1).d
                rsi_2[1].d = rax_5
                
                if (rax_5 s> *(rsi_2 + 0xc))
                    sub_1405c4ec0(rsi_2)
                
                int64_t rax_6 = *rsi_2
                int64_t rcx_7 = rbp_2 * 5
                *(rax_6 + (rcx_7 << 3)) = zmm6
                *(rax_6 + (rcx_7 << 3) + 0x10) = zmm7
                *(rax_6 + (rcx_7 << 3) + 0x20) = zmm8.q
                break
        
        rdi_1 = &rdi_1[4]
        rbx_6 += 0x40
    while (rdi_1 != r14_5)
    
    r13 = arg2

int64_t* var_70 = nullptr
int64_t var_68 = 1
int64_t var_78 = 0
sub_1405a4d70(&var_70)
int64_t* r15_2 = var_70
int32_t i = var_68.d
*r15_2 = 0
int64_t result

while (i != 0)
    int32_t rdi_2 = (r15_2[sx.q(i - 1)]).d
    
    if (0 != 0)
        memmove(&r15_2[sx.q(i - 1)], &r15_2[sx.q(i)], 0 << 3)
    
    i -= 1
    void* rbx_9 = sx.q(rdi_2) * 0x3c + *(r12 + 0x28)
    
    if (*(rbx_9 + 0x38) != 0)
        if (sub_1416e8d10(sx.q(*(rbx_9 + 0x30)) * 0x98 + *(r12 + 0x38), r13, arg3).b == 0)
            if (r15_2 != 0)
                sub_140a74f90(r15_2)
            
            result.b = 0
            goto label_1416ed5e1
    else if (rbx_9 != rbx_9 + 0x30)
        int32_t* rbx_10 = rbx_9 - r13
        int32_t* r14_6 = rbx_9 + 0x30
        
        do
            int64_t rcx_14 = 0
            void* rax_11 = &r13[3]
            
            while (not(*(rax_11 - 0xc) f> *(rbx_10 + rax_11)))
                if (*rax_11 f< *(rbx_10 + rax_11 - 0xc))
                    break
                
                rcx_14 += 1
                rax_11 += 4
                
                if (rcx_14 s>= 3)
                    int64_t i_1 = sx.q(i)
                    var_78.d = *r14_6
                    var_78:4.d = 0
                    i = (i_1 + 1).d
                    var_68.d = i
                    
                    if (i s> var_68:4.d)
                        sub_1405a4d70(&var_70)
                        i = var_68.d
                        r15_2 = var_70
                    
                    r15_2[i_1] = var_78
                    break
            
            rbx_10 = &rbx_10[6]
            r14_6 = &r14_6[1]
        while (rbx_10 + r13 != rbx_9 + 0x30)
        
        r12 = arg1

if (r15_2 != 0)
    sub_140a74f90(r15_2)

result.b = 1
label_1416ed5e1:
return result
