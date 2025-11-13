// 函数: sub_142ba30f0
// 地址: 0x142ba30f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0x40
int32_t r14_1 = *(arg1 + 0x116c) & 4

if (r14_1 == 0)
    if ((*(arg2 + 0xc) & 1) == 0 || (*(arg3 + 0xc) & 1) == 0)
        rbx = 0x3b
        
        if (arg5 == 1)
            rbx = 0x3d
    else
        rbx = 0x37
        
        if (arg5 != 1)
            rbx = 0x31

int32_t r15 = *(arg3 + 4)
int32_t r12 = *(arg2 + 4)
*(arg2 + 0xc)
uint32_t var_28 = zx.d(*(arg3 + 0xc))
int32_t rax_1 = sub_142ba0200(arg1, arg5, r15 - r12)
int32_t r9_1 = 0
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(r12 + r15)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rax_1)
int32_t r10_2 = ((temp1 - temp0) s>> 1) - ((temp3 - temp2) s>> 1) + arg4
int32_t rax_11 = r10_2 & 0x3f
int32_t rdx_4 = (r10_2 + rax_1) & 0x3f

if (rax_11 != 0 && rdx_4 != 0)
    if (rax_1 s> rbx)
        if (rbx u>= 0x40)
        label_142ba31fb:
            int32_t rcx_2 = rax_1 & 0x3f
            
            if (rcx_2 u>= 0x20)
                rcx_2 = 0x40 - rbx
            label_142ba3216:
                int32_t rbx_1 = rbx - rdx_4
                int32_t rax_13 = rbx - (0x40 - rax_11)
                int32_t rdx_5 = rdx_4 - rcx_2
                int32_t rdi_2 = 0x40 - rax_11 - rcx_2
                int32_t r8_3 = neg.d(rax_13)
                
                if (rax_13 s> rdi_2)
                    r8_3 = rdi_2
                
                r9_1 = neg.d(rdx_5)
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(r8_3)
                
                if (rdx_5 s> rbx_1)
                    r9_1 = rbx_1
                
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(r9_1)
                
                if ((temp5_1 ^ temp4_1) - temp4_1 s<= (temp7_1 ^ temp6_1) - temp6_1)
                    r9_1 = r8_3
            else if (0x40 - rax_11 s> rcx_2 && rdx_4 u> rcx_2)
                goto label_142ba3216
        else if (rax_11 u< rbx && 0x40 - rax_11 s< rbx && rdx_4 u< rbx && 0x40 - rdx_4 s< rbx)
            goto label_142ba31fb
    else if (rdx_4 s< rax_1)
        if (0x40 - rax_11 s> rdx_4)
            r9_1 = neg.d(rdx_4)
        else
            r9_1 = 0x40 - rax_11

if (r14_1 == 0)
    if (r9_1 s> 0xe)
        r9_1 = r14_1 + 0xe
    else if (r9_1 s< 0xfffffff2)
        r9_1 = -0xe

int32_t r10_3 = r10_2 + r9_1

if (r12 s>= r15)
    *(arg2 + 8) = r10_3 + rax_1
    *(arg3 + 8) = r10_3
else
    *(arg2 + 8) = r10_3
    *(arg3 + 8) = r10_3 + rax_1

return zx.q(r9_1)
