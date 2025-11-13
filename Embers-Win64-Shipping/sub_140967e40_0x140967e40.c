// 函数: sub_140967e40
// 地址: 0x140967e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x10)
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

int64_t var_20 = r8
void** const var_28 = &data_142e25968
int64_t* var_18 = rbx

if (rbx != 0)
    rbx[1].d += 1

int32_t arg_8
sub_140960020(arg1 + 0xf0, &arg_8, &var_28)
int64_t rax_2 = sx.q(arg_8)
int64_t rdx_2

if (rax_2.d == 0xffffffff)
    rdx_2 = 0
else
    rdx_2 = rax_2 * 0x118 + *(arg1 + 0xf0)

int64_t rax_3 = rdx_2 + 0x18

if (rdx_2 == 0)
    rax_3 = 0

int64_t* rdi
rdi.b = rax_3 != 0

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
            int64_t r8_2 = *rbx
            (*r8_2)(rbx, arg3, r8_2)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                int64_t r8_3 = *rbx
                (*(r8_3 + 8))(rbx, 1, r8_3)

return zx.q(rdi.b)
