// 函数: sub_140eda8e0
// 地址: 0x140eda8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t (* result_1)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm1)
int128_t var_48
int128_t var_38

if (*(arg1 + 0x3e0) != 0)
    void* rbx_1 = *arg2
    result_1 = sub_140ecdf60
    int64_t var_50
    var_50.d = 0
    var_38 = result_1.o
    sub_140e24dc0(rbx_1, sub_140dd1ec0(&var_48, arg1, &var_38))
    int64_t rax_3
    
    if (var_48:8.d == 0)
        rax_3 = var_48.q
    label_140eda976:
        
        if (rax_3 != 0)
            sub_140a74f90(rax_3)
    else
        int64_t* rcx_2 = var_48.q
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x38))(rcx_2, 0)
            rax_3 = var_48.q
            
            if (rax_3 != 0)
                rax_3 = sub_140a84c80(rax_3, 0, 0)
                var_48.q = rax_3
            
            var_48:8.d = 0
            goto label_140eda976

result_1 = data_143e244b0
int64_t* rax_5 = data_143e244b8
var_48 = zx.o(0)

if (rax_5 != 0)
    rax_5[1].d += 1

int64_t* rcx_5 = data_143e29f28
(*(*rcx_5 + 0x128))(rcx_5, &var_38, arg2, &result_1, 0, &var_48)

if (rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d == 1)
        (**rax_5)(rax_5)
        int32_t temp1_1 = *(rax_5 + 0xc)
        *(rax_5 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rax_5 + 8))(rax_5, 1)

sub_140de1aa0(*(arg1 + 0x3d8), &var_38)
int64_t* rbx_3 = var_48:8.q

if (rbx_3 != 0)
    rbx_3[1].d += 1

int64_t* rdi = rbx_3
int128_t* rax_10 = *arg2 + 0xa30
result_1 = var_48.q

if (rbx_3 != 0)
    rbx_3[1].d += 1

if (&result_1 != rax_10)
    result_1.o = *rax_10
    rdi = rbx_3
    *rax_10 = result_1.o

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp4_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp6_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rbx_4 = var_38:8.q

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp8_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* rbx_5 = var_48:8.q

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp9_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

*(arg1 + 0x3c8) = *arg2
void* rbx_6 = arg2[1]
int64_t* rcx_18 = *(arg1 + 0x3d0)

if (rbx_6 != rcx_18)
    if (rbx_6 != 0)
        *(rbx_6 + 0xc) += 1
        rcx_18 = *(arg1 + 0x3d0)
    
    if (rcx_18 != 0)
        int32_t temp10_1 = *(rcx_18 + 0xc)
        *(rcx_18 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rcx_18 + 8))(rcx_18, 1)
    
    *(arg1 + 0x3d0) = rbx_6

void* rdi_1 = *arg2
var_38.q = sub_140ecde80
var_38:8.d = 0
var_38 = var_38
int64_t (* result)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm1) =
    sub_140e8edc0(&result_1, arg1, &var_38)
int64_t (* result_2)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm1) = result

if (*(result + 8) != 0 && *result != 0)
    sub_140599630(rdi_1 + 0x938, 1)
    
    if (*(result_2 + 8) != 0)
        int64_t* rcx_21 = *result_2
        
        if (rcx_21 != 0)
            (*(*rcx_21 + 0x30))(rcx_21, &var_48)
    
    int64_t rsi_1 = sx.q(*(rdi_1 + 0x940))
    int32_t rax_22 = (rsi_1 + 1).d
    *(rdi_1 + 0x940) = rax_22
    
    if (rax_22 s> *(rdi_1 + 0x944))
        sub_1405a4f90(rdi_1 + 0x938)
    
    int64_t* rcx_25 = (rsi_1 << 4) + *(rdi_1 + 0x938)
    *rcx_25 = 0
    *rcx_25 = *result_2
    *result_2 = 0
    result = zx.q(*(result_2 + 8))
    rcx_25[1].d = result.d
    *(result_2 + 8) = 0

if (rbx_3.d == 0)
    result = result_1
label_140edac14:
    
    if (result != 0)
        return sub_140a74f90(result)
else
    int64_t (* result_3)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm1) = result_1
    
    if (result_3 != 0)
        (*(*result_3 + 0x38))(result_3, 0)
        result = result_1
        
        if (result != 0)
            result = sub_140a84c80(result, 0, 0)
            result_1 = result
        
        int64_t* var_50_2
        var_50_2.d = 0
        goto label_140edac14

return result
