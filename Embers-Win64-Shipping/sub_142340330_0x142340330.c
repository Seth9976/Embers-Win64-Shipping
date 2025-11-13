// 函数: sub_142340330
// 地址: 0x142340330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r14 = 0
int32_t arg_8 = 0
int32_t var_94
int32_t var_94_1 = var_94 & 0xffffff00
char var_148 = 1
int64_t var_140 = 0
int64_t var_138 = 0
char var_128 = 0
int64_t var_120
__builtin_memset(&var_120, 0, 0x88)
int32_t var_98 = 0x20702
sub_1405979f0(arg1 + 0x10, &var_148)
sub_140597700(&var_148)
int64_t rbx = *(arg4 + 0x38)
arg_8.q = *(arg4 + 0x40)
void* rax_1 = *(arg4 + 0x48)

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int32_t var_168
sub_140a3ef70(arg1 + 0xc8, &var_168)
int64_t rax_2 = arg_8.q
int64_t* var_160
*var_160 = rbx
var_160[1] = rax_2
var_160[2] = rax_1
var_160[3].b = 0
var_160[4].d = 0xffffffff
int64_t rbx_1 = *var_160
sub_1423345e0(arg1 + 0xc8, &arg_8, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), var_160, var_168, 
    nullptr)
sub_142349780(arg1 - 0xd0, arg4)
sub_140d96150(arg1 + 0x120, arg3)
sub_142348be0(arg1 - 0xd0, arg3, arg4)
void* rsi
rsi.b = 1

if (*(arg1 - 0x98) == 0)
    goto label_142340711

rsi = arg1 - 0xc8
int32_t* rax_7 = (*(*rsi + 0x18))(rsi, &arg_8)

if (*rax_7 != data_143dbb180.d || rax_7[1] != data_143dbb180:4.d)
    rax_7.b = 1
else
    rax_7.b = 0

if (rax_7.b == 0)
    rsi.b = 1
label_142340711:
    var_168.q = data_143e1e020
    int64_t var_160_1 = data_143e1e028
    void* rax_31 = data_143e1e030
    void* var_158_1 = rax_31
    
    if (rax_31 != 0)
        *(rax_31 + 8) += 1
    
    if (sub_140f4a520(arg4, &var_168) == 0)
        var_168.q = data_143e1e008
        int64_t var_160_2 = data_143e1e010
        void* rax_35 = data_143e1e018
        void* var_158_2 = rax_35
        
        if (rax_35 != 0)
            *(rax_35 + 8) += 1
        
        char rax_36 = sub_140f4a520(arg4, &var_168)
        
        if (rax_36 == 0)
            if (*(arg1 + 0x1d1) != rax_36)
                *(arg1 + 0x1d1) = rax_36
                sub_140dbda80(arg1 + 0x10, arg1 + 0x1d4)
                *(arg1 + 0x1d4) = -1
            
            sub_140f896b0(arg1 + 0x10)
            
            if (rsi.b != 0)
                int64_t* rcx_30 = *(arg1 - 0x98)
                
                if ((*(*rcx_30 + 0x198))(rcx_30) == 0)
                    sub_142344060(arg1 + 0x10)
else
    int64_t* rbx_3 = *(arg4 + 0x48)
    char r8_2 = *(arg4 + 0x5c)
    void* rax_8 = rsi
    int64_t rcx_11 = *(arg4 + 0x38)
    
    if (arg1 == 0xd0)
        rax_8 = nullptr
    
    int64_t rdx_7 = *(arg4 + 0x40)
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    void* var_88 = rax_8
    int32_t var_80_1 = *(arg4 + 0xc)
    int64_t var_78_1 = rcx_11
    int64_t var_70_1 = rdx_7
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    int32_t var_5c_1 = 0x3f800000
    int32_t var_60_1 = 1
    char var_58_1 = r8_2
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp2_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* rcx_14 = *(arg1 - 0x98)
    void* rdi_1
    rdi_1.b = (*(*rcx_14 + 0x48))(rcx_14, &var_88) == 0
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    if (rdi_1.b != 0)
        int32_t var_94_2 = var_94_1 & 0xffffff00
        var_148 = 0
        int64_t var_140_1 = 0
        int64_t var_138_1 = 0
        char var_128_1 = 0
        int64_t var_120_1
        __builtin_memset(&var_120_1, 0, 0x88)
        int32_t var_98_1 = 0x20702
        sub_1405979f0(arg1 + 0x10, &var_148)
        sub_140597700(&var_148)
    
    int64_t rdi_3 = **(arg1 - 0x98) + 0xb0
    int32_t rax_18 = (*(*rsi + 0xc8))(rsi)
    int32_t rax_19 = (*(*rsi + 0xc0))(rsi)
    
    if (arg1 == 0xd0)
        rsi = nullptr
    
    int32_t rax_21 = (*rdi_3)(*(arg1 - 0x98), rsi, zx.q(rax_19), zx.q(rax_18))
    rsi.b = rax_21 != 0
    char rax_23
    
    if (rax_21 == 0)
        int64_t* rcx_22 = *(arg1 - 0x98)
        rax_23 = (*(*rcx_22 + 0x180))(rcx_22)
    
    int64_t* rbx_6
    int64_t* var_158
    
    if (rax_21 != 0 || rax_23 == 3)
        rbx_6 = var_158
        rdi_3.b = 1
    else
        int64_t* rcx_23 = *(arg1 - 0x98)
        
        if ((*(*rcx_23 + 0x180))(rcx_23) != 4)
            rbx_6 = var_158
            rdi_3.b = 0
        else
            rbx_6 = *(arg4 + 0x48)
            r14 = 1
            
            if (rbx_6 != 0)
                rbx_6[1].d += 1
            
            if (*(arg4 + 0x38) == data_143e1e020)
                rdi_3.b = 1
            else
                rdi_3.b = 0
    
    if ((r14 & 1) != 0 && rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp5_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)
    
    if (rdi_3.b != 0)
        goto label_142340711

sub_140596b00(arg2, arg1 + 0x10)
return arg2
