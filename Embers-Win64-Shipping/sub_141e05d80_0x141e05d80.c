// 函数: sub_141e05d80
// 地址: 0x141e05d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = 0
arg1[0xd0].d = 0

if (*(arg1 + 0x684) s<= 0xffffffff)
    sub_1405c5570(&arg1[0xcf], 0)

int32_t rax = *(arg1 + 0x674)
arg1[0xce].d = 0

if (rax s< 0 && rax != 0)
    sub_1405c5570(&arg1[0xcd], 0)

void* r14 = &arg1[0xd1]
int32_t rax_1 = *(r14 + 0xc)
*(r14 + 8) = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405c5570(r14, 0)

int64_t* rcx_3 = arg1[0x15]
int64_t result

if (rcx_3 == 0)
    int64_t rax_31 = *arg1
    int64_t* var_48 = nullptr
    int32_t result_1 = 0
    (*(rax_31 + 0x58))(arg1, &var_48)
    int64_t* r15_6 = var_48
    result = sx.q(result_1)
    void* rcx_19 = &r15_6[result]
    uint64_t r13_7 = (rcx_19 - r15_6 + 7) u>> 3
    
    if (r15_6 u> rcx_19)
        r13_7 = 0
    
    if (r13_7 != 0)
        do
            int64_t* rbx_7 = *r15_6
            
            if (rbx_7 != 0)
                if ((*(*rbx_7 + 0x80))(rbx_7) != 0)
                    (*(*rbx_7 + 0xc8))(rbx_7, arg1, arg1[0x14])
                
                if ((*(*rbx_7 + 0x40))(rbx_7) != 0)
                    int64_t rbp_6 = sx.q(arg1[0xce].d)
                    int32_t rax_37 = (rbp_6 + 1).d
                    arg1[0xce].d = rax_37
                    
                    if (rax_37 s> *(arg1 + 0x674))
                        sub_1405a4d70(&arg1[0xcd])
                    
                    *(arg1[0xcd] + (rbp_6 << 3)) = rbx_7
                
                result = (*(*rbx_7 + 0x50))(rbx_7)
                
                if (result.b != 0)
                    int64_t rbp_7 = sx.q(*(r14 + 8))
                    int32_t rax_40 = (rbp_7 + 1).d
                    *(r14 + 8) = rax_40
                    
                    if (rax_40 s> *(r14 + 0xc))
                        sub_1405a4d70(r14)
                    
                    result = *r14
                    *(result + (rbp_7 << 3)) = rbx_7
            
            r15_6 = &r15_6[1]
            r12 += 1
        while (r12 != r13_7)
        
        r15_6 = var_48
    
    if (r15_6 != 0)
        result = sub_140a74f90(r15_6)
