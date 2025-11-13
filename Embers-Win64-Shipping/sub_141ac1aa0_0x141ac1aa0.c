// 函数: sub_141ac1aa0
// 地址: 0x141ac1aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int32_t i_2 = *(arg1 + 0x218)
int32_t r15 = *(arg1 + 0x228)
void* r13 = arg2[9]
int64_t* rbx = *(arg1 + 0x210)

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[4]
        i = i_2
        i_2 -= 1
    while (i != 1)

*(arg1 + 0x218) = 0

if (*(arg1 + 0x21c) != r15)
    sub_1405a51b0(arg1 + 0x210, r15)

int32_t arg_18 = 0
int32_t r12 = 0
int32_t rcx_2
rcx_2.b = *(arg1 + 0x1ac) == 0

if ((rcx_2.b & sub_140b5b8a0(*(arg1 + 0x1a8), 0)) != 0)
    *(arg1 + 0x1a8) = **(r13 + 0x20)

int32_t rcx_4
rcx_4.b = sub_140b5b8a0(*(arg1 + 0x1a8), 0) == 0

if ((*(arg1 + 0x1ac) != 0 | rcx_4.b) != 0)
    sub_141ea5640(arg1 + 0x1a8, arg2)

r13.b = 0
int32_t r15_1 = 0
uint64_t result

if (rax s> 0)
    while (true)
        result = arg2[0xe]
        int16_t r12_1 = *(arg1 + 0x238)
        int32_t arg_10 = r15_1
        int16_t rdx_2 = *(result + (sx.q(r15_1) << 2))
        
        if (rdx_2 u>= r12_1)
            goto label_141ac1d12
        
        result = *(arg1 + 0x230)
        int64_t rdi_1 = sx.q(*(result + (zx.q(rdx_2) << 2)))
        
        if (rdi_1.d != 0xffffffff)
            int64_t rbx_2 = sx.q(*(arg1 + 0x218))
            int32_t rax_4 = (rbx_2 + 1).d
            *(arg1 + 0x218) = rax_4
            
            if (rax_4 s> *(arg1 + 0x21c))
                sub_1405c4e40(arg1 + 0x210)
            
            int64_t rbx_3 = rbx_2 << 5
            int64_t* rbx_4 = rbx_3 + *(arg1 + 0x210)
            
            if (rbx_3 == neg.q(*(arg1 + 0x210)))
                rbx_4 = nullptr
            else
                *rbx_4 = 0
                rbx_4[1] = 0
                rbx_4[2].d = 0xffffffff
            
            *(rbx_4 + 0x14) = rdi_1.d
            rbx_4[2].d = arg_10
            int64_t rdi_2 = sx.q(rbx_4[1].d)
            int32_t rax_7 = arg_18 + 1
            
            if ((*((rdi_1 << 6) + *(arg1 + 0x240) + 0x30) & 1) == 0)
                rax_7 = arg_18
            
            arg_18 = rax_7
            int32_t rax_8 = (rdi_2 + 1).d
            rbx_4[1].d = rax_8
            
            if (rax_8 s> *(rbx_4 + 0xc))
                sub_1405a4cf0(rbx_4)
            
            *(*rbx_4 + (rdi_2 << 2)) = arg_10
            rbx_4[3].d = 0xffffffff
            int32_t result_1
            sub_141ea4020(arg2, &result_1, &arg_10)
            result = zx.q(result_1)
            
            while (result.d != 0xffffffff)
                int64_t rcx_15 = sx.q(result.d)
                result = arg2[0xe]
                int16_t rdx_6 = *(result + (rcx_15 << 2))
                
                if (rdx_6 u>= r12_1)
                    r13.b = 1
                    break
                
                result = *(arg1 + 0x230)
                int32_t rdx_7 = *(result + (zx.q(rdx_6) << 2))
                rbx_4[3].d = rdx_7
                
                if (rdx_7 != 0xffffffff)
                    break
                
                int64_t rdi_3 = sx.q(rbx_4[1].d)
                int32_t rax_10 = (rdi_3 + 1).d
                rbx_4[1].d = rax_10
                
                if (rax_10 s> *(rbx_4 + 0xc))
                    sub_1405a4cf0(rbx_4)
                
                *(*rbx_4 + (rdi_3 << 2)) = result_1
                void var_58
                result = zx.q(*sub_141ea4020(arg2, &var_58, &result_1))
                result_1 = result.d
            
            if (r13.b != 0)
                goto label_141ac1d12
        
        r15_1 += 1
        
        if (r15_1 s>= rax)
            if (r13.b == 0)
                r12 = arg_18
                break
            
        label_141ac1d12:
            int32_t i_3 = *(arg1 + 0x218)
            int64_t* rbx_5 = *(arg1 + 0x210)
            
            if (i_3 != 0)
                int32_t i_1
                
                do
                    int64_t rcx_20 = *rbx_5
                    
                    if (rcx_20 != 0)
                        result = sub_140a74f90(rcx_20)
                    
                    rbx_5 = &rbx_5[4]
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            *(arg1 + 0x218) = 0
            
            if (*(arg1 + 0x21c) != 0)
                return sub_1405a51b0(arg1 + 0x210, 0)
            
            return result

*(arg1 + 0x1d8) |= 4
void* rcx_22 = *(arg1 + 0x1f0)

if (rcx_22 != 0)
    sub_142252b60(rcx_22, r12)

result = sub_141a9a1b0(arg1 + 0x510)
*(arg1 + 0x568) = 0
*(arg1 + 0x560) = 0

if (*(arg1 + 0x564) s<= 0xffffffff)
    result = sub_1405c5570(arg1 + 0x558, 0)

*(arg1 + 0x570) = 0
*(arg1 + 0x572) = 0
return result
