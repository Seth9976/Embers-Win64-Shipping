// 函数: sub_141b6d970
// 地址: 0x141b6d970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_28 = *(arg1 + 0x2dc)
uint32_t var_24 = zx.d(*(arg1 + 0x2d9))
char var_20 = *(arg1 + 0x2db)
char var_1f = *(arg1 + 0x2da)
char var_1e = *(arg1 + 0x2e4)
uint32_t var_1c = zx.d(*(arg1 + 0x2d8))
char* (* var_18)(void* arg1, char* arg2, int512_t arg3 @ zmm1)
char* (** rax_6)(void* arg1, char* arg2, int512_t arg3 @ zmm1) =
    sub_141b6dbe0(&var_18, arg1, arg1 + 0x2e8, &var_28)
int64_t* rbx = rax_6[1]

if (rbx != 0)
    rbx[1].d += 1

if (arg1 + 0x2f8 == &var_28)
label_141b6da3c:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)
else
    *(arg1 + 0x2f8) = *rax_6
    int64_t* rdi_1 = *(arg1 + 0x300)
    
    if (rbx == rdi_1)
        goto label_141b6da3c
    
    *(arg1 + 0x300) = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp4_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

var_20.d = 0
var_28.q = sub_141bb4c60
int64_t* rax_12 = sub_140a84c80(0, 0x30, 0)

if (rax_12 != 0)
    *rax_12 = &data_143084628
    sub_140d3a3a0(&rax_12[1], arg1)
    *(rax_12 + 0x10) = var_28.o
    rax_12[5] = sub_140a387b0()
    *rax_12 = &data_143084680

int64_t* rdi_3 = *(arg1 + 0x2f8) + 0x5d0

if (&var_18 != rdi_3)
    if (rax_12 != 0)
        (*(*rax_12 + 0x40))(rax_12, rdi_3)
    else if (rdi_3[1].d != 0)
        int64_t* rcx_9 = *rdi_3
        
        if (rcx_9 != 0)
            (*(*rcx_9 + 0x38))(rcx_9, 0)
            int64_t rcx_10 = *rdi_3
            
            if (rcx_10 != 0)
                *rdi_3 = sub_140a84c80(rcx_10, 0, 0)
            
            rdi_3[1].d = 0

if (rax_12 != 0)
    (*(*rax_12 + 0x38))(rax_12, 0)
    int64_t rax_18 = sub_140a84c80(rax_12, 0, 0)
    
    if (rax_18 != 0)
        sub_140a74f90(rax_18)

int64_t* rbx_3 = *(arg1 + 0x300)

if (rbx_3 != 0)
    rbx_3[1].d += 1

*arg2 = *(arg1 + 0x2f8)
arg2[1] = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d += 1
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp7_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)

return arg2