else
    int64_t* rax_3 = (*(*rcx_3 + 0x58))(rcx_3)
    int64_t rbp_1 = 0
    int64_t* rbx_1 = *rax_3
    uint64_t r15_1 = sx.q(rax_3[1].d) << 3 u>> 3
    
    if (rbx_1 u> &rbx_1[rax_3[1]])
        r15_1 = 0
    
    if (r15_1 != 0)
        do
            sub_141e175d0(sx.q(*(*rbx_1 + 0x4c)) + arg1[0x14], arg1[0x15])
            rbp_1 += 1
            rbx_1 = &rbx_1[1]
        while (rbp_1 != r15_1)
    
    int64_t* rcx_6 = arg1[0x15]
    int64_t r13 = arg1[0x14]
    int64_t* rax_8 = (*(*rcx_6 + 0x60))(rcx_6)
    int64_t rbp_2 = 0
    int64_t* rbx_2 = *rax_8
    uint64_t r15_3 = sx.q(rax_8[1].d) << 3 u>> 3
    
    if (rbx_2 u> &rbx_2[rax_8[1]])
        r15_3 = 0
    
    if (r15_3 != 0)
        do
            int64_t* rcx_8 = sx.q(*(*rbx_2 + 0x4c)) + arg1[0x14]
            (*(*rcx_8 + 0xc8))(rcx_8, arg1, r13)
            rbp_2 += 1
            rbx_2 = &rbx_2[1]
        while (rbp_2 != r15_3)
    
    int64_t* rcx_9 = arg1[0x15]
    int64_t* rax_14 = (*(*rcx_9 + 0x48))(rcx_9)
    int64_t r13_1 = 0
    int64_t* r15_4 = *rax_14
    uint64_t rcx_11 = sx.q(rax_14[1].d) << 3 u>> 3
    
    if (r15_4 u> &r15_4[rax_14[1]])
        rcx_11 = 0
    
    if (rcx_11 != 0)
        do
            int64_t rbx_3 = sx.q(arg1[0xce].d)
            int64_t rbp_4 = sx.q(*(*r15_4 + 0x4c)) + arg1[0x14]
            int32_t rax_18 = (rbx_3 + 1).d
            arg1[0xce].d = rax_18
            
            if (rax_18 s> *(arg1 + 0x674))
                sub_1405a4d70(&arg1[0xcd])
            
            r15_4 = &r15_4[1]
            r13_1 += 1
            *(arg1[0xcd] + (rbx_3 << 3)) = rbp_4
        while (r13_1 != rcx_11)
        
        r14 = &arg1[0xd1]
    
    int64_t* rcx_13 = arg1[0x15]
    int64_t* rax_21 = (*(*rcx_13 + 0x50))(rcx_13)
    int64_t rbp_5 = 0
    int64_t* r15_5 = *rax_21
    uint64_t r13_3 = sx.q(rax_21[1].d) << 3 u>> 3
    
    if (r15_5 u> &r15_5[rax_21[1]])
        r13_3 = 0
    
    if (r13_3 != 0)
        do
            int64_t rbx_4 = sx.q(*(r14 + 8))
            int64_t rsi_2 = sx.q(*(*r15_5 + 0x4c)) + arg1[0x14]
            int32_t rax_25 = (rbx_4 + 1).d
            *(r14 + 8) = rax_25
            
            if (rax_25 s> *(r14 + 0xc))
                sub_1405a4d70(r14)
            
            r15_5 = &r15_5[1]
            rbp_5 += 1
            *(*r14 + (rbx_4 << 3)) = rsi_2
        while (rbp_5 != r13_3)
    
    int64_t* rcx_15 = arg1[0x15]
    int64_t* rax_28 = (*(*rcx_15 + 0x80))(rcx_15)
    int64_t* r8_2 = *rax_28
    result = sx.q(rax_28[1].d)
    void* rbx_6 = result * 0x68 + r8_2
    
    if (r8_2 != rbx_6)
        result = data_143f396f0
        
        do
            if (*r8_2 == data_143f394b0)
                int64_t rdx_4 = sx.q(r8_2[4].d)
                int64_t rcx_17 = 0
                
                if (rdx_4.d s> 0)
                    do
                        if (*(r8_2[3] + (rcx_17 << 3)) == result)
                            void* r9_1 = *(r8_2[8] + (rcx_17 << 3))
                            
                            if (r9_1 != 0)
                                arg1[0x1c] = sx.q(*(r9_1 + 0x4c)) + arg1[0x14]
                                result = data_143f396f0
                                break
                        
                        rcx_17 += 1
                    while (rcx_17 s< rdx_4)
            
            r8_2 = &r8_2[0xd]
        while (r8_2 != rbx_6)

if (arg2 != 0)
    *(arg1 + 0x6d9) |= 4
else
    int64_t* rbx_8 = arg1[0x1b]
    
    if (rbx_8 != 0)
        void arg_8
        sub_140dd5b90(&arg_8, arg1)
        
        if (rbx_8 == arg1[0x1b])
            arg1[0x80].w += 1
            int16_t rcx_28 = arg1[0x80].w
            arg1[0x7f] = data_143de5458
            
            if (rcx_28 == 0xffff)
                arg1[0x80].w = rcx_28 + 1
        
        return (**rbx_8)(rbx_8, &arg_8)

return result
