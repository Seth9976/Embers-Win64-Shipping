// 函数: sub_142398740
// 地址: 0x142398740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg2
int32_t i_1 = 0
void* rsi = arg1
int32_t rdx = *(r8 + 0x70)
int64_t** result_1 = nullptr
int64_t var_40 = 0

if (rdx s> 0)
    sub_1405c5570(&result_1, rdx)
    r8 = *arg2

int32_t i = 0

if (*(r8 + 0x70) s> 0)
    int64_t** result_3 = result_1
    
    do
        void* rax_1 = arg2[1]
        void* var_38 = r8
        void* var_30_1 = rax_1
        
        if (rax_1 != 0)
            *(rax_1 + 8) += 1
            r8 = *arg2
        
        int64_t* rax_3
        rax_3, arg3 = sub_142399170(rsi, *(r8 + 0x68) + sx.q(i) * 0x18, *(r8 + 0x58), &var_38)
        int64_t rbx_1 = sx.q(var_40.d)
        int32_t rcx_3 = (rbx_1 + 1).d
        var_40.d = rcx_3
        
        if (rcx_3 s> var_40:4.d)
            sub_1405a4d70(&result_1)
            result_3 = result_1
        
        result_3[rbx_1] = rax_3
        int64_t* rbx_2 = arg2[1]
        void* r14_1 = *arg2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
            *(rbx_2 + 0xc) += 1
        
        int64_t r15_1 = sx.q(rax_3[5].d)
        int32_t rax_4 = (r15_1 + 1).d
        rax_3[5].d = rax_4
        
        if (rax_4 s> *(rax_3 + 0x2c))
            sub_1405a4f90(&rax_3[4])
        
        int64_t* rax_7 = (r15_1 << 4) + rax_3[4]
        *rax_7 = r14_1
        rax_7[1] = rbx_2
        int64_t r15_2 = sx.q(rax_3[3].d)
        int32_t rax_8 = (r15_2 + 1).d
        rax_3[3].d = rax_8
        
        if (rax_8 s> *(rax_3 + 0x1c))
            sub_1405a4f90(&rax_3[2])
        
        int64_t* rax_11 = (r15_2 << 4) + rax_3[2]
        *rax_11 = r14_1
        rax_11[1] = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        *(r14_1 + 0x5c) += 1
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        r8 = *arg2
        i += 1
        rsi = arg1
    while (i s< *(r8 + 0x70))
    
    i_1 = 0

if (*(r8 + 0x70) s> 0)
    int64_t** result_2 = result_1
    void* rax_14
    
    do
        int64_t* r9_2 = *result_2
        rax_14 = r8
        
        if (r9_2 != 0 && (*r9_2 != 0 || *(r9_2 + 9) != 0))
            r9_2[1].b = 0
            *(*arg2 + 0x68)
            arg3 = sub_1423864d0(rsi, arg3, r9_2)
            rax_14 = *arg2
        
        i_1 += 1
        result_2 = &result_2[1]
        r8 = rax_14
    while (i_1 s< *(rax_14 + 0x70))

int64_t** result = result_1

if (result != 0)
    result = sub_140a74f90(result)

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp1_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_3 + 8))

return result
