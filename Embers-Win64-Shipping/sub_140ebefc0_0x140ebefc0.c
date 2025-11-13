// 函数: sub_140ebefc0
// 地址: 0x140ebefc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
void var_28
int64_t* rax_1 = (*(*arg1 + 0x250))(arg1, &var_28)
int32_t rdi = 1
void var_38
int64_t* rax_4

if (*rax_1 != 0)
    void var_48
    rax_4 = sub_140ebf640(*(*(*arg1 + 0x250))(arg1, &var_38), &var_48)
    rdi = 7

int64_t rbp

if (*rax_1 == 0 || *rax_4 == 0)
    rbp.b = 0
else
    rbp.b = 1

if ((rdi.b & 4) != 0)
    rdi &= 0xfffffffb
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp3_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_40 + 8))(var_40, 1)

int64_t* var_30

if ((rdi.b & 2) != 0 && var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp5_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp4_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

char rax_14
char rax_18

if (rbp.b != 0)
    rax_14 = sub_140e1acf0(*sub_140ebf640(*(*(*arg1 + 0x250))(arg1, &var_38), &var_28))
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            int64_t rdx_5 = *var_20
            (*rdx_5)(var_20, rdx_5)
            int32_t temp8_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*var_20 + 8))(var_20, 1)
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp9_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    rax_18 = data_1439ae520

if (rbp.b == 0 || rax_14 != 0)
    rax_18 = data_1439ae51d

*arg2 = rax_18
return arg2
