// 函数: sub_141b6f270
// 地址: 0x141b6f270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_c = *(arg1 + 0x2db)
uint32_t arg_8 = zx.d(*(arg1 + 0x2d9))
char arg_d = *(arg1 + 0x2da)
char arg_e = *(arg1 + 0x2e4)
char* (* var_38)(void* arg1, char* arg2, int512_t arg3 @ zmm1)
char* (** rax_4)(void* arg1, char* arg2, int512_t arg3 @ zmm1) =
    sub_141b6f540(&var_38, arg1, arg1 + 0x2e8, &arg_8)
int64_t* rdi = rax_4[1]

if (rdi != 0)
    rdi[1].d += 1

void var_28

if (arg1 + 0x368 != &var_28)
    *(arg1 + 0x368) = *rax_4
    int64_t* rax_5 = rdi
    int64_t* rbx_1 = *(arg1 + 0x370)
    
    if (rdi != rbx_1)
        rdi = nullptr
        *(arg1 + 0x370) = rax_5
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = *(arg1 + 0x370)

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (arg1 + 0x2f8 == &var_28)
label_141b6f382:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
else
    *(arg1 + 0x2f8) = *(arg1 + 0x368)
    int64_t* rsi_1 = *(arg1 + 0x300)
    
    if (rbx_2 == rsi_1)
        goto label_141b6f382
    
    *(arg1 + 0x300) = rbx_2
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp8_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp7_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp9_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

var_30.d = 0
var_38 = sub_141bb4c60
int64_t* rax_16 = sub_140a84c80(0, 0x30, 0)

if (rax_16 != 0)
    *rax_16 = &data_143084628
    sub_140d3a3a0(&rax_16[1], arg1)
    *(rax_16 + 0x10) = var_38.o
    rax_16[5] = sub_140a387b0()
    *rax_16 = &data_143084680

char* (* rdi_2)(void* arg1, char* arg2, int512_t arg3 @ zmm1) = *(arg1 + 0x368) + 0x5d0

if (&var_28 != rdi_2)
    if (rax_16 != 0)
        (*(*rax_16 + 0x40))(rax_16, rdi_2)
    else if (*(rdi_2 + 8) != 0)
        int64_t* rcx_14 = *rdi_2
        
        if (rcx_14 != 0)
            (*(*rcx_14 + 0x38))(rcx_14, 0)
            int64_t rcx_15 = *rdi_2
            
            if (rcx_15 != 0)
                *rdi_2 = sub_140a84c80(rcx_15, 0, 0)
            
            *(rdi_2 + 8) = 0

if (rax_16 != 0)
    (*(*rax_16 + 0x38))(rax_16, 0)
    int64_t rax_22 = sub_140a84c80(rax_16, 0, 0)
    
    if (rax_22 != 0)
        sub_140a74f90(rax_22)

int64_t* rbx_5 = *(arg1 + 0x370)

if (rbx_5 != 0)
    rbx_5[1].d += 1

*arg2 = *(arg1 + 0x368)
arg2[1] = rbx_5

if (rbx_5 != 0)
    rbx_5[1].d += 1
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp11_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)

return arg2
