// 函数: sub_141e895d0
// 地址: 0x141e895d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140a242a0()
int64_t r8 = *rax
(*(r8 + 0x30))(rax, 2, r8)
(*(*arg1 + 0x28))(arg1)
sub_141e7b450(arg1, nullptr, 1)
int64_t* rcx_3 = arg1[0x58]

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 1)
    arg1[0x58] = 0

int64_t* i = arg1[0xe]

for (void* r12_2 = &i[sx.q(arg1[0xf].d) * 2]; i != r12_2; i = &i[2])
    int64_t* rbx_1 = i[1]
    int64_t* rcx_4 = *i
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    (*(*rcx_4 + 0x30))(rcx_4, arg1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_6 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_6 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

(*(*arg1 + 0x168))(arg1)
sub_141e7a850(&arg1[0x4c], 0)

if ((*(arg1 + 0x352) & 0x20) != 0)
    int32_t i_1 = 0
    
    if (arg1[0x29].d s> 0)
        int64_t* rbx_2 = nullptr
        
        do
            int64_t* rcx_9 = *(rbx_2 + arg1[0x28])
            (*(*rcx_9 + 0x40))(rcx_9)
            int64_t* rcx_10 = *(rbx_2 + arg1[0x28])
            
            if (rcx_10 != 0)
                (**rcx_10)(rcx_10, 1)
            
            i_1 += 1
            rbx_2 = &rbx_2[1]
        while (i_1 s< arg1[0x29].d)

arg1[0x29].d = 0

if (*(arg1 + 0x14c) s<= 0xffffffff)
    sub_1405c5570(&arg1[0x28], 0)

int32_t rax_13 = *(arg1 + 0x15c)
arg1[0x2b].d = 0

if (rax_13 s< 0 && rax_13 != 0)
    sub_1405c5570(&arg1[0x2a], 0)

int64_t* rcx_13 = arg1[6]

if (rcx_13 != 0)
    (*(*rcx_13 + 8))(rcx_13)
    int64_t* var_60 = nullptr
    int64_t var_68
    
    if (&arg1[6] != &var_68)
        arg1[6] = 0
        var_68 = 0
        sub_1405aeff0(&arg1[7], &var_60)
        int64_t* rcx_15 = var_60
        
        if (rcx_15 != 0)
            rcx_15[1].d -= 1
            
            if (rcx_15[1].d == 1)
                int64_t* rbx_4 = var_60
                (**rbx_4)(rbx_4)
                int32_t rax_17 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rax_17 == 1)
                    int64_t* rcx_17 = var_60
                    (*(*rcx_17 + 8))(rcx_17, 1)
    
    arg1[0x6b].b &= 0xfd

int64_t* rcx_18 = arg1[8]

if (rcx_18 != 0)
    (*(*rcx_18 + 0x10))(rcx_18)
    int64_t* var_50 = nullptr
    int64_t var_58
    
    if (&arg1[8] != &var_58)
        arg1[8] = 0
        var_58 = 0
        sub_1405aeff0(&arg1[9], &var_50)
        int64_t* rcx_20 = var_50
        
        if (rcx_20 != 0)
            rcx_20[1].d -= 1
            
            if (rcx_20[1].d == 1)
                int64_t* rbx_6 = var_50
                (**rbx_6)(rbx_6)
                int32_t rax_22 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (rax_22 == 1)
                    int64_t* rcx_22 = var_50
                    (*(*rcx_22 + 8))(rcx_22, 1)
    
    arg1[0x6b].b &= 0xf7

int64_t* rcx_23 = arg1[0xa]

if (rcx_23 != 0)
    (*(*rcx_23 + 0x10))(rcx_23)
    int64_t* var_40 = nullptr
    int64_t var_48
    
    if (&arg1[0xa] != &var_48)
        arg1[0xa] = 0
        var_48 = 0
        sub_1405aeff0(&arg1[0xb], &var_40)
        int64_t* rcx_25 = var_40
        
        if (rcx_25 != 0)
            rcx_25[1].d -= 1
            
            if (rcx_25[1].d == 1)
                int64_t* rbx_8 = var_40
                (**rbx_8)(rbx_8)
                int32_t rax_27 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (rax_27 == 1)
                    int64_t* rcx_27 = var_40
                    (*(*rcx_27 + 8))(rcx_27, 1)
    
    arg1[0x6b].b &= 0xfb

int64_t* var_30 = nullptr
int64_t var_38

if (&arg1[0xc] != &var_38)
    arg1[0xc] = 0
    var_38 = 0
    sub_1405aeff0(&arg1[0xd], &var_30)
    int64_t* rcx_30 = var_30
    
    if (rcx_30 != 0)
        rcx_30[1].d -= 1
        
        if (rcx_30[1].d == 1)
            int64_t* rbx_9 = var_30
            (**rbx_9)(rbx_9)
            int32_t r15_1 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (r15_1 == 1)
                int64_t* rcx_32 = var_30
                (*(*rcx_32 + 8))(rcx_32, zx.q(r15_1))

arg1[0x6b].b &= 0xef
return sub_141c45050(&arg1[0xe], 0) __tailcall
