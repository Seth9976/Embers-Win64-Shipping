// 函数: sub_1427e5e50
// 地址: 0x1427e5e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[7]
int64_t rax_1 = (*(*rcx + 0x18))(rcx)
int64_t* r14 = arg1[8]
int64_t var_58 = rax_1
int64_t var_a0
__builtin_memset(&var_a0, 0, 0x28)
int32_t var_78 = 0x3f400000
int64_t* var_a8 = &var_58
int32_t var_74 = 0xffffffff
int64_t var_70 = 0
sub_1427e68b0(&var_a8, 0x40)
int64_t* r8 = arg1[1]
int32_t r9 = *(*arg1 + 0x10)
uint64_t rcx_2 = zx.q(r8[2].d)
int32_t rax_4 = *(r8 + 0x14) & 0x7fffffff
int32_t arg_8 = r9

if (rax_4 u> rcx_2.d)
    int32_t* rdx_1 = r8[1] + (rcx_2 << 2)
    
    if (rdx_1 != 0)
        *rdx_1 = r9
    
    r8[2].d += 1
else
    sub_1427e4fb0(r8, &arg_8)

if (sub_1427e4f10(arg1) != 0 && sub_1427e4e50(arg1) != 0)
    char i
    
    do
        int64_t* rcx_6 = arg1[5]
        int64_t j_1 = 0
        int64_t rdi_1 = 0
        
        if ((*(*rcx_6 + 8))(rcx_6, "Parent", &j_1) != 0)
            void* rax_27
            
            if (var_70:4.d == 0)
            label_1427e5fff:
                rax_27 = nullptr
            else
                int64_t j = j_1
                int64_t rcx_10 = not.q(j << 0x20) + j
                int64_t rcx_11 = rcx_10 ^ rcx_10 u>> 0x16
                int64_t rcx_12 = rcx_11 + not.q(rcx_11 << 0xd)
                int64_t rcx_13 = (rcx_12 u>> 8 ^ rcx_12) * 9
                int64_t rcx_14 = rcx_13 ^ rcx_13 u>> 0xf
                int64_t rcx_15 = rcx_14 + not.q(rcx_14 << 0x1b)
                int64_t var_88
                int64_t var_80
                int32_t rcx_18 = *(var_88
                    + (((zx.q((rcx_15 u>> 0x1f).d) ^ zx.q(rcx_15.d)) & zx.q(var_80:4.d - 1)) << 2))
                
                if (rcx_18 == 0xffffffff)
                label_1427e5fff_1:
                    rax_27 = nullptr
                else
                    int128_t var_98
                    int64_t r8_2 = var_98.q
                    
                    while (*(r8_2 + zx.q(rcx_18) * 0x10) != j)
                        rcx_18 = *(var_98:8.q + (zx.q(rcx_18) << 2))
                        
                        if (rcx_18 == 0xffffffff)
                            goto label_1427e5fff_2
                    
                    if (rcx_18 == 0xffffffff)
                    label_1427e5fff_2:
                        rax_27 = nullptr
                    else
                        rax_27 = (zx.q(rcx_18) << 4) + r8_2
            
            rdi_1 = *(rax_27 + 8)
        
        int64_t rax_28 = *arg2
        int64_t var_38_1 = 0
        int128_t var_48 = data_142d3f660
        int32_t var_30_1 = 0
        int64_t rax_29 = (*(rax_28 + 0xc8))(arg2, rdi_1, &var_48)
        int64_t* rcx_20 = arg1[5]
        int64_t arg_20 = 0
        int64_t r9_2 = *rcx_20
        (*(r9_2 + 8))(rcx_20, &data_1434cf428, &arg_20, r9_2)
        int64_t rsi_1 = arg_20
        int64_t var_50 = rsi_1
        int64_t* rax_30 = sub_1427e4150(&var_a8, &var_50, &arg_8)
        
        if (arg_8.b == 0 && rax_30 != 0)
            *rax_30 = rsi_1
            rax_30[1] = rax_29
        
        sub_1427dd380(arg1)
        (*(*r14 + 8))(r14, rax_29, arg_20)
        
        if (arg1[9].b == 0)
            break
        
        int64_t* rcx_24 = arg1[5]
        i = (*(*rcx_24 + 0x28))(rcx_24)
    while (i != 0)

int64_t result = sub_1427e5ba0(arg1)
int64_t rdx_12 = var_a0

if (rdx_12 == 0)
    return result

int64_t* rcx_26 = *var_a8
return (*(*rcx_26 + 0x10))(rcx_26, rdx_12)
