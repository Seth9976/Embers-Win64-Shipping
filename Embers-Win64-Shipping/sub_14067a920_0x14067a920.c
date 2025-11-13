// 函数: sub_14067a920
// 地址: 0x14067a920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg1

if (arg2[1].d s<= 1)
    return 

int64_t rax_1 = sx.q(arg3[1].d)
int64_t* rsi_1 = *arg3
void* var_48 = nullptr
void* rbp_1 = &rsi_1[rax_1]
int64_t var_40_1 = 0

if (rsi_1 != rbp_1)
    do
        void* rbx_1 = *rsi_1
        void*** rax_2 = j_sub_140a82f30(0x20)
        void*** rdi_1 = rax_2
        
        if (rax_2 == 0)
            rdi_1 = nullptr
        else
            int64_t* rbx_2 = *(rbx_1 + 0x30)
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            rdi_1[1].d = 0
            rdi_1[2] = *(rbx_1 + 0x28)
            *rdi_1 = &data_142d84d88
            rdi_1[3] = rbx_2
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            rdi_1[1].d = 6
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp4_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
        
        void*** rax_6 = j_sub_140a82f30(0x18)
        
        if (rax_6 == 0)
            rax_6 = nullptr
        else
            rax_6[1].d = 1
            *(rax_6 + 0xc) = 1
            *rax_6 = &data_142d86170
            rax_6[2] = rdi_1
        
        int64_t rbx_3 = sx.q(var_40_1.d)
        int32_t rax_7 = (rbx_3 + 1).d
        var_40_1.d = rax_7
        
        if (rax_7 s> var_40_1:4.d)
            sub_140610660(&var_48)
        
        rsi_1 = &rsi_1[1]
        void**** rcx_5 = (rbx_3 << 4) + var_48
        *rcx_5 = rdi_1
        rcx_5[1] = rax_6
        int64_t var_30_2 = 0
        int64_t var_38_2 = 0
    while (rsi_1 != rbp_1)
    
    r15 = arg1

sub_140b75640(*(r15 + 0x28), arg2, &var_48)
int32_t i_1 = var_40_1.d

if (i_1 != 0)
    int64_t* rdi_3 = var_48 + 8
    int32_t i
    
    do
        int64_t* rbx_4 = *rdi_3
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp2_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        rdi_3 = &rdi_3[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rcx_9 = var_48

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)
