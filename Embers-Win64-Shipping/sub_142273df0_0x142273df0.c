// 函数: sub_142273df0
// 地址: 0x142273df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

uint32_t r8 = zx.d(arg3)
int64_t* r14_1

if (r8 != 0)
    if (r8 == 1)
        r14_1 = arg1 + 0x390
        goto label_142273e5b
    
    if (r8 == 5)
        r14_1 = arg1 + 0x3a0
        goto label_142273e5b
    
    return 

r14_1 = arg1 + 0x380
label_142273e5b:
int64_t* var_28

if (r14_1 != &var_28)
    *r14_1 = 0
    int64_t* rbx_1 = r14_1[1]
    
    if (rbx_1 != 0)
        r14_1[1] = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rax_3 = j_sub_140a82f30(0x18)
int64_t* rsi_2

if (rax_3 == 0)
    rsi_2 = nullptr
else
    rsi_2 = sub_142259b80(rax_3, arg2, arg4.d, arg6, arg5)

void*** rax_5 = j_sub_140a82f30(0x18)
void*** rbx_2 = rax_5

if (rax_5 == 0)
    rbx_2 = nullptr
else
    rax_5[1].d = 1
    *(rax_5 + 0xc) = 1
    *rbx_2 = &data_143311fd8
    rbx_2[2] = rsi_2

void*** var_20_1 = rbx_2
var_28 = rsi_2

if (r14_1 == &var_28)
label_142273f4d:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rbx_2)[1](rbx_2, 1)
else
    *r14_1 = rsi_2
    int64_t* rsi_3 = r14_1[1]
    var_28 = nullptr
    
    if (rbx_2 == rsi_3)
        goto label_142273f4d
    
    r14_1[1] = rbx_2
    void*** var_20_2 = nullptr
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            (**rsi_3)(rsi_3)
            int32_t temp6_1 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rsi_3 + 8))(rsi_3, 1)
        
        rbx_2 = var_20_2
        goto label_142273f4d
