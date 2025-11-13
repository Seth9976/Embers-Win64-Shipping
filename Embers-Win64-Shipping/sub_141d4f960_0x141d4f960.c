// 函数: sub_141d4f960
// 地址: 0x141d4f960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
uint64_t r14
uint64_t var_30 = r14
int64_t var_58

if (arg2 != 9)
    if (arg2 == 3)
    label_141d4fb36:
        int64_t* rcx_11 = *(arg1 + 0x130)
        (*(*rcx_11 + 0x18))(rcx_11, &var_58)
        int64_t rcx_12 = var_58
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
    else if (arg2 == 4)
        *(arg1 + 0x100) = 0
        
        if (*(arg1 + 0x104) != 0)
            sub_1405947f0(arg1 + 0xf8, 0)
        
        goto label_141d4fb36
    
    if (arg2 == 5)
        sub_141d4d130(arg1)
    else if (arg2 == 8)
        int64_t* rcx_13 = *(arg1 + 0x130)
        
        if (rcx_13 == 0)
            sub_141d4d130(arg1)
        else if ((*(*rcx_13 + 0xa8))(rcx_13) != 0)
            sub_141d4d130(arg1)
    else if (arg2 == 1 && *(arg1 + 0x100) s<= arg2)
        int64_t* rcx_14 = *(arg1 + 0x130)
        r14 = zx.q(arg2 - 2)
        
        if (rcx_14 != 0 && (*(*rcx_14 + 0xb8))(rcx_14, 0) != 0)
            EnterCriticalSection(arg1 + 0xd0)
            int128_t var_78 = zx.o(0)
            
            if (arg1 + 0x130 != &var_78)
                *(arg1 + 0x130) = 0
                sub_1405aeff0(arg1 + 0x138, &var_78:8)
                void* rcx_17 = var_78:8.q
                
                if (rcx_17 != 0)
                    int32_t rax_22 = *(rcx_17 + 8)
                    *(rcx_17 + 8) += r14.d
                    
                    if (rax_22 == arg2)
                        int64_t* rdi_6 = var_78:8.q
                        (**rdi_6)(rdi_6)
                        int32_t rax_25 = *(rdi_6 + 0xc)
                        *(rdi_6 + 0xc) += r14.d
                        
                        if (rax_25 == arg2)
                            int64_t* rcx_19 = var_78:8.q
                            (*(*rcx_19 + 8))(rcx_19, zx.q(arg2))
            
            if (arg1 != -0xd0)
                LeaveCriticalSection(arg1 + 0xd0)
        
        void arg_8
        int64_t rbx_4 = *sub_140b58170(&arg_8, "Media", 1)
        j_sub_140b3db50()
        int64_t* rax_28 = sub_140b407e0(&data_143de7d78, rbx_4)
        int64_t* rbx_5 = *(arg1 + 0x20)
        int64_t var_68
        
        if (rbx_5 == 0)
            var_68 = 0
        else
            int32_t rax_29 = 0
            bool z_1
            
            if (0 == rbx_5[1].d)
                rbx_5[1].d = 0
                z_1 = true
            else
                rax_29 = rbx_5[1].d
                z_1 = false
            
            if (z_1)
            label_141d4fca8:
                rbx_5 = nullptr
                var_68 = 0
            else
                while (true)
                    bool z_2
                    
                    if (rax_29 == rbx_5[1].d)
                        rbx_5[1].d = rax_29 + 1
                        z_2 = true
                    else
                        rbx_5[1].d
                        z_2 = false
                    
                    if (z_2)
                        break
                    
                    rax_29 = 0
                    bool z_3
                    
                    if (0 == rbx_5[1].d)
                        rbx_5[1].d = 0
                        z_3 = true
                    else
                        rax_29 = rbx_5[1].d
                        z_3 = false
                    
                    if (z_3)
                        goto label_141d4fca8
                
                if (rbx_5 == 0)
                    var_68 = 0
                else
                    int64_t rax_43 = *(arg1 + 0x18)
                    
                    if (rax_43 == 0)
                        var_68 = 0
                    else
                        var_68 = rax_43 + 8
        
        if (rbx_5 != 0)
            rbx_5[1].d += 1
        
        int64_t* rax_32 = (*(*rax_28 + 0x80))(rax_28)
        int64_t r8_6 = *rax_32
        (*(r8_6 + 8))(rax_32, &var_68, r8_6)
        
        if (rbx_5 != 0)
            rbx_5[1].d += r14.d
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t rax_37 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) += r14.d
                
                if (rax_37 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        if (rbx_5 != 0)
            rbx_5[1].d += r14.d
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t r14_2 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) += r14.d
                
                if (r14_2 == 1)
                    (*(*rbx_5 + 8))(rbx_5, zx.q(r14_2))
