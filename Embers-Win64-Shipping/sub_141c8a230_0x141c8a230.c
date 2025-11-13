// 函数: sub_141c8a230
// 地址: 0x141c8a230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
sub_141c8e370(*(arg1 + 0x148), arg2)
int64_t* rbx = *arg2
int64_t rax_3 = (*(*rbx + 0x18))(rbx)
char rax_6

if (rax_3 != 0)
    rax_6 = sub_140d3e170((*(*rbx + 0x20))(rbx), 0, 1)

int64_t var_68
int64_t rcx_6
int32_t rbx_1

if (rax_3 == 0 || rax_6 == 0)
    rbx_1 = 0
    rcx_6 = 0
    var_68 = 0
else
    rcx_6 = *(sub_140d3c6e0((*(*rbx + 0x20))(rbx)) + 0x18)
    var_68 = rcx_6
    rbx_1 = var_68:4.d

void* rax_11 = sub_141c80cb0(arg1 + 0x10, rbx_1 + sub_140b5ead0(rcx_6.d), &var_68)
int64_t* i = *rax_11
void** result
int64_t* rdi_7

for (void* rdi_2 = &i[sx.q(*(rax_11 + 8)) * 2]; i != rdi_2; i = &i[2])
    int64_t* rcx_8 = *i
    
    if ((*(*rcx_8 + 0x10))(rcx_8, arg2) != 0)
        int64_t* rdi_6 = i[1]
        int64_t var_60 = *i
        int64_t* var_58_1 = rdi_6
        
        if (rdi_6 != 0)
            rdi_6[1].d += 1
        
        result = sub_141c8dff0(*(arg1 + 0x148), arg2, &var_60)
        
        if (rdi_6 != 0)
            result = zx.q(rdi_6[1].d)
            rdi_6[1].d -= 1
            
            if (result.d == 1)
                (**rdi_6)(rdi_6)
                result = zx.q(*(rdi_6 + 0xc))
                *(rdi_6 + 0xc) -= 1
                
                if (result.d == 1)
                    result = (*(*rdi_6 + 8))(rdi_6, 1)
        
        rdi_7 = arg2[1]
        
        if (rdi_7 == 0)
            goto label_141c8a536
        
        goto label_141c8a507

int64_t* rax_15

if (*(arg1 + 0x160) != 0)
    int64_t* rcx_9 = *arg2
    rax_15 = (*(*rcx_9 + 0x68))(rcx_9)

if (*(arg1 + 0x160) == 0 || *rax_15 s<= *(arg1 + 0x120))
    result = sub_141c859d0(arg1, arg2)
else
    int64_t rdi_4 = *(arg1 + 0x138) + 1
    *(arg1 + 0x138) = rdi_4
    void* rbx_2 = arg2[1]
    int64_t r12_1 = *arg2
    
    if (rbx_2 != 0)
        *(rbx_2 + 8) += 1
    
    int64_t rbp_1 = sx.q(*(arg1 + 0x130))
    int32_t rax_16 = (rbp_1 + 1).d
    *(arg1 + 0x130) = rax_16
    
    if (rax_16 s> *(arg1 + 0x134))
        sub_1405a4df0(arg1 + 0x128)
    
    result = *(arg1 + 0x128)
    int64_t rcx_13 = rbp_1 * 3
    result[rcx_13] = r12_1
    result[rcx_13 + 1] = rbx_2
    result[rcx_13 + 2] = rdi_4
    int64_t r12_2 = *(arg1 + 0x128)
    int32_t r8_4 = *(arg1 + 0x130) - 1
    
    if (r8_4 s> 0)
        int64_t rbp_2
        
        do
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(r8_4 - 1)
            rbp_2 = sx.q((temp2_1 - temp1_1) s>> 1)
            int64_t rdx_5 = rbp_2 * 3
            int64_t* rdi_5 = *(r12_2 + (rdx_5 << 3))
            int128_t* rsi_1 = r12_2 + (rdx_5 << 3)
            int64_t rdx_6 = sx.q(r8_4) * 3
            int64_t* rcx_15 = *(r12_2 + (rdx_6 << 3))
            int128_t* r14_1 = r12_2 + (rdx_6 << 3)
            int64_t rdx_7 = *rcx_15
            int64_t* rax_21 = (*(rdx_7 + 0x68))(rcx_15, rdx_7)
            int64_t rdx_8 = *rdi_5
            int64_t rax_23 = *(*(rdx_8 + 0x68))(rdi_5, rdx_8)
            
            if (rax_23 != *rax_21)
                result.b = rax_23 - *rax_21 s> 0
            else
                result.b = r14_1[1].q s< rsi_1[1].q
            
            if (result.b == 0)
                break
            
            if (r14_1 != rsi_1)
                int128_t zmm3 = *r14_1
                int64_t zmm2 = r14_1[1].q
                int128_t var_50_1 = zmm3
                *r14_1 = *rsi_1
                r14_1[1].q = rsi_1[1].q
                *rsi_1 = zmm3
                rsi_1[1].q = zmm2
                int64_t var_40_1 = zmm2
            
            r8_4 = rbp_2.d
        while (rbp_2.d s> 0)

rdi_7 = arg2[1]

if (rdi_7 != 0)
label_141c8a507:
    result = zx.q(rdi_7[1].d)
    rdi_7[1].d -= 1
    
    if (result.d == 1)
        result = (**rdi_7)(rdi_7)
        int32_t rbx_4 = *(rdi_7 + 0xc)
        *(rdi_7 + 0xc) -= 1
        
        if (rbx_4 == 1)
            result = (*(*rdi_7 + 8))(rdi_7, zx.q(rbx_4))

label_141c8a536:
__security_check_cookie(rax_1 ^ &var_88)
return result
