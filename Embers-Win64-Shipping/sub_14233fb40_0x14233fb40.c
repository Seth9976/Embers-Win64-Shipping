// 函数: sub_14233fb40
// 地址: 0x14233fb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

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
void* r15 = *(arg4 + 0x48)
int64_t rbx = *(arg4 + 0x38)
int64_t arg_8 = *(arg4 + 0x40)

if (r15 != 0)
    *(r15 + 8) += 1

int32_t var_88
sub_140a3ef70(arg1 + 0xc8, &var_88)
int64_t rax_1 = arg_8
int64_t* var_80
*var_80 = rbx
var_80[1] = rax_1
var_80[2] = r15
var_80[3].b = 1
var_80[4].d = 0xffffffff
int64_t rbx_1 = *var_80
sub_1423345e0(arg1 + 0xc8, &arg_8, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), var_80, var_88, 
    nullptr)
sub_140d96150(arg1 + 0x120, arg3)
sub_142348be0(arg1 - 0xd0, arg3, arg4)

if (*(arg1 - 0x98) != 0)
    void* rdi_1 = arg1 - 0xc8
    int32_t* rax_5 = (*(*rdi_1 + 0x18))(rdi_1, &arg_8)
    
    if (*rax_5 != data_143dbb180.d || rax_5[1] != data_143dbb180:4.d)
        rax_5.b = 1
    else
        rax_5.b = 0
    
    if (rax_5.b != 0)
        char rcx_10 = *(arg4 + 0x5c)
        int64_t* rbx_4 = *(arg4 + 0x48)
        int64_t rdx_6 = *(arg4 + 0x38)
        
        if (arg1 == 0xd0)
            rdi_1 = nullptr
        
        int64_t r8_2 = *(arg4 + 0x40)
        
        if (rbx_4 != 0)
            rbx_4[1].d += 1
        
        int32_t var_70_1 = *(arg4 + 0xc)
        void* var_78 = rdi_1
        int64_t var_68_1 = rdx_6
        int64_t var_60_1 = r8_2
        
        if (rbx_4 != 0)
            rbx_4[1].d += 1
        
        int32_t var_4c_1 = 0x3f800000
        int32_t var_50_1 = 3
        char var_48_1 = rcx_10
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp2_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        int64_t* rcx_13 = *(arg1 - 0x98)
        rdi_1.b = (*(*rcx_13 + 0x48))(rcx_13, &var_78) == 0
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp3_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
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

sub_140596b00(arg2, arg1 + 0x10)
return arg2
