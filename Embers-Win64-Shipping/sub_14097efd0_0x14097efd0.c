// 函数: sub_14097efd0
// 地址: 0x14097efd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x10)
int64_t rsi = 0
int64_t r8 = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        r8 = *(arg2 + 8)

int64_t var_40 = r8
void** const var_48 = &data_142e25968
int64_t* var_38 = rbx

if (rbx != 0)
    rbx[1].d += 1

int32_t arg_8
sub_140960020(arg1 + 0xf0, &arg_8, &var_48)
int64_t rax_2 = sx.q(arg_8)
void* const rax_4

if (rax_2.d == 0xffffffff)
    rax_4 = nullptr
else
    rax_4 = rax_2 * 0x118 + *(arg1 + 0xf0)

void* rdi = rax_4 + 0x18

if (rax_4 == 0)
    rdi = nullptr

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx + 8))(rbx, 1)

if (rdi != 0)
    void* rcx_5 = *(rdi + 0x20)
    
    if (rcx_5 != 0)
        sub_141c70e50(rcx_5)
        *(rdi + 0x31) = 0
    
    *(rdi + 0x20) = 0
    int64_t rcx_6 = 0
    int64_t* rbx_1 = *(arg2 + 0x10)
    
    if (rbx_1 != 0)
        int32_t rax_9 = rbx_1[1].d
        
        if (rax_9 != 0)
            rbx_1[1].d = rax_9 + 1
            rax_9.b = 1
        
        if (rax_9.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rcx_6 = *(arg2 + 8)
    
    var_48 = &data_142e25968
    int64_t var_40_1 = rcx_6
    int64_t* var_38_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    sub_140974450(arg1 + 0xf0, &var_48)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp6_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
        
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp7_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rbx_2 = *(arg2 + 0x10)
    
    if (rbx_2 != 0)
        int32_t rax_14 = rbx_2[1].d
        
        if (rax_14 != 0)
            rbx_2[1].d = rax_14 + 1
            rax_14.b = 1
        
        if (rax_14.b == 0)
            rbx_2 = nullptr
        
        if (rbx_2 != 0)
            rsi = *(arg2 + 8)
    
    var_48 = &data_142e25968
    int64_t var_40_2 = rsi
    int64_t* var_38_2 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    sub_1409742a0(arg1 + 0x158, &var_48)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp10_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
        
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp11_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

return 0
