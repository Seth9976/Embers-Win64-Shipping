// 函数: sub_141c87400
// 地址: 0x141c87400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xa8) != 0 || *(arg1 + 0x98) == 0)
    return 

int64_t* rcx = *(arg1 + 0xd0)

if (rcx == 0 || (*(*rcx + 8))(rcx, arg1 + 0x18).b == 0)
    return 

int64_t* rbx_1 = *(arg1 + 0x28)
int64_t var_68

if (rbx_1 == 0)
    var_68 = 0
else
    int32_t rax_2 = 0
    bool z_1
    
    if (0 == rbx_1[1].d)
        rbx_1[1].d = 0
        z_1 = true
    else
        rax_2 = rbx_1[1].d
        z_1 = false
    
    if (z_1)
    label_141c874a8:
        rbx_1 = nullptr
        var_68 = 0
    else
        while (true)
            bool z_2
            
            if (rax_2 == rbx_1[1].d)
                rbx_1[1].d = rax_2 + 1
                z_2 = true
            else
                rbx_1[1].d
                z_2 = false
            
            if (z_2)
                break
            
            rax_2 = 0
            bool z_3
            
            if (0 == rbx_1[1].d)
                rbx_1[1].d = 0
                z_3 = true
            else
                rax_2 = rbx_1[1].d
                z_3 = false
            
            if (z_3)
                goto label_141c874a8
        
        if (rbx_1 == 0)
            var_68 = 0
        else
            int64_t rax_14 = *(arg1 + 0x20)
            
            if (rax_14 == 0)
                var_68 = 0
            else
                var_68 = rax_14 + 8

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t* rcx_2 = *(arg1 + 0x98)
(*(*rcx_2 + 0x20))(rcx_2, arg1 + 0x30, &var_68)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_7 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_11 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_11 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rcx_7 = *(arg1 + 0xc0)

if (rcx_7 == 0)
    void var_78
    int32_t* rax_16 = sub_140b5e500(&var_78, 0xe6)
    int64_t* rbx_2 = *(arg1 + 0x28)
    int32_t var_74 = *rax_16
    int32_t var_70_1 = 0
    int64_t var_58
    
    if (rbx_2 == 0)
        var_58 = 0
    else
        int32_t rax_17 = 0
        bool z_4
        
        if (0 == rbx_2[1].d)
            rbx_2[1].d = 0
            z_4 = true
        else
            rax_17 = rbx_2[1].d
            z_4 = false
        
        if (z_4)
        label_141c875c8:
            rbx_2 = nullptr
            var_58 = 0
        else
            while (true)
                bool z_5
                
                if (rax_17 == rbx_2[1].d)
                    rbx_2[1].d = rax_17 + 1
                    z_5 = true
                else
                    rbx_2[1].d
                    z_5 = false
                
                if (z_5)
                    break
                
                rax_17 = 0
                bool z_6
                
                if (0 == rbx_2[1].d)
                    rbx_2[1].d = 0
                    z_6 = true
                else
                    rax_17 = rbx_2[1].d
                    z_6 = false
                
                if (z_6)
                    goto label_141c875c8
            
            if (rbx_2 == 0)
                var_58 = 0
            else
                int64_t rax_26 = *(arg1 + 0x20)
                
                if (rax_26 == 0)
                    var_58 = 0
                else
                    var_58 = rax_26 + 8
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int64_t* rcx_11 = *(arg1 + 0x98)
    int16_t arg_8 = 0x201
    int16_t arg_18 = 0x201
    int16_t arg_10 = 2
    int16_t arg_1a = 2
    void var_48
    int64_t* rax = (*(*rcx_11 + 0x38))(rcx_11, &var_48, &var_58, &var_74, &arg_18)
    
    if (arg1 + 0xc0 != rax)
        *(arg1 + 0xc0) = *rax
        *rax = 0
        sub_1405aeff0(arg1 + 0xc8, &rax[1])
    
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            rax = zx.q(*(var_40 + 0xc))
            *(var_40 + 0xc) -= 1
            
            if (rax.d == 1)
                (*(*var_40 + 8))(var_40, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            rax = zx.q(*(rbx_2 + 0xc))
            *(rbx_2 + 0xc) -= 1
            
            if (rax.d == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t rdi_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))
else
    (*(*rcx_7 + 8))(rcx_7)

*(arg1 + 0xa8) = 1
