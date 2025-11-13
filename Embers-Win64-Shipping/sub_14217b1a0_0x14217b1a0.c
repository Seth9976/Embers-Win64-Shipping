// 函数: sub_14217b1a0
// 地址: 0x14217b1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t* var_58 = *arg2

if (rbx != 0)
    rbx[1].d += 1

if (&var_58 != arg1 + 0x120)
    var_58.o = *(arg1 + 0x120)
    *(arg1 + 0x120) = var_58.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t rbx_1 = 0
int64_t var_48

if (*(arg1 + 0x120) != 0)
    void* rcx_2 = *(arg1 + 0x130)
    
    if (rcx_2 == 0)
        int64_t* rax_4 = j_sub_140a82f30(0x110)
        int64_t* rsi_1
        
        if (rax_4 == 0)
            rsi_1 = nullptr
        else
            var_48 = *arg2
            void* rcx_4 = arg2[1]
            void* var_40_1 = rcx_4
            
            if (rcx_4 != 0)
                *(rcx_4 + 8) += 1
            
            rsi_1 = sub_141c7d700(rax_4, &var_48, *(arg1 + 0x190))
        
        void*** rax_6 = j_sub_140a82f30(0x18)
        void*** rdi_1 = rax_6
        
        if (rax_6 == 0)
            rdi_1 = nullptr
        else
            rax_6[1].d = 1
            *(rax_6 + 0xc) = 1
            *rdi_1 = &data_1432e2a30
            rdi_1[2] = rsi_1
        
        var_58 = rsi_1
        void*** var_50_1 = rdi_1
        
        if (arg1 + 0x130 == &var_58)
        label_14217b333:
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp7_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*rdi_1)[1](rdi_1, 1)
        else
            *(arg1 + 0x130) = rsi_1
            int64_t* rsi_2 = *(arg1 + 0x138)
            var_58 = nullptr
            
            if (rdi_1 == rsi_2)
                goto label_14217b333
            
            void*** var_50_2 = nullptr
            *(arg1 + 0x138) = rdi_1
            
            if (rsi_2 != 0)
                rsi_2[1].d -= 1
                
                if (rsi_2[1].d == 1)
                    (**rsi_2)(rsi_2)
                    int32_t temp9_1 = *(rsi_2 + 0xc)
                    *(rsi_2 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rsi_2 + 8))(rsi_2, 1)
                
                rdi_1 = var_50_2
                goto label_14217b333
        
        sub_141c7db70(*(arg1 + 0x130))
    else
        sub_141c7e320(rcx_2)
else if (arg1 + 0x130 != &var_48)
    *(arg1 + 0x130) = 0
    int64_t* rdi_2 = *(arg1 + 0x138)
    
    if (rdi_2 != 0)
        *(arg1 + 0x138) = 0
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp3_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

if (*(arg1 + 0x108) != 0)
    var_48 = *(arg1 + 0x130)
    void* rax_14 = *(arg1 + 0x138)
    void* var_40_2 = rax_14
    
    if (rax_14 != 0)
        *(rax_14 + 8) += 1
    
    var_58 = *(arg1 + 0x120)
    void* rax_16 = *(arg1 + 0x128)
    void* var_50_3 = rax_16
    
    if (rax_16 != 0)
        *(rax_16 + 8) += 1
    
    sub_141ccecc0(*(arg1 + 0x108), &var_58, &var_48)

int64_t* rcx_14 = *(arg1 + 0x88)

if (rcx_14 != 0)
    (*(*rcx_14 + 0x310))(rcx_14)

int64_t* rdi_3 = *(arg1 + 0x90)
void* result = &rdi_3[sx.q(*(arg1 + 0x98))]
uint64_t rsi_4 = sx.q(*(arg1 + 0x98)) << 3 u>> 3

if (rdi_3 u> result)
    rsi_4 = 0

if (rsi_4 != 0)
    do
        int64_t* rcx_15 = *rdi_3
        
        if (rcx_15 != 0)
            result = (*(*rcx_15 + 0x310))(rcx_15)
        
        rdi_3 = &rdi_3[1]
        rbx_1 += 1
    while (rbx_1 != rsi_4)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp5_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
