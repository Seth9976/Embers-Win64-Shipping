// 函数: sub_1405be290
// 地址: 0x1405be290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = data_143cd5fd0

if (rax != 0)
    void* const rdx_1 = data_143cd5fd8
    
    if (rdx_1 != 0 && *(rdx_1 + 8) s> 0)
        int64_t rbx = 0
        bool cond:0 = rdx_1 != 0
        
        if (rdx_1 != 0)
            int32_t rcx = *(rdx_1 + 8)
            
            if (rcx != 0)
                int32_t rax_1 = rcx + 1
                rcx.b = 1
                *(rdx_1 + 8) = rax_1
                rax = data_143cd5fd0
            
            if (rcx.b == 0)
                rdx_1 = nullptr
            
            cond:0 = rdx_1 != 0
        
        if (cond:0)
            rbx = rax
        
        *arg1 = rbx
        arg1[1] = rdx_1
        return arg1

void*** rax_3 = j_sub_140a82f30(0xb8)
void*** rsi_1

if (rax_3 == 0)
    rsi_1 = nullptr
else
    rsi_1 = sub_1405ab3f0(rax_3, sub_140cde0b0())

void*** rax_6 = j_sub_140a82f30(0x18)

if (rax_6 == 0)
    rax_6 = nullptr
else
    rax_6[1].d = 1
    *rax_6 = &data_142d42ea8
    *(rax_6 + 0xc) = 1
    rax_6[2] = rsi_1

void*** rdx_4 = rax_6
int64_t* rcx_2 = data_143cd5fd8
void*** rbx_1 = rdx_4
data_143cd5fd0 = rsi_1

if (rdx_4 != rcx_2)
    if (rdx_4 != 0)
        *(rdx_4 + 0xc) += 1
        rdx_4 = rax_6
        rcx_2 = data_143cd5fd8
    
    if (rcx_2 != 0)
        int32_t temp2_1 = *(rcx_2 + 0xc)
        *(rcx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rcx_2 + 8))(rcx_2, 1)
        
        rdx_4 = rax_6
    
    data_143cd5fd8 = rbx_1

*arg1 = rsi_1
arg1[1] = rdx_4

if (rdx_4 != 0)
    rdx_4[1].d += 1
    
    if (rax_6 != 0)
        rax_6[1].d -= 1
        
        if (rax_6[1].d == 1)
            (**rax_6)(rax_6)
            int32_t temp3_1 = *(rax_6 + 0xc)
            *(rax_6 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rax_6)[1](rax_6, 1)

return arg1
