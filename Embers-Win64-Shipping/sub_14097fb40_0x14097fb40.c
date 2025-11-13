// 函数: sub_14097fb40
// 地址: 0x14097fb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x49] != 0)
    void* rdi_1 = arg1[0x1c]
    
    if (rdi_1 != 0)
        void* rax_1 = sub_140986690()
        void* rdx = *(rdi_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
                && *(rdi_1 + 0x238) != 1 && (arg3 == 0 || *(arg1[0x49] + 0x51) != 0))
            int32_t rbx_1
            
            if (sub_140968000(arg2) == 0)
                if (arg3 != 0)
                    goto label_14097fbf8
                
                rbx_1 = 0xd
            else
                void* var_48
                int32_t arg_8
                
                if (arg3 == 0)
                    int64_t* rcx_20 = arg1[0x49]
                    int64_t rdi_5 = sx.q((*(*rcx_20 + 0x2b8))(rcx_20, arg2 + 8))
                    arg_8 = rdi_5.d
                    
                    if (rdi_5.d == 0xffffffff)
                        rbx_1 = 7
                    else
                        int64_t* rcx_21 = arg1[0x49]
                        int64_t rdx_10 = *rcx_21
                        int64_t rax_16 = (*(rdx_10 + 0x2b0))(rcx_21, rdx_10)
                        void* r14_2 = nullptr
                        int32_t rbx_2 = 0
                        int32_t* rbp_4 = rdi_5 * 0x50 + *rax_16
                        
                        if (arg1[0x1c] != 0)
                            int64_t* rcx_22 = arg1[0x49]
                            
                            if (rcx_22 != 0)
                                rbx_2 = (*(*rcx_22 + 0x310))(rcx_22, zx.q(*rbp_4))
                        
                        int64_t rdx_12 = *arg1
                        void* arg_20
                        arg_20.d = 0
                        int32_t r12_2 = 0
                        int32_t var_40
                        var_40.q = 0
                        int32_t r13_3 = (*(rdx_12 + 0x690))(arg1, rdx_12) - rbx_2
                        void* var_60_1 = nullptr
                        var_48 = nullptr
                        uint32_t i = 0
                        
                        if (r13_3 s<= 0)
                            r13_3 = 0
                        
                        if (*(arg2 + 0x38) s> 0)
                            do
                                int64_t* rcx_24 = arg1[0x49]
                                void* rbp_7 = sx.q(i) * 0x50 + *(arg2 + 0x30)
                                int32_t rax_22 = (*(*rcx_24 + 0x2c0))(rcx_24, rbp_7)
                                
                                if (rax_22 != rdi_5.d)
                                    int64_t rdi_6 = sx.q(var_40)
                                    int32_t rax_23 = (rdi_6 + 1).d
                                    var_40 = rax_23
                                    
                                    if (rax_23 s> r12_2)
                                        sub_1405c5060(&var_48)
                                        int32_t var_3c
                                        r12_2 = var_3c
                                        r14_2 = var_48
                                    
                                    sub_140949000(rdi_6 * 0x50 + r14_2, rbp_7)
                                    rdi_5 = zx.q(arg_8)
                                    
                                    if (rax_22 != 0xffffffff)
                                        arg_20.d += 1
                                
                                i += 1
                            while (i s< *(arg2 + 0x38))
                            
                            var_60_1 = r14_2
                            r14_2 = nullptr
                        
                        int64_t* rcx_29 = arg1[0x49]
                        uint64_t r12_3 = zx.q(var_40)
                        
                        if ((*(*rcx_29 + 0x2d8))(rcx_29) - r12_3.d s< 0)
                            rbx_1 = 3
                            sub_14094b070(&var_48)
                        else if (r12_3.d - arg_20.d s> r13_3)
                            rbx_1 = 4
                            sub_14094b070(&var_48)
                        else
                            i.b = 0
                            arg_8.b = 0
                            
                            if (r12_3.d s<= 0)
                                rbx_1 = 6
                                sub_14094b070(&var_48)
                            else
                                int64_t* rcx_30 = arg1[0x49]
                                
                                if ((*(*rcx_30 + 0x350))(rcx_30, arg2) == 0)
                                    rbx_1 = 0xa
                                    sub_14094b070(&var_48)
                                else
                                    if (r12_3.d s> 0)
                                        void* rdi_7 = var_60_1
                                        uint64_t i_4 = zx.q(r12_3.d)
                                        int32_t var_68_1
                                        var_68_1.q = r12_3
                                        uint64_t i_1
                                        
                                        do
                                            if (arg_20.d s> 0)
                                                int64_t* rcx_31 = arg1[0x49]
                                                int32_t rax_31 = (*(*rcx_31 + 0x2c0))(rcx_31, rdi_7)
                                                
                                                if (rax_31 != 0xffffffff)
                                                    void* rbp_10 = sx.q(rax_31) * 0x50 + *rax_16
                                                    int32_t rax_34 = sub_1409746d0(rbp_10, rdi_7)
                                                    void* rcx_33 = arg1[0x49]
                                                    *(rcx_33 + 0x30) -= rax_34
                                                    
                                                    if (rax_34 != 0)
                                                        arg_8.b = 1
                                                        
                                                        if (sub_14094dfb0(rbp_10 + 8, rdi_7) != 0)
                                                            int32_t j = 0
                                                            
                                                            if (*(rbp_10 + 0x38) s> 0)
                                                                do
                                                                    void* rbx_4 = *(rbp_10 + 0x30) + r14_2
                                                                    char rax_36 =
                                                                        sub_14094dfb0(rbx_4, rbp_10 + 8)
                                                                    
                                                                    if (rax_36 == 0)
                                                                        int64_t* rcx_36 = *(rbx_4 + 8)
                                                                        
                                                                        if (rcx_36 != 0)
                                                                            rax_36 = (*(*rcx_36 + 0x28))(rcx_36)
                                                                        
                                                                        if (rcx_36 == 0 || rax_36 == 0)
                                                                            rax_36 = 0
                                                                        else
                                                                            rax_36 = 1
                                                                        
                                                                        if (rax_36 != 0)
                                                                            int64_t* rcx_37 = arg1[0x49]
                                                                            
                                                                            if ((*(*rcx_37 + 0x2b8))(rcx_37, rbx_4)
                                                                                    == 0xffffffff)
                                                                                sub_14094ded0(rbp_10 + 8, rbx_4)
                                                                                break
                                                                    
                                                                    j += 1
                                                                    r14_2 += 0x50
                                                                while (j s< *(rbp_10 + 0x38))
                                                                
                                                                r14_2 = nullptr
                                                            
                                                            rdi_7 = var_60_1
                                                    
                                                    i_4 = var_68_1.q
                                            
                                            int64_t rbx_5 = sx.q(rbp_4[0xe])
                                            int32_t rax_40 = (rbx_5 + 1).d
                                            rbp_4[0xe] = rax_40
                                            
                                            if (rax_40 s> rbp_4[0xf])
                                                sub_1405c5060(&rbp_4[0xc])
                                            
                                            sub_140949000(rbx_5 * 0x50 + *(rbp_4 + 0x30), rdi_7)
                                            sub_1409690d0(arg1, rdi_7)
                                            rdi_7 += 0x50
                                            i_1 = i_4
                                            i_4 -= 1
                                            var_60_1 = rdi_7
                                            var_68_1.q = i_4
                                        while (i_1 != 1)
                                        r12_3 = zx.q(var_40)
                                        i = zx.d(arg_8.b)
                                    
                                    void* rax_41 = arg1[0x49]
                                    *(rax_41 + 0x30) += r12_3.d
                                    sub_140977230(arg1)
                                    sub_14096a8d0(arg1, &arg1[0x4c])
                                    int64_t* rcx_46 = arg1[0x49]
                                    
                                    if ((*(*rcx_46 + 0x2f0))(rcx_46) != 0)
                                        sub_14096a8d0(arg1, &arg1[0x4a])
                                    
                                    if (i.b != 0)
                                        sub_140947ba0(arg1[0x49] + 0x58)
                                    
                                    rbx_1 = 8
                                    sub_14094b070(&var_48)
                else
                label_14097fbf8:
                    int64_t* rcx_2 = arg1[0x49]
                    int64_t r13_1 = sx.q((*(*rcx_2 + 0x2b8))(rcx_2, arg2 + 8))
                    
                    if (r13_1.d == 0xffffffff)
                        rbx_1 = 7
                    else
                        int64_t* rcx_3 = arg1[0x49]
                        int64_t rdx_2 = *rcx_3
                        void* r14_1 = nullptr
                        arg_8.q = 0
                        int32_t i_6 = 0
                        void* rcx_7 = r13_1 * 0x50 + *(*(rdx_2 + 0x2b0))(rcx_3, rdx_2)
                        int32_t r12_1 = 0
                        int32_t i_2 = 0
                        var_48 = nullptr
                        int32_t var_40_1 = 0
                        int32_t var_3c_1 = 0
                        
                        if (*(arg2 + 0x38) s> 0)
                            do
                                int64_t* rcx_8 = arg1[0x49]
                                void* rdi_4 = sx.q(i_2) * 0x50 + *(arg2 + 0x30)
                                int32_t rax_11 = (*(*rcx_8 + 0x2c0))(rcx_8, rdi_4)
                                
                                if (rax_11 != 0xffffffff && rax_11 == r13_1.d)
                                    int64_t i_7 = sx.q(i_6)
                                    i_6 = (i_7 + 1).d
                                    
                                    if (i_6 s> r12_1)
                                        sub_1405c5060(&var_48)
                                        r12_1 = var_3c_1
                                        arg_8.q = var_48
                                    
                                    r14_1 = arg_8.q
                                    sub_140949000(i_7 * 0x50 + r14_1, rdi_4)
                                
                                i_2 += 1
                            while (i_2 s< *(arg2 + 0x38))
                            
                            if (i_6 s> 0)
                                uint64_t i_5 = zx.q(i_6)
                                uint64_t i_3
                                
                                do
                                    sub_1409746d0(rcx_7, r14_1)
                                    sub_14096fb90(arg1, r14_1)
                                    r14_1 += 0x50
                                    i_3 = i_5
                                    i_5 -= 1
                                while (i_3 != 1)
                        
                        void* rax_13 = arg1[0x49]
                        *(rax_13 + 0x30) -= i_6
                        sub_140977230(arg1)
                        sub_14096a8d0(arg1, &arg1[0x4c])
                        sub_140947ba0(arg1[0x49] + 0x58)
                        rbx_1 = 8
                        sub_14094b070(&var_48)
            
            return zx.q(rbx_1)

return 9
