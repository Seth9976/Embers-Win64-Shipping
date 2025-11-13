// 函数: sub_140941230
// 地址: 0x140941230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_20
int64_t* rax_1 = sub_140fc6160(sub_140b58260(&arg_20, u"WINDOWS", 1))
int64_t r9 = *rax_1
int64_t var_48
int64_t* rax_2 = (*(r9 + 0xd0))(rax_1, &var_48, data_143ddb418, r9)
int64_t* rbx = rax_2[1]

if (rbx != 0)
    rbx[1].d += 1

void var_58

if (&arg1[3] == &var_58)
label_1409412dc:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)
else
    arg1[3] = *rax_2
    int64_t* rdi_1 = arg1[4]
    
    if (rbx == rdi_1)
        goto label_1409412dc
    
    arg1[4] = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp4_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

int64_t* rcx_9 = arg1[3]
(*(*rcx_9 + 0x28))(rcx_9, zx.q(arg2))
int64_t* rcx_10 = arg1[3]
void arg_8
int64_t* rax_11 = (*(*rax_1 + 0x88))(rax_1, &var_48, *(*(*rcx_10 + 0xa0))(rcx_10, &arg_8))
int64_t* rbx_3 = rax_11[1]

if (rbx_3 != 0)
    rbx_3[1].d += 1

if (arg1 == &var_58)
label_1409413a6:
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp8_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
else
    *arg1 = *rax_11
    int64_t* rdi_2 = arg1[1]
    
    if (rbx_3 == rdi_2)
        goto label_1409413a6
    
    arg1[1] = rbx_3
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp12_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp11_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

int64_t* rcx_18 = *arg1
(*(*rcx_18 + 0x68))(rcx_18)
int64_t* rcx_19 = *arg1
(*(*rcx_19 + 0x28))(rcx_19, zx.q(arg2))
int64_t* rax_20 = (*(*rax_1 + 0x90))(rax_1, &var_48)
int64_t rdx_6 = arg1[5]
arg1[5] = *rax_20
*rax_20 = rdx_6
int64_t rdx_7 = arg1[6]
arg1[6] = rax_20[1]
rax_20[1] = rdx_7

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp13_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

var_48 = 0
int32_t var_40_1 = 0
sub_1405947f0(&var_48, 0xb)
int32_t rax_23 = var_40_1 + 0xb
var_40_1 = rax_23

if (rax_23 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"LAN beacon", 0x16)
int32_t arg_18 = *sub_140b5e500(&arg_8, 0x118)
int64_t* rcx_30 = arg1[3]
int32_t arg_1c = 0
int64_t result
int64_t rdx_11
result, rdx_11 = (*(*rax_1 + 0x18))(rax_1, &arg_18, &var_48, (*(*rcx_30 + 0xa0))(rcx_30, &var_58))
int64_t rcx_32 = var_48
arg1[2] = result

if (rcx_32 != 0)
    result, rdx_11 = sub_140a74f90(rcx_32)

int64_t* rcx_33 = arg1[2]

if (rcx_33 != 0)
    rdx_11.b = 1
    (*(*rcx_33 + 0xe8))(rcx_33, rdx_11)
    int64_t* rcx_34 = arg1[2]
    int64_t rdx_12
    rdx_12.b = 1
    (*(*rcx_34 + 0x98))(rcx_34, rdx_12)
    int64_t* rcx_35 = arg1[2]
    int64_t rdx_13
    rdx_13.b = 1
    (*(*rcx_35 + 0xf8))(rcx_35, rdx_13)
    int64_t* rcx_36 = arg1[2]
    int64_t rdx_15
    result, rdx_15 = (*(*rcx_36 + 0x18))(rcx_36, arg1[3])
    
    if (result.b != 0)
        int64_t* rcx_37 = arg1[2]
        rdx_15.b = 1
        
        if ((*(*rcx_37 + 0xa0))(rcx_37, rdx_15).b != 0 && arg1[2] != 0)
            result.b = 1
            return result

result.b = 0
return result
