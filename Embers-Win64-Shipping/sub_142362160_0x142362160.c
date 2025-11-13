// 函数: sub_142362160
// 地址: 0x142362160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = arg3
int64_t r14 = arg2
bool z

if (0 == arg1[0x67].d)
    arg1[0x67].d = 0
    z = true
else
    arg1[0x67].d
    z = false

if (not(z))
    arg1[0x67].d = 0
    int32_t rax_2 = *(arg1 + 0x334)
    arg1[0x66].d = 0
    
    if (rax_2 s< 0 && rax_2 != 0)
        sub_1405c5510(&arg1[0x65], 0)
    
    arg1[0x64].d
    arg1[0x64].d = 0

void* r15
void* var_38 = r15
int32_t rcx_2 = 4
bool cond:0 = (*(*arg1 + 0x320))(arg1) == 2
int32_t rax_6 = arg1[0x68].d

if (cond:0)
    rcx_2 = 2

arg1[0x6b].d = rcx_2

if (rax_6 s<= r13)
    r13 = rax_6

if (divs.dp.d(sx.q(arg1[0x66].d), rcx_2) s>= r13)
label_1423622bb:
    int64_t var_58 = 0
    uint32_t count_1 = 0
    
    while (true)
        void* r14_1 = *arg1[0x63]
        
        if (r14_1 == 0)
            break
        
        uint32_t count
        int64_t r12_1
        
        if (&var_58 == r14_1 + 8)
            count = count_1
            r12_1 = var_58
        else
            int64_t rcx_11 = var_58
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            r12_1 = *(r14_1 + 8)
            *(r14_1 + 8) = 0
            count = *(r14_1 + 0x10)
            count_1 = count
            *(r14_1 + 0x10) = 0
            var_58 = r12_1
        
        r15 = arg1[0x63]
        arg1[0x63] = r14_1
        void var_48
        
        if (r14_1 + 8 != &var_48)
            int64_t rcx_12 = *(r14_1 + 8)
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            *(r14_1 + 8) = 0
            *(r14_1 + 0x10) = 0
        
        if (r15 != 0)
            int64_t rcx_13 = *(r15 + 8)
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            j_sub_140a74f90(r15)
        
        if (count != 0)
            int32_t rax_16 = arg1[0x66].d
            int32_t rdx_6 = rax_16 + count
            
            if (rdx_6 s> *(arg1 + 0x334))
                sub_1405c5510(&arg1[0x65], rdx_6)
                rax_16 = arg1[0x66].d
            
            memcpy(sx.q(rax_16) + arg1[0x65], r12_1, count)
            arg1[0x66].d += count
    
    int64_t rcx_18 = var_58
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    r14 = arg2
    r15.b = 1
else
    int32_t rax_11 = (*(*arg1 + 0x340))(arg1, &arg1[0x65], zx.q(r13))
    
    if (rax_11 s<= 0)
        if (arg1[0x6a].d != 0)
            int64_t* rcx_9 = arg1[0x69]
            
            if (rcx_9 != 0 && (*(*rcx_9 + 0x28))(rcx_9) != 0)
                int64_t* rcx_10
                
                if (arg1[0x6a].d == 0)
                    rcx_10 = nullptr
                else
                    rcx_10 = arg1[0x69]
                
                (*(*rcx_10 + 0x48))(rcx_10, arg1, zx.q(r13))
        
        goto label_1423622bb
    
    int32_t rcx_5 = arg1[0x6b].d * rax_11
    
    if (rcx_5 s>= arg1[0x66].d)
        r15.b = 0
    else
        int64_t rbx_1 = sx.q(arg1[0x66].d)
        
        if (rcx_5 s<= rbx_1.d)
            if (rcx_5 s< rbx_1.d && rcx_5 != rbx_1.d)
                arg1[0x66].d = rcx_5
            
            r15.b = 0
        else
            arg1[0x66].d = rcx_5
            
            if (rcx_5 s> *(arg1 + 0x334))
                sub_1405daba0(&arg1[0x65])
            
            memset(rbx_1 + arg1[0x65], 0, sx.q(rcx_5 - rbx_1.d))
            r15.b = 0

int32_t rcx_19 = arg1[0x6b].d
int32_t temp0_3 = divs.dp.d(sx.q(arg1[0x66].d), rcx_19)
int32_t rbx_3 = temp0_3
int32_t rbx_5

if (temp0_3 s<= 0)
    rbx_5 = *(arg1 + 0x33c) * rcx_19
    memset(r14, 0, sx.q(rbx_5))
else
    if (r13 s<= temp0_3)
        rbx_3 = r13
    
    rbx_5 = rbx_3 * rcx_19
    int64_t rbp_3 = sx.q(rbx_5)
    memcpy(r14, arg1[0x65], rbp_3.d)
    
    if (rbx_5 != 0)
        int32_t rax_20 = arg1[0x66].d
        
        if (rax_20 != rbx_5)
            int64_t rcx_21 = arg1[0x65]
            memmove(rcx_21, rcx_21 + rbp_3, rax_20 - rbx_5)
            rax_20 = arg1[0x66].d
        
        arg1[0x66].d = rax_20 - rbx_5
    
    if (r15.b != 0)
        arg1[0x64].d
        arg1[0x64].d += neg.d(rbx_5)

return zx.q(rbx_5)
