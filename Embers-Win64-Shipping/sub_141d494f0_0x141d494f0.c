// 函数: sub_141d494f0
// 地址: 0x141d494f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[7].d
int64_t* r10 = arg3
int64_t* result = arg1

if (rax == 1)
    sub_141d462f0(arg1, arg2, arg3, arg4, arg5, arg6, arg7)
    return result

int32_t i = 0
int32_t i_3 = 0
int32_t r12 = 0
void* r15 = nullptr
void* var_58 = nullptr
int32_t var_4c = 0

if (rax != 0)
    do
        void var_48
        int64_t* rax_8
        rax_8, arg5 =
            sub_141d462f0(&var_48, arg2, sx.q(*(arg2 + 0x3c) * i) + r10, arg4, arg5, arg6, arg7)
        int64_t i_5 = sx.q(i_3)
        i_3 = (i_5 + 1).d
        
        if (i_3 s> r12)
            arg5 = sub_140610660(&var_58)
            r12 = var_4c
            r15 = var_58
        
        int64_t rcx_3 = i_5 * 2
        *(r15 + (rcx_3 << 3)) = *rax_8
        *(r15 + (rcx_3 << 3) + 8) = rax_8[1]
        rax_8[1] = 0
        *rax_8 = 0
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp3_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
        
        r10 = arg3
        i += 1
    while (i != arg2[7].d)
    
    result = arg1

void*** rax_13 = j_sub_140a82f30(0x30)
void*** rbx_3 = rax_13

if (rax_13 == 0)
    rbx_3 = nullptr
else
    rax_13[1].d = 1
    *(rax_13 + 0xc) = 1
    *rbx_3 = &data_142d84f58
    rbx_3[2] = &data_142d84d00
    rbx_3[3].d = 0
    rbx_3[4] = 0
    rbx_3[5].d = i_3
    
    if (i_3 != 0)
        sub_14061cb30(&rbx_3[4], i_3, 0)
        int64_t* rdx_3 = rbx_3[4]
        int32_t i_4 = i_3
        void* rcx_7 = r15
        int32_t i_1
        
        do
            *rdx_3 = *rcx_7
            void* rax_15 = *(rcx_7 + 8)
            rdx_3[1] = rax_15
            
            if (rax_15 != 0)
                *(rax_15 + 8) += 1
            
            rdx_3 = &rdx_3[2]
            rcx_7 += 0x10
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        rbx_3[3].d = 5
    else
        *(rbx_3 + 0x2c) = 0
        rbx_3[3].d = 5

int32_t var_50
var_50.q = rbx_3
var_58 = &rbx_3[2]
*result = var_58
void* rax_17 = var_50.q
result[1] = rax_17

if (rax_17 != 0)
    *(rax_17 + 8) += 1
    int64_t* rbx_4 = var_50.q
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp4_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)

if (i_3 != 0)
    void* rsi = r15 + 8
    int32_t i_2
    
    do
        int64_t* rbx_5 = *rsi
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp7_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        rsi += 0x10
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

if (r15 != 0)
    sub_140a74f90(r15)

return result
