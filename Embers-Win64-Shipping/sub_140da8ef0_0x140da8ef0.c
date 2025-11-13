// 函数: sub_140da8ef0
// 地址: 0x140da8ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
char var_2c8 = data_1439ae51c
char* result = arg2
int64_t var_1a0 = 0
arg2.b = 0
int32_t var_198 = 0
int32_t i = 0
int32_t var_194 = 4
int64_t r15 = 0
char var_190 = 0

while (i s< *(arg1 + 0x130))
    void* rbx_1 = arg1 + 8
    void* rax_3 = *(rbx_1 + 0x120)
    void* rdx = rbx_1
    
    if (rax_3 != 0)
        rdx = rax_3
    
    sub_140d99900(&var_2c8, rdx + sx.q(i) * 0x48)
    void* rax_5 = *(rbx_1 + 0x120)
    
    if (rax_5 != 0)
        rbx_1 = rax_5
    
    int64_t rcx_2 = *(rbx_1 + r15 + 0x38)
    arg2.b = rcx_2 == *arg3
    i += 1
    r15 += 0x48
    
    if (rcx_2 == *arg3)
        break

int128_t var_2d8
void var_2c0

if (arg2.b == 0)
    char var_188 = data_1439ae51c
    int64_t var_60_1 = 0
    int32_t var_58_1 = 0
    var_2d8 = zx.o(0)
    int32_t var_54_1 = 4
    char var_50_1 = 0
    sub_140d94680(result, &var_2d8, &var_188)
    void var_180
    sub_140d94d20(&var_180)
    sub_140d94d20(&var_2c0)
    int64_t* rbx_3 = arg3[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp1_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
else
    var_2d8.q = *(arg1 + 0x140)
    void* rax_7 = *(arg1 + 0x148)
    var_2d8:8.q = rax_7
    
    if (rax_7 != 0)
        *(rax_7 + 8) += 1
    
    sub_140d94680(result, &var_2d8, &var_2c8)
    sub_140d94d20(&var_2c0)
    int64_t* rbx_2 = arg3[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            int64_t rdx_3 = *rbx_2
            (*rdx_3)(rbx_2, rdx_3)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                int64_t r8_1 = *rbx_2
                (*(r8_1 + 8))(rbx_2, 1, r8_1)
__security_check_cookie(rax_1 ^ &var_2f8)
return result
