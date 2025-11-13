// 函数: sub_140977060
// 地址: 0x140977060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x230)
void* rbx = arg1

if (result == 0 || *(result + 0x88) == 0)
    return result

arg1.b = 1
char arg_10 = 1
int32_t rax
int512_t zmm1_1
rax, zmm1_1 = sub_140b1a070(arg1.b)
int32_t arg_18 = rax

if (*data_143f4d030 == 0)
    bool cond:0_1 = *(rbx + 0x2ac) == 0
    *(rbx + 0x2a8) = 0
    
    if (not(cond:0_1))
        sub_1405947f0(rbx + 0x2a0, 0)

void* rcx_11 = *(rbx + 0x230)
void* rdi_1 = *(rcx_11 + 0x88)
void* rdx_1 = **(rdi_1 + 0x1310)

if (rdx_1 != 0 && (*(rdx_1 + 0x30) & 2) == 0)
    void** var_138
    sub_141f79620(&var_138, rdx_1, 0)
    char arg_8 = 0
    int64_t* var_130
    char* rdx_2 = *var_130
    
    if (&rdx_2[1] u> var_130[1])
        var_138[0x2a](&var_138, &arg_8, 1)
    else
        arg_8 = *rdx_2
        *var_130 += 1
    
    char* rdx_4 = *var_130
    
    if (&rdx_4[1] u> var_130[1])
        var_138[0x2a](&var_138, &arg_10, 1)
    else
        arg_10 = *rdx_4
        *var_130 += 1
    
    int32_t* rdx_6 = *var_130
    
    if (&rdx_6[1] u> var_130[1])
        int32_t* rdx_7 = &arg_18
        void*** rcx_7 = &var_138
        char var_10f
        
        if ((var_10f & 0x20) != 0)
            sub_140b54070(rcx_7, rdx_7, zmm1_1)
        else
            var_138[0x2a](rcx_7, rdx_7, 4)
    else
        arg_18 = *rdx_6
        *var_130 += 4
    
    sub_140a1d9d0(&var_138, rbx + 0x2a0, zmm1_1)
    int64_t r9_1
    r9_1.b = 1
    int64_t* rcx_9 = **(rdi_1 + 0x1310)
    void arg_20
    (*(*rcx_9 + 0x2c8))(rcx_9, &arg_20, &var_138, r9_1)
    sub_141f7bb50(&var_138)
    rcx_11 = *(rbx + 0x230)

int64_t* rcx_12 = *(rcx_11 + 0x88)
return (*(*rcx_12 + 0x2a8))(rcx_12, 0)
