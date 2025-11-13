// 函数: sub_142897fe0
// 地址: 0x142897fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = *(arg1 + 8)
int64_t* r14 = nullptr

if (rax != 0 && *(arg1 + 0x28) s> *(rax + 0x28))
    sub_1428a5670(0x24, 0x78, 0x83, "crypto\rand\rand_lib.c", 0x91)
    return 0

int64_t* rax_3 = sub_142898600(arg3, arg4, arg5)

if (rax_3 == 0)
    return rax_3

int64_t* rdx_1 = *(arg1 + 0x20)

if (rdx_1 != 0)
    sub_142898390(rax_3, *rdx_1, rdx_1[1], rdx_1[4])
    sub_1428985b0(*(arg1 + 0x20))
    *(arg1 + 0x20) = 0

int64_t* r8_2 = *(arg1 + 8)
int64_t rcx_10

if (r8_2 != 0)
    int64_t rcx_3 = rax_3[4]
    int64_t rdi_2 = rax_3[5] - rcx_3
    int64_t rcx_4 = rax_3[1]
    
    if (rcx_3 u>= rax_3[5])
        rdi_2 = 0
    
    int64_t rdx_4 = rax_3[3] - rcx_4
    uint64_t rdi_4 = (rdi_2 + 7) u>> 3
    
    if (rdi_4 u<= rdx_4)
        int64_t rax_4 = rax_3[2]
        
        if (rcx_4 u< rax_4)
            uint64_t rax_5 = rax_4 - rcx_4
            
            if (rdi_4 u< rax_5)
                rdi_4 = rax_5
        
        if (rdi_4 != 0)
            if (rdi_4 u<= rdx_4)
                int64_t rbp_1 = *rax_3
                
                if (rbp_1 != neg.q(rcx_4))
                    sub_1428dcc50(r8_2)
                    uint64_t rbp_3 = 0
                    
                    if (sub_1428dc1d0(*(arg1 + 8), rbp_1 + rcx_4, rdi_4, arg6, 0, 0) != 0)
                        rbp_3 = rdi_4
                    
                    sub_1428dd090(*(arg1 + 8))
                    int64_t rcx_8 = rax_3[1]
                    
                    if (rbp_3 u> rax_3[3] - rcx_8)
                        sub_1428a5670(0x24, 0x72, 0x7d, "crypto\rand\rand_lib.c", 0x28a)
                    else if (rbp_3 != 0)
                        rax_3[1] = rcx_8 + rbp_3
                        rax_3[4] += rbp_3 << 3
                    
                    rcx_10 = rax_3[4]
                    
                    if (rcx_10 u>= rax_3[5] && rax_3[1] u>= rax_3[2])
                        goto label_142898206
            else
                sub_1428a5670(0x24, 0x71, 0x7d, "crypto\rand\rand_lib.c", 0x277)
    else
        sub_1428a5670(0x24, 0x73, 0x7d, "crypto\rand\rand_lib.c", 0x239)
else if (arg6 == 0)
    rcx_10 = sub_1428dd0c0(rax_3)
label_142898206:
    
    if (rcx_10 != 0)
        int64_t rcx_11 = *rax_3
        r14 = rax_3[1]
        *rax_3 = 0
        *arg2 = rcx_11
else
    sub_1428a5670(0x24, 0x78, 0x85, "crypto\rand\rand_lib.c", 0xc3)
sub_1428a7140(*rax_3, rax_3[3], "crypto\rand\rand_lib.c", 0x1d4)
sub_1428a6780(rax_3)
return r14
