// 函数: sub_1405f7fc0
// 地址: 0x1405f7fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
int64_t* var_60 = nullptr
int32_t i_2 = 0
(*(*arg1 + 0x48))(arg1, &var_60)
int64_t var_40
(*(*arg1 + 0x40))(arg1, &var_40)
int32_t var_38
int64_t* arg_10

if (var_38 s> 1)
    int64_t i_5 = sx.q(i_2)
    int32_t i_4 = (i_5 + 1).d
    i_2 = i_4
    
    if (i_4 s> 0)
        sub_1405a4f90(&var_60)
    
    int64_t* rbx_3 = &var_60[i_5 * 2]
    arg_10 = rbx_3
    *rbx_3 = 0
    int64_t rsi = var_40
    rbx_3[1].d = var_38
    
    if (var_38 != 0)
        sub_1405a4c70(rbx_3, var_38, 0)
        memcpy(*rbx_3, rsi, var_38 * 2)
    else
        *(rbx_3 + 0xc) = 0
else
    int64_t var_50 = 0
    int64_t var_48_1 = 0
    sub_1405947f0(&var_50, 8)
    int32_t rbx_1 = var_48_1.d + 8
    var_48_1.d = rbx_1
    int32_t rdi = 0
    
    if (rbx_1 s> 0)
        sub_140594770(&var_50)
        rdi = var_48_1:4.d
        rbx_1 = var_48_1.d
    
    int64_t r14_1 = var_50
    UnDecorator::getReferenceType(r14_1, u"Default", 0x10)
    int64_t i_6 = sx.q(i_2)
    int32_t i_3 = (i_6 + 1).d
    i_2 = i_3
    
    if (i_3 s> 0)
        sub_1405a4f90(&var_60)
    
    int64_t* rax_4 = &var_60[i_6 * 2]
    arg_10 = rax_4
    *rax_4 = r14_1
    rax_4[1].d = rbx_1
    *(rax_4 + 0xc) = rdi
int128_t zmm6 = zx.o(0)
int32_t arg_8 = 0
int64_t* rbx_4 = var_60
void* rdi_4 = &rbx_4[sx.q(i_2) * 2]
int512_t result

if (rbx_4 != rdi_4)
    do
        int16_t* r8_3
        
        if (rbx_4[1].d == 0)
            r8_3 = &data_142d40450
        else
            r8_3 = *rbx_4
        
        char rax_5
        rax_5, result =
            sub_140af3b00(data_143ddb400, HMDPluginPriority", r8_3, &arg_8, &data_143de5780)
        
        if (rax_5 != 0)
            break
        
        rbx_4 = &rbx_4[2]
    while (rbx_4 != rdi_4)
    
    rbx_4 = var_60
    zmm6 = arg_8

int64_t rcx_9 = var_40

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)
    rbx_4 = var_60

int32_t i_1 = i_2

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_10 = *rbx_4
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        rbx_4 = &rbx_4[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_4 = var_60

if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

result.o = zmm6
return result
