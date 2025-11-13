// 函数: sub_140e96b80
// 地址: 0x140e96b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = &arg1[5]
arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142eda1d0
arg1[3] = 0
arg1[4] = 0
r9[2] = 0
r9[3].d = 0
*(r9 + 0x1c) = 0x80
int64_t* rax = r9[2]

if (rax != 0)
    r9 = rax

*r9 = 0
r9[1] = 0
arg1[9].d = 0xffffffff
*(arg1 + 0x4c) = 0
arg1[0xb] = 0
arg1[0xc].d = 0
arg1[0xd] = *arg3
void* rax_2 = arg3[1]
arg1[0xe] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

__builtin_memset(&arg1[0xf], 0, 0x40)
arg1[0x17] = *arg2
void* rax_4 = arg2[1]
arg1[0x18] = rax_4

if (rax_4 != 0)
    *(rax_4 + 0xc) += 1

arg1[0x19] = 0
arg1[0x1a] = 0
void**** rax_5 = j_sub_140a82f30(8)
void**** rbx = rax_5

if (rax_5 == 0)
    rbx = nullptr
else
    *rax_5 = arg1

void*** rax_6 = j_sub_140a82f30(0x18)

if (rax_6 == 0)
    rax_6 = nullptr
else
    rax_6[1].d = 1
    *rax_6 = &data_142ecd2e8
    *(rax_6 + 0xc) = 1
    rax_6[2] = rbx

arg1[0x1b] = rbx
arg1[0x1c] = rax_6
__builtin_memset(&arg1[0x1d], 0, 0x14)
arg1[0x20].d = 0
*(arg1 + 0x104) = 0
__builtin_memset(&arg1[0x21], 0, 0x20)
arg1[0x25].b = 1
void* rax_7 = j_sub_140a82f30(0xe0)
void** rsi

if (rax_7 == 0)
    rsi = nullptr
else
    rsi = sub_140ae6810(rax_7)

void*** rax_9 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_9

if (rax_9 == 0)
    rbx_1 = nullptr
else
    rax_9[1].d = 1
    *(rax_9 + 0xc) = 1
    *rbx_1 = &data_142edf090
    rbx_1[2] = rsi

arg1[0x26] = rsi
arg1[0x27] = rbx_1

if (rsi != 0)
    void* rax_10
    
    if (*rsi != 0)
        rax_10 = rsi[1]
    
    if (*rsi == 0 || rax_10 == 0 || *(rax_10 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *rsi = rsi
        int64_t* rcx_2 = rsi[1]
        
        if (rbx_1 != rcx_2)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_2 = rsi[1]
            
            if (rcx_2 != 0)
                int32_t temp9_1 = *(rcx_2 + 0xc)
                *(rcx_2 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rcx_2 + 8))(rcx_2, 1)
            
            rsi[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp8_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)

void var_40
int128_t* rax_14 = sub_140dda8f0(&var_40)
void*** var_78
void var_58
void**** rax_16 = sub_140ec5370(&var_78, _vfprintf_p_l(&var_58, Local Workspace Root", TabManager")
    , rax_14, 0)
int64_t* rcx_8 = rax_16[1]

if (rcx_8 != 0)
    rcx_8[1].d += 1

void var_68

if (&arg1[0x15] == &var_68)
label_140e96e7b:
    
    if (rcx_8 != 0)
        rcx_8[1].d -= 1
        
        if (rcx_8[1].d == 1)
            (**rcx_8)(rcx_8)
            int32_t temp3_1 = *(rcx_8 + 0xc)
            *(rcx_8 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rcx_8 + 8))(rcx_8, 1)
else
    arg1[0x15] = *rax_16
    int64_t* rbx_3 = arg1[0x16]
    
    if (rcx_8 == rbx_3)
        goto label_140e96e7b
    
    arg1[0x16] = rcx_8
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp7_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* var_70

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        (**var_70)(var_70)
        int32_t temp6_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*var_70 + 8))(var_70, 1)

int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t rbp_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*(*var_50 + 8))(var_50, zx.q(rbp_1))

return arg1
