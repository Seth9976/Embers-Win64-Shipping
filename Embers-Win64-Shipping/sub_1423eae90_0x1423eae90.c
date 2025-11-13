// 函数: sub_1423eae90
// 地址: 0x1423eae90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140599090(&data_14399fd00)
void arg_8
int64_t* rax_1 = sub_140b3dbe0(*sub_140b58170(&arg_8, "MovieSceneCapture", 1))

if (rax_1 != 0)
    int64_t rdx_1 = *rax_1
    (*(rdx_1 + 0x68))(rax_1, rdx_1)

sub_141f9d740()
int64_t* rcx_3 = data_143db18d0

if (rcx_3 == 0)
    sub_140a53c40()
    rcx_3 = data_143db18d0

(*(*rcx_3 + 0x60))(rcx_3, data_143f5b420)
sub_14200fa80(1)
sub_141df00d0()
int64_t* rcx_5 = *(arg1 + 0xbe8)

if (rcx_5 != 0)
    (*(*rcx_5 + 8))(rcx_5, 0)
    int64_t* rcx_6 = *(arg1 + 0xbe8)
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x20))(rcx_6, 1)
    
    *(arg1 + 0xbe8) = 0

int64_t* rcx_7 = *(arg1 + 0xbf0)

if (rcx_7 != 0)
    (*(*rcx_7 + 0x28))(rcx_7, 1)

if (*(arg1 + 0x830) != 0)
    int64_t* rcx_8 = *(arg1 + 0x810)
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0x278))(rcx_8, arg1)

*(arg1 + 0x810) = 0

if (*(arg1 + 0x7f0) != 0)
    int64_t* rcx_9 = *(arg1 + 0x7d0)
    
    if (rcx_9 != 0)
        (*(*rcx_9 + 0x268))(rcx_9, arg1)

*(arg1 + 0x7d0) = 0
sub_1423f1810(arg1)
void var_18

if (arg1 + 0xa50 != &var_18)
    *(arg1 + 0xa50) = 0
    int64_t* rdi_1 = *(arg1 + 0xa58)
    
    if (rdi_1 != 0)
        *(arg1 + 0xa58) = 0
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp2_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

void* result = arg1 + 0xa60

if (result != &var_18)
    *result = 0
    int64_t* rbx_1 = *(result + 8)
    
    if (rbx_1 != 0)
        *(result + 8) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, 1)

return result
