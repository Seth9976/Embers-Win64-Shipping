// 函数: sub_1424158a0
// 地址: 0x1424158a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142403cf0(arg1)
char var_2c
char var_2c_1 = var_2c & 0xfe
int64_t var_28 = *arg2
int64_t var_20 = arg2[1]
void* rax_2 = arg2[2]
int32_t var_38 = 0x3e4ccccd
int32_t var_34 = 0x3f800000
int32_t var_30 = 0x3f800000
void* var_18 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

char result = sub_14240faf0(arg1, &var_28, &var_38)

if (result != 0)
    int64_t* rbx_1 = arg2[2]
    int64_t r9_1 = *arg2
    char var_2c_2 = var_2c_1 ^ ((not.b(var_2c_1) ^ var_2c_1) & 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t* rdx_1 = *(arg1 + 0x130)
    void* r8_1 = &rdx_1[sx.q(*(arg1 + 0x138)) * 3]
    
    if (rdx_1 != r8_1)
        int128_t zmm0_1 = var_38.o
        int128_t* rax_5 = &rdx_1[1]
        
        do
            if (*rdx_1 == r9_1)
                *rax_5 = zmm0_1
            
            rdx_1 = &rdx_1[3]
            rax_5 += 0x18
        while (rdx_1 != r8_1)
    
    result = sub_14241e7d0(arg1 + 0x170)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg2[2]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
