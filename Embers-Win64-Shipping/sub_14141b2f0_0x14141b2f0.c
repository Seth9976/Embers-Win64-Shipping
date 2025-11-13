// 函数: sub_14141b2f0
// 地址: 0x14141b2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = nullptr
int32_t var_38 = 0
int64_t var_48 = 0
int32_t var_40 = arg4.d
uint128_t var_c8 = *arg5
uint128_t var_a8 = arg5[2]
int128_t var_b8 = arg5[1]
int128_t var_98 = arg5[3]
int32_t var_d0 = arg6[1].d
uint64_t var_d8 = *arg6
uint128_t var_88 = *arg7
int128_t var_78 = arg7[1]
uint128_t var_68 = arg7[2]
int32_t var_34 = arg13.d
int128_t var_58 = arg7[3]
uint32_t var_3c = (arg4 u>> 0x20).d
int32_t rdi_1

if ((*(arg2 + 0x1f2) & 1) == 0)
    rdi_1 = 0

if ((*(arg2 + 0x1f2) & 1) != 0 || *(arg2 + 0x1f3) != 0)
    rdi_1 = 2

int64_t rax_6 = *(arg2 + 0x258)
uint128_t zmm0 = data_142d3f660
int32_t var_1a4
int32_t rcx_2 = (var_1a4 & 0xffffffe8) | 8
int64_t var_1d8 = arg3
int64_t* var_1d0 = arg1
int64_t var_1c8 = rax_6
int32_t var_1c0 = 0xffffffff
int64_t var_1bc = 0
uint128_t var_1b4 = zmm0

if (arg1 != 0)
    void* rax_8 = (*(*arg1 + 0x240))(arg1)
    
    if (rax_8 != 0)
        bool rcx_4
        
        if (data_143de5480 != 0)
            rcx_4 = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rcx_4 != 0)
            var_1b4.d = (*(rax_8 + 0x520)).d
            rcx_2 |= 0x10
            var_1b4:4.d = (*(rax_8 + 0x530)).d
            var_1b4:8.d = (*(rax_8 + 0x528)).d

uint32_t r12 = zx.d(arg9)
int32_t var_1a4_2 = (r12 ^ 1) << 3 | (rcx_2 & 0xfffffff5) | rdi_1
void var_168
char r9 = sub_1422d9ba0(&var_168, &var_1d8)
int64_t rbx_2 = data_143eceb60
int64_t rcx_8

if (data_143de5480 == 0)
    rcx_8 = 0
else
    uint32_t rax_15
    rax_15, r9 = GetCurrentThreadId()
    rcx_8.b = rax_15 != data_143de5470

if (*(rbx_2 + (rcx_8 << 2)) s> 0)
    void var_188
    int64_t* rax_17 = sub_1422e3b90(*(data_143f5b298 + 0xb18), &var_188, 0, r9)
    uint64_t var_108
    
    if (&var_108 != rax_17)
        int32_t i_4
        int32_t i_3 = i_4
        
        if (i_3 != 0)
            int64_t* rdi_3 = var_108 + 8
            int32_t i
            
            do
                int64_t* rbx_3 = *rdi_3
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t rax_20 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (rax_20 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                rdi_3 = &rdi_3[2]
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        int32_t i_2 = rax_17[1].d
        int64_t* rbx_4 = *rax_17
        int32_t i_5 = i_2
        int32_t var_fc
        
        if (i_2 != 0 || var_fc != 0)
            sub_1405a4be0(&var_108, i_2, var_fc)
            uint64_t rcx_13 = var_108
            
            if (i_2 != 0)
                int32_t i_1
                
                do
                    *rcx_13 = *rbx_4
                    void* rax_23 = rbx_4[1]
                    *(rcx_13 + 8) = rax_23
                    
                    if (rax_23 != 0)
                        *(rax_23 + 8) += 1
                    
                    rcx_13 += 0x10
                    rbx_4 = &rbx_4[2]
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
        else
            int32_t var_fc_1 = 0
    
    sub_140596e10(&var_188)

int32_t var_190 = 1
int128_t var_178 = (&var_d8).o
sub_14142c080(&var_168, arg2, &var_178, arg8, r12.b, 0, arg10, arg11.d, arg12)
int32_t var_140
int32_t var_140_1 = var_140 & 0xfffbffff
void*** rax_26 = j_sub_140a82f30(0x20)
void*** rbx_5 = rax_26

if (rax_26 == 0)
    rbx_5 = nullptr
else
    sub_1420d8740(rax_26, &var_168, 0x3f800000, 0, 0x3f800000)
    *rbx_5 = &data_1432c1410

void*** var_e0 = rbx_5
void* var_148

if (*(var_148 + 8) s< 3)
    void*** rax_30 = j_sub_140a82f30(0x3e0)
    
    if (rax_30 != 0)
        result = sub_14125c940(rax_30, &var_168)
else
    void*** rax_28 = j_sub_140a82f30(0x408)
    
    if (rax_28 != 0)
        result = sub_1410ea3b0(rax_28, &var_168)

sub_1422dbba0(&var_168)
return result
