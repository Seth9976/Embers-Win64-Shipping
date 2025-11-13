// 函数: sub_141ac1dc0
// 地址: 0x141ac1dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int32_t i_3 = *(arg1 + 0x210)
int32_t r15 = *(arg1 + 0x220)
void* r13 = arg2[9]
int64_t* rbx = *(arg1 + 0x208)

if (i_3 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[4]
        i = i_3
        i_3 -= 1
    while (i != 1)

*(arg1 + 0x210) = 0

if (*(arg1 + 0x214) != r15)
    sub_1405a51b0(arg1 + 0x208, r15)

void* r12 = nullptr
int32_t arg_10 = 0
int32_t rcx_2
rcx_2.b = *(arg1 + 0x114) == 0

if ((rcx_2.b & sub_140b5b8a0(*(arg1 + 0x110), 0)) != 0)
    *(arg1 + 0x110) = **(r13 + 0x20)

int32_t rcx_4
rcx_4.b = sub_140b5b8a0(*(arg1 + 0x110), 0) == 0

if ((*(arg1 + 0x114) != 0 | rcx_4.b) != 0)
    sub_141ea5640(arg1 + 0x110, arg2)

int32_t r15_1 = 0

if (rax s> 0)
    do
        int64_t rax_4 = arg2[0xe]
        int32_t arg_18 = r15_1
        int64_t rdi_1 = sx.q(*(*(arg1 + 0x228) + (zx.q(*(r12 + rax_4)) << 2)))
        
        if (rdi_1.d != 0xffffffff)
            int64_t rbx_2 = sx.q(*(arg1 + 0x210))
            int32_t rax_6 = (rbx_2 + 1).d
            *(arg1 + 0x210) = rax_6
            
            if (rax_6 s> *(arg1 + 0x214))
                sub_1405c4e40(arg1 + 0x208)
            
            int64_t rbx_3 = rbx_2 << 5
            int64_t* rbx_4 = rbx_3 + *(arg1 + 0x208)
            
            if (rbx_3 == neg.q(*(arg1 + 0x208)))
                rbx_4 = nullptr
            else
                *rbx_4 = 0
                rbx_4[1] = 0
                rbx_4[2].d = 0xffffffff
            
            *(rbx_4 + 0x14) = rdi_1.d
            rbx_4[2].d = arg_18
            int64_t rdi_2 = sx.q(rbx_4[1].d)
            int32_t rax_9 = arg_10 + 1
            
            if ((*((rdi_1 << 6) + *(arg1 + 0x238) + 0x30) & 1) == 0)
                rax_9 = arg_10
            
            arg_10 = rax_9
            int32_t rax_10 = (rdi_2 + 1).d
            rbx_4[1].d = rax_10
            
            if (rax_10 s> *(rbx_4 + 0xc))
                sub_1405a4cf0(rbx_4)
            
            *(*rbx_4 + (rdi_2 << 2)) = arg_18
            rbx_4[3].d = 0xffffffff
            int32_t i_2
            sub_141ea4020(arg2, &i_2, &arg_18)
            int32_t i_1 = i_2
            
            if (i_1 != 0xffffffff)
                arg_10 = rax_9
                
                do
                    int32_t rcx_14 =
                        *(*(arg1 + 0x228) + (zx.q(*(arg2[0xe] + (sx.q(i_1) << 2))) << 2))
                    rbx_4[3].d = rcx_14
                    
                    if (rcx_14 != 0xffffffff)
                        break
                    
                    int64_t rdi_3 = sx.q(rbx_4[1].d)
                    int32_t rax_14 = (rdi_3 + 1).d
                    rbx_4[1].d = rax_14
                    
                    if (rax_14 s> *(rbx_4 + 0xc))
                        sub_1405a4cf0(rbx_4)
                    
                    *(*rbx_4 + (rdi_3 << 2)) = i_2
                    void var_58
                    i_1 = *sub_141ea4020(arg2, &var_58, &i_2)
                    i_2 = i_1
                while (i_1 != 0xffffffff)
        
        r15_1 += 1
        r12 += 4
    while (r15_1 s< rax)
    
    r12 = zx.q(arg_10)

*(arg1 + 0x13d) |= 4
void* rcx_18 = *(arg1 + 0x1e8)

if (rcx_18 != 0)
    sub_142252a30(rcx_18, r12.d)

int64_t result = sub_141a9a1b0(arg1 + 0x508)
*(arg1 + 0x560) = 0
*(arg1 + 0x558) = 0

if (*(arg1 + 0x55c) s<= 0xffffffff)
    result = sub_1405c5570(arg1 + 0x550, 0)

*(arg1 + 0x568) = 0
*(arg1 + 0x56a) = 0
return result
