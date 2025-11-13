// 函数: ?grow@?$Map@KUFI@@V?$HashClass@K$0A@@pdb_internal@@XVCriticalSectionNop@@@pdb_internal@@IEAAHXZ
// 地址: 0x14059b090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
int32_t rax_1 = arg2[1].d
char rax_2 = *(arg2 + 0xc)
char rax_3 = *(arg2 + 0xd)
int64_t rax_4 = arg2[2]
int64_t* rax_5 = arg2[3]

if (rax_5 != 0)
    rax_5[1].d += 1

int32_t rax_6 = arg2[4].d
int64_t var_50
sub_140596d10(&var_50, &arg2[5])
int64_t var_40 = rax
int32_t var_38 = rax_1
char var_34 = rax_2
char var_33 = rax_3
int64_t var_30 = rax_4
int64_t* var_28 = rax_5

if (rax_5 != 0)
    rax_5[1].d += 1

int32_t var_20 = rax_6
void var_18
sub_140596d10(&var_18, &var_50)
(*(arg1 + 8))(&var_40, zx.q(*(arg1 + 0x10)), zx.q(*(arg1 + 0x11)), zx.q(*(arg1 + 0x12)), 
    *(arg1 + 0x13))
int64_t rcx_3 = var_50

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

if (rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d == 1)
        (**rax_5)(rax_5)
        int32_t rax_17 = *(rax_5 + 0xc)
        *(rax_5 + 0xc) -= 1
        
        if (rax_17 == 1)
            (*(*rax_5 + 8))(rax_5, 1)

int64_t rcx_7 = arg2[5]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t* rbx_2 = arg2[3]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

uint64_t result
result.b = 1
return result
