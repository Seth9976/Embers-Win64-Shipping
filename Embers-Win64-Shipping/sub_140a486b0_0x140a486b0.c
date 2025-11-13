// 函数: sub_140a486b0
// 地址: 0x140a486b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg3)
int32_t rax = sub_140b6bae0()
int64_t* var_80 = nullptr
int32_t var_74 = 0
int64_t* r12 = nullptr
int32_t rbx = 0
int32_t rsi = rax

if (rax s> 0)
    sub_140a4faa0(&var_80)
    rbx = var_74
    rsi = rax
    r12 = var_80

int64_t r9 = sx.q(sub_140b6bb30(r12, rax))

if (r9.d s> rsi)
    rsi = r9.d
    
    if (rsi s> rbx)
        sub_140a4faa0(&var_80)
        r12 = var_80
        rsi = rsi
else if (r9.d s< rsi)
    int32_t rcx_6 = rsi - r9.d
    
    if (rsi != r9.d)
        int32_t rsi_1 = rsi - rcx_6
        
        if (rsi_1 != r9.d)
            memmove(r9 * 0x468 + r12, sx.q(rcx_6 + r9.d) * 0x468 + r12, (rsi_1 - r9.d) * 0x468)
        
        sub_140a4fb30(&var_80)
        r12 = var_80
        rsi = rsi_1

uint64_t result = zx.q(*(arg4 + 0xc))
int64_t* rbx_1 = *arg4
int32_t i_2 = arg4[1].d

if (r14.d s> result.d)
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_12 = *rbx_1
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            rbx_1 = &rbx_1[4]
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = zx.q(*(arg4 + 0xc))
    
    arg4[1].d = 0
    
    if (result.d != r14.d)
        result = sub_1405a51b0(arg4, r14.d)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rcx_11 = *rbx_1
            
            if (rcx_11 != 0)
                result = sub_140a74f90(rcx_11)
            
            rbx_1 = &rbx_1[4]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg4[1].d = 0

if (r14.d s> 0)
    int64_t rcx_14 = 0
    int64_t arg_20 = 0
    void* r13_2 = sx.q(rsi) * 0x468 + r12
    
    do
        int64_t* rbx_2 = r12
        int64_t rsi_2 = *(arg2 + (rcx_14 << 3))
        
        if (r12 == r13_2)
        label_140a48868:
            int128_t* var_70 = nullptr
            int64_t var_68_1 = 0
            sub_1405947f0(&var_70, 8)
            int32_t rdi_1 = var_68_1:4.d
            int32_t rbx_3 = var_68_1.d + 8
            var_68_1.d = rbx_3
            
            if (rbx_3 s> rdi_1)
                sub_140594770(&var_70)
                rdi_1 = var_68_1:4.d
                rbx_3 = var_68_1.d
            
            int128_t* r12_1 = var_70
            int128_t zmm0_1 = *u"Unknown"
            var_70 = nullptr
            int64_t var_68_2 = 0
            *r12_1 = zmm0_1
            int64_t r14_1 = sx.q(arg4[1].d)
            int32_t rax_10 = (r14_1 + 1).d
            arg4[1].d = rax_10
            
            if (rax_10 s> *(arg4 + 0xc))
                sub_1405c4e40(arg4)
            
            result = (r14_1 << 5) + *arg4
            *result = r12_1
            *(result + 8) = rbx_3
            *(result + 0xc) = rdi_1
            *(result + 0x10) = 0
            *(result + 0x18) = rsi_2
        else
            while (true)
                int64_t rcx_15 = *rbx_2
                
                if (rsi_2 u>= rcx_15 && rsi_2 u< zx.q(rbx_2[1].d) + rcx_15)
                    int64_t var_60 = 0
                    int32_t rdx_7 = 0
                    int32_t rcx_19 = 0
                    int32_t var_58_1 = 0
                    int32_t var_54_1 = 0
                    
                    if (rbx_2 != -0x50 && rbx_2[0xa].w != 0)
                        int64_t rdi_2 = -1
                        
                        do
                            rdi_2 += 1
                        while (*(&rbx_2[0xa] + (rdi_2 << 1)) != 0)
                        
                        if (rdi_2.d + 1 s> 0)
                            sub_1405947f0(&var_60, rdi_2.d + 1)
                            rcx_19 = var_54_1
                            rdx_7 = var_58_1
                        
                        int32_t rax_13 = rdx_7 + rdi_2.d + 1
                        int32_t var_58_2 = rax_13
                        
                        if (rax_13 s> rcx_19)
                            sub_140594770(&var_60)
                        
                        memcpy(var_60, &rbx_2[0xa], (rdi_2.d + 1) * 2)
                    
                    int64_t rdi_4 = *rbx_2
                    void var_50
                    int64_t* rax_14 = sub_140b18700(&var_50, &var_60, 1)
                    int64_t r14_3 = *rax_14
                    *rax_14 = 0
                    int32_t rcx_24 = *(rax_14 + 0xc)
                    int32_t r12_2 = rax_14[1].d
                    rax_14[1] = 0
                    int64_t rcx_25 = *rax_14
                    
                    if (rcx_25 != 0)
                        sub_140a74f90(rcx_25)
                    
                    int64_t rbx_4 = sx.q(arg4[1].d)
                    int32_t rax_15 = (rbx_4 + 1).d
                    arg4[1].d = rax_15
                    
                    if (rax_15 s> *(arg4 + 0xc))
                        sub_1405c4e40(arg4)
                    
                    result = (rbx_4 << 5) + *arg4
                    *result = r14_3
                    *(result + 8) = r12_2
                    *(result + 0xc) = rcx_24
                    *(result + 0x10) = rdi_4
                    *(result + 0x18) = rsi_2 - rdi_4
                    int64_t rcx_28 = var_60
                    
                    if (rcx_28 != 0)
                        result = sub_140a74f90(rcx_28)
                    
                    break
                
                rbx_2 = &rbx_2[0x8d]
                
                if (rbx_2 == r13_2)
                    goto label_140a48868
        
        r12 = var_80
        rcx_14 = arg_20 + 1
        arg_20 = rcx_14
    while (rcx_14 s< r14)

int64_t* rcx_30 = var_80

if (rcx_30 == 0)
    return result

return sub_140a74f90(rcx_30)
