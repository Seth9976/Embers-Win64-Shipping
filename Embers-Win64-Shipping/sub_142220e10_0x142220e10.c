// 函数: sub_142220e10
// 地址: 0x142220e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x30)
void* rbx = arg1

if (rsi == 0)
    return 

int64_t* rsi_1 = *(rsi + 0x88)

if (rsi_1 == 0)
    return 

arg1.b = 1
char arg_10 = 1
int32_t rax_1
int512_t zmm1_1
rax_1, zmm1_1 = sub_140b1a070(arg1.b)
int32_t arg_18 = rax_1
int32_t* rax_2 = data_143f4d030
uint64_t var_158 = 0
int64_t var_150_1 = 0

if (*rax_2 != 0)
    void* rax_3 = sub_142411ce0(rbx + 0x40, u"EncryptionToken=", &data_142d40450)
    
    if (var_158 != rax_3)
        int32_t rbx_2
        
        if (rax_3 == 0 || *rax_3 == 0)
            rbx_2 = 0
        else
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (*(rax_3 + (rbx_1 << 1)) != 0)
            
            rbx_2 = rbx_1.d + 1
        
        int32_t rcx_1 = var_150_1:4.d
        
        if (rcx_1 != rbx_2)
            sub_1405947f0(&var_158, rbx_2)
            rcx_1 = var_150_1:4.d
        
        int32_t rax_4 = var_150_1.d + rbx_2
        var_150_1.d = rax_4
        
        if (rax_4 s> rcx_1)
            sub_140594770(&var_158)
        
        if (rbx_2 != 0)
            memcpy(var_158, rax_3, rbx_2 * 2)

void* rdx_4 = *rsi_1[0x262]

if (rdx_4 != 0 && (*(rdx_4 + 0x30) & 2) == 0)
    void** var_148
    sub_141f79620(&var_148, rdx_4, 0)
    char arg_8 = 0
    int64_t* var_140
    char* rdx_5 = *var_140
    
    if (&rdx_5[1] u> var_140[1])
        var_148[0x2a](&var_148, &arg_8, 1)
    else
        arg_8 = *rdx_5
        *var_140 += 1
    
    char* rdx_7 = *var_140
    
    if (&rdx_7[1] u> var_140[1])
        var_148[0x2a](&var_148, &arg_10, 1)
    else
        arg_10 = *rdx_7
        *var_140 += 1
    
    int32_t* rdx_9 = *var_140
    
    if (&rdx_9[1] u> var_140[1])
        int32_t* rdx_10 = &arg_18
        void*** rcx_11 = &var_148
        char var_11f
        
        if ((var_11f & 0x20) != 0)
            sub_140b54070(rcx_11, rdx_10, zmm1_1)
        else
            var_148[0x2a](rcx_11, rdx_10, 4)
    else
        arg_18 = *rdx_9
        *var_140 += 4
    
    sub_140a1d9d0(&var_148, &var_158, zmm1_1)
    int64_t r9_1
    r9_1.b = 1
    int64_t* rcx_13 = *rsi_1[0x262]
    void arg_20
    (*(*rcx_13 + 0x2c8))(rcx_13, &arg_20, &var_148, r9_1)
    sub_141f7bb50(&var_148)

(*(*rsi_1 + 0x2a8))(rsi_1, 0)
uint64_t rcx_16 = var_158

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)
