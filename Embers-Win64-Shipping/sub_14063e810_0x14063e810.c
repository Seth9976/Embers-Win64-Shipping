// 函数: sub_14063e810
// 地址: 0x14063e810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x38)
int64_t* rcx = *(arg2 + 0x28)
int64_t rdx = *(arg2 + 0x20)

if (rcx != 0)
    rcx[1].d += 1

*(arg1 + 0x10) = *(arg2 + 0x18)
void var_28

if (arg1 + 0x18 == &var_28)
label_14063e8ab:
    
    if (rcx != 0)
        rcx[1].d -= 1
        
        if (rcx[1].d == 1)
            (**rcx)(rcx)
            int32_t temp5_1 = *(rcx + 0xc)
            *(rcx + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rcx + 8))(rcx, 1)
else
    *(arg1 + 0x18) = rdx
    int64_t* rbx_1 = *(arg1 + 0x20)
    
    if (rcx == rbx_1)
        goto label_14063e8ab
    
    *(arg1 + 0x20) = rcx
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp7_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

void var_48
int32_t rcx_7
int32_t rdx_3
rcx_7, rdx_3 = sub_140597df0(arg1 + 0x28, sub_140ac6680(sub_140d44c30(arg1 + 0x10, &var_48, 1)))
int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        rcx_7, rdx_3 = (**var_40)(var_40)
        int32_t rdi_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rdi_1 == 1)
            rcx_7, rdx_3 = (*(*var_40 + 8))(var_40, zx.q(rdi_1))

int32_t rdx_7 = (sbb.d(rdx_3, rdx_3, (*(arg2 + 8) & 0x30) != 0) & 4) | (*(arg1 + 0x38) & 0xfffffffb)
*(arg1 + 0x38) = rdx_7
int32_t rcx_12 = (sbb.d(rcx_7, rcx_7, (*(arg2 + 8) & 0xc) != 0) & 2) | (rdx_7 & 0xfffffffd)
*(arg1 + 0x38) = rcx_12
int32_t rsi
rsi.b = (*(arg2 + 8) & 3) != 0
int32_t rcx_13 = rcx_12 & 0xfffffffe
int32_t rsi_1 = rsi | rcx_13
*(arg1 + 0x38) = rsi_1
*(arg1 + 0x38) = (sbb.d(rcx_13, rcx_13, (*(arg2 + 8) & 0xc0) != 0) & 8) | (rsi_1 & 0xfffffff7)
return arg1
