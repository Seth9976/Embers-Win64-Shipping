// 函数: sub_141028130
// 地址: 0x141028130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x130)
int32_t rbp

if (i_1 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_1)
    rbp = temp0_1
    int32_t arg_8 = rbp
else
    rbp = i_1 + 0x20

if (i_1 == 0)
    return 

int32_t i

do
    int64_t* rdi_1 = *(arg1 + (zx.q(rbp) << 3) + 0x140)
    sub_140fcc530(rdi_1, arg2)
    
    if (*(arg2 + 0x114) != 0)
        sub_141036510(rdi_1[0x27] + 0x520, rdi_1, arg2[0x22].d)
        
        if (data_143e2c1b8 != 0)
            void* r8_2 = rdi_1[0x76e]
            
            if (r8_2 != 0)
            label_1410282c3:
                
                if (data_1439c7a34 u> 1)
                    while (*(r8_2 + 0x18) != rdi_1[0x27])
                        r8_2 = *(r8_2 + 0x20)
                        
                        if (r8_2 == 0)
                            break
            else
                int64_t* rcx_3 = data_143f0f180
                void var_40
                int64_t* rax_2 = (*(*rcx_3 + 0x320))(rcx_3, &var_40, 1)
                
                if (&rdi_1[0x76e] != rax_2)
                    int64_t* rbx_1 = rdi_1[0x76e]
                    rdi_1[0x76e] = *rax_2
                    *rax_2 = 0
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            char rax_4
                            
                            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                                rax_4 = sub_1405949a0()
                            
                            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_4 != 0))
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
                                    int32_t rax_6 = sub_140a20af0()
                                    uint64_t rdx_3 = zx.q(rax_6)
                                    void* const rax_7
                                    
                                    if (rax_6 != 0)
                                        rax_7 = *(&data_143cf0bf8 + (rdx_3 u>> 0xe << 3))
                                            + (zx.q(rdx_3.d) & 0x3fff) * 0x18
                                    else
                                        rax_7 = nullptr
                                    
                                    *(rax_7 + 8) = rbx_1
                                    sub_1405a42f0(&data_143f02390, rdx_3.d)
                
                sub_14081c9d0(&var_40)
                r8_2 = rdi_1[0x76e]
                
                if (r8_2 != 0)
                    goto label_1410282c3
            
            sub_141014620(rdi_1[0x27] + 0x520, rdi_1, r8_2)
            rdi_1[0x76f].b = 1
    
    i = not.d(1 << rbp.b) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_forward(i)
        rbp = temp0_3
        int32_t var_48_1 = rbp
    else
        rbp = 0x20
while (i != 0)
