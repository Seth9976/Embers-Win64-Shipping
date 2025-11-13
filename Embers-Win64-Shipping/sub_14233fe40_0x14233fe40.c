// 函数: sub_14233fe40
// 地址: 0x14233fe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
char var_188 = 0
int64_t var_110 = 0
int64_t var_108 = 0
char var_f8 = 0
int64_t var_f0
__builtin_memset(&var_f0, 0, 0x88)
int128_t* var_178 = arg3
char var_118 = 1
int32_t var_68 = 0x20702
sub_140e54f20(arg1 + 0x10, &var_118)
sub_140597700(&var_118)
void* r13 = *(arg4 + 0x48)
int64_t rbx = *(arg4 + 0x38)
int64_t var_180 = *(arg4 + 0x40)

if (r13 != 0)
    *(r13 + 8) += 1

int32_t var_168
sub_140a3ef70(arg1 + 0xc8, &var_168)
int64_t rax_6 = var_180
int64_t* var_160
*var_160 = rbx
var_160[1] = rax_6
var_160[2] = r13
var_160[3].b = 1
var_160[4].d = 0xffffffff
int64_t rbx_1 = *var_160
sub_1423345e0(arg1 + 0xc8, &var_180, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), var_160, var_168, 
    nullptr)
sub_142349780(arg1 - 0xd0, arg4)
sub_140d96150(arg1 + 0x120, var_178)
sub_142348be0(arg1 - 0xd0, var_178, arg4)

if (*(arg1 - 0x98) != 0)
    void* rdi_1 = arg1 - 0xc8
    int32_t* rax_10 = (*(*rdi_1 + 0x18))(rdi_1, &var_178)
    int32_t rax_11
    
    if (*rax_10 != data_143dbb180.d || rax_10[1] != data_143dbb180:4.d)
        rax_11.b = 1
    else
        rax_11.b = 0
    
    if (rax_11.b != 0)
        if ((*(*rdi_1 + 0x60))(rdi_1) == 0)
            sub_140e679c0(data_143e29f28, &var_180)
            sub_14232f5a0(arg1 - 0xd0, &var_180)
        
        int64_t* rcx_13 = *(arg1 - 0x98)
        char rcx_15
        int64_t* rbx_3
        void* rsi
        int64_t* var_158
        
        if ((*(*rcx_13 + 0x180))(rcx_13) == 3)
            rbx_3 = var_158
            rcx_15 = var_188
            rsi.b = 1
        else
            int64_t* rcx_14 = *(arg1 - 0x98)
            
            if ((*(*rcx_14 + 0x180))(rcx_14) != 4)
                rbx_3 = var_158
                rsi.b = 0
                rcx_15 = var_188
            else
                rbx_3 = *(arg4 + 0x48)
                rcx_15 = 1
                
                if (rbx_3 != 0)
                    rbx_3[1].d += 1
                
                if (*(arg4 + 0x38) == data_143e1e020)
                    rsi.b = 1
                else
                    rsi.b = 0
        
        if ((rcx_15 & 1) != 0 && rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp1_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        char rax_22 = (*(*rdi_1 + 0x58))(rdi_1)
        char rax_24
        
        if (rax_22 == 0)
            int64_t* rcx_19 = *(arg1 - 0x98)
            rax_24 = (*(*rcx_19 + 0x180))(rcx_19)
        
        if (rax_22 != 0 || rax_24 == 2)
            rbx_3.b = 1
        else
            rbx_3.b = 0
        
        int64_t* rcx_20 = data_143e29f28
        char rax_26 = (*(*rcx_20 + 0xb0))(rcx_20)
        
        if (rsi.b != 0 || rbx_3.b != 0)
            int64_t* rbx_4 = *(arg4 + 0x48)
            char r8_2 = *(arg4 + 0x5c)
            int64_t rcx_21 = *(arg4 + 0x38)
            int64_t rdx_9 = *(arg4 + 0x40)
            
            if (arg1 == 0xd0)
                rdi_1 = nullptr
            
            if (rbx_4 != 0)
                rbx_4[1].d += 1
            
            int32_t var_148_1 = *(arg4 + 0xc)
            void* var_150 = rdi_1
            int64_t var_140_1 = rcx_21
            int64_t var_138_1 = rdx_9
            
            if (rbx_4 != 0)
                rbx_4[1].d += 1
            
            int32_t var_124_1 = 0x3f800000
            int32_t var_128_1 = 0
            char var_120_1 = r8_2
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp4_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            int64_t* rcx_24 = *(arg1 - 0x98)
            rdi_1.b = (*(*rcx_24 + 0x48))(rcx_24, &var_150) == 0
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp5_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            if (rdi_1.b != 0)
                int32_t var_64
                int32_t var_64_2 = ((var_64 & 0xffffff40) | 0x40) & 0xffffff00
                var_118 = 0
                int64_t var_110_1 = 0
                int64_t var_108_1 = 0
                char var_f8_1 = 0
                int64_t var_f0_1
                __builtin_memset(&var_f0_1, 0, 0x88)
                int32_t var_68_1 = 0x20702
                sub_1405979f0(arg1 + 0x10, &var_118)
                sub_140597700(&var_118)
        
        char rax_36
        
        if (rax_26 == 0)
            int64_t* rcx_29 = data_143e29f28
            rax_36 = (*(*rcx_29 + 0xb0))(rcx_29)
        
        if (rax_26 != 0 || rax_36 == 0)
            rdi_1.b = 0
        else
            rdi_1.b = 1
        
        int64_t* rcx_30 = *(arg1 - 0x98)
        char rax_38 = (*(*rcx_30 + 0x180))(rcx_30)
        char rax_40
        
        if (rax_38 != 1)
            int64_t* rcx_31 = *(arg1 - 0x98)
            rax_40 = (*(*rcx_31 + 0x180))(rcx_31)
        
        if (rax_38 == 1 || rax_40 == 2)
            rbx_3.b = 1
        else
            rbx_3.b = 0
        
        int64_t* rcx_32 = data_143e29f28
        
        if ((*(*rcx_32 + 8))(rcx_32) != 0)
            int64_t* rcx_33 = *(arg1 - 0x98)
            
            if ((*(*rcx_33 + 0x178))(rcx_33) == 0 && rdi_1.b == 0 && (rbx_3.b != 0 || rsi.b != 0))
                int32_t var_184_1 = int.d(fconvert.t(*(arg4 + 0x1c)))
                sub_1405979f0(arg1 + 0x10, 
                    sub_14232f2c0(arg1 - 0xd0, &var_118, int.d(fconvert.t(*(arg4 + 0x18))).q, 0))
                sub_140597700(&var_118)

*(arg1 + 0xc4) |= 0x40
sub_140596b00(arg2, arg1 + 0x10)
__security_check_cookie(rax_1 ^ &var_1b8)
return arg2
