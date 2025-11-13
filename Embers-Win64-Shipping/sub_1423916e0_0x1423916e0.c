// 函数: sub_1423916e0
// 地址: 0x1423916e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = nullptr

if (arg1 != arg2)
    int64_t rbx_1 = sx.q(arg2[1].d)
    int64_t rdi_1 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = rbx_1.d
    
    if (rbx_1.d != 0 || r8_1 != 0)
        sub_1407751d0(arg1, rbx_1.d, r8_1)
        memcpy(*arg1, rdi_1, (rbx_1 * 0x28).d)
    else
        *(arg1 + 0xc) = 0

int64_t* arg_28
int64_t* rdi_2 = arg_28
arg1[0xe].d = arg3.d
sub_14239a380(&rdi_2[2])

if (rdi_2[4] == 0)
    void**** rax_1 = sub_1423ac710(&arg_28, rdi_2[1])
    
    if (&rdi_2[4] != rax_1)
        int64_t* rcx_3 = rdi_2[4]
        rdi_2[4] = *rax_1
        *rax_1 = nullptr
        
        if (rcx_3 != 0)
            rcx_3[1].d -= 1
            
            if (rcx_3[1].d == 1)
                (**rcx_3)(rcx_3, 1)
    
    int64_t* rcx_4 = arg_28
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            (**rcx_4)(rcx_4, 1)

int64_t* rbx_3 = rdi_2[4]
rdi_2[5].d = 0

if (rbx_3 != 0)
    rbx_3[1].d += 1

void var_58

if (&arg1[8] != &var_58)
    int64_t* rcx_5 = arg1[8]
    arg1[8] = rbx_3
    rbx_3 = nullptr
    
    if (rcx_5 != 0)
        rcx_5[1].d -= 1
        
        if (rcx_5[1].d == 1)
            (**rcx_5)(rcx_5, 1)

void var_50

if (&arg1[9] != &var_50)
    int64_t rcx_6 = arg1[9]
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    arg1[9] = 0
    arg1[0xa] = 0

arg1[0xb].d = 0x7f7fffff

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3, 1)

sub_142396850(&arg1[0xc], 0)
arg1[0x10].d = 0

if (*(arg1 + 0x84) s<= 0xffffffff)
    sub_1405dadb0(&arg1[0xf], 0)

int32_t rax_6 = *(arg1 + 0x94)
arg1[0x12].d = 0

if (rax_6 s< 0 && rax_6 != 0)
    sub_1405dadb0(&arg1[0x11], 0)

uint64_t result = zx.q(*(arg1 + 0xa4))
arg1[0x14].d = 0
int32_t temp5 = result.d

if (temp5 s< 0 && temp5 != 0)
    result = sub_1405dadb0(&arg1[0x13], 0)

int32_t i = 0

if (arg4[1].d s> 0)
    do
        int64_t* rcx_12 = *(r15 + *arg4)
        
        if (rcx_12 == 0 || rcx_12[1].b == 0 || (*(*rcx_12 + 0x1f4) & 0x20) == 0
                || *(rcx_12[3] + 0x130) s<= 0)
            int64_t rdi_6 = sx.q(arg1[0x14].d)
            int32_t rax_16 = (rdi_6 + 1).d
            arg1[0x14].d = rax_16
            
            if (rax_16 s> *(arg1 + 0xa4))
                sub_1405a4cf0(&arg1[0x13])
            
            result = arg1[0x13]
            *(result + (rdi_6 << 2)) = 0xffffffff
        else
            int64_t rdi_4 = sx.q(arg1[0x14].d)
            int32_t rsi_1 = arg1[0xd].d
            int32_t rax_10 = (rdi_4 + 1).d
            arg1[0x14].d = rax_10
            
            if (rax_10 s> *(arg1 + 0xa4))
                sub_1405a4cf0(&arg1[0x13])
            
            *(arg1[0x13] + (rdi_4 << 2)) = rsi_1
            void* rsi_2 = *(r15 + *arg4)
            sub_14239a450(rsi_2 + 0x20)
            void* rdi_5 = *(rsi_2 + 0x30)
            
            if (rdi_5 == 0)
                rdi_5 = *(rsi_2 + 0x18)
                *(rsi_2 + 0x30) = rdi_5
                
                if (rdi_5 != 0)
                    *(rdi_5 + 8) += 1
                    rdi_5 = *(rsi_2 + 0x30)
            
            *(rsi_2 + 0x38) = 0
            
            if (rdi_5 != 0)
                *(rdi_5 + 8) += 1
            
            int64_t rsi_3 = sx.q(arg1[0xd].d)
            int32_t rax_13 = (rsi_3 + 1).d
            arg1[0xd].d = rax_13
            
            if (rax_13 s> *(arg1 + 0x6c))
                sub_1405c4e40(&arg1[0xc])
            
            result = (rsi_3 << 5) + arg1[0xc]
            *result = rdi_5
            *(result + 8) = 0
            *(result + 0x10) = 0
            *(result + 0x18) = 0x7f7fffff
        
        i += 1
        r15 = &r15[1]
    while (i s< arg4[1].d)

int64_t rcx_18 = *arg2

if (rcx_18 == 0)
    return result

return sub_140a74f90(rcx_18)
