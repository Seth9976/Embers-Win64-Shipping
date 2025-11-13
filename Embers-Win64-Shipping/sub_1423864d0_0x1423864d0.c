// 函数: sub_1423864d0
// 地址: 0x1423864d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg3 + 0x10)
data_143f59f68 += 1
int64_t* r15 = nullptr
int32_t i_4 = 0
int32_t r14 = 0
int64_t* r13 = nullptr
void* rax_3 = &i[sx.q(*(arg3 + 0x18)) * 2]
int64_t* var_48 = nullptr
int32_t var_3c = 0
int32_t i_3 = 0
int64_t* var_58 = nullptr
int32_t r12 = 0
int32_t var_4c = 0

for (; i != rax_3; i = &i[2])
    void* rax_4 = *i
    *(rax_4 + 0x5c) -= 1
    void* rcx = *i
    
    if (*(rcx + 0x5c) == 0)
        if (*(rcx + 0x14) != 0)
            int64_t i_5 = sx.q(i_3)
            i_3 = (i_5 + 1).d
            
            if (i_3 s> r12)
                sub_1405a4f90(&var_58)
                rcx = *i
                r12 = var_4c
                r13 = var_58
            
            int64_t rax_6 = i_5 * 2
            r13[rax_6] = rcx
            void* rcx_2 = i[1]
            r13[rax_6 + 1] = rcx_2
            
            if (rcx_2 != 0)
                *(rcx_2 + 8) += 1
        
        int64_t i_6 = sx.q(i_4)
        i_4 = (i_6 + 1).d
        
        if (i_4 s> r14)
            sub_1405a4f90(&var_48)
            r14 = var_3c
            r15 = var_48
        
        int64_t rcx_5 = i_6 * 2
        r15[rcx_5] = *i
        void* rax_8 = i[1]
        r15[rcx_5 + 1] = rax_8
        
        if (rax_8 != 0)
            *(rax_8 + 8) += 1

void** result = sub_14095cd40(arg3 + 0x10, 0)
int64_t* rbx = r15
void* rbp_3 = &r15[sx.q(i_4) * 2]

if (r15 != rbp_3)
    do
        result, arg2 = sub_142386b00(*rbx)
        rbx = &rbx[2]
    while (rbx != rbp_3)

int64_t* rbx_1 = r13
void* rbp_6 = &r13[sx.q(i_3) * 2]

if (r13 != rbp_6)
    do
        result, arg2 = sub_142394bf0(*rbx_1, arg2)
        rbx_1 = &rbx_1[2]
    while (rbx_1 != rbp_6)

data_143f59f68 -= 1

if (i_3 != 0)
    int64_t* r14_1 = &r13[1]
    int32_t i_1
    
    do
        int64_t* rbx_2 = *r14_1
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp2_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
        
        r14_1 = &r14_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (r13 != 0)
    result = sub_140a74f90(r13)

if (i_4 != 0)
    void* rsi = &r15[1]
    int32_t i_2
    
    do
        int64_t* rbx_3 = *rsi
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                result = (**rbx_3)(rbx_3)
                int32_t temp5_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*rbx_3 + 8))(rbx_3, 1)
        
        rsi += 0x10
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

if (r15 == 0)
    return result

return sub_140a74f90(r15)
