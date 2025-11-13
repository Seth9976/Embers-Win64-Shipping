// 函数: sub_141b49240
// 地址: 0x141b49240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = nullptr
arg1[1] = 0
void* r14 = &arg1[4]
arg1[2] = 0
void* rsi = r14 + 0x1c
*arg1 = &data_14306c4a0
arg1[3] = &data_14306c4d0

for (int64_t i = 4; i != 0; )
    i -= 1
    *r14 = &data_142d44d70
    *(rsi - 0x14) = 0
    
    if (data_143de5432 == 0)
        void* rcx = data_143e1a338
        
        if (rcx == 0)
            void* rax_1 = sub_140cde0b0()
            sub_140d19010(rax_1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
            int32_t arg_8 = 0
            int64_t arg_10 = 0
            void* rax_3 = sub_140d2dfc0(sub_140baa6d0(), rax_1, 0, 0, 0, 0, 0, 0, 0)
            data_143e1a338 = rax_3
            int32_t rcx_3 = *(rax_3 + 0xc)
            void* const rax_7
            
            if (rcx_3 s>= data_143e1d9b4)
                rax_7 = nullptr
            else
                uint32_t rax_4 = zx.d(rcx_3.w)
                
                if (rcx_3 s< 0)
                    rcx_3 += 0xffff
                    rax_4 -= 0x10000
                
                rax_7 = *(data_143e1d9a0 + (sx.q(rcx_3 s>> 0x10) << 3)) + sx.q(rax_4) * 0x18
            
            *(rax_7 + 8) |= 0x40000000
            rcx = data_143e1a338
        
        sub_140b9aa70(rcx, r14)
        *(rsi - 0x14) = 1
    
    *r14 = &data_142ec98d8
    r14 += 0x40
    *(rsi - 0xc) = 0
    *(rsi - 4) = 0
    __builtin_memset(rsi + 4, 0, 0x18)
    rsi += 0x40

arg1[0x24] = *arg2
void* rax_9 = arg2[1]
arg1[0x25] = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

arg1[0x26] = *arg3
void* rax_11 = arg3[1]
arg1[0x27] = rax_11

if (rax_11 != 0)
    *(rax_11 + 8) += 1

arg1[0x28] = 0
arg1[0x29] = 0
arg1[0x2a] = 0
arg1[0x2c] = 0
void*** rax_12 = j_sub_140a82f30(0xd0)
void*** rsi_1

if (rax_12 == 0)
    rsi_1 = nullptr
else
    int64_t var_78 = arg1[0x26]
    void* rcx_9 = arg1[0x27]
    int32_t var_98 = 0xc8
    char var_94_1 = 1
    void* var_70_1 = rcx_9
    
    if (rcx_9 != 0)
        *(rcx_9 + 8) += 1
    
    int64_t var_68 = arg1[0x24]
    void* rax_14 = arg1[0x25]
    void* var_60_1 = rax_14
    
    if (rax_14 != 0)
        *(rax_14 + 8) += 1
    
    rsi_1 = sub_141b49f10(rax_12, &var_68, &var_78, &var_98)

int64_t* rax_16 = j_sub_140a82f30(0x18)
int64_t* rdi_2 = rax_16

if (rax_16 == 0)
    rdi_2 = nullptr
else
    rax_16[1].d = 1
    *(rax_16 + 0xc) = 1
    *rdi_2 = &data_142d42ea8
    rdi_2[2] = rsi_1

void*** var_88 = rsi_1
int64_t* var_80 = rdi_2

if (&arg1[0x28] == &var_88)
label_141b49510:
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp1_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
else
    arg1[0x28] = rsi_1
    int64_t* rsi_2 = arg1[0x29]
    var_88 = nullptr
    
    if (rdi_2 == rsi_2)
        goto label_141b49510
    
    int64_t* var_80_1 = nullptr
    arg1[0x29] = rdi_2
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            (**rsi_2)(rsi_2)
            int32_t temp3_1 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rsi_2 + 8))(rsi_2, 1)
        
        rdi_2 = var_80_1
        goto label_141b49510

arg1[0x28][0x15].b = arg4
int64_t* rdi_3 = arg1[0x29]
int64_t rsi_3 = arg1[0x28]

if (rdi_3 != 0)
    rdi_3[1].d += 1

void* rax_22 = j_sub_140a82f30(0x30)

if (rax_22 != 0)
    int64_t var_58 = rsi_3
    int64_t* var_50_1 = rdi_3
    
    if (rdi_3 != 0)
        rdi_3[1].d += 1
    
    rbx = sub_140dda620(rax_22, &var_58)

void var_90

if (&arg1[0x2a] != &var_90)
    void* rsi_4 = arg1[0x2a]
    arg1[0x2a] = rbx
    
    if (rsi_4 != 0)
        j_sub_140a74f90(rsi_4)
else if (rbx != 0)
    j_sub_140a74f90(rbx)

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp6_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp8_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_3 = arg3[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp9_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

return arg1
