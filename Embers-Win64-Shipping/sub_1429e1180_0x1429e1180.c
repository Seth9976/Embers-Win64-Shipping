// 函数: sub_1429e1180
// 地址: 0x1429e1180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx_1 = (arg2 + 7) s>> 3
int32_t rdx_1 = (arg3 + 7) s>> 3
*(arg1 + 0x364) = rcx_1
*(arg1 + 0x35c) = rdx_1
*(arg1 + 0x368) = rcx_1 + 8
int32_t rcx_3 = (rcx_1 + 1) s>> 1
int32_t rax_1 = (rdx_1 + 1) s>> 1
*(arg1 + 0x358) = rax_1
int32_t rdi_1 = (rdx_1 + 8) * (rcx_1 + 8)
*(arg1 + 0x360) = rcx_3
*(arg1 + 0x354) = rax_1 * rcx_3
int32_t rax_3

if (*(arg1 + 0x3c0) s< rdi_1)
    (*(arg1 + 0x3f0))(arg1)
    rax_3 = (*(arg1 + 0x3e8))(arg1, zx.q(rdi_1))

if (*(arg1 + 0x3c0) s>= rdi_1 || rax_3 == 0)
    int32_t rax_6
    
    if (*(arg1 + 0x450) s< *(arg1 + 0x364) * *(arg1 + 0x35c))
        sub_1429e10f0(arg1)
        rax_6 = sub_1429e1030(arg1, *(arg1 + 0x364) * *(arg1 + 0x35c))
    
    if (*(arg1 + 0x450) s>= *(arg1 + 0x364) * *(arg1 + 0x35c) || rax_6 == 0)
        if (*(arg1 + 0x4590) s>= *(arg1 + 0x364))
            goto label_1429e12b8
        
        sub_1429dde60(*(arg1 + 0x4588))
        void* rax_13 = sub_1429dddd0(sx.q(((zx.q(*(arg1 + 0x364) + 7) & 0xfffffff8) * 3).d * 2), 1)
        *(arg1 + 0x4588) = rax_13
        
        if (rax_13 != 0)
            sub_1429dde60(*(arg1 + 0x4580))
            void* rax_17 = sub_1429dddd0(sx.q((*(arg1 + 0x364) + 7) & 0xfffffff8), 1)
            *(arg1 + 0x4580) = rax_17
            
            if (rax_17 != 0)
                *(arg1 + 0x4590) = *(arg1 + 0x364)
            label_1429e12b8:
                
                if (sub_1429e1350(arg1) == 0)
                    return 0

*(arg1 + 0x368) = 8
__builtin_memset(arg1 + 0x354, 0, 0x14)
(*(arg1 + 0x3f0))(arg1)
sub_1429e10f0(arg1)
sub_1429dde60(*(arg1 + 0x4588))
void* rcx_16 = *(arg1 + 0x4580)
*(arg1 + 0x4588) = 0
sub_1429dde60(rcx_16)
void* rcx_17 = *(arg1 + 0x10d8)
*(arg1 + 0x4580) = 0
sub_1429dde60(rcx_17)
*(arg1 + 0x10d8) = 0
return 1
