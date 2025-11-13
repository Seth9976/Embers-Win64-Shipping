// 函数: sub_14150a1a0
// 地址: 0x14150a1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 == 0)
    void var_48
    int64_t* rax_1 = sub_14197cf90(&var_48, 2, 4)
    
    if (arg1 != rax_1)
        int64_t* rbx_1 = *arg1
        *arg1 = *rax_1
        *rax_1 = 0
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                char rax_3
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_3 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_3 != 0))
                    (**rbx_1)(rbx_1, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_5 = sub_140a20af0()
                        uint64_t rdx = zx.q(rax_5)
                        void* const rax_6
                        
                        if (rax_5 != 0)
                            rax_6 = *((rdx u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rdx.d) & 0x3fff) * 0x18
                        else
                            rax_6 = nullptr
                        
                        *(rax_6 + 8) = rbx_1
                        sub_1405a42f0(&data_143f02390, rdx.d)
    
    sub_1405d1550(&var_48)

if (arg1[1] != 0)
    return 

int64_t* rcx_7 = data_143f0f180
int64_t arg_20 = 0
int64_t arg_18
(*(*rcx_7 + 0xa0))(rcx_7, &arg_18, &arg_20)

if (&arg1[1] != &arg_18)
    int64_t* rbx_2 = arg1[1]
    arg1[1] = arg_18
    arg_18 = 0
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            char rax_13
            
            if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_13 = sub_1405949a0()
            
            if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_13 != 0))
                (**rbx_2)(rbx_2, 1)
            else
                bool z_2
                
                if (0 == *(rbx_2 + 0xc))
                    *(rbx_2 + 0xc) = 1
                    z_2 = true
                else
                    *(rbx_2 + 0xc)
                    z_2 = false
                
                if (z_2)
                    int32_t rax_15 = sub_140a20af0()
                    uint64_t rcx_8 = zx.q(rax_15)
                    void* const rax_16
                    
                    if (rax_15 != 0)
                        rax_16 = *((rcx_8 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rcx_8.d) & 0x3fff) * 0x18
                    else
                        rax_16 = nullptr
                    
                    *(rax_16 + 8) = rbx_2
                    sub_1405a42f0(&data_143f02390, rcx_8.d)

sub_14081c9d0(&arg_18)
void* rbx_3 = arg1[1]
void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_21 = &rcx_13[3]

if (rax_21 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_21 = &rcx_13[3]

*(arg2 + 0x30) = rax_21
int64_t* rax_22 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_22 = rcx_13
*(arg2 + 8) = &rcx_13[1]
rcx_13[1] = 0
*rcx_13 = &data_142f7e220
rcx_13[2] = rbx_3

if (rbx_3 != 0)
    *(rbx_3 + 0x18) += 1
