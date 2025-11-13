// 函数: sub_14092fae0
// 地址: 0x14092fae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x10)
int64_t r9 = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        r9 = *(arg2 + 8)

if (rbx != 0)
    rbx[1].d += 1

int64_t* var_18 = nullptr
int32_t var_10 = 0

if (arg3 != &var_18 && arg3[1].d != 0)
    int64_t* rcx = *arg3
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx, &var_18)

void* rsi_1 = *(arg1 + 0x170)
void*** var_38 = nullptr
void*** rax_3 = sub_140a84c80(0, 0x40, 0)
var_38 = rax_3
int32_t var_30 = 4

if (rax_3 != 0)
    *rax_3 = &data_142e21870
    rax_3[1] = r9
    rax_3[2] = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rax_3[3] = 0
    rax_3[4].d = 0
    
    if (&var_18 != &rax_3[3] && var_10 != 0)
        int64_t* rcx_2 = var_18
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x40))(rcx_2)
    
    rax_3[6] = sub_140a387b0()
    *rax_3 = &data_142e218c8

sub_14093f370(rsi_1, &var_38)
void*** rax_9

if (var_30 == 0)
    rax_9 = var_38
label_14092fc39:
    
    if (rax_9 != 0)
        sub_140a74f90(rax_9)
else
    void*** rcx_4 = var_38
    
    if (rcx_4 != 0)
        (*rcx_4)[7](rcx_4, 0)
        rax_9 = var_38
        
        if (rax_9 != 0)
            rax_9 = sub_140a84c80(rax_9, 0, 0)
            var_38 = rax_9
        
        int32_t var_30_1 = 0
        goto label_14092fc39
uint64_t result = sub_140745b20(&var_18)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
