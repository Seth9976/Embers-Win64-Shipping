// 函数: sub_142be1ea0
// 地址: 0x142be1ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *(arg1 + 0x98)
uint16_t* rbx = nullptr
char* arg_20 = nullptr

if (*(arg1 + 0x4d0) == 0)
    return 3

int32_t arg_18
int32_t rax_1 = (*(arg1 + 0x2a0))(arg3, 0x434f4c52, arg2, &arg_18)
int32_t arg_8 = rax_1

if (rax_1 == 0)
    int32_t rdx = arg_18
    
    if (rdx u< 0xe)
        arg_8 = 8
    else
        int32_t rax_2 = sub_142b96670(arg2, rdx, &arg_20)
        arg_8 = rax_2
        
        if (rax_2 == 0)
            char* rdi_1 = arg_20
            uint16_t* rax_3 = sub_142b99860(r14, rax_2 + 0x28, &arg_8)
            rbx = rax_3
            
            if (arg_8 == 0)
                uint16_t rdx_2 = zx.w(*rdi_1) << 8 | zx.w(rdi_1[1])
                *rax_3 = rdx_2
                
                if (rdx_2 == 0)
                    uint16_t rcx_3 = zx.w(rdi_1[2]) << 8 | zx.w(rdi_1[3])
                    rbx[1] = rcx_3
                    int32_t r8_3 = arg_18
                    uint32_t rdx_9 =
                        ((zx.d(rdi_1[4]) << 8 | zx.d(rdi_1[5])) << 8 | zx.d(rdi_1[6])) << 8
                        | zx.d(rdi_1[7])
                    
                    if (rdx_9 u< r8_3 && (zx.q(rcx_3) * 3).d * 2 u<= r8_3 - rdx_9)
                        uint32_t rcx_12 =
                            ((zx.d(rdi_1[8]) << 8 | zx.d(rdi_1[9])) << 8 | zx.d(rdi_1[0xa])) << 8
                            | zx.d(rdi_1[0xb])
                        uint16_t r9_1 = zx.w(rdi_1[0xc]) << 8 | zx.w(rdi_1[0xd])
                        rbx[2] = r9_1
                        int32_t r8_5 = arg_18
                        
                        if (rcx_12 u< r8_5 && zx.d(r9_1) << 2 u<= r8_5 - rcx_12)
                            *(rbx + 8) = &arg_20[zx.q(rdx_9)]
                            *(rbx + 0x10) = &arg_20[zx.q(rcx_12)]
                            *(rbx + 0x18) = arg_20
                            *(rbx + 0x20) = arg_18
                            *(arg1 + 0x4d8) = rbx
                            return 0
                
                arg_8 = 8

sub_142b97020(arg2, &arg_20)
sub_142b99980(r14, rbx)
return zx.q(arg_8)
