// 函数: sub_1420fc090
// 地址: 0x1420fc090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = data_143e29f28
int32_t var_48 = 0
int32_t rax = sub_140e69900(rbx, zx.q(*(arg1 + 0xb8)))
int64_t* var_38
int128_t var_30
int64_t* rax_4
int32_t rbp
int64_t r14

if (rax s< 0 || rax s>= *(rbx + 0x2c0))
    rax_4 = &var_30
    var_30 = zx.o(0)
    rbp = 2
    r14 = 0
else
    int64_t* rax_3 = (sx.q(rax) << 4) + *(rbx + 0x2b8)
    int64_t* rcx_1 = rax_3[1]
    r14 = *rax_3
    int64_t var_40 = r14
    var_38 = rcx_1
    
    if (rcx_1 != 0)
        rcx_1[1].d += 1
    
    rax_4 = &var_40
    rbp = 1

int64_t* rbx_1 = rax_4[1]
rax_4[1] = 0
*rax_4 = 0

if ((rbp.b & 2) != 0)
    int64_t* rdi_1 = var_30:8.q
    rbp &= 0xfffffffd
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp2_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if ((rbp.b & 1) != 0 && var_38 != 0)
    var_38[1].d -= 1
    
    if (var_38[1].d == 1)
        (**var_38)(var_38)
        int32_t temp4_1 = *(var_38 + 0xc)
        *(var_38 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_38 + 8))(var_38, 1)

*arg2 = r14
arg2[1] = rbx_1

if (rbx_1 != 0)
    int32_t r8_1 = rbx_1[1].d
    rbx_1[1].d = r8_1
    
    if (r8_1 == 0)
        int64_t r8_2 = *rbx_1
        (*r8_2)(rbx_1, arg3, r8_2)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_3 = *rbx_1
            (*(r8_3 + 8))(rbx_1, 1, r8_3)

return arg2
