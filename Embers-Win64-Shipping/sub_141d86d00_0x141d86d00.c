// 函数: sub_141d86d00
// 地址: 0x141d86d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_408
int64_t rax_1 = __security_cookie ^ &var_408

if (arg2 + 0x1b0 != arg1 + 0x4b8)
    int64_t* rcx_1
    
    if (*(arg2 + 0x1b8) != 0)
        rcx_1 = *(arg2 + 0x1b0)
    
    if (*(arg2 + 0x1b8) != 0 && rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1, arg1 + 0x4b8)
    else if (*(arg1 + 0x4c0) != 0)
        int64_t* rcx_2 = *(arg1 + 0x4b8)
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x38))(rcx_2, 0)
            int64_t rcx_3 = *(arg1 + 0x4b8)
            
            if (rcx_3 != 0)
                *(arg1 + 0x4b8) = sub_140a84c80(rcx_3, 0, 0)
            
            *(arg1 + 0x4c0) = 0

int64_t* rbx_1 = data_143e243c8
char var_3a8 = 1
int64_t var_3a0 = 0
int32_t var_398 = 0
int128_t var_3b8 = zx.o(0)
void var_390
int64_t rax_6 = (*(*rbx_1 + 0x48))(rbx_1, *sub_140b58260(&var_390, u"BlackBrush", 1), 0)
int64_t* rbx_2 = *(arg2 + 0x1c8)
int64_t r15 = *(arg2 + 0x1c0)
int64_t var_3d8 = rax_6
char var_3d0 = 1
int64_t var_3c8 = 0
int32_t var_3c0 = 0

if (rbx_2 != 0)
    rbx_2[1].d += 1

void var_388
int64_t* rax_7
int128_t zmm6
rax_7, zmm6 = sub_14068c640(&var_388)
rax_7[0x44] = rax_6
rax_7[0x45].b = 1

if (&var_3c8 != &rax_7[0x46] && rax_7[0x47].d != 0)
    int64_t* rcx_7 = rax_7[0x46]
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x38))(rcx_7, 0)
        int64_t rcx_8 = rax_7[0x46]
        
        if (rcx_8 != 0)
            rax_7[0x46] = sub_140a84c80(rcx_8, 0, 0)
        
        rax_7[0x47].d = 0

if (arg2 + 0x1a0 != &rax_7[0x3c])
    int64_t* rcx_9
    
    if (*(arg2 + 0x1a8) != 0)
        rcx_9 = *(arg2 + 0x1a0)
    
    if (*(arg2 + 0x1a8) != 0 && rcx_9 != 0)
        (*(*rcx_9 + 0x40))(rcx_9, &rax_7[0x3c])
    else if (rax_7[0x3d].d != 0)
        int64_t* rcx_10 = rax_7[0x3c]
        
        if (rcx_10 != 0)
            (*(*rcx_10 + 0x38))(rcx_10, 0)
            int64_t rcx_11 = rax_7[0x3c]
            
            if (rcx_11 != 0)
                rax_7[0x3c] = sub_140a84c80(rcx_11, 0, 0)
            
            rax_7[0x3d].d = 0

rax_7[0x39].b = 1
*(rax_7 + 0x1b8) = zmm6

if (&var_3a0 != &rax_7[0x3a] && rax_7[0x3b].d != 0)
    int64_t* rcx_12 = rax_7[0x3a]
    
    if (rcx_12 != 0)
        (*(*rcx_12 + 0x38))(rcx_12, 0)
        int64_t rcx_13 = rax_7[0x3a]
        
        if (rcx_13 != 0)
            rax_7[0x3a] = sub_140a84c80(rcx_13, 0, 0)
        
        rax_7[0x3b].d = 0

int64_t var_3e8 = r15
int64_t* rdi_5 = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (&var_3e8 != &rax_7[0x34])
    var_3e8.o = *(rax_7 + 0x1a0)
    rdi_5 = rbx_2
    *(rax_7 + 0x1a0) = var_3e8.o

if (rdi_5 != 0)
    rdi_5[1].d -= 1
    
    if (rdi_5[1].d == 1)
        (**rdi_5)(rdi_5)
        int32_t temp2_1 = *(rdi_5 + 0xc)
        *(rdi_5 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_5 + 8))(rdi_5, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

sub_140f33710(arg1, rax_7)
sub_14068fed0(&var_388)
sub_140745b20(&var_3c8)
uint64_t result = sub_140745b20(&var_3a0)
__security_check_cookie(rax_1 ^ &var_408)
return result
