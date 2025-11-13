// 函数: sub_140933350
// 地址: 0x140933350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = nullptr
int64_t var_48 = 0
int32_t rdx = 0
int32_t var_40 = 0
int32_t var_3c = 0
int64_t rbx = -1
int64_t r15 = 0
int32_t r8 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rdi_1.d + 1)
        r8 = var_3c
        rdx = var_40
        r15 = var_48
    
    int32_t rax_1 = rdi_1.d + 1 + rdx
    int32_t var_40_1 = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_48)
        r15 = var_48
    
    UnDecorator::getReferenceType(r15, arg2, (rdi_1.d + 1) * 2)

int64_t* rdi_3 = *(arg1 + 8)
int32_t arg_8
sub_14062d6e0(rdi_3, &arg_8, &var_48)
int64_t rax_2 = sx.q(arg_8)
void* const rcx_4

if (rax_2.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = *rdi_3 + rax_2 * 0x28

int64_t* result = rcx_4 + 0x10

if (rcx_4 == 0)
    result = nullptr

void* rcx_5

if (result != 0)
    rcx_5 = *result

if (result == 0 || rcx_5 == 0 || *(rcx_5 + 8) != 5)
    rdi_3.b = 0
else
    rdi_3.b = 1

if (r15 != 0)
    result = sub_140a74f90(r15)

if (rdi_3.b != 0)
    var_48 = 0
    int32_t rdx_5 = 0
    int32_t var_40_2 = 0
    int32_t rcx_7 = 0
    int32_t var_3c_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        do
            rbx += 1
        while (arg2[rbx] != 0)
        
        if (rbx.d + 1 s> 0)
            sub_1405947f0(&var_48, rbx.d + 1)
            rcx_7 = var_3c_1
            rdx_5 = var_40_2
        
        int32_t rax_4 = rbx.d + 1 + rdx_5
        int32_t var_40_3 = rax_4
        
        if (rax_4 s> rcx_7)
            sub_140594770(&var_48)
        
        UnDecorator::getReferenceType(var_48, arg2, (rbx.d + 1) * 2)
    
    result = sub_140b750d0(*(arg1 + 8), &var_48)
    uint64_t var_38 = 0
    int32_t i_2 = result[1].d
    int64_t rbx_2 = *result
    int32_t i_3 = i_2
    
    if (i_2 != 0)
        sub_14061cb30(&var_38, i_2, 0)
        r14 = var_38
        void* rcx_13 = r14
        int64_t* rbx_3 = rbx_2 - r14
        int32_t i
        
        do
            *rcx_13 = *(rbx_3 + rcx_13)
            result = *(rbx_3 + rcx_13 + 8)
            *(rcx_13 + 8) = result
            
            if (result != 0)
                result[1].d += 1
            
            rcx_13 += 0x10
            i = i_2
            i_2 -= 1
        while (i != 1)
        i_2 = i_3
    
    int64_t rcx_14 = var_48
    
    if (rcx_14 != 0)
        result = sub_140a74f90(rcx_14)
    
    void* rbx_4 = r14
    void* r15_3 = (sx.q(i_2) << 4) + r14
    
    if (r14 != r15_3)
        do
            double zmm0_1 = sub_140b74be0(*rbx_4)
            int64_t rsi_1 = sx.q(arg3[1].d)
            int32_t rax_6 = (rsi_1 + 1).d
            arg3[1].d = rax_6
            
            if (rax_6 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            result = *arg3
            rbx_4 += 0x10
            *(result + (rsi_1 << 2)) = int.d(zmm0_1)
        while (rbx_4 != r15_3)
    
    if (i_2 != 0)
        void* rsi_2 = r14 + 8
        int32_t i_1
        
        do
            int64_t* rbx_5 = *rsi_2
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    result = (**rbx_5)(rbx_5)
                    int32_t temp3_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rbx_5 + 8))(rbx_5, 1)
            
            rsi_2 += 0x10
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (r14 != 0)
        return sub_140a74f90(r14)

return result