else
    int64_t* rcx = *(arg1 + 0x130)
    
    if (rcx != 0)
        int64_t* rax_2 = (*(*rcx + 0x38))(rcx)
        r14 = 0xffffffff
        int32_t rdi_1 = -1
        int32_t r12_1 = -1
        uint64_t r8_1 = 0
        int32_t r13_1 = 0
        
        if (*(arg1 + 0x68) != 0)
            r13_1 = *(arg1 + 0x50)
            var_58.o = *(arg1 + 0x38)
            int32_t var_50
            rdi_1 = var_50
            r14 = zx.q(var_58:4.d)
            r8_1 = zx.q(var_58.d)
            r12_1 = (*(arg1 + 0x48)).d
        
        (*(*rax_2 + 0x48))(rax_2, 0, r8_1)
        (*(*rax_2 + 0x48))(rax_2, 1, zx.q(r14.d))
        (*(*rax_2 + 0x48))(rax_2, 2, zx.q(rdi_1))
        (*(*rax_2 + 0x48))(rax_2, 4, zx.q(r12_1))
        (*(*rax_2 + 0x48))(rax_2, 6, zx.q(r13_1))
    
    sub_141d4d130(arg1)
r14.b = 0
*(arg1 + 0x124) += 1
int32_t rax_8 = *(arg1 + 0x118)
int32_t rcx_7 = *(arg1 + 0x124)
int64_t rbp_1 = sx.q(rax_8 - 1)

if (rax_8 - 1 s>= 0)
    int64_t rdi_3 = rbp_1 << 4
    int64_t temp2_1
    
    do
        int64_t rax_10 = *(arg1 + 0x110)
        
        if (*(rdi_3 + rax_10 + 8) == 0)
            r14.b = 1
        else
            int64_t* rcx_8 = *(rdi_3 + rax_10)
            
            if (rcx_8 == 0)
                r14.b = 1
            else if ((*(*rcx_8 + 0x50))(rcx_8, zx.q(arg2)) == 0)
                r14.b = 1
        
        rdi_3 -= 0x10
        temp2_1 = rbp_1
        rbp_1 -= 1
    while (temp2_1 - 1 s>= 0)
    rcx_7 = *(arg1 + 0x124)

int32_t result = rcx_7 - 1
*(arg1 + 0x124) = result

if (r14.b != 0 && result s<= 0)
    int32_t rbp_2 = *(arg1 + 0x118)
    int32_t rdx_1 = rbp_2
    
    if (rbp_2 s> 0)
        int64_t* rdi_4 = nullptr
        
        do
            int64_t rax_13 = *(arg1 + 0x110)
            
            if (*(rdi_4 + rax_13 + 8) == 0)
                sub_1405a4880(arg1 + 0x110, rsi, 1, 1)
            else
                int64_t* rcx_9 = *(rdi_4 + rax_13)
                
                if (rcx_9 == 0)
                    sub_1405a4880(arg1 + 0x110, rsi, 1, 1)
                else if ((*(*rcx_9 + 0x20))(rcx_9) != 0)
                    sub_1405a4880(arg1 + 0x110, rsi, 1, 1)
                else
                    rsi += 1
                    rdi_4 = &rdi_4[2]
            
            rdx_1 = *(arg1 + 0x118)
        while (rsi s< rdx_1)
    
    result = rdx_1 * 2
    
    if (result s<= 2)
        result = 2
    
    *(arg1 + 0x120) = result
    
    if (rbp_2 s> result && *(arg1 + 0x11c) != rdx_1)
        return sub_1405a5410(arg1 + 0x110, rdx_1)

return result
