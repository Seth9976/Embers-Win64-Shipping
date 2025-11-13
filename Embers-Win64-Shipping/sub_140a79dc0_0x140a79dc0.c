// 函数: sub_140a79dc0
// 地址: 0x140a79dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
uint64_t var_28 = 0
int32_t i_4 = 0

if ((arg2 & 2) != 0)
    sub_140a680f0(&var_28, sub_140b19760())

if ((arg2 & 4) != 0)
    sub_140a680f0(&var_28, sub_140b19de0())

if ((arg2 & 8) != 0)
    sub_140a680f0(&var_28, sub_140b199f0())

if ((arg2 & 0x10) != 0)
    int32_t rdx_3 = data_14399fd20
    int32_t rcx_4 = data_14399fd2c + 1
    int64_t rbp
    rbp.b = 0
    data_14399fd2c = rcx_4
    int64_t rbx_1 = sx.q(rdx_3 - 1)
    
    if (rdx_3 - 1 s>= 0)
        int64_t rdi_2 = rbx_1 << 4
        int64_t temp2_1
        
        do
            int64_t rax_5 = data_14399fd18
            
            if (*(rdi_2 + rax_5 + 8) == 0)
                rbp.b = 1
            else
                int64_t* rcx_5 = *(rdi_2 + rax_5)
                
                if (rcx_5 == 0)
                    rbp.b = 1
                else if ((*(*rcx_5 + 0x50))(rcx_5, &var_28) == 0)
                    rbp.b = 1
            
            rdi_2 -= 0x10
            temp2_1 = rbx_1
            rbx_1 -= 1
        while (temp2_1 - 1 s>= 0)
        rcx_4 = data_14399fd2c
        rdx_3 = data_14399fd20
    
    data_14399fd2c = rcx_4 - 1
    
    if (rbp.b != 0 && rcx_4 - 1 s<= 0)
        int32_t rdi_3 = rdx_3
        
        if (rdx_3 s> 0)
            int64_t* rbx_2 = nullptr
            
            do
                int64_t rax_8 = data_14399fd18
                
                if (*(rbx_2 + rax_8 + 8) == 0)
                    sub_1405a4880(&data_14399fd18, rsi, 1, 1)
                else
                    int64_t* rcx_7 = *(rbx_2 + rax_8)
                    
                    if (rcx_7 == 0)
                        sub_1405a4880(&data_14399fd18, rsi, 1, 1)
                    else if ((*(*rcx_7 + 0x20))(rcx_7) != 0)
                        sub_1405a4880(&data_14399fd18, rsi, 1, 1)
                    else
                        rsi += 1
                        rbx_2 = &rbx_2[2]
                
                rdx_3 = data_14399fd20
            while (rsi s< rdx_3)
        
        int32_t rax_11 = rdx_3 * 2
        
        if (rax_11 s<= 2)
            rax_11 = 2
        
        data_14399fd28 = rax_11
        
        if (rdi_3 s> rax_11 && data_14399fd24 != rdx_3)
            sub_1405a5410(&data_14399fd18, rdx_3)

int64_t* var_18
sub_140ab0fe0(&var_18, &var_28)
int64_t result = sub_140a5bc30(arg3, &var_18)
int32_t i_5
int32_t i_2 = i_5
int64_t* rbx_3 = var_18

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rdi_4 = *rbx_3
        
        if (rdi_4 != 0)
            int64_t* rcx_10 = data_143ddb3f0
            
            if (rcx_10 == 0)
                sub_140a750a0()
                rcx_10 = data_143ddb3f0
            
            result = (*(*rcx_10 + 0x30))(rcx_10, rdi_4)
        
        rbx_3 = &rbx_3[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx_3 = var_18

if (rbx_3 != 0)
    int64_t* rcx_11 = data_143ddb3f0
    
    if (rcx_11 == 0)
        sub_140a750a0()
        rcx_11 = data_143ddb3f0
    
    result = (*(*rcx_11 + 0x30))(rcx_11, rbx_3)

int32_t i_3 = i_4
uint64_t rbx_4 = var_28

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rdi_5 = *rbx_4
        
        if (rdi_5 != 0)
            int64_t* rcx_12 = data_143ddb3f0
            
            if (rcx_12 == 0)
                sub_140a750a0()
                rcx_12 = data_143ddb3f0
            
            result = (*(*rcx_12 + 0x30))(rcx_12, rdi_5)
        
        rbx_4 += 0x10
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_4 = var_28

if (rbx_4 == 0)
    return result

int64_t* rcx_13 = data_143ddb3f0

if (rcx_13 == 0)
    sub_140a750a0()
    rcx_13 = data_143ddb3f0

return (*(*rcx_13 + 0x30))(rcx_13, rbx_4)
