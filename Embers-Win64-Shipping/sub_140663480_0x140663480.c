// 函数: sub_140663480
// 地址: 0x140663480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8

if (arg1 == 0)
    arg_8 = 0
    arg2.b = 2
    sub_140d23f50(u"DoThreadTask: Invalid WorldContextObject. Cannot execute.", arg2.b)
    return 0

void* rax_1 = sub_140cde0b0()
sub_140d19010(rax_1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8 = 0
void* result = sub_140d2dfc0(sub_140664000(), rax_1, 0, 0, 0, 0, 0, 0, 0)
*(result + 0x70) = arg1
void*** rax_3 = j_sub_140a82f30(0x90)
void*** r14 = rax_3

if (rax_3 == 0)
    r14 = nullptr
else
    __builtin_memset(&rax_3[2], 0, 0x22)
    *r14 = &data_142d836c8
    void (* var_48_1)(int64_t* arg1) = sub_140663b90
    r14[8] = 0
    r14[0xa] = 0
    r14[0x10] = 0
    int32_t var_40_1 = 0
    void*** rax_4 = sub_140a84c80(0, 0x30, 0)
    void*** rsi_1 = rax_4
    
    if (rax_4 != 0)
        rsi_1[1] = r14
        *rsi_1 = &data_142d83b70
        *(rsi_1 + 0x10) = var_48_1.o
        rsi_1[5] = sub_140a387b0()
        *rsi_1 = &data_142d83bc8
    
    int32_t rcx_3
    int64_t rbx_1
    
    if (rsi_1 == 0)
        rcx_3 = 3
        rbx_1 = 0
    else
        sub_140599630(&data_14399fce8, 1)
        void arg_18
        int64_t* rax_7 = (*rsi_1)[6](rsi_1, &arg_18)
        int64_t rbp_1 = sx.q(data_14399fcf0)
        rbx_1 = *rax_7
        int32_t rax_8 = (rbp_1 + 1).d
        bool cond:1_1 = rax_8 s<= data_14399fcf4
        data_14399fcf0 = rax_8
        
        if (not(cond:1_1))
            sub_1405a4f90(&data_14399fce8)
        
        void**** rax_11 = (rbp_1 << 4) + data_14399fce8
        *rax_11 = rsi_1
        rsi_1 = nullptr
        rax_11[1].d = 3
        rcx_3 = 0
    
    if (rcx_3 == 0)
        goto label_140663667
    
    if (rsi_1 != 0)
        (*rsi_1)[7](rsi_1, 0)
        rsi_1 = sub_140a84c80(rsi_1, 0, 0)
    label_140663667:
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
    
    r14[0x10] = rbx_1

int64_t* rax_14 = j_sub_140a82f30(0x18)
int64_t* rbx_2 = rax_14

if (rax_14 == 0)
    rbx_2 = nullptr
else
    rax_14[1].d = 1
    *(rax_14 + 0xc) = 1
    *rbx_2 = &data_142d83c20
    rbx_2[2] = r14

void*** var_58 = r14
void**** r15 = &r14[2]
int64_t* var_50 = rbx_2

if (r14 == 0)
    r15 = nullptr

if (r15 != 0)
    if (*r15 == 0)
    label_1406636f6:
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        *r15 = r14
        int64_t* rcx_8 = r15[1]
        
        if (rbx_2 != rcx_8)
            if (rbx_2 != 0)
                *(rbx_2 + 0xc) += 1
                rcx_8 = r15[1]
            
            if (rcx_8 != 0)
                int32_t rax_16 = *(rcx_8 + 0xc)
                *(rcx_8 + 0xc) -= 1
                
                if (rax_16 == 1)
                    (*(*rcx_8 + 8))(rcx_8, 1)
            
            r15[1] = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rax_20 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_20 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    else
        void* rcx_7 = r15[1]
        
        if (rcx_7 == 0)
            goto label_1406636f6
        
        int32_t rax_15 = 0
        
        if (0 == *(rcx_7 + 8))
            *(rcx_7 + 8) = 0
        else
            rax_15 = *(rcx_7 + 8)
        
        if (rax_15 s<= 0)
            goto label_1406636f6

if (result + 0x60 != &var_58)
    *(result + 0x60) = r14
    var_58 = nullptr
    sub_1405aeff0(result + 0x68, &var_50)

int64_t* rcx_12 = var_50

if (rcx_12 != 0)
    rcx_12[1].d -= 1
    
    if (rcx_12[1].d == 1)
        int64_t* rbx_3 = var_50
        (**rbx_3)(rbx_3)
        int32_t rax_24 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rax_24 == 1)
            int64_t* rcx_14 = var_50
            (*(*rcx_14 + 8))(rcx_14, 1)

*arg2 = *(result + 0x60)
void* rbx_4 = *(result + 0x68)
int64_t* rcx_15 = arg2[1]

if (rbx_4 != rcx_15)
    if (rbx_4 != 0)
        *(rbx_4 + 0xc) += 1
        rcx_15 = arg2[1]
    
    if (rcx_15 != 0)
        int32_t rsi_2 = *(rcx_15 + 0xc)
        *(rcx_15 + 0xc) -= 1
        
        if (rsi_2 == 1)
            (*(*rcx_15 + 8))(rcx_15, zx.q(rsi_2))
    
    arg2[1] = rbx_4

return result
