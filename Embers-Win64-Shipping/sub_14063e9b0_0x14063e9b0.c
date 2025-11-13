// 函数: sub_14063e9b0
// 地址: 0x14063e9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x38)
int64_t* rbx = *(arg2 + 0x28)
int64_t r8 = *(arg2 + 0x20)
*(arg1 + 0x38) = 0x3f800000

if (rbx != 0)
    rbx[1].d += 1

*(arg1 + 0x20) = *(arg2 + 0x18)
void var_18

if (arg1 + 0x28 == &var_18)
label_14063ea47:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)
else
    *(arg1 + 0x28) = r8
    int64_t* rsi_1 = *(arg1 + 0x30)
    
    if (rbx == rsi_1)
        goto label_14063ea47
    
    *(arg1 + 0x30) = rbx
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp4_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)

r8.b = 1
void var_38
sub_140597df0(arg1 + 0x10, sub_140ac6680(sub_140d44c30(arg1 + 0x20, &var_38, r8.b)))
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t rsi_2 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rsi_2 == 1)
            (*(*var_30 + 8))(var_30, zx.q(rsi_2))

*(arg1 + 0x38) = 0x3f800000
return arg1
