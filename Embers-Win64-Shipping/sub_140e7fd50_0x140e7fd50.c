// 函数: sub_140e7fd50
// 地址: 0x140e7fd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = arg5
void*** var_38 = *r10
void* rax_1 = r10[1]
void* var_30 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int128_t var_48
sub_140e8e470(arg1, &var_48, &var_38, 0xbf800000, 0xbf800000)
void*** rax_2 = j_sub_140a82f30(0x58)
void*** r15 = rax_2
int64_t* var_40

if (rax_2 == 0)
    r15 = nullptr
else
    int64_t rsi_1 = *arg4
    int64_t* rbx_1 = arg4[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    var_38.o = var_48
    
    if (var_40 != 0)
        var_40[1].d += 1
    
    sub_140e50e40(r15, &var_38, arg8)
    *r15 = &data_142ed77f8
    r15[9] = rsi_1
    r15[0xa] = rbx_1
    
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

void*** rax_5 = j_sub_140a82f30(0x18)
void*** rbx_2 = rax_5

if (rax_5 == 0)
    rbx_2 = nullptr
else
    rax_5[1].d = 1
    *(rax_5 + 0xc) = 1
    *rbx_2 = &data_142d42ea8
    rbx_2[2] = r15

void* rsi_2 = &r15[1]

if (r15 == 0)
    rsi_2 = nullptr

if (rsi_2 == 0)
label_140e7ff0b:
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
else
    void* rax_6
    
    if (*rsi_2 != 0)
        rax_6 = *(rsi_2 + 8)
    
    if (*rsi_2 != 0 && rax_6 != 0 && *(rax_6 + 8) s> 0)
        goto label_140e7ff0b
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    *rsi_2 = r15
    int64_t* rcx_3 = *(rsi_2 + 8)
    
    if (rbx_2 != rcx_3)
        if (rbx_2 != 0)
            *(rbx_2 + 0xc) += 1
            rcx_3 = *(rsi_2 + 8)
        
        if (rcx_3 != 0)
            int32_t temp8_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
        
        *(rsi_2 + 8) = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp7_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*rbx_2)[1](rbx_2, 1)
        
        goto label_140e7ff0b

if (arg1 + 0xc8 == &var_38)
label_140e7ff55:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rbx_2)[1](rbx_2, 1)
else
    *(arg1 + 0xc8) = r15
    void*** rsi_3 = *(arg1 + 0xd0)
    
    if (rbx_2 == rsi_3)
        goto label_140e7ff55
    
    *(arg1 + 0xd0) = rbx_2
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            (**rsi_3)(rsi_3)
            int32_t temp6_1 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rsi_3)[1](rsi_3, 1)

if (var_40 != 0)
    var_40[1].d += 1

if (arg6 == &var_38)
label_140e7ffcc:
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp10_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*var_40 + 8))(var_40, 1)
else
    *arg6 = var_48.q
    int64_t* rsi_4 = arg6[1]
    
    if (var_40 == rsi_4)
        goto label_140e7ffcc
    
    arg6[1] = var_40
    
    if (rsi_4 != 0)
        rsi_4[1].d -= 1
        
        if (rsi_4[1].d == 1)
            (**rsi_4)(rsi_4)
            int32_t temp12_1 = *(rsi_4 + 0xc)
            *(rsi_4 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*rsi_4 + 8))(rsi_4, 1)

sub_140e45130((*r15)[5](r15), &arg5, arg1, sub_140e75b20)
var_38 = r15
void*** var_30_1 = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1

var_48.q = *arg3
void* rax_20 = arg3[1]
void* var_40_1 = rax_20

if (rax_20 != 0)
    *(rax_20 + 8) += 1

sub_140e78fc0(arg1, &var_48, &var_38, arg7, 0)

if (arg1 + 0xc8 != &var_38)
    *(arg1 + 0xc8) = 0
    int64_t* rsi_5 = *(arg1 + 0xd0)
    
    if (rsi_5 != 0)
        *(arg1 + 0xd0) = 0
        rsi_5[1].d -= 1
        
        if (rsi_5[1].d == 1)
            (**rsi_5)(rsi_5)
            int32_t temp16_1 = *(rsi_5 + 0xc)
            *(rsi_5 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*rsi_5 + 8))(rsi_5, 1)

*arg2 = r15
arg2[1] = rbx_2

if (rbx_2 != 0)
    int32_t rax_23 = rbx_2[1].d
    rbx_2[1].d = rax_23
    
    if (rax_23 == 0)
        (**rbx_2)(rbx_2)
        int32_t temp15_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*rbx_2)[1](rbx_2, 1)

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp17_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

return arg2
