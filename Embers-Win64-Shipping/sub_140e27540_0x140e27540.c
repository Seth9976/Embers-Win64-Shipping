// 函数: sub_140e27540
// 地址: 0x140e27540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* rbx = *(arg1 + 0x38)
int64_t rsi = 0
char r12 = 0

if (rbx != 0)
    result = zx.q(rbx[1].d)
    
    if (result.d != 0)
        rbx[1].d = result.d + 1
        result.b = 1
    
    if (result.b == 0)
        rbx = nullptr

int64_t rdi = 0

if (rbx != 0)
    rdi = *(arg1 + 0x30)

int64_t r15 = *arg2

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

if (rdi != r15)
    int64_t* rcx_2 = *arg2
    int32_t r15_1 = -1
    int32_t r8_1
    
    if (rcx_2 == 0)
        r8_1 = -1
    else
        r8_1 = (*(*rcx_2 + 8))(rcx_2)
    
    int64_t* rdi_1
    
    if (*(arg1 + 0x30) == 0)
        rdi_1 = 0.q
    else
        rdi_1 = *(arg1 + 0x38)
        
        if (rdi_1 == 0)
            rdi_1 = 0.q
        else
            int32_t rax_4 = rdi_1[1].d
            
            if (rax_4 s<= 0)
                rdi_1 = 0.q
            else
                void* rdx = nullptr
                
                if (rdi_1 == 0)
                    goto label_140e27622
                
                if (rax_4 == 0)
                    r15_1 = *0x64
                    rdi_1 = nullptr
                    r12 = 1
                else
                    rdi_1[1].d = rax_4 + 1
                label_140e27622:
                    
                    if (rdi_1 != 0)
                        rdx = *(arg1 + 0x30)
                    
                    r15_1 = *(rdx + 0x64)
                    r12 = 1
    
    void* const rcx_4 = *(arg1 + 0x10)
    
    if (rcx_4 != 0)
        int32_t rax_6 = *(rcx_4 + 8)
        
        if (rax_6 != 0)
            *(rcx_4 + 8) = rax_6 + 1
            rax_6.b = 1
        
        if (rax_6.b == 0)
            rcx_4 = nullptr
        
        if (rcx_4 != 0)
            rsi = *(arg1 + 8)
    
    void* rax_7 = data_143e20d08
    int64_t var_68 = rsi
    void* const var_60_1 = rcx_4
    int64_t* rsi_1 = *(rax_7 + 0xb0)
    void* r13_1 = *(rax_7 + 0xa8)
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    void var_58
    int32_t* rax_8
    int512_t zmm1
    rax_8, zmm1 = sub_140d6ed90(&var_58, r8_1, arg3)
    void var_40
    sub_140e20b70(r13_1, &var_68, 3, sub_140d6ed90(&var_40, r15_1, zmm1), rax_8)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp5_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
    
    if ((r12 & 1) != 0 && rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp7_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* rbx_2 = arg2[1]
    result = *arg2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    *(arg1 + 0x30) = result
    int64_t* rcx_12 = *(arg1 + 0x38)
    
    if (rbx_2 != rcx_12)
        if (rbx_2 != 0)
            *(rbx_2 + 0xc) += 1
            rcx_12 = *(arg1 + 0x38)
        
        if (rcx_12 != 0)
            int32_t temp10_1 = *(rcx_12 + 0xc)
            *(rcx_12 + 0xc) -= 1
            
            if (temp10_1 == 1)
                result = (*(*rcx_12 + 8))(rcx_12, 1)
        
        *(arg1 + 0x38) = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp9_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp9_1 == 1)
                result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
