// 函数: sub_141be26d0
// 地址: 0x141be26d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
sub_14065da90(arg1 + 0x140, arg2)
sub_140d3a3a0(arg1 + 0x158, nullptr)
int32_t result = 0
arg_8.q = 0
*(arg1 + 0x160) = 0

if (*(arg1 + 0xc70) != 0)
    bool rcx_2 = sub_140b5b8a0(0, 0) == 0
    int64_t* var_b0
    int64_t var_98
    int64_t rcx_7
    int64_t* rdx_2
    int32_t rsi_1
    
    if ((*(arg1 + 0x164) != 0 | rcx_2) == 0)
    label_141be279a:
        int64_t* rax_6 = *(arg1 + 0x148)
        rcx_7 = *(arg1 + 0x140)
        int64_t var_b8 = rcx_7
        var_b0 = rax_6
        
        if (rax_6 != 0)
            rax_6[1].d += 1
        
        rdx_2 = &var_b8
        int32_t var_a8_1 = *(arg1 + 0x150)
        rsi_1 = 2
        char var_a0_1 = 1
        var_98 = 0
        int32_t var_90_1 = 0
    else
        void* rax_1 = sub_140d3c6e0(arg1 + 0x158)
        
        if (rax_1 == 0)
            goto label_141be279a
        
        if (sub_140d1fd20(rax_1, *(arg1 + 0x160)) == 0)
            goto label_141be279a
        
        int64_t arg_10 = *(arg1 + 0x160)
        void var_58
        int64_t* rax_5 = sub_141b70480(&var_58, sub_140d3c6e0(arg1 + 0x158), &arg_10)
        rdx_2 = rax_5
        rsi_1 = 1
        rcx_7 = *rax_5
    
    int64_t var_88 = rcx_7
    int64_t* rax_8 = rdx_2[1]
    
    if (rax_8 != 0)
        rax_8[1].d += 1
    
    int32_t var_78_1 = rdx_2[2].d
    char var_70_1 = rdx_2[3].b
    int64_t var_68 = 0
    int32_t var_60_1 = 0
    sub_1407473e0(&var_68, &rdx_2[4])
    
    if ((rsi_1.b & 2) != 0)
        rsi_1 &= 0xfffffffd
        sub_140745b20(&var_98)
        
        if (var_b0 != 0)
            var_b0[1].d -= 1
            
            if (var_b0[1].d == 1)
                (**var_b0)(var_b0)
                int32_t rax_13 = *(var_b0 + 0xc)
                *(var_b0 + 0xc) -= 1
                
                if (rax_13 == 1)
                    (*(*var_b0 + 8))(var_b0, 1)
    
    if ((rsi_1.b & 1) != 0)
        void var_38
        sub_140745b20(&var_38)
        int64_t* var_50
        
        if (var_50 != 0)
            var_50[1].d -= 1
            
            if (var_50[1].d == 1)
                (**var_50)(var_50)
                int32_t rax_17 = *(var_50 + 0xc)
                *(var_50 + 0xc) -= 1
                
                if (rax_17 == 1)
                    (*(*var_50 + 8))(var_50, 1)
    
    sub_140f5e5d0(*(arg1 + 0xc70), &var_88)
    result = sub_140745b20(&var_68)
    
    if (rax_8 != 0)
        result = rax_8[1].d
        rax_8[1].d -= 1
        
        if (result == 1)
            (**rax_8)(rax_8)
            result = *(rax_8 + 0xc)
            *(rax_8 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*rax_8 + 8))(rax_8, 1)

int64_t* rbx_4 = arg2[1]

if (rbx_4 != 0)
    result = rbx_4[1].d
    rbx_4[1].d -= 1
    
    if (result == 1)
        result = (**rbx_4)(rbx_4)
        int32_t rdi_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, zx.q(rdi_1))

return result
