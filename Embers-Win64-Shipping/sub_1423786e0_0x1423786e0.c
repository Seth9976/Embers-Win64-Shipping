// 函数: sub_1423786e0
// 地址: 0x1423786e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg1[6].d
int32_t rsi_1 = rsi - 1

if (rsi - 1 s< 0)
    return 

int64_t r14_2 = sx.q(rsi_1) << 4
int32_t temp2_1

do
    int64_t* rdi_1 = arg1[5]
    int64_t* rbx_1 = *(rdi_1 + r14_2 + 8)
    
    if (rbx_1 == 0)
        sub_141c8bf50(&arg1[5], rsi_1, 1, 1)
    else
        int32_t rax_1 = 0
        bool z_1
        
        if (0 == rbx_1[1].d)
            rbx_1[1].d = 0
            z_1 = true
        else
            rax_1 = rbx_1[1].d
            z_1 = false
        
        if (z_1)
        label_142378758:
            rbx_1 = nullptr
            sub_141c8bf50(&arg1[5], rsi_1, 1, 1)
        else
            while (true)
                bool z_2
                
                if (rax_1 == rbx_1[1].d)
                    rbx_1[1].d = rax_1 + 1
                    z_2 = true
                else
                    rbx_1[1].d
                    z_2 = false
                
                if (z_2)
                    break
                
                rax_1 = 0
                bool z_3
                
                if (0 == rbx_1[1].d)
                    rbx_1[1].d = 0
                    z_3 = true
                else
                    rax_1 = rbx_1[1].d
                    z_3 = false
                
                if (z_3)
                    goto label_142378758
            
            if (rbx_1 == 0)
                sub_141c8bf50(&arg1[5], rsi_1, 1, 1)
            else
                void* rdi_2 = *(rdi_1 + r14_2)
                
                if (rdi_2 == 0)
                    sub_141c8bf50(&arg1[5], rsi_1, 1, 1)
                else if (sub_140d3c6e0(rdi_2 + 0x4c) == 0)
                    sub_141c8bf50(&arg1[5], rsi_1, 1, 1)
                else
                    void* var_38 = rdi_2
                    int64_t* var_30_1 = rbx_1
                    rbx_1[1].d += 1
                    sub_142371d80(arg1, &var_38)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    r14_2 -= 0x10
    temp2_1 = rsi_1
    rsi_1 -= 1
while (temp2_1 - 1 s>= 0)
