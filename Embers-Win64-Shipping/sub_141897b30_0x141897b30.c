// 函数: sub_141897b30
// 地址: 0x141897b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* var_b8 = arg2
int64_t* r13 = arg2
int64_t var_b0 = 0
int64_t var_a8 = 0
int16_t* const rdx

if (*(arg1 + 0x30) == 0)
    rdx = &data_142d40450
else
    rdx = *(arg1 + 0x28)

sub_140b1f370(&var_b0, rdx, 0, 0)
int64_t* var_c8 = nullptr
int32_t i_7 = 0
sub_140a2cec0(&var_b0, &var_c8, 1)
int64_t* i = *r13

for (void* rdi_2 = &i[sx.q(r13[1].d) * 2]; i != rdi_2; i = &i[2])
    sub_140b21570(i)

int64_t* rbx = var_c8
void* r15_2 = &rbx[sx.q(i_7) * 2]

if (rbx != r15_2)
    do
        int32_t rax_2 = sub_140a23cf0(rbx, &data_142d84ee4, 0, 0, 0xffffffff)
        
        if (rax_2 != 0xffffffff)
            int32_t rcx_4 = rbx[1].d
            int32_t rdi_3 = rcx_4 - 1
            int32_t rax_3 = rcx_4 - 1
            
            if (rcx_4 == 0)
                rdi_3 = -1
            
            if (rcx_4 == 0)
                rax_3 = 0
            
            int32_t r10_1
            
            if (rax_2 s>= 0)
                r10_1 = rax_3
                
                if (rax_2 s< rax_3)
                    r10_1 = rax_2
            else
                r10_1 = 0
            
            if (rcx_4 == 0)
                rdi_3 = 0
            
            int32_t rdi_4 = rdi_3 - r10_1
            int32_t rax_4 = rax_3 - r10_1
            
            if (rax_3 - r10_1 s>= 0)
                if (rax_4 s< rdi_4)
                    rdi_4 = rax_4
                
                if (rdi_4 != 0)
                    int32_t rax_6 = rcx_4 - rdi_4
                    
                    if (rax_6 != r10_1)
                        int64_t r9_1 = *rbx
                        memmove(r9_1 + (sx.q(r10_1) << 1), r9_1 + (sx.q(rdi_4 + r10_1) << 1), 
                            (rax_6 - r10_1) * 2)
                        rcx_4 = rbx[1].d
                    
                    rbx[1].d = rcx_4 - rdi_4
        
        int32_t rax_10 = rbx[1].d
        int32_t rsi_1 = *(arg1 + 0x10)
        int32_t rdi_5 = rax_10 - 1
        
        if (rax_10 == 0)
            rdi_5 = 0
        
        int32_t rax_12
        
        if (rsi_1 == 0)
            rax_12 = rsi_1 + 2
        
        if (rsi_1 != 0 || rdi_5 == 0xffffffff)
            rax_12 = 1
        
        int64_t r14_1 = *(arg1 + 8)
        int32_t rcx_8 = rdi_5 + rax_12
        int64_t var_d8 = 0
        int32_t var_cc
        
        if (rsi_1 != 0 || rcx_8 != 0)
            sub_1405a4c70(&var_d8, rsi_1 + rcx_8, 0)
            memcpy(var_d8, r14_1, rsi_1 * 2)
        else
            var_cc = 0
        
        sub_140a2cf70(&var_d8, *rbx, rdi_5)
        
        if (rbx == &var_d8)
            int64_t rcx_13 = var_d8
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
        else
            int64_t rcx_12 = *rbx
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            *rbx = var_d8
            rbx[1].d = rsi_1
            *(rbx + 0xc) = var_cc
            int32_t var_d0_1
            var_d0_1.q = 0
            var_d8 = 0
        
        sub_140b21570(rbx)
        rbx = &rbx[2]
    while (rbx != r15_2)
    
    r13 = var_b8

int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
sub_140a5bc30(&var_98, &var_c8)
int32_t r14_2 = r13[1].d

if (r14_2 != 0)
    int32_t r12_1 = 0
    int32_t i_1 = 0
    r15_2.b = *sub_140960120(&var_98, &var_b8, *r13) == 0xffffffff
    
    do
        int64_t i_5 = sx.q(i_1)
        
        for (i_1 += 1; i_1 s< r14_2; i_1 += 1)
            int32_t rcx_18
            rcx_18.b = *sub_140960120(&var_98, &var_b8, (sx.q(i_1) << 4) + *r13) == 0xffffffff
            
            if (zx.d(r15_2.b) != rcx_18)
                break
        
        int32_t i_4 = i_1 - i_5.d
        
        if (r15_2.b == 0)
            int64_t* rdi_7 = (i_5 << 4) + *r13
            
            if (i_4 != 0)
                int32_t i_2
                
                do
                    int64_t rcx_22 = *rdi_7
                    
                    if (rcx_22 != 0)
                        sub_140a74f90(rcx_22)
                    
                    rdi_7 = &rdi_7[2]
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
        else
            if (r12_1 != i_5.d)
                memmove((sx.q(r12_1) << 4) + *r13, (i_5 << 4) + *r13, i_4 << 4)
            
            r12_1 += i_4
        
        r15_2.b ^= 1
    while (i_1 s< r14_2)
    
    r13[1].d = r12_1

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t result = sub_14059ad90(&var_98, 0)
int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

int64_t rcx_26 = var_98

if (rcx_26 != 0)
    result = sub_140a74f90(rcx_26)

int32_t i_6 = i_7
int64_t* rbx_1 = var_c8

if (i_6 != 0)
    int32_t i_3
    
    do
        int64_t rcx_27 = *rbx_1
        
        if (rcx_27 != 0)
            result = sub_140a74f90(rcx_27)
        
        rbx_1 = &rbx_1[2]
        i_3 = i_6
        i_6 -= 1
    while (i_3 != 1)
    rbx_1 = var_c8

if (rbx_1 != 0)
    result = sub_140a74f90(rbx_1)

int64_t rcx_29 = var_b0

if (rcx_29 != 0)
    result = sub_140a74f90(rcx_29)

__security_check_cookie(rax_1 ^ &var_108)
return result
