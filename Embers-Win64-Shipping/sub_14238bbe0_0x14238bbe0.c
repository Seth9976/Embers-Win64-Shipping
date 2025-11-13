// 函数: sub_14238bbe0
// 地址: 0x14238bbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != 0)
    int64_t* rcx = *arg1
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        if (data_143a2ff9c != 0)
            void*** rdi_1 = data_143f59f60
            
            if (rdi_1 == 0)
                void*** rax_4 = j_sub_140a82f30(0x90)
                rdi_1 = rax_4
                
                if (rax_4 == 0)
                    rdi_1 = nullptr
                    data_143f59f60 = 0
                else
                    sub_1423ba590(rax_4)
                    void* rcx_3 = &rdi_1[5]
                    *rdi_1 = &data_143336498
                    __builtin_memset(&rdi_1[1], 0, 0x20)
                    *(rcx_3 + 0x10) = 0
                    *(rcx_3 + 0x18) = 0
                    *(rcx_3 + 0x1c) = 0x80
                    void* rax_5 = *(rcx_3 + 0x10)
                    
                    if (rax_5 != 0)
                        rcx_3 = rax_5
                    
                    *rcx_3 = 0
                    *(rcx_3 + 8) = 0
                    rdi_1[9].d = 0xffffffff
                    *(rdi_1 + 0x4c) = 0
                    rdi_1[0xb] = 0
                    rdi_1[0xc].d = 0
                    InitializeCriticalSection(&rdi_1[0xd])
                    SetCriticalSectionSpinCount(&rdi_1[0xd], 0xfa0)
                    data_143f59f60 = rdi_1
            
            int64_t var_18 = *arg2
            void* rax_7 = arg2[1]
            void* var_10_1 = rax_7
            
            if (rax_7 != 0)
                *(rax_7 + 8) += 1
            
            sub_142384a60(rdi_1, arg1, arg3, &var_18)
        else if (arg1[1].d == 0)
            (*(*nullptr + 0x48))(0, 0)
        else
            int64_t* rdx = *arg1
            (*(*rdx + 0x48))(rdx)

int64_t* rbx = arg2[1]

if (rbx == 0)
    return 

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t temp1_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (temp1_1 == 1)
    jump(*(*rbx + 8))
