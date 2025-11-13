// 函数: sub_141905670
// 地址: 0x141905670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg4

if (data_143f00398 != 0 && data_143eff5d4 != 0)
    return 

void* rcx = *arg3
int32_t var_38 = 0
int32_t rbx_1 = 0
int64_t r12_1 = sub_14193d920(rcx, &var_38)

if (var_38 s>= 0)
    int64_t* r14_1 = nullptr
    int64_t r15_1 = 0
    int32_t rbp_1 = 1
    
    do
        int64_t rcx_1 = *(r12_1 + 0x10)
        int64_t rdx_1 = r12_1
        int32_t rax_1 = rbx_1
        
        if (rcx_1 != 0)
            rdx_1 = rcx_1
        
        if (rbx_1 s< 0)
            rax_1 = rbx_1 + 0x1f
        
        if ((*(rdx_1 + (sx.q(rax_1 s>> 5) << 2)) & rbp_1) != 0)
            int64_t rax_3 = *(arg2 + 8)
            int64_t* rdi_4 = *(arg1 + 0x150) + r15_1
            int32_t rcx_4 = rdi_4[2].d
            int32_t rdx_2 = *(rdi_4 + 0x14)
            
            if (*(r15_1 + rax_3 + 0x10) != rcx_4 || *(r15_1 + rax_3 + 0x14) != rdx_2)
                int32_t var_48_1 = rdi_4[4].d
                sub_14190a090(arg1, arg2, rbx_1, rcx_4, rdx_2, rdi_4[3].d)
                rcx_4 = rdi_4[2].d
            
            if (rcx_4 == 0x8d65)
                data_143effb78(zx.q(rbx_1), 0)
                *(r14_1 + *(arg2 + 0x10)) = 0
                int32_t var_58
                var_58.q = *(*(arg1 + 0x158) + r14_1)
                sub_141909a60(arg1, arg2, rbx_1, rdi_4, var_58)
            else
                void* rdi_5 = *(r14_1 + *(arg1 + 0x158))
                
                if (*(r14_1 + *(arg2 + 0x10)) != rdi_5)
                    uint64_t rdx_4
                    
                    if (rdi_5 == 0)
                        rdx_4 = 0
                    else
                        rdx_4 = zx.q(*(rdi_5 + 0x18))
                    
                    data_143effb78(zx.q(rbx_1), rdx_4)
                    *(r14_1 + *(arg2 + 0x10)) = rdi_5
        else
            void* rdi_2 = *(arg2 + 8) + r15_1
            
            if (*(rdi_2 + 0x10) != 0 || *(rdi_2 + 0x14) != 0)
                if (*(arg2 + 0x3f0) != rbx_1)
                    data_143effc18(zx.q(rbx_1 + 0x84c0))
                    *(arg2 + 0x3f0) = rbx_1
                
                data_143eff988(zx.q(*(rdi_2 + 0x10)), 0)
                *(rdi_2 + 0x14) = 0
                *(rdi_2 + 0x20) = 0
                *(rdi_2 + 0x10) = 0
        
        rbx_1 += 1
        rbp_1 = rol.d(rbp_1, 1)
        r15_1 += 0x28
        r14_1 = &r14_1[1]
    while (rbx_1 s<= var_38)
    
    r14 = arg4

int32_t rdi_7 = var_38 + 1

if (rdi_7 s>= r14)
    return 

int64_t rbp_3 = sx.q(rdi_7) * 0x28

do
    int64_t rbx_2 = *(arg2 + 8)
    
    if (*(rbx_2 + rbp_3 + 0x10) != 0 || *(rbx_2 + rbp_3 + 0x14) != 0)
        if (*(arg2 + 0x3f0) != rdi_7)
            data_143effc18(zx.q(rdi_7 + 0x84c0))
            *(arg2 + 0x3f0) = rdi_7
        
        data_143eff988(zx.q(*(rbx_2 + rbp_3 + 0x10)), 0)
        *(rbx_2 + rbp_3 + 0x14) = 0
        *(rbx_2 + rbp_3 + 0x20) = 0
        *(rbx_2 + rbp_3 + 0x10) = 0
    
    rdi_7 += 1
    rbp_3 += 0x28
while (rdi_7 s< r14)
