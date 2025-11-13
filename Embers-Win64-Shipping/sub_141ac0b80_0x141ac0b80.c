// 函数: sub_141ac0b80
// 地址: 0x141ac0b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ea5640(arg1 + 0x140, arg2)

if ((*(arg1 + 0x245) & 0x10) != 0)
    sub_141ea5640(arg1 + 0x150, arg2)

int32_t* i = *(arg1 + 0x230)

for (void* rdi_2 = &i[sx.q(*(arg1 + 0x238)) * 0x10]; i != rdi_2; i = &i[0x10])
    sub_141ea5640(i, arg2)

int32_t* i_1 = *(arg1 + 0x210)

for (void* rdi_3 = &i_1[sx.q(*(arg1 + 0x218)) * 9]; i_1 != rdi_3; i_1 = &i_1[9])
    sub_141ea5640(i_1, arg2)

if (*(arg1 + 0x241) == 4)
    sub_141ea5640(arg1 + 0x130, arg2)

uint64_t i_2 = zx.q(*(arg1 + 0x410))
int32_t r14 = 0
int32_t r15 = *(arg1 + 0x420)
int32_t rbx = 0
int32_t arg_8 = r15
int32_t arg_18 = i_2.d

if (i_2.d s> 0)
    int64_t r13_1 = 0
    int64_t r14_1 = 0
    
    do
        int32_t* rdi_5 = *(arg1 + 0x408) + r13_1
        i_2 = sub_141ea5640(rdi_5, arg2)
        
        if (r15 s> 0)
            i_2 = sub_141ea6180(rdi_5, arg2)
            
            if (i_2.b != 0)
                i_2 = *(arg1 + 0x418)
                
                for (int64_t rdx_6 = i_2 + (sx.q(*(arg1 + 0x420)) << 2); i_2 != rdx_6; i_2 += 4)
                    if (*i_2 == rbx)
                        goto label_141ac0cef
                
                int64_t r15_1 = sx.q(*(arg1 + 0x3b0))
                int64_t r12_2 = *(arg1 + 0x398) + r14_1
                int32_t rax_1 = (r15_1 + 1).d
                *(arg1 + 0x3b0) = rax_1
                
                if (rax_1 s> *(arg1 + 0x3b4))
                    sub_1405a4d70(arg1 + 0x3a8)
                
                i_2 = *(arg1 + 0x3a8)
                *(i_2 + (r15_1 << 3)) = r12_2
                r15 = arg_8
        
    label_141ac0cef:
        rbx += 1
        r13_1 += 0x10
        r14_1 += 0x1f0
    while (rbx s< arg_18)
    
    r15 = *(arg1 + 0x420)
    r14 = 0

*(arg1 + 0x420) = 0

if (*(arg1 + 0x424) != r15)
    i_2 = sub_1405dadb0(arg1 + 0x418, r15)

int32_t r12_3 = *(arg1 + 0x3a0)

if (r12_3 s> 0)
    int64_t r15_2 = 0
    
    do
        void* rbx_1 = *(arg1 + 0x398)
        sub_141ea5640(rbx_1 + 0x1d0 + r15_2, arg2)
        i_2 = sub_141ea6180(rbx_1 + 0x1d0 + r15_2, arg2)
        
        if (i_2.b != 0)
            int64_t rbx_2 = sx.q(*(arg1 + 0x420))
            int32_t rax_2 = (rbx_2 + 1).d
            *(arg1 + 0x420) = rax_2
            
            if (rax_2 s> *(arg1 + 0x424))
                sub_1405a4cf0(arg1 + 0x418)
            
            i_2 = *(arg1 + 0x418)
            *(i_2 + (rbx_2 << 2)) = r14
        
        r14 += 1
        r15_2 += 0x1f0
    while (r14 s< r12_3)

return i_2
