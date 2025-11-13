// 函数: sub_140d73110
// 地址: 0x140d73110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rbp = arg1[1]
*arg1 = &data_142ebfc10
arg1[5] = &data_142ebfc18
arg1[6] = &data_142ebfc50

if (rbp != 0)
    int64_t* rbx_1 = arg1[3]
    int64_t var_18 = arg1[2]
    int64_t* var_10_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        rbp = arg1[1]
    
    sub_140d85620(rbp, &var_18)
    
    if (rbp[1].d == *(rbp + 0x34))
        void* rax_3 = rbp[0x14]
        int64_t* rsi_1 = *(rax_3 + 0x30)
        int64_t* rcx_1 = *(rax_3 + 0x28)
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        if (*(rcx_1 + 9) != 0)
            int64_t rax_4 = *rcx_1
            *(rcx_1 + 9) = 0
            (*(rax_4 + 0x30))(rcx_1)
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp5_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
        
        rbp[0x16].d = 0
        
        if (rbp[0x15] != 0)
            sub_1405c2d80(&sub_140a752e0()[8], rbp[0x15])
            rbp[0x15] = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

void* rcx_7 = arg1[1]
uint64_t result = &data_142ebf998
*arg1 = &data_142ebf998

if (rcx_7 != 0)
    result = sub_1409740e0(rcx_7 + 0x50, arg1)

int64_t* rbx_2 = arg1[3]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_2 + 8))

return result
